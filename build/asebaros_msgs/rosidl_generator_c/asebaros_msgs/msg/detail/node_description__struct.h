// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from asebaros_msgs:msg/NodeDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node_description.h"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__STRUCT_H_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'events'
// Member 'variables'
#include "rosidl_runtime_c/string.h"
// Member 'constants'
#include "asebaros_msgs/msg/detail/constant__struct.h"

/// Struct defined in msg/NodeDescription in the package asebaros_msgs.
typedef struct asebaros_msgs__msg__NodeDescription
{
  uint16_t id;
  rosidl_runtime_c__String name;
  asebaros_msgs__msg__Constant__Sequence constants;
  rosidl_runtime_c__String__Sequence events;
  rosidl_runtime_c__String__Sequence variables;
} asebaros_msgs__msg__NodeDescription;

// Struct for a sequence of asebaros_msgs__msg__NodeDescription.
typedef struct asebaros_msgs__msg__NodeDescription__Sequence
{
  asebaros_msgs__msg__NodeDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__msg__NodeDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__STRUCT_H_
