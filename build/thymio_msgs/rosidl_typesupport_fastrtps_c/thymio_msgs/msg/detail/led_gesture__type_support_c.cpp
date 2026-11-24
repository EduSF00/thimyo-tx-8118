// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice
#include "thymio_msgs/msg/detail/led_gesture__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "thymio_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "thymio_msgs/msg/detail/led_gesture__struct.h"
#include "thymio_msgs/msg/detail/led_gesture__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // mask
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // mask

// forward declare type support functions


using _LedGesture__ros_msg_type = thymio_msgs__msg__LedGesture;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio_msgs
bool cdr_serialize_thymio_msgs__msg__LedGesture(
  const thymio_msgs__msg__LedGesture * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: gesture
  {
    cdr << ros_message->gesture;
  }

  // Field name: wave
  {
    cdr << ros_message->wave;
  }

  // Field name: leds
  {
    cdr << ros_message->leds;
  }

  // Field name: period
  {
    cdr << ros_message->period;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: mirror
  {
    cdr << ros_message->mirror;
  }

  // Field name: mask
  {
    size_t size = ros_message->mask.size;
    auto array_ptr = ros_message->mask.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio_msgs
bool cdr_deserialize_thymio_msgs__msg__LedGesture(
  eprosima::fastcdr::Cdr & cdr,
  thymio_msgs__msg__LedGesture * ros_message)
{
  // Field name: gesture
  {
    cdr >> ros_message->gesture;
  }

  // Field name: wave
  {
    cdr >> ros_message->wave;
  }

  // Field name: leds
  {
    cdr >> ros_message->leds;
  }

  // Field name: period
  {
    cdr >> ros_message->period;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: mirror
  {
    cdr >> ros_message->mirror;
  }

  // Field name: mask
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

    if (ros_message->mask.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->mask);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->mask, size)) {
      fprintf(stderr, "failed to create array for field 'mask'");
      return false;
    }
    auto array_ptr = ros_message->mask.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio_msgs
size_t get_serialized_size_thymio_msgs__msg__LedGesture(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedGesture__ros_msg_type * ros_message = static_cast<const _LedGesture__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: gesture
  {
    size_t item_size = sizeof(ros_message->gesture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wave
  {
    size_t item_size = sizeof(ros_message->wave);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: leds
  {
    size_t item_size = sizeof(ros_message->leds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: period
  {
    size_t item_size = sizeof(ros_message->period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mirror
  {
    size_t item_size = sizeof(ros_message->mirror);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mask
  {
    size_t array_size = ros_message->mask.size;
    auto array_ptr = ros_message->mask.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio_msgs
size_t max_serialized_size_thymio_msgs__msg__LedGesture(
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

  // Field name: gesture
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wave
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: leds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: period
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: mirror
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mask
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = thymio_msgs__msg__LedGesture;
    is_plain =
      (
      offsetof(DataType, mask) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio_msgs
bool cdr_serialize_key_thymio_msgs__msg__LedGesture(
  const thymio_msgs__msg__LedGesture * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: gesture
  {
    cdr << ros_message->gesture;
  }

  // Field name: wave
  {
    cdr << ros_message->wave;
  }

  // Field name: leds
  {
    cdr << ros_message->leds;
  }

  // Field name: period
  {
    cdr << ros_message->period;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: mirror
  {
    cdr << ros_message->mirror;
  }

  // Field name: mask
  {
    size_t size = ros_message->mask.size;
    auto array_ptr = ros_message->mask.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio_msgs
size_t get_serialized_size_key_thymio_msgs__msg__LedGesture(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedGesture__ros_msg_type * ros_message = static_cast<const _LedGesture__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: gesture
  {
    size_t item_size = sizeof(ros_message->gesture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: wave
  {
    size_t item_size = sizeof(ros_message->wave);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: leds
  {
    size_t item_size = sizeof(ros_message->leds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: period
  {
    size_t item_size = sizeof(ros_message->period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mirror
  {
    size_t item_size = sizeof(ros_message->mirror);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mask
  {
    size_t array_size = ros_message->mask.size;
    auto array_ptr = ros_message->mask.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio_msgs
size_t max_serialized_size_key_thymio_msgs__msg__LedGesture(
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
  // Field name: gesture
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: wave
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: leds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: period
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: mirror
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mask
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = thymio_msgs__msg__LedGesture;
    is_plain =
      (
      offsetof(DataType, mask) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LedGesture__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const thymio_msgs__msg__LedGesture * ros_message = static_cast<const thymio_msgs__msg__LedGesture *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_thymio_msgs__msg__LedGesture(ros_message, cdr);
}

static bool _LedGesture__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  thymio_msgs__msg__LedGesture * ros_message = static_cast<thymio_msgs__msg__LedGesture *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_thymio_msgs__msg__LedGesture(cdr, ros_message);
}

static uint32_t _LedGesture__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_thymio_msgs__msg__LedGesture(
      untyped_ros_message, 0));
}

static size_t _LedGesture__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_thymio_msgs__msg__LedGesture(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LedGesture = {
  "thymio_msgs::msg",
  "LedGesture",
  _LedGesture__cdr_serialize,
  _LedGesture__cdr_deserialize,
  _LedGesture__get_serialized_size,
  _LedGesture__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LedGesture__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LedGesture,
  get_message_typesupport_handle_function,
  &thymio_msgs__msg__LedGesture__get_type_hash,
  &thymio_msgs__msg__LedGesture__get_type_description,
  &thymio_msgs__msg__LedGesture__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, thymio_msgs, msg, LedGesture)() {
  return &_LedGesture__type_support;
}

#if defined(__cplusplus)
}
#endif
