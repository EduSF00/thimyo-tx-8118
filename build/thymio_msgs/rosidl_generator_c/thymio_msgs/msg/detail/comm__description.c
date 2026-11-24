// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

#include "thymio_msgs/msg/detail/comm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
const rosidl_type_hash_t *
thymio_msgs__msg__Comm__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0xaf, 0x09, 0xde, 0xb4, 0x1e, 0xd6, 0x8b,
      0x2d, 0x38, 0x5c, 0x35, 0x7e, 0x7d, 0x66, 0x35,
      0x7b, 0x8a, 0xc9, 0x58, 0x78, 0x73, 0x57, 0x8f,
      0x3c, 0x61, 0x19, 0x80, 0xd6, 0x30, 0x7b, 0xc1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char thymio_msgs__msg__Comm__TYPE_NAME[] = "thymio_msgs/msg/Comm";

// Define type names, field names, and default values
static char thymio_msgs__msg__Comm__FIELD_NAME__value[] = "value";
static char thymio_msgs__msg__Comm__FIELD_NAME__payloads[] = "payloads";
static char thymio_msgs__msg__Comm__FIELD_NAME__intensities[] = "intensities";

static rosidl_runtime_c__type_description__Field thymio_msgs__msg__Comm__FIELDS[] = {
  {
    {thymio_msgs__msg__Comm__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__Comm__FIELD_NAME__payloads, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__Comm__FIELD_NAME__intensities, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
thymio_msgs__msg__Comm__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {thymio_msgs__msg__Comm__TYPE_NAME, 20, 20},
      {thymio_msgs__msg__Comm__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 value\n"
  "int16[7] payloads\n"
  "int16[7] intensities";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
thymio_msgs__msg__Comm__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {thymio_msgs__msg__Comm__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
thymio_msgs__msg__Comm__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *thymio_msgs__msg__Comm__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
