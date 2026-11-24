// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "thymio_msgs/msg/detail/led__rosidl_typesupport_introspection_c.h"
#include "thymio_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "thymio_msgs/msg/detail/led__functions.h"
#include "thymio_msgs/msg/detail/led__struct.h"


// Include directives for member types
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  thymio_msgs__msg__Led__init(message_memory);
}

void thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_fini_function(void * message_memory)
{
  thymio_msgs__msg__Led__fini(message_memory);
}

size_t thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__size_function__Led__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__get_const_function__Led__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__get_function__Led__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__fetch_function__Led__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__get_const_function__Led__values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__assign_function__Led__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__get_function__Led__values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__resize_function__Led__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__Led, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__Led, values),  // bytes offset in struct
    NULL,  // default value
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__size_function__Led__values,  // size() function pointer
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__get_const_function__Led__values,  // get_const(index) function pointer
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__get_function__Led__values,  // get(index) function pointer
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__fetch_function__Led__values,  // fetch(index, &value) function pointer
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__assign_function__Led__values,  // assign(index, value) function pointer
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__resize_function__Led__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_message_members = {
  "thymio_msgs__msg",  // message namespace
  "Led",  // message name
  2,  // number of fields
  sizeof(thymio_msgs__msg__Led),
  false,  // has_any_key_member_
  thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_message_member_array,  // message members
  thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_init_function,  // function to initialize message memory (memory has to be allocated)
  thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_message_type_support_handle = {
  0,
  &thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_message_members,
  get_message_typesupport_handle_function,
  &thymio_msgs__msg__Led__get_type_hash,
  &thymio_msgs__msg__Led__get_type_description,
  &thymio_msgs__msg__Led__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_thymio_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, thymio_msgs, msg, Led)() {
  if (!thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_message_type_support_handle.typesupport_identifier) {
    thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &thymio_msgs__msg__Led__rosidl_typesupport_introspection_c__Led_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
