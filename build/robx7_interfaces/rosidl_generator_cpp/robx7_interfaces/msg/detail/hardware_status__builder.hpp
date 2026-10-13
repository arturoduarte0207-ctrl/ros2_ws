// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robx7_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/msg/hardware_status.hpp"


#ifndef ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robx7_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robx7_interfaces
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_debug_msg
{
public:
  explicit Init_HardwareStatus_debug_msg(::robx7_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::robx7_interfaces::msg::HardwareStatus debug_msg(::robx7_interfaces::msg::HardwareStatus::_debug_msg_type arg)
  {
    msg_.debug_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robx7_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_motores_listos
{
public:
  explicit Init_HardwareStatus_motores_listos(::robx7_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_debug_msg motores_listos(::robx7_interfaces::msg::HardwareStatus::_motores_listos_type arg)
  {
    msg_.motores_listos = std::move(arg);
    return Init_HardwareStatus_debug_msg(msg_);
  }

private:
  ::robx7_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_temperatura
{
public:
  Init_HardwareStatus_temperatura()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_motores_listos temperatura(::robx7_interfaces::msg::HardwareStatus::_temperatura_type arg)
  {
    msg_.temperatura = std::move(arg);
    return Init_HardwareStatus_motores_listos(msg_);
  }

private:
  ::robx7_interfaces::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robx7_interfaces::msg::HardwareStatus>()
{
  return robx7_interfaces::msg::builder::Init_HardwareStatus_temperatura();
}

}  // namespace robx7_interfaces

#endif  // ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
