// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from asebaros_msgs:msg/AnonymousEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/anonymous_event.h"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__ANONYMOUS_EVENT__STRUCT_H_
#define ASEBAROS_MSGS__MSG__DETAIL__ANONYMOUS_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AnonymousEvent in the package asebaros_msgs.
typedef struct asebaros_msgs__msg__AnonymousEvent
{
  builtin_interfaces__msg__Time stamp;
  uint16_t source;
  uint16_t type;
  rosidl_runtime_c__int16__Sequence data;
} asebaros_msgs__msg__AnonymousEvent;

// Struct for a sequence of asebaros_msgs__msg__AnonymousEvent.
typedef struct asebaros_msgs__msg__AnonymousEvent__Sequence
{
  asebaros_msgs__msg__AnonymousEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__msg__AnonymousEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__MSG__DETAIL__ANONYMOUS_EVENT__STRUCT_H_
