// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robx7_interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice

#include "robx7_interfaces/msg/detail/custom_string__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_type_hash_t *
robx7_interfaces__msg__CustomString__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0xe7, 0x6e, 0xb6, 0x06, 0xa4, 0xef, 0x88,
      0x0e, 0x08, 0x24, 0x6d, 0xde, 0x04, 0x72, 0xf9,
      0x63, 0x28, 0x61, 0x53, 0x5a, 0x93, 0x8e, 0x7d,
      0x6e, 0xf4, 0x1a, 0x64, 0x1c, 0xec, 0x30, 0xb9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robx7_interfaces__msg__CustomString__TYPE_NAME[] = "robx7_interfaces/msg/CustomString";

// Define type names, field names, and default values
static char robx7_interfaces__msg__CustomString__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field robx7_interfaces__msg__CustomString__FIELDS[] = {
  {
    {robx7_interfaces__msg__CustomString__FIELD_NAME__data, 4, 4},
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
robx7_interfaces__msg__CustomString__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robx7_interfaces__msg__CustomString__TYPE_NAME, 33, 33},
      {robx7_interfaces__msg__CustomString__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robx7_interfaces__msg__CustomString__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robx7_interfaces__msg__CustomString__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 11, 11},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robx7_interfaces__msg__CustomString__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robx7_interfaces__msg__CustomString__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
