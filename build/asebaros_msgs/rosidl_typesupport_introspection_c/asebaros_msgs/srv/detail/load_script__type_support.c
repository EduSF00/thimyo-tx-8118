// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from asebaros_msgs:srv/LoadScript.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "asebaros_msgs/srv/detail/load_script__rosidl_typesupport_introspection_c.h"
#include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "asebaros_msgs/srv/detail/load_script__functions.h"
#include "asebaros_msgs/srv/detail/load_script__struct.h"


// Include directives for member types
// Member `file_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `constants`
#include "asebaros_msgs/msg/constant.h"
// Member `constants`
#include "asebaros_msgs/msg/detail/constant__rosidl_typesupport_introspection_c.h"
// Member `node_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__srv__LoadScript_Request__init(message_memory);
}

void asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_fini_function(void * message_memory)
{
  asebaros_msgs__srv__LoadScript_Request__fini(message_memory);
}

size_t asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__size_function__LoadScript_Request__constants(
  const void * untyped_member)
{
  const asebaros_msgs__msg__Constant__Sequence * member =
    (const asebaros_msgs__msg__Constant__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Request__constants(
  const void * untyped_member, size_t index)
{
  const asebaros_msgs__msg__Constant__Sequence * member =
    (const asebaros_msgs__msg__Constant__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_function__LoadScript_Request__constants(
  void * untyped_member, size_t index)
{
  asebaros_msgs__msg__Constant__Sequence * member =
    (asebaros_msgs__msg__Constant__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__fetch_function__LoadScript_Request__constants(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const asebaros_msgs__msg__Constant * item =
    ((const asebaros_msgs__msg__Constant *)
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Request__constants(untyped_member, index));
  asebaros_msgs__msg__Constant * value =
    (asebaros_msgs__msg__Constant *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__assign_function__LoadScript_Request__constants(
  void * untyped_member, size_t index, const void * untyped_value)
{
  asebaros_msgs__msg__Constant * item =
    ((asebaros_msgs__msg__Constant *)
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_function__LoadScript_Request__constants(untyped_member, index));
  const asebaros_msgs__msg__Constant * value =
    (const asebaros_msgs__msg__Constant *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__resize_function__LoadScript_Request__constants(
  void * untyped_member, size_t size)
{
  asebaros_msgs__msg__Constant__Sequence * member =
    (asebaros_msgs__msg__Constant__Sequence *)(untyped_member);
  asebaros_msgs__msg__Constant__Sequence__fini(member);
  return asebaros_msgs__msg__Constant__Sequence__init(member, size);
}

size_t asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__size_function__LoadScript_Request__node_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Request__node_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_function__LoadScript_Request__node_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__fetch_function__LoadScript_Request__node_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Request__node_ids(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__assign_function__LoadScript_Request__node_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_function__LoadScript_Request__node_ids(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__resize_function__LoadScript_Request__node_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_member_array[4] = {
  {
    "file_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__LoadScript_Request, file_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "constants",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__LoadScript_Request, constants),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__size_function__LoadScript_Request__constants,  // size() function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Request__constants,  // get_const(index) function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_function__LoadScript_Request__constants,  // get(index) function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__fetch_function__LoadScript_Request__constants,  // fetch(index, &value) function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__assign_function__LoadScript_Request__constants,  // assign(index, value) function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__resize_function__LoadScript_Request__constants  // resize(index) function pointer
  },
  {
    "node_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__LoadScript_Request, node_ids),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__size_function__LoadScript_Request__node_ids,  // size() function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Request__node_ids,  // get_const(index) function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__get_function__LoadScript_Request__node_ids,  // get(index) function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__fetch_function__LoadScript_Request__node_ids,  // fetch(index, &value) function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__assign_function__LoadScript_Request__node_ids,  // assign(index, value) function pointer
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__resize_function__LoadScript_Request__node_ids  // resize(index) function pointer
  },
  {
    "set_as_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__LoadScript_Request, set_as_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_members = {
  "asebaros_msgs__srv",  // message namespace
  "LoadScript_Request",  // message name
  4,  // number of fields
  sizeof(asebaros_msgs__srv__LoadScript_Request),
  false,  // has_any_key_member_
  asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_member_array,  // message members
  asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_type_support_handle = {
  0,
  &asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__srv__LoadScript_Request__get_type_hash,
  &asebaros_msgs__srv__LoadScript_Request__get_type_description,
  &asebaros_msgs__srv__LoadScript_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Request)() {
  asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, msg, Constant)();
  if (!asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "asebaros_msgs/srv/detail/load_script__rosidl_typesupport_introspection_c.h"
// already included above
// #include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "asebaros_msgs/srv/detail/load_script__functions.h"
// already included above
// #include "asebaros_msgs/srv/detail/load_script__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__srv__LoadScript_Response__init(message_memory);
}

void asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_fini_function(void * message_memory)
{
  asebaros_msgs__srv__LoadScript_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__LoadScript_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_members = {
  "asebaros_msgs__srv",  // message namespace
  "LoadScript_Response",  // message name
  1,  // number of fields
  sizeof(asebaros_msgs__srv__LoadScript_Response),
  false,  // has_any_key_member_
  asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_member_array,  // message members
  asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_type_support_handle = {
  0,
  &asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__srv__LoadScript_Response__get_type_hash,
  &asebaros_msgs__srv__LoadScript_Response__get_type_description,
  &asebaros_msgs__srv__LoadScript_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Response)() {
  if (!asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "asebaros_msgs/srv/detail/load_script__rosidl_typesupport_introspection_c.h"
// already included above
// #include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "asebaros_msgs/srv/detail/load_script__functions.h"
// already included above
// #include "asebaros_msgs/srv/detail/load_script__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "asebaros_msgs/srv/load_script.h"
// Member `request`
// Member `response`
// already included above
// #include "asebaros_msgs/srv/detail/load_script__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__srv__LoadScript_Event__init(message_memory);
}

void asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_fini_function(void * message_memory)
{
  asebaros_msgs__srv__LoadScript_Event__fini(message_memory);
}

size_t asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__size_function__LoadScript_Event__request(
  const void * untyped_member)
{
  const asebaros_msgs__srv__LoadScript_Request__Sequence * member =
    (const asebaros_msgs__srv__LoadScript_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Event__request(
  const void * untyped_member, size_t index)
{
  const asebaros_msgs__srv__LoadScript_Request__Sequence * member =
    (const asebaros_msgs__srv__LoadScript_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_function__LoadScript_Event__request(
  void * untyped_member, size_t index)
{
  asebaros_msgs__srv__LoadScript_Request__Sequence * member =
    (asebaros_msgs__srv__LoadScript_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__fetch_function__LoadScript_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const asebaros_msgs__srv__LoadScript_Request * item =
    ((const asebaros_msgs__srv__LoadScript_Request *)
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Event__request(untyped_member, index));
  asebaros_msgs__srv__LoadScript_Request * value =
    (asebaros_msgs__srv__LoadScript_Request *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__assign_function__LoadScript_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  asebaros_msgs__srv__LoadScript_Request * item =
    ((asebaros_msgs__srv__LoadScript_Request *)
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_function__LoadScript_Event__request(untyped_member, index));
  const asebaros_msgs__srv__LoadScript_Request * value =
    (const asebaros_msgs__srv__LoadScript_Request *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__resize_function__LoadScript_Event__request(
  void * untyped_member, size_t size)
{
  asebaros_msgs__srv__LoadScript_Request__Sequence * member =
    (asebaros_msgs__srv__LoadScript_Request__Sequence *)(untyped_member);
  asebaros_msgs__srv__LoadScript_Request__Sequence__fini(member);
  return asebaros_msgs__srv__LoadScript_Request__Sequence__init(member, size);
}

size_t asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__size_function__LoadScript_Event__response(
  const void * untyped_member)
{
  const asebaros_msgs__srv__LoadScript_Response__Sequence * member =
    (const asebaros_msgs__srv__LoadScript_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Event__response(
  const void * untyped_member, size_t index)
{
  const asebaros_msgs__srv__LoadScript_Response__Sequence * member =
    (const asebaros_msgs__srv__LoadScript_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_function__LoadScript_Event__response(
  void * untyped_member, size_t index)
{
  asebaros_msgs__srv__LoadScript_Response__Sequence * member =
    (asebaros_msgs__srv__LoadScript_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__fetch_function__LoadScript_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const asebaros_msgs__srv__LoadScript_Response * item =
    ((const asebaros_msgs__srv__LoadScript_Response *)
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Event__response(untyped_member, index));
  asebaros_msgs__srv__LoadScript_Response * value =
    (asebaros_msgs__srv__LoadScript_Response *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__assign_function__LoadScript_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  asebaros_msgs__srv__LoadScript_Response * item =
    ((asebaros_msgs__srv__LoadScript_Response *)
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_function__LoadScript_Event__response(untyped_member, index));
  const asebaros_msgs__srv__LoadScript_Response * value =
    (const asebaros_msgs__srv__LoadScript_Response *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__resize_function__LoadScript_Event__response(
  void * untyped_member, size_t size)
{
  asebaros_msgs__srv__LoadScript_Response__Sequence * member =
    (asebaros_msgs__srv__LoadScript_Response__Sequence *)(untyped_member);
  asebaros_msgs__srv__LoadScript_Response__Sequence__fini(member);
  return asebaros_msgs__srv__LoadScript_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__srv__LoadScript_Event, info),  // bytes offset in struct
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
    offsetof(asebaros_msgs__srv__LoadScript_Event, request),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__size_function__LoadScript_Event__request,  // size() function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Event__request,  // get_const(index) function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_function__LoadScript_Event__request,  // get(index) function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__fetch_function__LoadScript_Event__request,  // fetch(index, &value) function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__assign_function__LoadScript_Event__request,  // assign(index, value) function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__resize_function__LoadScript_Event__request  // resize(index) function pointer
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
    offsetof(asebaros_msgs__srv__LoadScript_Event, response),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__size_function__LoadScript_Event__response,  // size() function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_const_function__LoadScript_Event__response,  // get_const(index) function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__get_function__LoadScript_Event__response,  // get(index) function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__fetch_function__LoadScript_Event__response,  // fetch(index, &value) function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__assign_function__LoadScript_Event__response,  // assign(index, value) function pointer
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__resize_function__LoadScript_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_members = {
  "asebaros_msgs__srv",  // message namespace
  "LoadScript_Event",  // message name
  3,  // number of fields
  sizeof(asebaros_msgs__srv__LoadScript_Event),
  false,  // has_any_key_member_
  asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_member_array,  // message members
  asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_type_support_handle = {
  0,
  &asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__srv__LoadScript_Event__get_type_hash,
  &asebaros_msgs__srv__LoadScript_Event__get_type_description,
  &asebaros_msgs__srv__LoadScript_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Event)() {
  asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Request)();
  asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Response)();
  if (!asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "asebaros_msgs/srv/detail/load_script__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_service_members = {
  "asebaros_msgs__srv",  // service namespace
  "LoadScript",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_Request_message_type_support_handle,
  NULL,  // response message
  // asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_Response_message_type_support_handle
  NULL  // event_message
  // asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_Response_message_type_support_handle
};


static rosidl_service_type_support_t asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_service_type_support_handle = {
  0,
  &asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_service_members,
  get_service_typesupport_handle_function,
  &asebaros_msgs__srv__LoadScript_Request__rosidl_typesupport_introspection_c__LoadScript_Request_message_type_support_handle,
  &asebaros_msgs__srv__LoadScript_Response__rosidl_typesupport_introspection_c__LoadScript_Response_message_type_support_handle,
  &asebaros_msgs__srv__LoadScript_Event__rosidl_typesupport_introspection_c__LoadScript_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    asebaros_msgs,
    srv,
    LoadScript
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    asebaros_msgs,
    srv,
    LoadScript
  ),
  &asebaros_msgs__srv__LoadScript__get_type_hash,
  &asebaros_msgs__srv__LoadScript__get_type_description,
  &asebaros_msgs__srv__LoadScript__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript)(void) {
  if (!asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_service_type_support_handle.typesupport_identifier) {
    asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, srv, LoadScript_Event)()->data;
  }

  return &asebaros_msgs__srv__detail__load_script__rosidl_typesupport_introspection_c__LoadScript_service_type_support_handle;
}
