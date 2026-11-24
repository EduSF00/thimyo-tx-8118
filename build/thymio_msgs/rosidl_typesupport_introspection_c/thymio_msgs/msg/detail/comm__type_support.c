// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "thymio_msgs/msg/detail/comm__rosidl_typesupport_introspection_c.h"
#include "thymio_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "thymio_msgs/msg/detail/comm__functions.h"
#include "thymio_msgs/msg/detail/comm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  thymio_msgs__msg__Comm__init(message_memory);
}

void thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_fini_function(void * message_memory)
{
  thymio_msgs__msg__Comm__fini(message_memory);
}

size_t thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__size_function__Comm__payloads(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_const_function__Comm__payloads(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_function__Comm__payloads(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__fetch_function__Comm__payloads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_const_function__Comm__payloads(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__assign_function__Comm__payloads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_function__Comm__payloads(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__size_function__Comm__intensities(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_const_function__Comm__intensities(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_function__Comm__intensities(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__fetch_function__Comm__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_const_function__Comm__intensities(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__assign_function__Comm__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_function__Comm__intensities(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_message_member_array[3] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__Comm, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payloads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__Comm, payloads),  // bytes offset in struct
    NULL,  // default value
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__size_function__Comm__payloads,  // size() function pointer
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_const_function__Comm__payloads,  // get_const(index) function pointer
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_function__Comm__payloads,  // get(index) function pointer
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__fetch_function__Comm__payloads,  // fetch(index, &value) function pointer
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__assign_function__Comm__payloads,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intensities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(thymio_msgs__msg__Comm, intensities),  // bytes offset in struct
    NULL,  // default value
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__size_function__Comm__intensities,  // size() function pointer
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_const_function__Comm__intensities,  // get_const(index) function pointer
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__get_function__Comm__intensities,  // get(index) function pointer
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__fetch_function__Comm__intensities,  // fetch(index, &value) function pointer
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__assign_function__Comm__intensities,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_message_members = {
  "thymio_msgs__msg",  // message namespace
  "Comm",  // message name
  3,  // number of fields
  sizeof(thymio_msgs__msg__Comm),
  false,  // has_any_key_member_
  thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_message_member_array,  // message members
  thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_init_function,  // function to initialize message memory (memory has to be allocated)
  thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_message_type_support_handle = {
  0,
  &thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_message_members,
  get_message_typesupport_handle_function,
  &thymio_msgs__msg__Comm__get_type_hash,
  &thymio_msgs__msg__Comm__get_type_description,
  &thymio_msgs__msg__Comm__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_thymio_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, thymio_msgs, msg, Comm)() {
  if (!thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_message_type_support_handle.typesupport_identifier) {
    thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &thymio_msgs__msg__Comm__rosidl_typesupport_introspection_c__Comm_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
