// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:msg/AnonymousEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/anonymous_event.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__ANONYMOUS_EVENT__BUILDER_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__ANONYMOUS_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/msg/detail/anonymous_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace msg
{

namespace builder
{

class Init_AnonymousEvent_data
{
public:
  explicit Init_AnonymousEvent_data(::asebaros_msgs::msg::AnonymousEvent & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::msg::AnonymousEvent data(::asebaros_msgs::msg::AnonymousEvent::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::msg::AnonymousEvent msg_;
};

class Init_AnonymousEvent_type
{
public:
  explicit Init_AnonymousEvent_type(::asebaros_msgs::msg::AnonymousEvent & msg)
  : msg_(msg)
  {}
  Init_AnonymousEvent_data type(::asebaros_msgs::msg::AnonymousEvent::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AnonymousEvent_data(msg_);
  }

private:
  ::asebaros_msgs::msg::AnonymousEvent msg_;
};

class Init_AnonymousEvent_source
{
public:
  explicit Init_AnonymousEvent_source(::asebaros_msgs::msg::AnonymousEvent & msg)
  : msg_(msg)
  {}
  Init_AnonymousEvent_type source(::asebaros_msgs::msg::AnonymousEvent::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_AnonymousEvent_type(msg_);
  }

private:
  ::asebaros_msgs::msg::AnonymousEvent msg_;
};

class Init_AnonymousEvent_stamp
{
public:
  Init_AnonymousEvent_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnonymousEvent_source stamp(::asebaros_msgs::msg::AnonymousEvent::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_AnonymousEvent_source(msg_);
  }

private:
  ::asebaros_msgs::msg::AnonymousEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::msg::AnonymousEvent>()
{
  return asebaros_msgs::msg::builder::Init_AnonymousEvent_stamp();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__ANONYMOUS_EVENT__BUILDER_HPP_
