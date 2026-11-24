// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from asebaros_msgs:msg/NodeList.idl
// generated code does not contain a copyright notice
#include "asebaros_msgs/msg/detail/node_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "asebaros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "asebaros_msgs/msg/detail/node_list__struct.h"
#include "asebaros_msgs/msg/detail/node_list__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "asebaros_msgs/msg/detail/node__functions.h"  // nodes

// forward declare type support functions

bool cdr_serialize_asebaros_msgs__msg__Node(
  const asebaros_msgs__msg__Node * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_asebaros_msgs__msg__Node(
  eprosima::fastcdr::Cdr & cdr,
  asebaros_msgs__msg__Node * ros_message);

size_t get_serialized_size_asebaros_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_asebaros_msgs__msg__Node(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_asebaros_msgs__msg__Node(
  const asebaros_msgs__msg__Node * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_asebaros_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_asebaros_msgs__msg__Node(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, asebaros_msgs, msg, Node)();


using _NodeList__ros_msg_type = asebaros_msgs__msg__NodeList;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
bool cdr_serialize_asebaros_msgs__msg__NodeList(
  const asebaros_msgs__msg__NodeList * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: nodes
  {
    size_t size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_asebaros_msgs__msg__Node(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
bool cdr_deserialize_asebaros_msgs__msg__NodeList(
  eprosima::fastcdr::Cdr & cdr,
  asebaros_msgs__msg__NodeList * ros_message)
{
  // Field name: nodes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->nodes.data) {
      asebaros_msgs__msg__Node__Sequence__fini(&ros_message->nodes);
    }
    if (!asebaros_msgs__msg__Node__Sequence__init(&ros_message->nodes, size)) {
      fprintf(stderr, "failed to create array for field 'nodes'");
      return false;
    }
    auto array_ptr = ros_message->nodes.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_asebaros_msgs__msg__Node(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
size_t get_serialized_size_asebaros_msgs__msg__NodeList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeList__ros_msg_type * ros_message = static_cast<const _NodeList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: nodes
  {
    size_t array_size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_asebaros_msgs__msg__Node(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
size_t max_serialized_size_asebaros_msgs__msg__NodeList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: nodes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_asebaros_msgs__msg__Node(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = asebaros_msgs__msg__NodeList;
    is_plain =
      (
      offsetof(DataType, nodes) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
bool cdr_serialize_key_asebaros_msgs__msg__NodeList(
  const asebaros_msgs__msg__NodeList * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: nodes
  {
    size_t size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_asebaros_msgs__msg__Node(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
size_t get_serialized_size_key_asebaros_msgs__msg__NodeList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeList__ros_msg_type * ros_message = static_cast<const _NodeList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: nodes
  {
    size_t array_size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_asebaros_msgs__msg__Node(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
size_t max_serialized_size_key_asebaros_msgs__msg__NodeList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: nodes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_asebaros_msgs__msg__Node(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = asebaros_msgs__msg__NodeList;
    is_plain =
      (
      offsetof(DataType, nodes) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NodeList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const asebaros_msgs__msg__NodeList * ros_message = static_cast<const asebaros_msgs__msg__NodeList *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_asebaros_msgs__msg__NodeList(ros_message, cdr);
}

static bool _NodeList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  asebaros_msgs__msg__NodeList * ros_message = static_cast<asebaros_msgs__msg__NodeList *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_asebaros_msgs__msg__NodeList(cdr, ros_message);
}

static uint32_t _NodeList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_asebaros_msgs__msg__NodeList(
      untyped_ros_message, 0));
}

static size_t _NodeList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_asebaros_msgs__msg__NodeList(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NodeList = {
  "asebaros_msgs::msg",
  "NodeList",
  _NodeList__cdr_serialize,
  _NodeList__cdr_deserialize,
  _NodeList__get_serialized_size,
  _NodeList__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NodeList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeList,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__NodeList__get_type_hash,
  &asebaros_msgs__msg__NodeList__get_type_description,
  &asebaros_msgs__msg__NodeList__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, asebaros_msgs, msg, NodeList)() {
  return &_NodeList__type_support;
}

#if defined(__cplusplus)
}
#endif
