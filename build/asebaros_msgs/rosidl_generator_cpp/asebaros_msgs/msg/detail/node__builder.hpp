// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:msg/Node.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace msg
{

namespace builder
{

class Init_Node_connected
{
public:
  explicit Init_Node_connected(::asebaros_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::msg::Node connected(::asebaros_msgs::msg::Node::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::msg::Node msg_;
};

class Init_Node_ignored
{
public:
  explicit Init_Node_ignored(::asebaros_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_connected ignored(::asebaros_msgs::msg::Node::_ignored_type arg)
  {
    msg_.ignored = std::move(arg);
    return Init_Node_connected(msg_);
  }

private:
  ::asebaros_msgs::msg::Node msg_;
};

class Init_Node_running
{
public:
  explicit Init_Node_running(::asebaros_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_ignored running(::asebaros_msgs::msg::Node::_running_type arg)
  {
    msg_.running = std::move(arg);
    return Init_Node_ignored(msg_);
  }

private:
  ::asebaros_msgs::msg::Node msg_;
};

class Init_Node_name_space
{
public:
  explicit Init_Node_name_space(::asebaros_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_running name_space(::asebaros_msgs::msg::Node::_name_space_type arg)
  {
    msg_.name_space = std::move(arg);
    return Init_Node_running(msg_);
  }

private:
  ::asebaros_msgs::msg::Node msg_;
};

class Init_Node_name
{
public:
  explicit Init_Node_name(::asebaros_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_name_space name(::asebaros_msgs::msg::Node::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Node_name_space(msg_);
  }

private:
  ::asebaros_msgs::msg::Node msg_;
};

class Init_Node_id
{
public:
  Init_Node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_name id(::asebaros_msgs::msg::Node::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Node_name(msg_);
  }

private:
  ::asebaros_msgs::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::msg::Node>()
{
  return asebaros_msgs::msg::builder::Init_Node_id();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
