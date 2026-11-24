// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from asebaros_msgs:srv/GetNodeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/get_node_list.h"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__STRUCT_H_
#define ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetNodeList in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__GetNodeList_Request
{
  bool ignored;
} asebaros_msgs__srv__GetNodeList_Request;

// Struct for a sequence of asebaros_msgs__srv__GetNodeList_Request.
typedef struct asebaros_msgs__srv__GetNodeList_Request__Sequence
{
  asebaros_msgs__srv__GetNodeList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__GetNodeList_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "asebaros_msgs/msg/detail/node__struct.h"

/// Struct defined in srv/GetNodeList in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__GetNodeList_Response
{
  asebaros_msgs__msg__Node__Sequence nodes;
} asebaros_msgs__srv__GetNodeList_Response;

// Struct for a sequence of asebaros_msgs__srv__GetNodeList_Response.
typedef struct asebaros_msgs__srv__GetNodeList_Response__Sequence
{
  asebaros_msgs__srv__GetNodeList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__GetNodeList_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  asebaros_msgs__srv__GetNodeList_Event__request__MAX_SIZE = 1
};
// response
enum
{
  asebaros_msgs__srv__GetNodeList_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetNodeList in the package asebaros_msgs.
typedef struct asebaros_msgs__srv__GetNodeList_Event
{
  service_msgs__msg__ServiceEventInfo info;
  asebaros_msgs__srv__GetNodeList_Request__Sequence request;
  asebaros_msgs__srv__GetNodeList_Response__Sequence response;
} asebaros_msgs__srv__GetNodeList_Event;

// Struct for a sequence of asebaros_msgs__srv__GetNodeList_Event.
typedef struct asebaros_msgs__srv__GetNodeList_Event__Sequence
{
  asebaros_msgs__srv__GetNodeList_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} asebaros_msgs__srv__GetNodeList_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__STRUCT_H_
