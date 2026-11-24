// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from asebaros_msgs:msg/AnonymousEvent.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "asebaros_msgs/msg/detail/anonymous_event__functions.h"
#include "asebaros_msgs/msg/detail/anonymous_event__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace asebaros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AnonymousEvent_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) asebaros_msgs::msg::AnonymousEvent(_init);
}

void AnonymousEvent_fini_function(void * message_memory)
{
  auto typed_message = static_cast<asebaros_msgs::msg::AnonymousEvent *>(message_memory);
  typed_message->~AnonymousEvent();
}

size_t size_function__AnonymousEvent__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AnonymousEvent__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AnonymousEvent__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AnonymousEvent__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__AnonymousEvent__data(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__AnonymousEvent__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__AnonymousEvent__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__AnonymousEvent__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AnonymousEvent_message_member_array[4] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::AnonymousEvent, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::AnonymousEvent, source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::AnonymousEvent, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::AnonymousEvent, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AnonymousEvent__data,  // size() function pointer
    get_const_function__AnonymousEvent__data,  // get_const(index) function pointer
    get_function__AnonymousEvent__data,  // get(index) function pointer
    fetch_function__AnonymousEvent__data,  // fetch(index, &value) function pointer
    assign_function__AnonymousEvent__data,  // assign(index, value) function pointer
    resize_function__AnonymousEvent__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AnonymousEvent_message_members = {
  "asebaros_msgs::msg",  // message namespace
  "AnonymousEvent",  // message name
  4,  // number of fields
  sizeof(asebaros_msgs::msg::AnonymousEvent),
  false,  // has_any_key_member_
  AnonymousEvent_message_member_array,  // message members
  AnonymousEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  AnonymousEvent_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AnonymousEvent_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AnonymousEvent_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__AnonymousEvent__get_type_hash,
  &asebaros_msgs__msg__AnonymousEvent__get_type_description,
  &asebaros_msgs__msg__AnonymousEvent__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace asebaros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<asebaros_msgs::msg::AnonymousEvent>()
{
  return &::asebaros_msgs::msg::rosidl_typesupport_introspection_cpp::AnonymousEvent_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, asebaros_msgs, msg, AnonymousEvent)() {
  return &::asebaros_msgs::msg::rosidl_typesupport_introspection_cpp::AnonymousEvent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
