// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robx7_interfaces:srv/SumarDosFlotantes.idl
// generated code does not contain a copyright notice
#include "robx7_interfaces/srv/detail/sumar_dos_flotantes__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robx7_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robx7_interfaces/srv/detail/sumar_dos_flotantes__struct.h"
#include "robx7_interfaces/srv/detail/sumar_dos_flotantes__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SumarDosFlotantes_Request__ros_msg_type = robx7_interfaces__srv__SumarDosFlotantes_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Request(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message)
{
  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SumarDosFlotantes_Request__ros_msg_type * ros_message = static_cast<const _SumarDosFlotantes_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Request(
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

  // Field name: a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robx7_interfaces__srv__SumarDosFlotantes_Request;
    is_plain =
      (
      offsetof(DataType, b) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t get_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SumarDosFlotantes_Request__ros_msg_type * ros_message = static_cast<const _SumarDosFlotantes_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t max_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
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
  // Field name: a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robx7_interfaces__srv__SumarDosFlotantes_Request;
    is_plain =
      (
      offsetof(DataType, b) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SumarDosFlotantes_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message = static_cast<const robx7_interfaces__srv__SumarDosFlotantes_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Request(ros_message, cdr);
}

static bool _SumarDosFlotantes_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message = static_cast<robx7_interfaces__srv__SumarDosFlotantes_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Request(cdr, ros_message);
}

static uint32_t _SumarDosFlotantes_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Request(
      untyped_ros_message, 0));
}

