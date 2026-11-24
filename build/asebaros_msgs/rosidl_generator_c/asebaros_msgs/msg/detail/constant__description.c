// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from asebaros_msgs:msg/Constant.idl
// generated code does not contain a copyright notice

#include "asebaros_msgs/msg/detail/constant__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__msg__Constant__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0x22, 0xb5, 0x31, 0x7a, 0x6c, 0x31, 0x39,
      0x0f, 0x8f, 0x4a, 0x46, 0xc7, 0x02, 0x85, 0xfa,
      0xee, 0xf9, 0x5b, 0x74, 0x21, 0x33, 0x0d, 0x4e,
      0x67, 0x6e, 0x3c, 0xdd, 0x32, 0x50, 0x82, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char asebaros_msgs__msg__Constant__TYPE_NAME[] = "asebaros_msgs/msg/Constant";

// Define type names, field names, and default values
static char asebaros_msgs__msg__Constant__FIELD_NAME__name[] = "name";
static char asebaros_msgs__msg__Constant__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field asebaros_msgs__msg__Constant__FIELDS[] = {
  {
    {asebaros_msgs__msg__Constant__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__Constant__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__msg__Constant__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {asebaros_msgs__msg__Constant__TYPE_NAME, 26, 26},
      {asebaros_msgs__msg__Constant__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int16 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__msg__Constant__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {asebaros_msgs__msg__Constant__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__msg__Constant__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *asebaros_msgs__msg__Constant__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
