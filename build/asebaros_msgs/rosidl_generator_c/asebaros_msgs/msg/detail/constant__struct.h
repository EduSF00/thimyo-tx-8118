// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from asebaros_msgs:msg/Constant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/constant.h"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__STRUCT_H_
#define ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Constant in the package asebaros_msgs.
typedef struct asebaros_msgs__msg__Constant
{
  rosidl_runtime_c__String name;
  int16_t value;
} asebaros_msgs__msg__Constant;

// Struct for a sequence of asebaros_msgs__msg__Constant.
typedef struct asebaros_msgs__msg__Constant__Sequence
{
  asebaros_msgs__msg__Constant * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__msg__Constant__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__STRUCT_H_
