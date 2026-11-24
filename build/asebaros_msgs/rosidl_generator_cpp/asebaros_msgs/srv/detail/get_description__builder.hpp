// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:srv/GetDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/get_description.hpp"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__GET_DESCRIPTION__BUILDER_HPP_
#define ASEBAROS_MSGS__SRV__DETAIL__GET_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/srv/detail/get_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetDescription_Request>()
{
  return ::asebaros_msgs::srv::GetDescription_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDescription_Response_description
{
public:
  Init_GetDescription_Response_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::asebaros_msgs::srv::GetDescription_Response description(::asebaros_msgs::srv::GetDescription_Response::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::GetDescription_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetDescription_Response>()
{
  return asebaros_msgs::srv::builder::Init_GetDescription_Response_description();
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDescription_Event_response
{
public:
  explicit Init_GetDescription_Event_response(::asebaros_msgs::srv::GetDescription_Event & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::srv::GetDescription_Event response(::asebaros_msgs::srv::GetDescription_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::GetDescription_Event msg_;
};

class Init_GetDescription_Event_request
{
public:
  explicit Init_GetDescription_Event_request(::asebaros_msgs::srv::GetDescription_Event & msg)
  : msg_(msg)
  {}
  Init_GetDescription_Event_response request(::asebaros_msgs::srv::GetDescription_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetDescription_Event_response(msg_);
  }

private:
  ::asebaros_msgs::srv::GetDescription_Event msg_;
};

class Init_GetDescription_Event_info
{
public:
  Init_GetDescription_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDescription_Event_request info(::asebaros_msgs::srv::GetDescription_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetDescription_Event_request(msg_);
  }

private:
  ::asebaros_msgs::srv::GetDescription_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetDescription_Event>()
{
  return asebaros_msgs::srv::builder::Init_GetDescription_Event_info();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__SRV__DETAIL__GET_DESCRIPTION__BUILDER_HPP_
