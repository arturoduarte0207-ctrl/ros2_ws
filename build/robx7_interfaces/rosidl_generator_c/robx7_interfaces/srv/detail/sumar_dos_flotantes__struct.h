// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robx7_interfaces:srv/SumarDosFlotantes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/srv/sumar_dos_flotantes.h"


#ifndef ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__STRUCT_H_
#define ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SumarDosFlotantes in the package robx7_interfaces.
typedef struct robx7_interfaces__srv__SumarDosFlotantes_Request
{
  float a;
  float b;
} robx7_interfaces__srv__SumarDosFlotantes_Request;

// Struct for a sequence of robx7_interfaces__srv__SumarDosFlotantes_Request.
typedef struct robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence
{
  robx7_interfaces__srv__SumarDosFlotantes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SumarDosFlotantes in the package robx7_interfaces.
typedef struct robx7_interfaces__srv__SumarDosFlotantes_Response
{
  float suma;
} robx7_interfaces__srv__SumarDosFlotantes_Response;

// Struct for a sequence of robx7_interfaces__srv__SumarDosFlotantes_Response.
typedef struct robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence
{
  robx7_interfaces__srv__SumarDosFlotantes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robx7_interfaces__srv__SumarDosFlotantes_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robx7_interfaces__srv__SumarDosFlotantes_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SumarDosFlotantes in the package robx7_interfaces.
typedef struct robx7_interfaces__srv__SumarDosFlotantes_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence request;
  robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence response;
} robx7_interfaces__srv__SumarDosFlotantes_Event;

// Struct for a sequence of robx7_interfaces__srv__SumarDosFlotantes_Event.
typedef struct robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence
{
  robx7_interfaces__srv__SumarDosFlotantes_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__STRUCT_H_
