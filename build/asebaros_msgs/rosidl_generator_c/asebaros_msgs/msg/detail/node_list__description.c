// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from asebaros_msgs:msg/NodeList.idl
// generated code does not contain a copyright notice

#include "asebaros_msgs/msg/detail/node_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__msg__NodeList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0xcc, 0xd6, 0xb5, 0xf1, 0xef, 0x22, 0xbc,
      0x07, 0x89, 0x4d, 0x1c, 0x90, 0xf4, 0x7f, 0x77,
      0x04, 0x2e, 0xde, 0x0a, 0x47, 0x86, 0x36, 0x6f,
      0xcd, 0x4d, 0xac, 0x6b, 0x51, 0x91, 0x9a, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "asebaros_msgs/msg/detail/node__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t asebaros_msgs__msg__Node__EXPECTED_HASH = {1, {
    0x3a, 0x14, 0xf0, 0x42, 0x69, 0x24, 0x7e, 0xf2,
    0xe6, 0xb6, 0x51, 0x38, 0xb4, 0x00, 0x0d, 0xdf,
    0xc9, 0x73, 0x7a, 0xbb, 0x30, 0x8c, 0x9f, 0xe1,
    0x74, 0x0e, 0x23, 0xc3, 0x8e, 0x74, 0x18, 0x0f,
  }};
#endif

static char asebaros_msgs__msg__NodeList__TYPE_NAME[] = "asebaros_msgs/msg/NodeList";
static char asebaros_msgs__msg__Node__TYPE_NAME[] = "asebaros_msgs/msg/Node";

// Define type names, field names, and default values
static char asebaros_msgs__msg__NodeList__FIELD_NAME__nodes[] = "nodes";

static rosidl_runtime_c__type_description__Field asebaros_msgs__msg__NodeList__FIELDS[] = {
  {
    {asebaros_msgs__msg__NodeList__FIELD_NAME__nodes, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {asebaros_msgs__msg__Node__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription asebaros_msgs__msg__NodeList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {asebaros_msgs__msg__Node__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__msg__NodeList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {asebaros_msgs__msg__NodeList__TYPE_NAME, 26, 26},
      {asebaros_msgs__msg__NodeList__FIELDS, 1, 1},
    },
    {asebaros_msgs__msg__NodeList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&asebaros_msgs__msg__Node__EXPECTED_HASH, asebaros_msgs__msg__Node__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = asebaros_msgs__msg__Node__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "asebaros_msgs/Node[] nodes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__msg__NodeList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {asebaros_msgs__msg__NodeList__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__msg__NodeList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *asebaros_msgs__msg__NodeList__get_individual_type_description_source(NULL),
    sources[1] = *asebaros_msgs__msg__Node__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
