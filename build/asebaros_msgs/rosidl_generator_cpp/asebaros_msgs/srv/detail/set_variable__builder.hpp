// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:srv/SetVariable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/set_variable.hpp"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__SET_VARIABLE__BUILDER_HPP_
#define ASEBAROS_MSGS__SRV__DETAIL__SET_VARIABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/srv/detail/set_variable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_SetVariable_Request_data
{
public:
  explicit Init_SetVariable_Request_data(::asebaros_msgs::srv::SetVariable_Request & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::srv::SetVariable_Request data(::asebaros_msgs::srv::SetVariable_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::SetVariable_Request msg_;
};

class Init_SetVariable_Request_variable
{
public:
  Init_SetVariable_Request_variable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVariable_Request_data variable(::asebaros_msgs::srv::SetVariable_Request::_variable_type arg)
  {
    msg_.variable = std::move(arg);
    return Init_SetVariable_Request_data(msg_);
  }

private:
  ::asebaros_msgs::srv::SetVariable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::SetVariable_Request>()
{
  return asebaros_msgs::srv::builder::Init_SetVariable_Request_variable();
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::SetVariable_Response>()
{
  return ::asebaros_msgs::srv::SetVariable_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_SetVariable_Event_response
{
public:
  explicit Init_SetVariable_Event_response(::asebaros_msgs::srv::SetVariable_Event & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::srv::SetVariable_Event response(::asebaros_msgs::srv::SetVariable_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::SetVariable_Event msg_;
};

class Init_SetVariable_Event_request
{
public:
  explicit Init_SetVariable_Event_request(::asebaros_msgs::srv::SetVariable_Event & msg)
  : msg_(msg)
  {}
  Init_SetVariable_Event_response request(::asebaros_msgs::srv::SetVariable_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetVariable_Event_response(msg_);
  }

private:
  ::asebaros_msgs::srv::SetVariable_Event msg_;
};

class Init_SetVariable_Event_info
{
public:
  Init_SetVariable_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVariable_Event_request info(::asebaros_msgs::srv::SetVariable_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetVariable_Event_request(msg_);
  }

private:
  ::asebaros_msgs::srv::SetVariable_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::SetVariable_Event>()
{
  return asebaros_msgs::srv::builder::Init_SetVariable_Event_info();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__SRV__DETAIL__SET_VARIABLE__BUILDER_HPP_
