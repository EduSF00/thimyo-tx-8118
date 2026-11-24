// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from project_msgs:msg/LocalizationObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project_msgs/msg/localization_object.h"


#ifndef PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__STRUCT_H_
#define PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__STRUCT_H_

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

/// Struct defined in msg/LocalizationObject in the package project_msgs.
typedef struct project_msgs__msg__LocalizationObject
{
  std_msgs__msg__Header header;
  double distance_linear;
  double distance_angular;
  double sen_angular;
  double cos_angular;
} project_msgs__msg__LocalizationObject;

// Struct for a sequence of project_msgs__msg__LocalizationObject.
typedef struct project_msgs__msg__LocalizationObject__Sequence
{
  project_msgs__msg__LocalizationObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_msgs__msg__LocalizationObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__STRUCT_H_
