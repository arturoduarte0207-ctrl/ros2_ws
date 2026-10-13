// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robx7_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice
#include "robx7_interfaces/msg/detail/hardware_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robx7_interfaces/msg/detail/hardware_status__functions.h"
#include "robx7_interfaces/msg/detail/hardware_status__struct.hpp"

#include <cstddef>
#include <cstdio>
#include <limits>
#include <stdexcept>
#include <string>
#include "rcutils/logging_macros.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "robx7_interfaces/msg/detail/hardware_status__rosidl_typesupport_fastrtps_c.h"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robx7_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
cdr_serialize(
  const robx7_interfaces::msg::HardwareStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temperatura
  cdr << ros_message.temperatura;

  // Member: motores_listos
  cdr << (ros_message.motores_listos ? true : false);

  // Member: debug_msg
  cdr << ros_message.debug_msg;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces::msg::HardwareStatus & ros_message)
{
  // Member: temperatura
  cdr >> ros_message.temperatura;

  // Member: motores_listos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motores_listos = tmp ? true : false;
  }

  // Member: debug_msg
  cdr >> ros_message.debug_msg;

  return true;
}  // NOLINT(readability/fn_size)

// Endpoint-aware serialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
cdr_serialize_with_endpoint(
  const robx7_interfaces::msg::HardwareStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  try {
    // Member: temperatura
    cdr << ros_message.temperatura;
    // Member: motores_listos
    cdr << (ros_message.motores_listos ? true : false);
    // Member: debug_msg
    cdr << ros_message.debug_msg;
  } catch (const std::exception & e) {
    RCUTILS_LOG_ERROR_NAMED(
      "robx7_interfaces.typesupport_fastrtps_cpp",
      "cdr_serialize_with_endpoint failed: %s", e.what());
    return false;
  }
  return true;
}

// Endpoint-aware deserialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces::msg::HardwareStatus & ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Member: temperatura
  cdr >> ros_message.temperatura;

  // Member: motores_listos
  cdr >> ros_message.motores_listos;

  // Member: debug_msg
  cdr >> ros_message.debug_msg;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
get_serialized_size(
  const robx7_interfaces::msg::HardwareStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temperatura
  {
    size_t item_size = sizeof(ros_message.temperatura);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: motores_listos
  {
    size_t item_size = sizeof(ros_message.motores_listos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: debug_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.debug_msg.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
max_serialized_size_HardwareStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: temperatura
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: motores_listos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: debug_msg
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robx7_interfaces::msg::HardwareStatus;
    is_plain =
      (
      offsetof(DataType, debug_msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
cdr_serialize_key(
  const robx7_interfaces::msg::HardwareStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temperatura
  cdr << ros_message.temperatura;

  // Member: motores_listos
  cdr << (ros_message.motores_listos ? true : false);

  // Member: debug_msg
  cdr << ros_message.debug_msg;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
get_serialized_size_key(
  const robx7_interfaces::msg::HardwareStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temperatura
  {
    size_t item_size = sizeof(ros_message.temperatura);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: motores_listos
  {
    size_t item_size = sizeof(ros_message.motores_listos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: debug_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.debug_msg.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
max_serialized_size_key_HardwareStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: temperatura
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: motores_listos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: debug_msg
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robx7_interfaces::msg::HardwareStatus;
    is_plain =
      (
      offsetof(DataType, debug_msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _HardwareStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robx7_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HardwareStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robx7_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HardwareStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robx7_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HardwareStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HardwareStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

// Endpoint-aware serialization wrapper
static bool _HardwareStatus__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<const robx7_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return cdr_serialize_with_endpoint(*typed_message, cdr, endpoint_info, serialization_context);
}

// Endpoint-aware deserialization wrapper
static bool _HardwareStatus__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<robx7_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return cdr_deserialize_with_endpoint(cdr, *typed_message, endpoint_info, serialization_context);
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robx7_interfaces
has_buffer_fields_HardwareStatus()
{
  return has_buffer_fields_robx7_interfaces__msg__HardwareStatus();
}

static message_type_support_callbacks_t _HardwareStatus__callbacks = {
  "robx7_interfaces::msg",
  "HardwareStatus",
  _HardwareStatus__cdr_serialize,
  _HardwareStatus__cdr_deserialize,
  _HardwareStatus__get_serialized_size,
  _HardwareStatus__max_serialized_size,
  nullptr,
  has_buffer_fields_HardwareStatus(),
  _HardwareStatus__cdr_serialize_with_endpoint,
  _HardwareStatus__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _HardwareStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HardwareStatus__callbacks,
  get_message_typesupport_handle_function,
  &robx7_interfaces__msg__HardwareStatus__get_type_hash,
  &robx7_interfaces__msg__HardwareStatus__get_type_description,
  &robx7_interfaces__msg__HardwareStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robx7_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robx7_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robx7_interfaces::msg::HardwareStatus>()
{
  return &robx7_interfaces::msg::typesupport_fastrtps_cpp::_HardwareStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robx7_interfaces, msg, HardwareStatus)() {
  return &robx7_interfaces::msg::typesupport_fastrtps_cpp::_HardwareStatus__handle;
}

#ifdef __cplusplus
}
#endif
