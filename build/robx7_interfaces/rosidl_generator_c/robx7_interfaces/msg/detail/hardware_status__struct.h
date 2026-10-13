// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robx7_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/msg/hardware_status.h"


#ifndef ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
#define ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'debug_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HardwareStatus in the package robx7_interfaces.
typedef struct robx7_interfaces__msg__HardwareStatus
{
  int64_t temperatura;
  bool motores_listos;
  rosidl_runtime_c__String debug_msg;
} robx7_interfaces__msg__HardwareStatus;

// Struct for a sequence of robx7_interfaces__msg__HardwareStatus.
typedef struct robx7_interfaces__msg__HardwareStatus__Sequence
{
  robx7_interfaces__msg__HardwareStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robx7_interfaces__msg__HardwareStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
