// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice

#include "thymio_msgs/msg/detail/led_gesture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_thymio_msgs
const rosidl_type_hash_t *
thymio_msgs__msg__LedGesture__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0x1f, 0x8d, 0x9f, 0x41, 0x92, 0x0e, 0x7f,
      0x52, 0x33, 0x59, 0xf2, 0x2b, 0xee, 0xa8, 0xe6,
      0x2a, 0x69, 0xa2, 0x1d, 0x4d, 0x35, 0x1f, 0xb6,
      0x88, 0x89, 0xeb, 0xee, 0x13, 0x16, 0x24, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char thymio_msgs__msg__LedGesture__TYPE_NAME[] = "thymio_msgs/msg/LedGesture";

// Define type names, field names, and default values
static char thymio_msgs__msg__LedGesture__FIELD_NAME__gesture[] = "gesture";
static char thymio_msgs__msg__LedGesture__FIELD_NAME__wave[] = "wave";
static char thymio_msgs__msg__LedGesture__FIELD_NAME__leds[] = "leds";
static char thymio_msgs__msg__LedGesture__FIELD_NAME__period[] = "period";
static char thymio_msgs__msg__LedGesture__FIELD_NAME__length[] = "length";
static char thymio_msgs__msg__LedGesture__FIELD_NAME__mirror[] = "mirror";
static char thymio_msgs__msg__LedGesture__FIELD_NAME__mask[] = "mask";

static rosidl_runtime_c__type_description__Field thymio_msgs__msg__LedGesture__FIELDS[] = {
  {
    {thymio_msgs__msg__LedGesture__FIELD_NAME__gesture, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__LedGesture__FIELD_NAME__wave, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__LedGesture__FIELD_NAME__leds, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__LedGesture__FIELD_NAME__period, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__LedGesture__FIELD_NAME__length, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__LedGesture__FIELD_NAME__mirror, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {thymio_msgs__msg__LedGesture__FIELD_NAME__mask, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
thymio_msgs__msg__LedGesture__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {thymio_msgs__msg__LedGesture__TYPE_NAME, 26, 26},
      {thymio_msgs__msg__LedGesture__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 gesture\n"
  "uint8 wave\n"
  "uint8 leds\n"
  "float32 period\n"
  "uint16 length\n"
  "uint8 mirror\n"
  "bool[] mask\n"
  "\n"
  "uint8 OFF=0\n"
  "uint8 WAVE=1\n"
  "uint8 RECT=0\n"
  "uint8 HARMONIC=1\n"
  "uint8 CIRCLE=0\n"
  "uint8 PROXIMITY=1\n"
  "uint8 BUTTONS=2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
thymio_msgs__msg__LedGesture__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {thymio_msgs__msg__LedGesture__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 195, 195},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
thymio_msgs__msg__LedGesture__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *thymio_msgs__msg__LedGesture__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
