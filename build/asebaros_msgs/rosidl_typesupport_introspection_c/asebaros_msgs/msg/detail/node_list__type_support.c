// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from asebaros_msgs:msg/NodeList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "asebaros_msgs/msg/detail/node_list__rosidl_typesupport_introspection_c.h"
#include "asebaros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "asebaros_msgs/msg/detail/node_list__functions.h"
#include "asebaros_msgs/msg/detail/node_list__struct.h"


// Include directives for member types
// Member `nodes`
#include "asebaros_msgs/msg/node.h"
// Member `nodes`
#include "asebaros_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  asebaros_msgs__msg__NodeList__init(message_memory);
}

void asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_fini_function(void * message_memory)
{
  asebaros_msgs__msg__NodeList__fini(message_memory);
}

size_t asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__size_function__NodeList__nodes(
  const void * untyped_member)
{
  const asebaros_msgs__msg__Node__Sequence * member =
    (const asebaros_msgs__msg__Node__Sequence *)(untyped_member);
  return member->size;
}

const void * asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__get_const_function__NodeList__nodes(
  const void * untyped_member, size_t index)
{
  const asebaros_msgs__msg__Node__Sequence * member =
    (const asebaros_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void * asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__get_function__NodeList__nodes(
  void * untyped_member, size_t index)
{
  asebaros_msgs__msg__Node__Sequence * member =
    (asebaros_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__fetch_function__NodeList__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const asebaros_msgs__msg__Node * item =
    ((const asebaros_msgs__msg__Node *)
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__get_const_function__NodeList__nodes(untyped_member, index));
  asebaros_msgs__msg__Node * value =
    (asebaros_msgs__msg__Node *)(untyped_value);
  *value = *item;
}

void asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__assign_function__NodeList__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  asebaros_msgs__msg__Node * item =
    ((asebaros_msgs__msg__Node *)
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__get_function__NodeList__nodes(untyped_member, index));
  const asebaros_msgs__msg__Node * value =
    (const asebaros_msgs__msg__Node *)(untyped_value);
  *item = *value;
}

bool asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__resize_function__NodeList__nodes(
  void * untyped_member, size_t size)
{
  asebaros_msgs__msg__Node__Sequence * member =
    (asebaros_msgs__msg__Node__Sequence *)(untyped_member);
  asebaros_msgs__msg__Node__Sequence__fini(member);
  return asebaros_msgs__msg__Node__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_member_array[1] = {
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs__msg__NodeList, nodes),  // bytes offset in struct
    NULL,  // default value
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__size_function__NodeList__nodes,  // size() function pointer
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__get_const_function__NodeList__nodes,  // get_const(index) function pointer
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__get_function__NodeList__nodes,  // get(index) function pointer
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__fetch_function__NodeList__nodes,  // fetch(index, &value) function pointer
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__assign_function__NodeList__nodes,  // assign(index, value) function pointer
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__resize_function__NodeList__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_members = {
  "asebaros_msgs__msg",  // message namespace
  "NodeList",  // message name
  1,  // number of fields
  sizeof(asebaros_msgs__msg__NodeList),
  false,  // has_any_key_member_
  asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_member_array,  // message members
  asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_init_function,  // function to initialize message memory (memory has to be allocated)
  asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_type_support_handle = {
  0,
  &asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__NodeList__get_type_hash,
  &asebaros_msgs__msg__NodeList__get_type_description,
  &asebaros_msgs__msg__NodeList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, msg, NodeList)() {
  asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, asebaros_msgs, msg, Node)();
  if (!asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_type_support_handle.typesupport_identifier) {
    asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &asebaros_msgs__msg__NodeList__rosidl_typesupport_introspection_c__NodeList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
