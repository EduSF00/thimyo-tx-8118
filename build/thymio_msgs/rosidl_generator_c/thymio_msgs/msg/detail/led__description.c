// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

#include "thymio_msgs/msg/detail/led__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
const rosidl_type_hash_t *
thymio_msgs__msg__Led__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0xe0, 0x60, 0xe6, 0x11, 0x9c, 0x30, 0x00,
      0xde, 0x78, 0xe1, 0x51, 0x81, 0x8e, 0xe7, 0x18,
      0x8c, 0x87, 0x2a, 0x10, 0x8e, 0x1f, 0xf1, 0x3b,
      0x49, 0x20, 0xb4, 0xa6, 0x6f, 0x35, 0xf3, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char thymio_msgs__msg__Led__TYPE_NAME[] = "thymio_msgs/msg/Led";

// Define type names, field names, and default values
static char thymio_msgs__msg__Led__FIELD_NAME__id[] = "id";
static char thymio_msgs__msg__Led__FIELD_NAME__values[] = "values";

static rosidl_runtime_c__type_description__Field thymio_msgs__msg__Led__FIELDS[] = {
  {
    {thymio_msgs__msg__Led__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__Led__FIELD_NAME__values, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
thymio_msgs__msg__Led__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {thymio_msgs__msg__Led__TYPE_NAME, 19, 19},
      {thymio_msgs__msg__Led__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 id\n"
  "float32[] values\n"
  "\n"
  "uint8 CIRCLE=0\n"
  "uint8 PROXIMITY=1\n"
  "uint8 BUTTONS=2\n"
  "uint8 GROUND=3\n"
  "uint8 TEMPERATURE=4\n"
  "uint8 MICROPHONE=5\n"
  "uint8 REMOTE=6";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
thymio_msgs__msg__Led__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {thymio_msgs__msg__Led__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 145, 145},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
thymio_msgs__msg__Led__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *thymio_msgs__msg__Led__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
