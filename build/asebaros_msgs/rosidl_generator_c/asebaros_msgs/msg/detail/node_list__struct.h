// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from asebaros_msgs:msg/NodeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node_list.h"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__STRUCT_H_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "asebaros_msgs/msg/detail/node__struct.h"

/// Struct defined in msg/NodeList in the package asebaros_msgs.
typedef struct asebaros_msgs__msg__NodeList
{
  asebaros_msgs__msg__Node__Sequence nodes;
} asebaros_msgs__msg__NodeList;

// Struct for a sequence of asebaros_msgs__msg__NodeList.
typedef struct asebaros_msgs__msg__NodeList__Sequence
{
  asebaros_msgs__msg__NodeList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__msg__NodeList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__STRUCT_H_
