// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from asebaros_msgs:msg/Event.idl
// generated code does not contain a copyright notice
#ifndef ASEBAROS_MSGS__MSG__DETAIL__EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ASEBAROS_MSGS__MSG__DETAIL__EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "asebaros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "asebaros_msgs/msg/detail/event__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
bool cdr_serialize_asebaros_msgs__msg__Event(
  const asebaros_msgs__msg__Event * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
bool cdr_deserialize_asebaros_msgs__msg__Event(
  eprosima::fastcdr::Cdr &,
  asebaros_msgs__msg__Event * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
size_t get_serialized_size_asebaros_msgs__msg__Event(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
size_t max_serialized_size_asebaros_msgs__msg__Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
bool cdr_serialize_key_asebaros_msgs__msg__Event(
  const asebaros_msgs__msg__Event * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
size_t get_serialized_size_key_asebaros_msgs__msg__Event(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
size_t max_serialized_size_key_asebaros_msgs__msg__Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_asebaros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, asebaros_msgs, msg, Event)();

#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__MSG__DETAIL__EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
