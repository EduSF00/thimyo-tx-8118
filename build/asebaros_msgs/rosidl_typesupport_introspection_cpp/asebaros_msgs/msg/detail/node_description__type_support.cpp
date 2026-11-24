// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from asebaros_msgs:msg/NodeDescription.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "asebaros_msgs/msg/detail/node_description__functions.h"
#include "asebaros_msgs/msg/detail/node_description__struct.hpp"
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

void NodeDescription_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) asebaros_msgs::msg::NodeDescription(_init);
}

void NodeDescription_fini_function(void * message_memory)
{
  auto typed_message = static_cast<asebaros_msgs::msg::NodeDescription *>(message_memory);
  typed_message->~NodeDescription();
}

size_t size_function__NodeDescription__constants(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<asebaros_msgs::msg::Constant> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeDescription__constants(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<asebaros_msgs::msg::Constant> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeDescription__constants(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<asebaros_msgs::msg::Constant> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeDescription__constants(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const asebaros_msgs::msg::Constant *>(
    get_const_function__NodeDescription__constants(untyped_member, index));
  auto & value = *reinterpret_cast<asebaros_msgs::msg::Constant *>(untyped_value);
  value = item;
}

void assign_function__NodeDescription__constants(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<asebaros_msgs::msg::Constant *>(
    get_function__NodeDescription__constants(untyped_member, index));
  const auto & value = *reinterpret_cast<const asebaros_msgs::msg::Constant *>(untyped_value);
  item = value;
}

void resize_function__NodeDescription__constants(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<asebaros_msgs::msg::Constant> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeDescription__events(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeDescription__events(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeDescription__events(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeDescription__events(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__NodeDescription__events(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__NodeDescription__events(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__NodeDescription__events(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__NodeDescription__events(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeDescription__variables(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeDescription__variables(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeDescription__variables(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeDescription__variables(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__NodeDescription__variables(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__NodeDescription__variables(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__NodeDescription__variables(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__NodeDescription__variables(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeDescription_message_member_array[5] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::NodeDescription, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::NodeDescription, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "constants",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<asebaros_msgs::msg::Constant>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::NodeDescription, constants),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeDescription__constants,  // size() function pointer
    get_const_function__NodeDescription__constants,  // get_const(index) function pointer
    get_function__NodeDescription__constants,  // get(index) function pointer
    fetch_function__NodeDescription__constants,  // fetch(index, &value) function pointer
    assign_function__NodeDescription__constants,  // assign(index, value) function pointer
    resize_function__NodeDescription__constants  // resize(index) function pointer
  },
  {
    "events",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::NodeDescription, events),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeDescription__events,  // size() function pointer
    get_const_function__NodeDescription__events,  // get_const(index) function pointer
    get_function__NodeDescription__events,  // get(index) function pointer
    fetch_function__NodeDescription__events,  // fetch(index, &value) function pointer
    assign_function__NodeDescription__events,  // assign(index, value) function pointer
    resize_function__NodeDescription__events  // resize(index) function pointer
  },
  {
    "variables",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::NodeDescription, variables),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeDescription__variables,  // size() function pointer
    get_const_function__NodeDescription__variables,  // get_const(index) function pointer
    get_function__NodeDescription__variables,  // get(index) function pointer
    fetch_function__NodeDescription__variables,  // fetch(index, &value) function pointer
    assign_function__NodeDescription__variables,  // assign(index, value) function pointer
    resize_function__NodeDescription__variables  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeDescription_message_members = {
  "asebaros_msgs::msg",  // message namespace
  "NodeDescription",  // message name
  5,  // number of fields
  sizeof(asebaros_msgs::msg::NodeDescription),
  false,  // has_any_key_member_
  NodeDescription_message_member_array,  // message members
  NodeDescription_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeDescription_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeDescription_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeDescription_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__NodeDescription__get_type_hash,
  &asebaros_msgs__msg__NodeDescription__get_type_description,
  &asebaros_msgs__msg__NodeDescription__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace asebaros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<asebaros_msgs::msg::NodeDescription>()
{
  return &::asebaros_msgs::msg::rosidl_typesupport_introspection_cpp::NodeDescription_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, asebaros_msgs, msg, NodeDescription)() {
  return &::asebaros_msgs::msg::rosidl_typesupport_introspection_cpp::NodeDescription_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
