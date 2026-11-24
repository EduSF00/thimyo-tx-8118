// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from asebaros_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "asebaros_msgs/msg/detail/event__rosidl_typesupport_introspection_c.h"
#include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "asebaros_msgs/msg/detail/event__functions.h"
#include "asebaros_msgs/msg/detail/event__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__msg__Event__init(message_memory);
}

void asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_fini_function(void * message_memory)
{
  asebaros_msgs__msg__Event__fini(message_memory);
}

size_t asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__size_function__Event__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__get_const_function__Event__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__get_function__Event__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__fetch_function__Event__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__get_const_function__Event__data(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__assign_function__Event__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__get_function__Event__data(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__resize_function__Event__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__Event, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__Event, source),  // bytes offset in struct
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
    offsetof(asebaros_msgs__msg__Event, data),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__size_function__Event__data,  // size() function pointer
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__get_const_function__Event__data,  // get_const(index) function pointer
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__get_function__Event__data,  // get(index) function pointer
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__fetch_function__Event__data,  // fetch(index, &value) function pointer
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__assign_function__Event__data,  // assign(index, value) function pointer
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__resize_function__Event__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_members = {
  "asebaros_msgs__msg",  // message namespace
  "Event",  // message name
  3,  // number of fields
  sizeof(asebaros_msgs__msg__Event),
  false,  // has_any_key_member_
  asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array,  // message members
  asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_type_support_handle = {
  0,
  &asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__Event__get_type_hash,
  &asebaros_msgs__msg__Event__get_type_description,
  &asebaros_msgs__msg__Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, msg, Event)() {
  asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
