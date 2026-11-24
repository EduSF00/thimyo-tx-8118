// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from asebaros_msgs:msg/NodeDescription.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "asebaros_msgs/msg/detail/node_description__rosidl_typesupport_introspection_c.h"
#include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "asebaros_msgs/msg/detail/node_description__functions.h"
#include "asebaros_msgs/msg/detail/node_description__struct.h"


// Include directives for member types
// Member `name`
// Member `events`
// Member `variables`
#include "rosidl_runtime_c/string_functions.h"
// Member `constants`
#include "asebaros_msgs/msg/constant.h"
// Member `constants`
#include "asebaros_msgs/msg/detail/constant__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__msg__NodeDescription__init(message_memory);
}

void asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_fini_function(void * message_memory)
{
  asebaros_msgs__msg__NodeDescription__fini(message_memory);
}

size_t asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__size_function__NodeDescription__constants(
  const void * untyped_member)
{
  const asebaros_msgs__msg__Constant__Sequence * member =
    (const asebaros_msgs__msg__Constant__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__constants(
  const void * untyped_member, size_t index)
{
  const asebaros_msgs__msg__Constant__Sequence * member =
    (const asebaros_msgs__msg__Constant__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__constants(
  void * untyped_member, size_t index)
{
  asebaros_msgs__msg__Constant__Sequence * member =
    (asebaros_msgs__msg__Constant__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__fetch_function__NodeDescription__constants(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const asebaros_msgs__msg__Constant * item =
    ((const asebaros_msgs__msg__Constant *)
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__constants(untyped_member, index));
  asebaros_msgs__msg__Constant * value =
    (asebaros_msgs__msg__Constant *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__assign_function__NodeDescription__constants(
  void * untyped_member, size_t index, const void * untyped_value)
{
  asebaros_msgs__msg__Constant * item =
    ((asebaros_msgs__msg__Constant *)
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__constants(untyped_member, index));
  const asebaros_msgs__msg__Constant * value =
    (const asebaros_msgs__msg__Constant *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__resize_function__NodeDescription__constants(
  void * untyped_member, size_t size)
{
  asebaros_msgs__msg__Constant__Sequence * member =
    (asebaros_msgs__msg__Constant__Sequence *)(untyped_member);
  asebaros_msgs__msg__Constant__Sequence__fini(member);
  return asebaros_msgs__msg__Constant__Sequence__init(member, size);
}

size_t asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__size_function__NodeDescription__events(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__events(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__events(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__fetch_function__NodeDescription__events(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__events(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__assign_function__NodeDescription__events(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__events(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__resize_function__NodeDescription__events(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__size_function__NodeDescription__variables(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__variables(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__variables(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__fetch_function__NodeDescription__variables(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__variables(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__assign_function__NodeDescription__variables(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__variables(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__resize_function__NodeDescription__variables(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__NodeDescription, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__NodeDescription, name),  // bytes offset in struct
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
    offsetof(asebaros_msgs__msg__NodeDescription, constants),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__size_function__NodeDescription__constants,  // size() function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__constants,  // get_const(index) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__constants,  // get(index) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__fetch_function__NodeDescription__constants,  // fetch(index, &value) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__assign_function__NodeDescription__constants,  // assign(index, value) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__resize_function__NodeDescription__constants  // resize(index) function pointer
  },
  {
    "events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__NodeDescription, events),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__size_function__NodeDescription__events,  // size() function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__events,  // get_const(index) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__events,  // get(index) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__fetch_function__NodeDescription__events,  // fetch(index, &value) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__assign_function__NodeDescription__events,  // assign(index, value) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__resize_function__NodeDescription__events  // resize(index) function pointer
  },
  {
    "variables",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__NodeDescription, variables),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__size_function__NodeDescription__variables,  // size() function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_const_function__NodeDescription__variables,  // get_const(index) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__get_function__NodeDescription__variables,  // get(index) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__fetch_function__NodeDescription__variables,  // fetch(index, &value) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__assign_function__NodeDescription__variables,  // assign(index, value) function pointer
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__resize_function__NodeDescription__variables  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_members = {
  "asebaros_msgs__msg",  // message namespace
  "NodeDescription",  // message name
  5,  // number of fields
  sizeof(asebaros_msgs__msg__NodeDescription),
  false,  // has_any_key_member_
  asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_member_array,  // message members
  asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_type_support_handle = {
  0,
  &asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__NodeDescription__get_type_hash,
  &asebaros_msgs__msg__NodeDescription__get_type_description,
  &asebaros_msgs__msg__NodeDescription__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, msg, NodeDescription)() {
  asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, msg, Constant)();
  if (!asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__msg__NodeDescription__rosidl_typesupport_introspection_c__NodeDescription_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
