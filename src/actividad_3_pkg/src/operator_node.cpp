#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/set_bool.hpp"

class OperatorNode : public rclcpp::Node {
public:
  OperatorNode() : Node("operator_node") {
    client_ = this->create_client<std_srvs::srv::SetBool>("/check_system");
    timer_ = this->create_wall_timer(
      std::chrono::seconds(3), std::bind(&OperatorNode::send_request, this));
    RCLCPP_INFO(this->get_logger(), "Nodo Operador iniciado.");
  }

private:
  void send_request() {
    if (!client_->wait_for_service(std::chrono::seconds(1))) {
      RCLCPP_WARN(this->get_logger(), "Esperando al servicio /check_system...");
      return;
    }

    auto request = std::make_shared<std_srvs::srv::SetBool::Request>();
    request->data = true;

    auto result = client_->async_send_request(request,
      std::bind(&OperatorNode::response_callback, this, std::placeholders::_1));
  }

  void response_callback(rclcpp::Client<std_srvs::srv::SetBool>::SharedFuture future) {
    auto response = future.get();
    if (response->success) {
      RCLCPP_INFO(this->get_logger(), "Respuesta: %s", response->message.c_str());
    } else {
      RCLCPP_ERROR(this->get_logger(), "Respuesta: %s", response->message.c_str());
    }
  }

  rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr client_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<OperatorNode>());
  rclcpp::shutdown();
  return 0;
}