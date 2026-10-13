// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robx7_interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice
#ifndef ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robx7_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robx7_interfaces/msg/detail/custom_string__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_robx7_interfaces__msg__CustomString(
  const robx7_interfaces__msg__CustomString * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_deserialize_robx7_interfaces__msg__CustomString(
  eprosima::fastcdr::Cdr &,
  robx7_interfaces__msg__CustomString * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t get_serialized_size_robx7_interfaces__msg__CustomString(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t max_serialized_size_robx7_interfaces__msg__CustomString(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_key_robx7_interfaces__msg__CustomString(
  const robx7_interfaces__msg__CustomString * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t get_serialized_size_key_robx7_interfaces__msg__CustomString(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t max_serialized_size_key_robx7_interfaces__msg__CustomString(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool has_buffer_fields_robx7_interfaces__msg__CustomString();

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, msg, CustomString)();

#ifdef __cplusplus
}
#endif

#endif  // ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
