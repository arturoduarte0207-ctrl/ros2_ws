// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robx7_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#include "robx7_interfaces/msg/detail/hardware_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_type_hash_t *
robx7_interfaces__msg__HardwareStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xcf, 0xd7, 0xa6, 0x2c, 0x1f, 0xfb, 0xe4,
      0xe4, 0x09, 0x40, 0xba, 0x27, 0x19, 0x55, 0xd4,
      0x16, 0xd2, 0x7f, 0xd8, 0x22, 0x20, 0xee, 0x92,
      0xc1, 0x78, 0x5f, 0x5b, 0x8e, 0x59, 0x99, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robx7_interfaces__msg__HardwareStatus__TYPE_NAME[] = "robx7_interfaces/msg/HardwareStatus";

// Define type names, field names, and default values
static char robx7_interfaces__msg__HardwareStatus__FIELD_NAME__temperatura[] = "temperatura";
static char robx7_interfaces__msg__HardwareStatus__FIELD_NAME__motores_listos[] = "motores_listos";
static char robx7_interfaces__msg__HardwareStatus__FIELD_NAME__debug_msg[] = "debug_msg";

static rosidl_runtime_c__type_description__Field robx7_interfaces__msg__HardwareStatus__FIELDS[] = {
  {
    {robx7_interfaces__msg__HardwareStatus__FIELD_NAME__temperatura, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robx7_interfaces__msg__HardwareStatus__FIELD_NAME__motores_listos, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robx7_interfaces__msg__HardwareStatus__FIELD_NAME__debug_msg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robx7_interfaces__msg__HardwareStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robx7_interfaces__msg__HardwareStatus__TYPE_NAME, 35, 35},
      {robx7_interfaces__msg__HardwareStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 temperatura\n"
  "bool motores_listos\n"
  "string debug_msg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robx7_interfaces__msg__HardwareStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robx7_interfaces__msg__HardwareStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 54, 54},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robx7_interfaces__msg__HardwareStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robx7_interfaces__msg__HardwareStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
