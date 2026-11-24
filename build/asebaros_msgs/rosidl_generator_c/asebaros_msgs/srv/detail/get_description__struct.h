// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from asebaros_msgs:srv/GetDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/get_description.h"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__GET_DESCRIPTION__STRUCT_H_
#define ASEBAROS_MSGS__SRV__DETAIL__GET_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetDescription in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__GetDescription_Request
{
  uint8_t structure_needs_at_least_one_member;
} asebaros_msgs__srv__GetDescription_Request;

// Struct for a sequence of asebaros_msgs__srv__GetDescription_Request.
typedef struct asebaros_msgs__srv__GetDescription_Request__Sequence
{
  asebaros_msgs__srv__GetDescription_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__GetDescription_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'description'
#include "asebaros_msgs/msg/detail/node_description__struct.h"

/// Struct defined in srv/GetDescription in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__GetDescription_Response
{
  asebaros_msgs__msg__NodeDescription description;
} asebaros_msgs__srv__GetDescription_Response;

// Struct for a sequence of asebaros_msgs__srv__GetDescription_Response.
typedef struct asebaros_msgs__srv__GetDescription_Response__Sequence
{
  asebaros_msgs__srv__GetDescription_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__GetDescription_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  asebaros_msgs__srv__GetDescription_Event__request__MAX_SIZE = 1
};
// response
enum
{
  asebaros_msgs__srv__GetDescription_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetDescription in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__GetDescription_Event
{
  service_msgs__msg__ServiceEventInfo info;
  asebaros_msgs__srv__GetDescription_Request__Sequence request;
  asebaros_msgs__srv__GetDescription_Response__Sequence response;
} asebaros_msgs__srv__GetDescription_Event;

// Struct for a sequence of asebaros_msgs__srv__GetDescription_Event.
typedef struct asebaros_msgs__srv__GetDescription_Event__Sequence
{
  asebaros_msgs__srv__GetDescription_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__GetDescription_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__SRV__DETAIL__GET_DESCRIPTION__STRUCT_H_
