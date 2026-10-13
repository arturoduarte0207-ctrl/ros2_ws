// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robx7_interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice

#ifndef ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robx7_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robx7_interfaces/msg/detail/custom_string__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robx7_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
cdr_serialize(
  const robx7_interfaces::msg::CustomString & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces::msg::CustomString & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
get_serialized_size(
  const robx7_interfaces::msg::CustomString & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
max_serialized_size_CustomString(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
cdr_serialize_key(
  const robx7_interfaces::msg::CustomString & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
get_serialized_size_key(
  const robx7_interfaces::msg::CustomString & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
max_serialized_size_key_CustomString(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
has_buffer_fields_CustomString();

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robx7_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robx7_interfaces, msg, CustomString)();

#ifdef __cplusplus
}
#endif

#endif  // ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
