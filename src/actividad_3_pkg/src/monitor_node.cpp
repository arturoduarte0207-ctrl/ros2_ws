#include "rclcpp/rclcpp.hpp"
#include "robx7_interfaces/msg/hardware_status.hpp"
#include "std_srvs/srv/set_bool.hpp"

class MonitorNode : public rclcpp::Node {
public:
  MonitorNode() : Node("monitor_node") {
    this->declare_parameter<int>("umbral_temperatura", 75);
    
    subscription_ = this->create_subscription<robx7_interfaces::msg::HardwareStatus>(
      "/hardware_status", 10, std::bind(&MonitorNode::status_callback, this, std::placeholders::_1));

    service_ = this->create_service<std_srvs::srv::SetBool>(
      "/check_system", std::bind(&MonitorNode::handle_check_system, this, std::placeholders::_1, std::placeholders::_2));

    RCLCPP_INFO(this->get_logger(), "Nodo Monitor iniciado.");
  }

private:
  void status_callback(const robx7_interfaces::msg::HardwareStatus::SharedPtr msg) {
    ultima_temp_ = msg->temperatura;
    motores_ok_ = msg->motores_listos;
  }

  void handle_check_system(
    const std::shared_ptr<std_srvs::srv::SetBool::Request> request,
    std::shared_ptr<std_srvs::srv::SetBool::Response> response) 
  {
    (void)request;
    int umbral = this->get_parameter("umbral_temperatura").as_int();

    if (ultima_temp_ > umbral) {
      response->success = false;
      response->message = "RECHAZADO: Alerta de sobrecalentamiento";
    } else if (!motores_ok_) {
      response->success = false;
      response->message = "RECHAZADO: Motores no listos";
    } else {
      response->success = true;
      response->message = "AUTORIZADO: Sistema listo para operacion";
    }
  }

  rclcpp::Subscription<robx7_interfaces::msg::HardwareStatus>::SharedPtr subscription_;
  rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr service_;
  int ultima_temp_ = 0;
  bool motores_ok_ = false;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MonitorNode>());
  rclcpp::shutdown();
  return 0;
}