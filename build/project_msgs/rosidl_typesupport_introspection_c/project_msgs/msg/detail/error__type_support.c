// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from project_msgs:msg/Error.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "project_msgs/msg/detail/error__rosidl_typesupport_introspection_c.h"
#include "project_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "project_msgs/msg/detail/error__functions.h"
#include "project_msgs/msg/detail/error__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project_msgs__msg__Error__init(message_memory);
}

void project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_fini_function(void * message_memory)
{
  project_msgs__msg__Error__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project_msgs__msg__Error, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project_msgs__msg__Error, error_linear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project_msgs__msg__Error, error_angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_angular_sen",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project_msgs__msg__Error, error_angular_sen),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_angular_cos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project_msgs__msg__Error, error_angular_cos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_members = {
  "project_msgs__msg",  // message namespace
  "Error",  // message name
  5,  // number of fields
  sizeof(project_msgs__msg__Error),
  false,  // has_any_key_member_
  project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_member_array,  // message members
  project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_init_function,  // function to initialize message memory (memory has to be allocated)
  project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_type_support_handle = {
  0,
  &project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_members,
  get_message_typesupport_handle_function,
  &project_msgs__msg__Error__get_type_hash,
  &project_msgs__msg__Error__get_type_description,
  &project_msgs__msg__Error__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project_msgs, msg, Error)() {
  project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_type_support_handle.typesupport_identifier) {
    project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &project_msgs__msg__Error__rosidl_typesupport_introspection_c__Error_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
