// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from asebaros_msgs:srv/LoadScript.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/load_script.h"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__LOAD_SCRIPT__STRUCT_H_
#define ASEBAROS_MSGS__SRV__DETAIL__LOAD_SCRIPT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_name'
#include "rosidl_runtime_c/string.h"
// Member 'constants'
#include "asebaros_msgs/msg/detail/constant__struct.h"
// Member 'node_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/LoadScript in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__LoadScript_Request
{
  rosidl_runtime_c__String file_name;
  asebaros_msgs__msg__Constant__Sequence constants;
  /// Leave empty to load to all nodes
  rosidl_runtime_c__uint16__Sequence node_ids;
  bool set_as_default;
} asebaros_msgs__srv__LoadScript_Request;

// Struct for a sequence of asebaros_msgs__srv__LoadScript_Request.
typedef struct asebaros_msgs__srv__LoadScript_Request__Sequence
{
  asebaros_msgs__srv__LoadScript_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__LoadScript_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/LoadScript in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__LoadScript_Response
{
  uint8_t structure_needs_at_least_one_member;
} asebaros_msgs__srv__LoadScript_Response;

// Struct for a sequence of asebaros_msgs__srv__LoadScript_Response.
typedef struct asebaros_msgs__srv__LoadScript_Response__Sequence
{
  asebaros_msgs__srv__LoadScript_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__LoadScript_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  asebaros_msgs__srv__LoadScript_Event__request__MAX_SIZE = 1
};
// response
enum
{
  asebaros_msgs__srv__LoadScript_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LoadScript in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__LoadScript_Event
{
  service_msgs__msg__ServiceEventInfo info;
  asebaros_msgs__srv__LoadScript_Request__Sequence request;
  asebaros_msgs__srv__LoadScript_Response__Sequence response;
} asebaros_msgs__srv__LoadScript_Event;

// Struct for a sequence of asebaros_msgs__srv__LoadScript_Event.
typedef struct asebaros_msgs__srv__LoadScript_Event__Sequence
{
  asebaros_msgs__srv__LoadScript_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__LoadScript_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__SRV__DETAIL__LOAD_SCRIPT__STRUCT_H_
