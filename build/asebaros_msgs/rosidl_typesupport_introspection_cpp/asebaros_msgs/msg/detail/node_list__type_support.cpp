// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from asebaros_msgs:msg/NodeList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "asebaros_msgs/msg/detail/node_list__functions.h"
#include "asebaros_msgs/msg/detail/node_list__struct.hpp"
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

void NodeList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) asebaros_msgs::msg::NodeList(_init);
}

void NodeList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<asebaros_msgs::msg::NodeList *>(message_memory);
  typed_message->~NodeList();
}

size_t size_function__NodeList__nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<asebaros_msgs::msg::Node> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeList__nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<asebaros_msgs::msg::Node> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeList__nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<asebaros_msgs::msg::Node> *>(untyped_member);
  return &member[index];
}

void fetch_function__NodeList__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const asebaros_msgs::msg::Node *>(
    get_const_function__NodeList__nodes(untyped_member, index));
  auto & value = *reinterpret_cast<asebaros_msgs::msg::Node *>(untyped_value);
  value = item;
}

void assign_function__NodeList__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<asebaros_msgs::msg::Node *>(
    get_function__NodeList__nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const asebaros_msgs::msg::Node *>(untyped_value);
  item = value;
}

void resize_function__NodeList__nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<asebaros_msgs::msg::Node> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeList_message_member_array[1] = {
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<asebaros_msgs::msg::Node>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::NodeList, nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeList__nodes,  // size() function pointer
    get_const_function__NodeList__nodes,  // get_const(index) function pointer
    get_function__NodeList__nodes,  // get(index) function pointer
    fetch_function__NodeList__nodes,  // fetch(index, &value) function pointer
    assign_function__NodeList__nodes,  // assign(index, value) function pointer
    resize_function__NodeList__nodes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeList_message_members = {
  "asebaros_msgs::msg",  // message namespace
  "NodeList",  // message name
  1,  // number of fields
  sizeof(asebaros_msgs::msg::NodeList),
  false,  // has_any_key_member_
  NodeList_message_member_array,  // message members
  NodeList_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeList_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__NodeList__get_type_hash,
  &asebaros_msgs__msg__NodeList__get_type_description,
  &asebaros_msgs__msg__NodeList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace asebaros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<asebaros_msgs::msg::NodeList>()
{
  return &::asebaros_msgs::msg::rosidl_typesupport_introspection_cpp::NodeList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, asebaros_msgs, msg, NodeList)() {
  return &::asebaros_msgs::msg::rosidl_typesupport_introspection_cpp::NodeList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
