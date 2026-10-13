// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robx7_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robx7_interfaces/msg/detail/hardware_status__functions.h"
#include "robx7_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robx7_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HardwareStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robx7_interfaces::msg::HardwareStatus(_init);
}

void HardwareStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robx7_interfaces::msg::HardwareStatus *>(message_memory);
  typed_message->~HardwareStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HardwareStatus_message_member_array[3] = {
  {
    "temperatura",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robx7_interfaces::msg::HardwareStatus, temperatura),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "motores_listos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robx7_interfaces::msg::HardwareStatus, motores_listos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "debug_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robx7_interfaces::msg::HardwareStatus, debug_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HardwareStatus_message_members = {
  "robx7_interfaces::msg",  // message namespace
  "HardwareStatus",  // message name
  3,  // number of fields
  sizeof(robx7_interfaces::msg::HardwareStatus),
  false,  // has_any_key_member_
  HardwareStatus_message_member_array,  // message members
  HardwareStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  HardwareStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HardwareStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HardwareStatus_message_members,
  get_message_typesupport_handle_function,
  &robx7_interfaces__msg__HardwareStatus__get_type_hash,
  &robx7_interfaces__msg__HardwareStatus__get_type_description,
  &robx7_interfaces__msg__HardwareStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robx7_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robx7_interfaces::msg::HardwareStatus>()
{
  return &::robx7_interfaces::msg::rosidl_typesupport_introspection_cpp::HardwareStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robx7_interfaces, msg, HardwareStatus)() {
  return &::robx7_interfaces::msg::rosidl_typesupport_introspection_cpp::HardwareStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
