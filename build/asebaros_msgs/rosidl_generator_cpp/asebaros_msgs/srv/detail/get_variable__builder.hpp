// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:srv/GetVariable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/get_variable.hpp"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__GET_VARIABLE__BUILDER_HPP_
#define ASEBAROS_MSGS__SRV__DETAIL__GET_VARIABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/srv/detail/get_variable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetVariable_Request_variable
{
public:
  Init_GetVariable_Request_variable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::asebaros_msgs::srv::GetVariable_Request variable(::asebaros_msgs::srv::GetVariable_Request::_variable_type arg)
  {
    msg_.variable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::GetVariable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetVariable_Request>()
{
  return asebaros_msgs::srv::builder::Init_GetVariable_Request_variable();
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetVariable_Response_data
{
public:
  Init_GetVariable_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::asebaros_msgs::srv::GetVariable_Response data(::asebaros_msgs::srv::GetVariable_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::GetVariable_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetVariable_Response>()
{
  return asebaros_msgs::srv::builder::Init_GetVariable_Response_data();
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetVariable_Event_response
{
public:
  explicit Init_GetVariable_Event_response(::asebaros_msgs::srv::GetVariable_Event & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::srv::GetVariable_Event response(::asebaros_msgs::srv::GetVariable_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::GetVariable_Event msg_;
};

class Init_GetVariable_Event_request
{
public:
  explicit Init_GetVariable_Event_request(::asebaros_msgs::srv::GetVariable_Event & msg)
  : msg_(msg)
  {}
  Init_GetVariable_Event_response request(::asebaros_msgs::srv::GetVariable_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetVariable_Event_response(msg_);
  }

private:
  ::asebaros_msgs::srv::GetVariable_Event msg_;
};

class Init_GetVariable_Event_info
{
public:
  Init_GetVariable_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVariable_Event_request info(::asebaros_msgs::srv::GetVariable_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetVariable_Event_request(msg_);
  }

private:
  ::asebaros_msgs::srv::GetVariable_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetVariable_Event>()
{
  return asebaros_msgs::srv::builder::Init_GetVariable_Event_info();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__SRV__DETAIL__GET_VARIABLE__BUILDER_HPP_
