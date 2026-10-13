#include "rclcpp/rclcpp.hpp"
#include "robx7_interfaces/msg/hardware_status.hpp"

class EmulatorNode : public rclcpp::Node {
public:
  EmulatorNode() : Node("emulator_node") {
    publisher_ = this->create_publisher<robx7_interfaces::msg::HardwareStatus>("/hardware_status", 10);
    timer_ = this->create_wall_timer(
      std::chrono::seconds(1), std::bind(&EmulatorNode::publish_status, this));
    RCLCPP_INFO(this->get_logger(), "Nodo Emulador iniciado.");
  }

private:
  void publish_status() {
    auto msg = robx7_interfaces::msg::HardwareStatus();
    msg.temperatura = 70 + (rand() % 15);
    msg.motores_listos = true;
    msg.debug_msg = "Estado nominal de hardware";
    publisher_->publish(msg);
    RCLCPP_INFO(this->get_logger(), "Publicando Temperatura: %d C", msg.temperatura);
  }

  rclcpp::Publisher<robx7_interfaces::msg::HardwareStatus>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<EmulatorNode>());
  rclcpp::shutdown();
  return 0;
}