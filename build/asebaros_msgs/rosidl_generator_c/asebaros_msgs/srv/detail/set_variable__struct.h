// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from asebaros_msgs:srv/SetVariable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/set_variable.h"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__SET_VARIABLE__STRUCT_H_
#define ASEBAROS_MSGS__SRV__DETAIL__SET_VARIABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'variable'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetVariable in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__SetVariable_Request
{
  rosidl_runtime_c__String variable;
  rosidl_runtime_c__int16__Sequence data;
} asebaros_msgs__srv__SetVariable_Request;

// Struct for a sequence of asebaros_msgs__srv__SetVariable_Request.
typedef struct asebaros_msgs__srv__SetVariable_Request__Sequence
{
  asebaros_msgs__srv__SetVariable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__SetVariable_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetVariable in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__SetVariable_Response
{
  uint8_t structure_needs_at_least_one_member;
} asebaros_msgs__srv__SetVariable_Response;

// Struct for a sequence of asebaros_msgs__srv__SetVariable_Response.
typedef struct asebaros_msgs__srv__SetVariable_Response__Sequence
{
  asebaros_msgs__srv__SetVariable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__SetVariable_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  asebaros_msgs__srv__SetVariable_Event__request__MAX_SIZE = 1
};
// response
enum
{
  asebaros_msgs__srv__SetVariable_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetVariable in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__SetVariable_Event
{
  service_msgs__msg__ServiceEventInfo info;
  asebaros_msgs__srv__SetVariable_Request__Sequence request;
  asebaros_msgs__srv__SetVariable_Response__Sequence response;
} asebaros_msgs__srv__SetVariable_Event;

// Struct for a sequence of asebaros_msgs__srv__SetVariable_Event.
typedef struct asebaros_msgs__srv__SetVariable_Event__Sequence
{
  asebaros_msgs__srv__SetVariable_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__SetVariable_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__SRV__DETAIL__SET_VARIABLE__STRUCT_H_
