// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from asebaros_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include "asebaros_msgs/msg/detail/node__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__msg__Node__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0x14, 0xf0, 0x42, 0x69, 0x24, 0x7e, 0xf2,
      0xe6, 0xb6, 0x51, 0x38, 0xb4, 0x00, 0x0d, 0xdf,
      0xc9, 0x73, 0x7a, 0xbb, 0x30, 0x8c, 0x9f, 0xe1,
      0x74, 0x0e, 0x23, 0xc3, 0x8e, 0x74, 0x18, 0x0f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char asebaros_msgs__msg__Node__TYPE_NAME[] = "asebaros_msgs/msg/Node";

// Define type names, field names, and default values
static char asebaros_msgs__msg__Node__FIELD_NAME__id[] = "id";
static char asebaros_msgs__msg__Node__FIELD_NAME__name[] = "name";
static char asebaros_msgs__msg__Node__FIELD_NAME__name_space[] = "name_space";
static char asebaros_msgs__msg__Node__FIELD_NAME__running[] = "running";
static char asebaros_msgs__msg__Node__FIELD_NAME__ignored[] = "ignored";
static char asebaros_msgs__msg__Node__FIELD_NAME__connected[] = "connected";

static rosidl_runtime_c__type_description__Field asebaros_msgs__msg__Node__FIELDS[] = {
  {
    {asebaros_msgs__msg__Node__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__Node__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__Node__FIELD_NAME__name_space, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__Node__FIELD_NAME__running, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__Node__FIELD_NAME__ignored, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__Node__FIELD_NAME__connected, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__msg__Node__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {asebaros_msgs__msg__Node__TYPE_NAME, 22, 22},
      {asebaros_msgs__msg__Node__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 id\n"
  "string name\n"
  "string name_space\n"
  "bool running\n"
  "bool ignored\n"
  "bool connected";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__msg__Node__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {asebaros_msgs__msg__Node__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__msg__Node__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *asebaros_msgs__msg__Node__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
