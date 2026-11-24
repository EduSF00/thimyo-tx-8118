// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/event.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace msg
{

namespace builder
{

class Init_Event_data
{
public:
  explicit Init_Event_data(::asebaros_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::msg::Event data(::asebaros_msgs::msg::Event::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::msg::Event msg_;
};

class Init_Event_source
{
public:
  explicit Init_Event_source(::asebaros_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_data source(::asebaros_msgs::msg::Event::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_Event_data(msg_);
  }

private:
  ::asebaros_msgs::msg::Event msg_;
};

class Init_Event_stamp
{
public:
  Init_Event_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Event_source stamp(::asebaros_msgs::msg::Event::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Event_source(msg_);
  }

private:
  ::asebaros_msgs::msg::Event msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::msg::Event>()
{
  return asebaros_msgs::msg::builder::Init_Event_stamp();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
