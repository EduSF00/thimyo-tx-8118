// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from asebaros_msgs:msg/NodeDescription.idl
// generated code does not contain a copyright notice

#include "asebaros_msgs/msg/detail/node_description__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__msg__NodeDescription__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0x1f, 0xf8, 0x21, 0xc4, 0x20, 0x66, 0xc3,
      0xc5, 0xa7, 0x2a, 0x9d, 0x4a, 0xe9, 0xae, 0x2f,
      0xa5, 0xae, 0x82, 0x44, 0x6e, 0xd0, 0x44, 0x46,
      0xb8, 0x2e, 0xd3, 0xfa, 0x7f, 0x2b, 0xb4, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "asebaros_msgs/msg/detail/constant__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t asebaros_msgs__msg__Constant__EXPECTED_HASH = {1, {
    0x39, 0x22, 0xb5, 0x31, 0x7a, 0x6c, 0x31, 0x39,
    0x0f, 0x8f, 0x4a, 0x46, 0xc7, 0x02, 0x85, 0xfa,
    0xee, 0xf9, 0x5b, 0x74, 0x21, 0x33, 0x0d, 0x4e,
    0x67, 0x6e, 0x3c, 0xdd, 0x32, 0x50, 0x82, 0x98,
  }};
#endif

static char asebaros_msgs__msg__NodeDescription__TYPE_NAME[] = "asebaros_msgs/msg/NodeDescription";
static char asebaros_msgs__msg__Constant__TYPE_NAME[] = "asebaros_msgs/msg/Constant";

// Define type names, field names, and default values
static char asebaros_msgs__msg__NodeDescription__FIELD_NAME__id[] = "id";
static char asebaros_msgs__msg__NodeDescription__FIELD_NAME__name[] = "name";
static char asebaros_msgs__msg__NodeDescription__FIELD_NAME__constants[] = "constants";
static char asebaros_msgs__msg__NodeDescription__FIELD_NAME__events[] = "events";
static char asebaros_msgs__msg__NodeDescription__FIELD_NAME__variables[] = "variables";

static rosidl_runtime_c__type_description__Field asebaros_msgs__msg__NodeDescription__FIELDS[] = {
  {
    {asebaros_msgs__msg__NodeDescription__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__NodeDescription__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__NodeDescription__FIELD_NAME__constants, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {asebaros_msgs__msg__Constant__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__NodeDescription__FIELD_NAME__events, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__msg__NodeDescription__FIELD_NAME__variables, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription asebaros_msgs__msg__NodeDescription__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {asebaros_msgs__msg__Constant__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__msg__NodeDescription__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {asebaros_msgs__msg__NodeDescription__TYPE_NAME, 33, 33},
      {asebaros_msgs__msg__NodeDescription__FIELDS, 5, 5},
    },
    {asebaros_msgs__msg__NodeDescription__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&asebaros_msgs__msg__Constant__EXPECTED_HASH, asebaros_msgs__msg__Constant__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = asebaros_msgs__msg__Constant__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 id\n"
  "string name\n"
  "asebaros_msgs/Constant[] constants\n"
  "string[] events\n"
  "string[] variables";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__msg__NodeDescription__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {asebaros_msgs__msg__NodeDescription__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 92, 92},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__msg__NodeDescription__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *asebaros_msgs__msg__NodeDescription__get_individual_type_description_source(NULL),
    sources[1] = *asebaros_msgs__msg__Constant__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
