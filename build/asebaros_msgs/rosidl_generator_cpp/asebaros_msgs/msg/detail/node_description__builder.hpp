// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:msg/NodeDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node_description.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__BUILDER_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/msg/detail/node_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeDescription_variables
{
public:
  explicit Init_NodeDescription_variables(::asebaros_msgs::msg::NodeDescription & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::msg::NodeDescription variables(::asebaros_msgs::msg::NodeDescription::_variables_type arg)
  {
    msg_.variables = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::msg::NodeDescription msg_;
};

class Init_NodeDescription_events
{
public:
  explicit Init_NodeDescription_events(::asebaros_msgs::msg::NodeDescription & msg)
  : msg_(msg)
  {}
  Init_NodeDescription_variables events(::asebaros_msgs::msg::NodeDescription::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_NodeDescription_variables(msg_);
  }

private:
  ::asebaros_msgs::msg::NodeDescription msg_;
};

class Init_NodeDescription_constants
{
public:
  explicit Init_NodeDescription_constants(::asebaros_msgs::msg::NodeDescription & msg)
  : msg_(msg)
  {}
  Init_NodeDescription_events constants(::asebaros_msgs::msg::NodeDescription::_constants_type arg)
  {
    msg_.constants = std::move(arg);
    return Init_NodeDescription_events(msg_);
  }

private:
  ::asebaros_msgs::msg::NodeDescription msg_;
};

class Init_NodeDescription_name
{
public:
  explicit Init_NodeDescription_name(::asebaros_msgs::msg::NodeDescription & msg)
  : msg_(msg)
  {}
  Init_NodeDescription_constants name(::asebaros_msgs::msg::NodeDescription::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_NodeDescription_constants(msg_);
  }

private:
  ::asebaros_msgs::msg::NodeDescription msg_;
};

class Init_NodeDescription_id
{
public:
  Init_NodeDescription_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeDescription_name id(::asebaros_msgs::msg::NodeDescription::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NodeDescription_name(msg_);
  }

private:
  ::asebaros_msgs::msg::NodeDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::msg::NodeDescription>()
{
  return asebaros_msgs::msg::builder::Init_NodeDescription_id();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__BUILDER_HPP_
