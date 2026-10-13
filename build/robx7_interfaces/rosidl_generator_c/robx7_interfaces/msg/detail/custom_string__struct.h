// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robx7_interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/msg/custom_string.h"


#ifndef ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__STRUCT_H_
#define ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CustomString in the package robx7_interfaces.
typedef struct robx7_interfaces__msg__CustomString
{
  rosidl_runtime_c__String data;
} robx7_interfaces__msg__CustomString;

// Struct for a sequence of robx7_interfaces__msg__CustomString.
typedef struct robx7_interfaces__msg__CustomString__Sequence
{
  robx7_interfaces__msg__CustomString * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robx7_interfaces__msg__CustomString__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__STRUCT_H_
