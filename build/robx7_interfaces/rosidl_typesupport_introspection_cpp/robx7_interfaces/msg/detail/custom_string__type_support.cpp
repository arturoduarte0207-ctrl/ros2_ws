// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robx7_interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robx7_interfaces/msg/detail/custom_string__functions.h"
#include "robx7_interfaces/msg/detail/custom_string__struct.hpp"
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

void CustomString_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robx7_interfaces::msg::CustomString(_init);
}

void CustomString_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robx7_interfaces::msg::CustomString *>(message_memory);
  typed_message->~CustomString();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CustomString_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robx7_interfaces::msg::CustomString, data),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CustomString_message_members = {
  "robx7_interfaces::msg",  // message namespace
  "CustomString",  // message name
  1,  // number of fields
  sizeof(robx7_interfaces::msg::CustomString),
  false,  // has_any_key_member_
  CustomString_message_member_array,  // message members
  CustomString_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomString_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CustomString_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CustomString_message_members,
  get_message_typesupport_handle_function,
  &robx7_interfaces__msg__CustomString__get_type_hash,
  &robx7_interfaces__msg__CustomString__get_type_description,
  &robx7_interfaces__msg__CustomString__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robx7_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robx7_interfaces::msg::CustomString>()
{
  return &::robx7_interfaces::msg::rosidl_typesupport_introspection_cpp::CustomString_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robx7_interfaces, msg, CustomString)() {
  return &::robx7_interfaces::msg::rosidl_typesupport_introspection_cpp::CustomString_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
