// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:msg/NodeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node_list.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__BUILDER_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/msg/detail/node_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeList_nodes
{
public:
  Init_NodeList_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::asebaros_msgs::msg::NodeList nodes(::asebaros_msgs::msg::NodeList::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::msg::NodeList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::msg::NodeList>()
{
  return asebaros_msgs::msg::builder::Init_NodeList_nodes();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__BUILDER_HPP_
