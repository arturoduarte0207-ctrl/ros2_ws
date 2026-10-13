// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robx7_interfaces:srv/SumarDosFlotantes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robx7_interfaces/srv/detail/sumar_dos_flotantes__rosidl_typesupport_introspection_c.h"
#include "robx7_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robx7_interfaces/srv/detail/sumar_dos_flotantes__functions.h"
#include "robx7_interfaces/srv/detail/sumar_dos_flotantes__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robx7_interfaces__srv__SumarDosFlotantes_Request__init(message_memory);
}

void robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_fini_function(void * message_memory)
{
  robx7_interfaces__srv__SumarDosFlotantes_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robx7_interfaces__srv__SumarDosFlotantes_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robx7_interfaces__srv__SumarDosFlotantes_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_members = {
  "robx7_interfaces__srv",  // message namespace
  "SumarDosFlotantes_Request",  // message name
  2,  // number of fields
  sizeof(robx7_interfaces__srv__SumarDosFlotantes_Request),
  false,  // has_any_key_member_
  robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_member_array,  // message members
  robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_type_support_handle = {
  0,
  &robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_members,
  get_message_typesupport_handle_function,
  &robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_hash,
  &robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_description,
  &robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robx7_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Request)() {
  if (!robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_type_support_handle.typesupport_identifier) {
    robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robx7_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__functions.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robx7_interfaces__srv__SumarDosFlotantes_Response__init(message_memory);
}

void robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_fini_function(void * message_memory)
{
  robx7_interfaces__srv__SumarDosFlotantes_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_member_array[1] = {
  {
    "suma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robx7_interfaces__srv__SumarDosFlotantes_Response, suma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_members = {
  "robx7_interfaces__srv",  // message namespace
  "SumarDosFlotantes_Response",  // message name
  1,  // number of fields
  sizeof(robx7_interfaces__srv__SumarDosFlotantes_Response),
  false,  // has_any_key_member_
  robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_member_array,  // message members
  robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_type_support_handle = {
  0,
  &robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_members,
  get_message_typesupport_handle_function,
  &robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_hash,
  &robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_description,
  &robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robx7_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Response)() {
  if (!robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_type_support_handle.typesupport_identifier) {
    robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robx7_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__functions.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "robx7_interfaces/srv/sumar_dos_flotantes.h"
// Member `request`
// Member `response`
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robx7_interfaces__srv__SumarDosFlotantes_Event__init(message_memory);
}

void robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_fini_function(void * message_memory)
{
  robx7_interfaces__srv__SumarDosFlotantes_Event__fini(message_memory);
}

size_t robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__size_function__SumarDosFlotantes_Event__request(
  const void * untyped_member)
{
  const robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * member =
    (const robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_const_function__SumarDosFlotantes_Event__request(
  const void * untyped_member, size_t index)
{
  const robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * member =
    (const robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_function__SumarDosFlotantes_Event__request(
  void * untyped_member, size_t index)
{
  robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * member =
    (robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__fetch_function__SumarDosFlotantes_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robx7_interfaces__srv__SumarDosFlotantes_Request * item =
    ((const robx7_interfaces__srv__SumarDosFlotantes_Request *)
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_const_function__SumarDosFlotantes_Event__request(untyped_member, index));
  robx7_interfaces__srv__SumarDosFlotantes_Request * value =
    (robx7_interfaces__srv__SumarDosFlotantes_Request *)(untyped_value);
  *value = *item;
}

void robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__assign_function__SumarDosFlotantes_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robx7_interfaces__srv__SumarDosFlotantes_Request * item =
    ((robx7_interfaces__srv__SumarDosFlotantes_Request *)
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_function__SumarDosFlotantes_Event__request(untyped_member, index));
  const robx7_interfaces__srv__SumarDosFlotantes_Request * value =
    (const robx7_interfaces__srv__SumarDosFlotantes_Request *)(untyped_value);
  *item = *value;
}

bool robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__resize_function__SumarDosFlotantes_Event__request(
  void * untyped_member, size_t size)
{
  robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * member =
    (robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence *)(untyped_member);
  robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__fini(member);
  return robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__init(member, size);
}

size_t robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__size_function__SumarDosFlotantes_Event__response(
  const void * untyped_member)
{
  const robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * member =
    (const robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_const_function__SumarDosFlotantes_Event__response(
  const void * untyped_member, size_t index)
{
  const robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * member =
    (const robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_function__SumarDosFlotantes_Event__response(
  void * untyped_member, size_t index)
{
  robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * member =
    (robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__fetch_function__SumarDosFlotantes_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robx7_interfaces__srv__SumarDosFlotantes_Response * item =
    ((const robx7_interfaces__srv__SumarDosFlotantes_Response *)
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_const_function__SumarDosFlotantes_Event__response(untyped_member, index));
  robx7_interfaces__srv__SumarDosFlotantes_Response * value =
    (robx7_interfaces__srv__SumarDosFlotantes_Response *)(untyped_value);
  *value = *item;
}

void robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__assign_function__SumarDosFlotantes_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robx7_interfaces__srv__SumarDosFlotantes_Response * item =
    ((robx7_interfaces__srv__SumarDosFlotantes_Response *)
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_function__SumarDosFlotantes_Event__response(untyped_member, index));
  const robx7_interfaces__srv__SumarDosFlotantes_Response * value =
    (const robx7_interfaces__srv__SumarDosFlotantes_Response *)(untyped_value);
  *item = *value;
}

bool robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__resize_function__SumarDosFlotantes_Event__response(
  void * untyped_member, size_t size)
{
  robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * member =
    (robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence *)(untyped_member);
  robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__fini(member);
  return robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robx7_interfaces__srv__SumarDosFlotantes_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robx7_interfaces__srv__SumarDosFlotantes_Event, request),  // bytes offset in struct
    NULL,  // default value
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__size_function__SumarDosFlotantes_Event__request,  // size() function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_const_function__SumarDosFlotantes_Event__request,  // get_const(index) function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_function__SumarDosFlotantes_Event__request,  // get(index) function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__fetch_function__SumarDosFlotantes_Event__request,  // fetch(index, &value) function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__assign_function__SumarDosFlotantes_Event__request,  // assign(index, value) function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__resize_function__SumarDosFlotantes_Event__request,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robx7_interfaces__srv__SumarDosFlotantes_Event, response),  // bytes offset in struct
    NULL,  // default value
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__size_function__SumarDosFlotantes_Event__response,  // size() function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_const_function__SumarDosFlotantes_Event__response,  // get_const(index) function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__get_function__SumarDosFlotantes_Event__response,  // get(index) function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__fetch_function__SumarDosFlotantes_Event__response,  // fetch(index, &value) function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__assign_function__SumarDosFlotantes_Event__response,  // assign(index, value) function pointer
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__resize_function__SumarDosFlotantes_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_members = {
  "robx7_interfaces__srv",  // message namespace
  "SumarDosFlotantes_Event",  // message name
  3,  // number of fields
  sizeof(robx7_interfaces__srv__SumarDosFlotantes_Event),
  false,  // has_any_key_member_
  robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_member_array,  // message members
  robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_type_support_handle = {
  0,
  &robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_members,
  get_message_typesupport_handle_function,
  &robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_hash,
  &robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_description,
  &robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robx7_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Event)() {
  robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Request)();
  robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Response)();
  if (!robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_type_support_handle.typesupport_identifier) {
    robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robx7_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robx7_interfaces/srv/detail/sumar_dos_flotantes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_service_members = {
  "robx7_interfaces__srv",  // service namespace
  "SumarDosFlotantes",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_type_support_handle,
  NULL,  // response message
  // robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_type_support_handle
  NULL  // event_message
  // robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_type_support_handle
};


static rosidl_service_type_support_t robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_service_type_support_handle = {
  0,
  &robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_service_members,
  get_service_typesupport_handle_function,
  &robx7_interfaces__srv__SumarDosFlotantes_Request__rosidl_typesupport_introspection_c__SumarDosFlotantes_Request_message_type_support_handle,
  &robx7_interfaces__srv__SumarDosFlotantes_Response__rosidl_typesupport_introspection_c__SumarDosFlotantes_Response_message_type_support_handle,
  &robx7_interfaces__srv__SumarDosFlotantes_Event__rosidl_typesupport_introspection_c__SumarDosFlotantes_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robx7_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes)(void) {
  if (!robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_service_type_support_handle.typesupport_identifier) {
    robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robx7_interfaces, srv, SumarDosFlotantes_Event)()->data;
  }

  return &robx7_interfaces__srv__detail__sumar_dos_flotantes__rosidl_typesupport_introspection_c__SumarDosFlotantes_service_type_support_handle;
}
