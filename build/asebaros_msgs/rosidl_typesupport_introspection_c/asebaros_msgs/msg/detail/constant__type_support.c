// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from asebaros_msgs:msg/Constant.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "asebaros_msgs/msg/detail/constant__rosidl_typesupport_introspection_c.h"
#include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "asebaros_msgs/msg/detail/constant__functions.h"
#include "asebaros_msgs/msg/detail/constant__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__msg__Constant__init(message_memory);
}

void asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_fini_function(void * message_memory)
{
  asebaros_msgs__msg__Constant__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__Constant, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__Constant, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_message_members = {
  "asebaros_msgs__msg",  // message namespace
  "Constant",  // message name
  2,  // number of fields
  sizeof(asebaros_msgs__msg__Constant),
  false,  // has_any_key_member_
  asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_message_member_array,  // message members
  asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_message_type_support_handle = {
  0,
  &asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__Constant__get_type_hash,
  &asebaros_msgs__msg__Constant__get_type_description,
  &asebaros_msgs__msg__Constant__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, msg, Constant)() {
  if (!asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__msg__Constant__rosidl_typesupport_introspection_c__Constant_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
