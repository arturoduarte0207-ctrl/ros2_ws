// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robx7_interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/msg/custom_string.hpp"


#ifndef ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__BUILDER_HPP_
#define ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robx7_interfaces/msg/detail/custom_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robx7_interfaces
{

namespace msg
{

namespace builder
{

class Init_CustomString_data
{
public:
  Init_CustomString_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robx7_interfaces::msg::CustomString data(::robx7_interfaces::msg::CustomString::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robx7_interfaces::msg::CustomString msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robx7_interfaces::msg::CustomString>()
{
  return robx7_interfaces::msg::builder::Init_CustomString_data();
}

}  // namespace robx7_interfaces

#endif  // ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__BUILDER_HPP_