static size_t _SumarDosFlotantes_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Request(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _SumarDosFlotantes_Request__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message =
    static_cast<const robx7_interfaces__srv__SumarDosFlotantes_Request *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Request(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _SumarDosFlotantes_Request__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message =
    static_cast<robx7_interfaces__srv__SumarDosFlotantes_Request *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Request(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Request()
{
  return
    false;
}

static message_type_support_callbacks_t __callbacks_SumarDosFlotantes_Request = {
  "robx7_interfaces::srv",
  "SumarDosFlotantes_Request",
  _SumarDosFlotantes_Request__cdr_serialize,
  _SumarDosFlotantes_Request__cdr_deserialize,
  _SumarDosFlotantes_Request__get_serialized_size,
  _SumarDosFlotantes_Request__max_serialized_size,
  nullptr,
  has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Request(),
  _SumarDosFlotantes_Request__cdr_serialize_with_endpoint,
  _SumarDosFlotantes_Request__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _SumarDosFlotantes_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SumarDosFlotantes_Request,
  get_message_typesupport_handle_function,
  &robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_hash,
  &robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_description,
  &robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, SumarDosFlotantes_Request)() {
  return &_SumarDosFlotantes_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "robx7_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SumarDosFlotantes_Response__ros_msg_type = robx7_interfaces__srv__SumarDosFlotantes_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: suma
  {
    cdr << ros_message->suma;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Response(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message)
{
  // Field name: suma
  {
    cdr >> ros_message->suma;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SumarDosFlotantes_Response__ros_msg_type * ros_message = static_cast<const _SumarDosFlotantes_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: suma
  {
    size_t item_size = sizeof(ros_message->suma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Response(
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

  // Field name: suma
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robx7_interfaces__srv__SumarDosFlotantes_Response;
    is_plain =
      (
      offsetof(DataType, suma) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: suma
  {
    cdr << ros_message->suma;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t get_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SumarDosFlotantes_Response__ros_msg_type * ros_message = static_cast<const _SumarDosFlotantes_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: suma
  {
    size_t item_size = sizeof(ros_message->suma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t max_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
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
  // Field name: suma
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robx7_interfaces__srv__SumarDosFlotantes_Response;
    is_plain =
      (
      offsetof(DataType, suma) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SumarDosFlotantes_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message = static_cast<const robx7_interfaces__srv__SumarDosFlotantes_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Response(ros_message, cdr);
}

static bool _SumarDosFlotantes_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message = static_cast<robx7_interfaces__srv__SumarDosFlotantes_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Response(cdr, ros_message);
}

static uint32_t _SumarDosFlotantes_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Response(
      untyped_ros_message, 0));
}

static size_t _SumarDosFlotantes_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: suma
  {
    cdr << ros_message->suma;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Response(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: suma
  {
    cdr >> ros_message->suma;
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _SumarDosFlotantes_Response__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message =
    static_cast<const robx7_interfaces__srv__SumarDosFlotantes_Response *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Response(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _SumarDosFlotantes_Response__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message =
    static_cast<robx7_interfaces__srv__SumarDosFlotantes_Response *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Response(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Response()
{
  return
    false;
}

static message_type_support_callbacks_t __callbacks_SumarDosFlotantes_Response = {
  "robx7_interfaces::srv",
  "SumarDosFlotantes_Response",
  _SumarDosFlotantes_Response__cdr_serialize,
  _SumarDosFlotantes_Response__cdr_deserialize,
  _SumarDosFlotantes_Response__get_serialized_size,
  _SumarDosFlotantes_Response__max_serialized_size,
  nullptr,
  has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Response(),
  _SumarDosFlotantes_Response__cdr_serialize_with_endpoint,
  _SumarDosFlotantes_Response__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _SumarDosFlotantes_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SumarDosFlotantes_Response,
  get_message_typesupport_handle_function,
  &robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_hash,
  &robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_description,
  &robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, SumarDosFlotantes_Response)() {
  return &_SumarDosFlotantes_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "robx7_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__struct.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Request(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message);

size_t get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, SumarDosFlotantes_Request)();

bool cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Request(
  const robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Request(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Request * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Request();

bool cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Response(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message);

size_t get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, SumarDosFlotantes_Response)();

bool cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Response(
  const robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Response(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Response * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Response();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
bool cdr_serialize_with_endpoint_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
bool cdr_deserialize_with_endpoint_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robx7_interfaces
bool has_buffer_fields_service_msgs__msg__ServiceEventInfo();


using _SumarDosFlotantes_Event__ros_msg_type = robx7_interfaces__srv__SumarDosFlotantes_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Event(
  const robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Event(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__fini(&ros_message->request);
    }
    if (!robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__fini(&ros_message->response);
    }
    if (!robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SumarDosFlotantes_Event__ros_msg_type * ros_message = static_cast<const _SumarDosFlotantes_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robx7_interfaces__srv__SumarDosFlotantes_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_key_robx7_interfaces__srv__SumarDosFlotantes_Event(
  const robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t get_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SumarDosFlotantes_Event__ros_msg_type * ros_message = static_cast<const _SumarDosFlotantes_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
size_t max_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_robx7_interfaces__srv__SumarDosFlotantes_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robx7_interfaces__srv__SumarDosFlotantes_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SumarDosFlotantes_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message = static_cast<const robx7_interfaces__srv__SumarDosFlotantes_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robx7_interfaces__srv__SumarDosFlotantes_Event(ros_message, cdr);
}

static bool _SumarDosFlotantes_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message = static_cast<robx7_interfaces__srv__SumarDosFlotantes_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robx7_interfaces__srv__SumarDosFlotantes_Event(cdr, ros_message);
}

static uint32_t _SumarDosFlotantes_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Event(
      untyped_ros_message, 0));
}

static size_t _SumarDosFlotantes_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robx7_interfaces__srv__SumarDosFlotantes_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Event(
  const robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: info
  {
    cdr_serialize_with_endpoint_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr, endpoint_info, serialization_context);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Request(
        &array_ptr[i], cdr, endpoint_info, serialization_context);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Response(
        &array_ptr[i], cdr, endpoint_info, serialization_context);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Event(
  eprosima::fastcdr::Cdr & cdr,
  robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: info
  {
    cdr_deserialize_with_endpoint_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info, endpoint_info, serialization_context);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__fini(&ros_message->request);
    }
    if (!robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Request(cdr, &array_ptr[i], endpoint_info, serialization_context);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__fini(&ros_message->response);
    }
    if (!robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Response(cdr, &array_ptr[i], endpoint_info, serialization_context);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _SumarDosFlotantes_Event__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message =
    static_cast<const robx7_interfaces__srv__SumarDosFlotantes_Event *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Event(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _SumarDosFlotantes_Event__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robx7_interfaces__srv__SumarDosFlotantes_Event * ros_message =
    static_cast<robx7_interfaces__srv__SumarDosFlotantes_Event *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_robx7_interfaces__srv__SumarDosFlotantes_Event(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robx7_interfaces
bool has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Event()
{
  return
    has_buffer_fields_service_msgs__msg__ServiceEventInfo() ||
    has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Request() ||
    has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Response();
}

static message_type_support_callbacks_t __callbacks_SumarDosFlotantes_Event = {
  "robx7_interfaces::srv",
  "SumarDosFlotantes_Event",
  _SumarDosFlotantes_Event__cdr_serialize,
  _SumarDosFlotantes_Event__cdr_deserialize,
  _SumarDosFlotantes_Event__get_serialized_size,
  _SumarDosFlotantes_Event__max_serialized_size,
  nullptr,
  has_buffer_fields_robx7_interfaces__srv__SumarDosFlotantes_Event(),
  _SumarDosFlotantes_Event__cdr_serialize_with_endpoint,
  _SumarDosFlotantes_Event__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _SumarDosFlotantes_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SumarDosFlotantes_Event,
  get_message_typesupport_handle_function,
  &robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_hash,
  &robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_description,
  &robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, SumarDosFlotantes_Event)() {
  return &_SumarDosFlotantes_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robx7_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robx7_interfaces/srv/sumar_dos_flotantes.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SumarDosFlotantes__callbacks = {
  "robx7_interfaces::srv",
  "SumarDosFlotantes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, SumarDosFlotantes_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, SumarDosFlotantes_Response)(),
};

static rosidl_service_type_support_t SumarDosFlotantes__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SumarDosFlotantes__callbacks,
  get_service_typesupport_handle_function,
  &_SumarDosFlotantes_Request__type_support,
  &_SumarDosFlotantes_Response__type_support,
  &_SumarDosFlotantes_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robx7_interfaces,
    srv,
    SumarDosFlotantes
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robx7_interfaces,
    srv,
    SumarDosFlotantes
  ),
  &robx7_interfaces__srv__SumarDosFlotantes__get_type_hash,
  &robx7_interfaces__srv__SumarDosFlotantes__get_type_description,
  &robx7_interfaces__srv__SumarDosFlotantes__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robx7_interfaces, srv, SumarDosFlotantes)() {
  return &SumarDosFlotantes__handle;
}

#if defined(__cplusplus)
}
#endif
