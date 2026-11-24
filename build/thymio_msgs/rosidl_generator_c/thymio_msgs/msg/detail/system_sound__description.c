// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice

#include "thymio_msgs/msg/detail/system_sound__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
const rosidl_type_hash_t *
thymio_msgs__msg__SystemSound__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x52, 0x62, 0xa6, 0x42, 0x3b, 0x3d, 0x47,
      0x36, 0x31, 0x2e, 0xc7, 0x70, 0xda, 0x08, 0x43,
      0xa1, 0x35, 0xa9, 0xf0, 0x65, 0x37, 0xe4, 0xad,
      0x94, 0x5b, 0x4f, 0x09, 0x01, 0x35, 0x18, 0xa9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char thymio_msgs__msg__SystemSound__TYPE_NAME[] = "thymio_msgs/msg/SystemSound";

// Define type names, field names, and default values
static char thymio_msgs__msg__SystemSound__FIELD_NAME__sound[] = "sound";

static rosidl_runtime_c__type_description__Field thymio_msgs__msg__SystemSound__FIELDS[] = {
  {
    {thymio_msgs__msg__SystemSound__FIELD_NAME__sound, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
thymio_msgs__msg__SystemSound__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {thymio_msgs__msg__SystemSound__TYPE_NAME, 27, 27},
      {thymio_msgs__msg__SystemSound__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 sound\n"
  "int8 STOP=-1\n"
  "int8 STARTUP=0\n"
  "int8 SHUTDOWN=1\n"
  "int8 ARROW_BUTTON=2\n"
  "int8 CENTRAL_BUTTON=3\n"
  "int8 FREE_FALL=4\n"
  "int8 COLLISION=5\n"
  "int8 TARGET_OK=6\n"
  "int8 TARGET_DETECT=7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
thymio_msgs__msg__SystemSound__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {thymio_msgs__msg__SystemSound__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 169, 169},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
thymio_msgs__msg__SystemSound__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *thymio_msgs__msg__SystemSound__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
