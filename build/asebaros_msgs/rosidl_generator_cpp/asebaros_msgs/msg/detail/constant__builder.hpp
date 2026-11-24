// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:msg/Constant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/constant.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__BUILDER_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/msg/detail/constant__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace msg
{

namespace builder
{

class Init_Constant_value
{
public:
  explicit Init_Constant_value(::asebaros_msgs::msg::Constant & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::msg::Constant value(::asebaros_msgs::msg::Constant::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::msg::Constant msg_;
};

class Init_Constant_name
{
public:
  Init_Constant_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Constant_value name(::asebaros_msgs::msg::Constant::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Constant_value(msg_);
  }

private:
  ::asebaros_msgs::msg::Constant msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::msg::Constant>()
{
  return asebaros_msgs::msg::builder::Init_Constant_name();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__BUILDER_HPP_
