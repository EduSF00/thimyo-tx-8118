// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from asebaros_msgs:srv/SetVariable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "asebaros_msgs/srv/detail/set_variable__rosidl_typesupport_introspection_c.h"
#include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "asebaros_msgs/srv/detail/set_variable__functions.h"
#include "asebaros_msgs/srv/detail/set_variable__struct.h"


// Include directives for member types
// Member `variable`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__srv__SetVariable_Request__init(message_memory);
}

void asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_fini_function(void * message_memory)
{
  asebaros_msgs__srv__SetVariable_Request__fini(message_memory);
}

size_t asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__size_function__SetVariable_Request__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Request__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__get_function__SetVariable_Request__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__fetch_function__SetVariable_Request__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Request__data(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__assign_function__SetVariable_Request__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__get_function__SetVariable_Request__data(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__resize_function__SetVariable_Request__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_member_array[2] = {
  {
    "variable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__SetVariable_Request, variable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__SetVariable_Request, data),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__size_function__SetVariable_Request__data,  // size() function pointer
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Request__data,  // get_const(index) function pointer
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__get_function__SetVariable_Request__data,  // get(index) function pointer
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__fetch_function__SetVariable_Request__data,  // fetch(index, &value) function pointer
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__assign_function__SetVariable_Request__data,  // assign(index, value) function pointer
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__resize_function__SetVariable_Request__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_members = {
  "asebaros_msgs__srv",  // message namespace
  "SetVariable_Request",  // message name
  2,  // number of fields
  sizeof(asebaros_msgs__srv__SetVariable_Request),
  false,  // has_any_key_member_
  asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_member_array,  // message members
  asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle = {
  0,
  &asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__srv__SetVariable_Request__get_type_hash,
  &asebaros_msgs__srv__SetVariable_Request__get_type_description,
  &asebaros_msgs__srv__SetVariable_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Request)() {
  if (!asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__functions.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__srv__SetVariable_Response__init(message_memory);
}

void asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_fini_function(void * message_memory)
{
  asebaros_msgs__srv__SetVariable_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__SetVariable_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_members = {
  "asebaros_msgs__srv",  // message namespace
  "SetVariable_Response",  // message name
  1,  // number of fields
  sizeof(asebaros_msgs__srv__SetVariable_Response),
  false,  // has_any_key_member_
  asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_member_array,  // message members
  asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle = {
  0,
  &asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__srv__SetVariable_Response__get_type_hash,
  &asebaros_msgs__srv__SetVariable_Response__get_type_description,
  &asebaros_msgs__srv__SetVariable_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Response)() {
  if (!asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__functions.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "asebaros_msgs/srv/set_variable.h"
// Member `request`
// Member `response`
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__srv__SetVariable_Event__init(message_memory);
}

void asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_fini_function(void * message_memory)
{
  asebaros_msgs__srv__SetVariable_Event__fini(message_memory);
}

size_t asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__size_function__SetVariable_Event__request(
  const void * untyped_member)
{
  const asebaros_msgs__srv__SetVariable_Request__Sequence * member =
    (const asebaros_msgs__srv__SetVariable_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Event__request(
  const void * untyped_member, size_t index)
{
  const asebaros_msgs__srv__SetVariable_Request__Sequence * member =
    (const asebaros_msgs__srv__SetVariable_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_function__SetVariable_Event__request(
  void * untyped_member, size_t index)
{
  asebaros_msgs__srv__SetVariable_Request__Sequence * member =
    (asebaros_msgs__srv__SetVariable_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__fetch_function__SetVariable_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const asebaros_msgs__srv__SetVariable_Request * item =
    ((const asebaros_msgs__srv__SetVariable_Request *)
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Event__request(untyped_member, index));
  asebaros_msgs__srv__SetVariable_Request * value =
    (asebaros_msgs__srv__SetVariable_Request *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__assign_function__SetVariable_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  asebaros_msgs__srv__SetVariable_Request * item =
    ((asebaros_msgs__srv__SetVariable_Request *)
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_function__SetVariable_Event__request(untyped_member, index));
  const asebaros_msgs__srv__SetVariable_Request * value =
    (const asebaros_msgs__srv__SetVariable_Request *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__resize_function__SetVariable_Event__request(
  void * untyped_member, size_t size)
{
  asebaros_msgs__srv__SetVariable_Request__Sequence * member =
    (asebaros_msgs__srv__SetVariable_Request__Sequence *)(untyped_member);
  asebaros_msgs__srv__SetVariable_Request__Sequence__fini(member);
  return asebaros_msgs__srv__SetVariable_Request__Sequence__init(member, size);
}

size_t asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__size_function__SetVariable_Event__response(
  const void * untyped_member)
{
  const asebaros_msgs__srv__SetVariable_Response__Sequence * member =
    (const asebaros_msgs__srv__SetVariable_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Event__response(
  const void * untyped_member, size_t index)
{
  const asebaros_msgs__srv__SetVariable_Response__Sequence * member =
    (const asebaros_msgs__srv__SetVariable_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_function__SetVariable_Event__response(
  void * untyped_member, size_t index)
{
  asebaros_msgs__srv__SetVariable_Response__Sequence * member =
    (asebaros_msgs__srv__SetVariable_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__fetch_function__SetVariable_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const asebaros_msgs__srv__SetVariable_Response * item =
    ((const asebaros_msgs__srv__SetVariable_Response *)
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Event__response(untyped_member, index));
  asebaros_msgs__srv__SetVariable_Response * value =
    (asebaros_msgs__srv__SetVariable_Response *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__assign_function__SetVariable_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  asebaros_msgs__srv__SetVariable_Response * item =
    ((asebaros_msgs__srv__SetVariable_Response *)
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_function__SetVariable_Event__response(untyped_member, index));
  const asebaros_msgs__srv__SetVariable_Response * value =
    (const asebaros_msgs__srv__SetVariable_Response *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__resize_function__SetVariable_Event__response(
  void * untyped_member, size_t size)
{
  asebaros_msgs__srv__SetVariable_Response__Sequence * member =
    (asebaros_msgs__srv__SetVariable_Response__Sequence *)(untyped_member);
  asebaros_msgs__srv__SetVariable_Response__Sequence__fini(member);
  return asebaros_msgs__srv__SetVariable_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__SetVariable_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(asebaros_msgs__srv__SetVariable_Event, request),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__size_function__SetVariable_Event__request,  // size() function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Event__request,  // get_const(index) function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_function__SetVariable_Event__request,  // get(index) function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__fetch_function__SetVariable_Event__request,  // fetch(index, &value) function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__assign_function__SetVariable_Event__request,  // assign(index, value) function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__resize_function__SetVariable_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(asebaros_msgs__srv__SetVariable_Event, response),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__size_function__SetVariable_Event__response,  // size() function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_const_function__SetVariable_Event__response,  // get_const(index) function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__get_function__SetVariable_Event__response,  // get(index) function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__fetch_function__SetVariable_Event__response,  // fetch(index, &value) function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__assign_function__SetVariable_Event__response,  // assign(index, value) function pointer
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__resize_function__SetVariable_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_members = {
  "asebaros_msgs__srv",  // message namespace
  "SetVariable_Event",  // message name
  3,  // number of fields
  sizeof(asebaros_msgs__srv__SetVariable_Event),
  false,  // has_any_key_member_
  asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_member_array,  // message members
  asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_type_support_handle = {
  0,
  &asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__srv__SetVariable_Event__get_type_hash,
  &asebaros_msgs__srv__SetVariable_Event__get_type_description,
  &asebaros_msgs__srv__SetVariable_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Event)() {
  asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Request)();
  asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Response)();
  if (!asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_members = {
  "asebaros_msgs__srv",  // service namespace
  "SetVariable",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle,
  NULL,  // response message
  // asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle
  NULL  // event_message
  // asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle
};


static rosidl_service_type_support_t asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle = {
  0,
  &asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_members,
  get_service_typesupport_handle_function,
  &asebaros_msgs__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle,
  &asebaros_msgs__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle,
  &asebaros_msgs__srv__SetVariable_Event__rosidl_typesupport_introspection_c__SetVariable_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    asebaros_msgs,
    srv,
    SetVariable
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    asebaros_msgs,
    srv,
    SetVariable
  ),
  &asebaros_msgs__srv__SetVariable__get_type_hash,
  &asebaros_msgs__srv__SetVariable__get_type_description,
  &asebaros_msgs__srv__SetVariable__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable)(void) {
  if (!asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle.typesupport_identifier) {
    asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, SetVariable_Event)()->data;
  }

  return &asebaros_msgs__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle;
}
