// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from project_msgs:msg/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project_msgs/msg/error.h"


#ifndef PROJECT_MSGS__MSG__DETAIL__ERROR__STRUCT_H_
#define PROJECT_MSGS__MSG__DETAIL__ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Error in the package project_msgs.
typedef struct project_msgs__msg__Error
{
  std_msgs__msg__Header header;
  double error_linear;
  double error_angular;
  double error_angular_sen;
  double error_angular_cos;
} project_msgs__msg__Error;

// Struct for a sequence of project_msgs__msg__Error.
typedef struct project_msgs__msg__Error__Sequence
{
  project_msgs__msg__Error * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_msgs__msg__Error__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJECT_MSGS__MSG__DETAIL__ERROR__STRUCT_H_
