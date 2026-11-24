// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project_msgs:msg/LocalizationObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project_msgs/msg/localization_object.hpp"


#ifndef PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__BUILDER_HPP_
#define PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "project_msgs/msg/detail/localization_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace project_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalizationObject_cos_angular
{
public:
  explicit Init_LocalizationObject_cos_angular(::project_msgs::msg::LocalizationObject & msg)
  : msg_(msg)
  {}
  ::project_msgs::msg::LocalizationObject cos_angular(::project_msgs::msg::LocalizationObject::_cos_angular_type arg)
  {
    msg_.cos_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_msgs::msg::LocalizationObject msg_;
};

class Init_LocalizationObject_sen_angular
{
public:
  explicit Init_LocalizationObject_sen_angular(::project_msgs::msg::LocalizationObject & msg)
  : msg_(msg)
  {}
  Init_LocalizationObject_cos_angular sen_angular(::project_msgs::msg::LocalizationObject::_sen_angular_type arg)
  {
    msg_.sen_angular = std::move(arg);
    return Init_LocalizationObject_cos_angular(msg_);
  }

private:
  ::project_msgs::msg::LocalizationObject msg_;
};

class Init_LocalizationObject_distance_angular
{
public:
  explicit Init_LocalizationObject_distance_angular(::project_msgs::msg::LocalizationObject & msg)
  : msg_(msg)
  {}
  Init_LocalizationObject_sen_angular distance_angular(::project_msgs::msg::LocalizationObject::_distance_angular_type arg)
  {
    msg_.distance_angular = std::move(arg);
    return Init_LocalizationObject_sen_angular(msg_);
  }

private:
  ::project_msgs::msg::LocalizationObject msg_;
};

class Init_LocalizationObject_distance_linear
{
public:
  explicit Init_LocalizationObject_distance_linear(::project_msgs::msg::LocalizationObject & msg)
  : msg_(msg)
  {}
  Init_LocalizationObject_distance_angular distance_linear(::project_msgs::msg::LocalizationObject::_distance_linear_type arg)
  {
    msg_.distance_linear = std::move(arg);
    return Init_LocalizationObject_distance_angular(msg_);
  }

private:
  ::project_msgs::msg::LocalizationObject msg_;
};

class Init_LocalizationObject_header
{
public:
  Init_LocalizationObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizationObject_distance_linear header(::project_msgs::msg::LocalizationObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalizationObject_distance_linear(msg_);
  }

private:
  ::project_msgs::msg::LocalizationObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_msgs::msg::LocalizationObject>()
{
  return project_msgs::msg::builder::Init_LocalizationObject_header();
}

}  // namespace project_msgs

#endif  // PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__BUILDER_HPP_
