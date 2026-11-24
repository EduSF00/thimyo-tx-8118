// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project_msgs:msg/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project_msgs/msg/error.hpp"


#ifndef PROJECT_MSGS__MSG__DETAIL__ERROR__BUILDER_HPP_
#define PROJECT_MSGS__MSG__DETAIL__ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "project_msgs/msg/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace project_msgs
{

namespace msg
{

namespace builder
{

class Init_Error_error_angular_cos
{
public:
  explicit Init_Error_error_angular_cos(::project_msgs::msg::Error & msg)
  : msg_(msg)
  {}
  ::project_msgs::msg::Error error_angular_cos(::project_msgs::msg::Error::_error_angular_cos_type arg)
  {
    msg_.error_angular_cos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_msgs::msg::Error msg_;
};

class Init_Error_error_angular_sen
{
public:
  explicit Init_Error_error_angular_sen(::project_msgs::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_error_angular_cos error_angular_sen(::project_msgs::msg::Error::_error_angular_sen_type arg)
  {
    msg_.error_angular_sen = std::move(arg);
    return Init_Error_error_angular_cos(msg_);
  }

private:
  ::project_msgs::msg::Error msg_;
};

class Init_Error_error_angular
{
public:
  explicit Init_Error_error_angular(::project_msgs::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_error_angular_sen error_angular(::project_msgs::msg::Error::_error_angular_type arg)
  {
    msg_.error_angular = std::move(arg);
    return Init_Error_error_angular_sen(msg_);
  }

private:
  ::project_msgs::msg::Error msg_;
};

class Init_Error_error_linear
{
public:
  explicit Init_Error_error_linear(::project_msgs::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_error_angular error_linear(::project_msgs::msg::Error::_error_linear_type arg)
  {
    msg_.error_linear = std::move(arg);
    return Init_Error_error_angular(msg_);
  }

private:
  ::project_msgs::msg::Error msg_;
};

class Init_Error_header
{
public:
  Init_Error_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Error_error_linear header(::project_msgs::msg::Error::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Error_error_linear(msg_);
  }

private:
  ::project_msgs::msg::Error msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_msgs::msg::Error>()
{
  return project_msgs::msg::builder::Init_Error_header();
}

}  // namespace project_msgs

#endif  // PROJECT_MSGS__MSG__DETAIL__ERROR__BUILDER_HPP_
