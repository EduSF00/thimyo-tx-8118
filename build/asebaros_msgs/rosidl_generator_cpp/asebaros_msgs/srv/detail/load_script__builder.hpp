// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:srv/LoadScript.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/load_script.hpp"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__LOAD_SCRIPT__BUILDER_HPP_
#define ASEBAROS_MSGS__SRV__DETAIL__LOAD_SCRIPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/srv/detail/load_script__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadScript_Request_set_as_default
{
public:
  explicit Init_LoadScript_Request_set_as_default(::asebaros_msgs::srv::LoadScript_Request & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::srv::LoadScript_Request set_as_default(::asebaros_msgs::srv::LoadScript_Request::_set_as_default_type arg)
  {
    msg_.set_as_default = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::LoadScript_Request msg_;
};

class Init_LoadScript_Request_node_ids
{
public:
  explicit Init_LoadScript_Request_node_ids(::asebaros_msgs::srv::LoadScript_Request & msg)
  : msg_(msg)
  {}
  Init_LoadScript_Request_set_as_default node_ids(::asebaros_msgs::srv::LoadScript_Request::_node_ids_type arg)
  {
    msg_.node_ids = std::move(arg);
    return Init_LoadScript_Request_set_as_default(msg_);
  }

private:
  ::asebaros_msgs::srv::LoadScript_Request msg_;
};

class Init_LoadScript_Request_constants
{
public:
  explicit Init_LoadScript_Request_constants(::asebaros_msgs::srv::LoadScript_Request & msg)
  : msg_(msg)
  {}
  Init_LoadScript_Request_node_ids constants(::asebaros_msgs::srv::LoadScript_Request::_constants_type arg)
  {
    msg_.constants = std::move(arg);
    return Init_LoadScript_Request_node_ids(msg_);
  }

private:
  ::asebaros_msgs::srv::LoadScript_Request msg_;
};

class Init_LoadScript_Request_file_name
{
public:
  Init_LoadScript_Request_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadScript_Request_constants file_name(::asebaros_msgs::srv::LoadScript_Request::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return Init_LoadScript_Request_constants(msg_);
  }

private:
  ::asebaros_msgs::srv::LoadScript_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::LoadScript_Request>()
{
  return asebaros_msgs::srv::builder::Init_LoadScript_Request_file_name();
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
auto build<::asebaros_msgs::srv::LoadScript_Response>()
{
  return ::asebaros_msgs::srv::LoadScript_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadScript_Event_response
{
public:
  explicit Init_LoadScript_Event_response(::asebaros_msgs::srv::LoadScript_Event & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::srv::LoadScript_Event response(::asebaros_msgs::srv::LoadScript_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::LoadScript_Event msg_;
};

class Init_LoadScript_Event_request
{
public:
  explicit Init_LoadScript_Event_request(::asebaros_msgs::srv::LoadScript_Event & msg)
  : msg_(msg)
  {}
  Init_LoadScript_Event_response request(::asebaros_msgs::srv::LoadScript_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LoadScript_Event_response(msg_);
  }

private:
  ::asebaros_msgs::srv::LoadScript_Event msg_;
};

class Init_LoadScript_Event_info
{
public:
  Init_LoadScript_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadScript_Event_request info(::asebaros_msgs::srv::LoadScript_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LoadScript_Event_request(msg_);
  }

private:
  ::asebaros_msgs::srv::LoadScript_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::LoadScript_Event>()
{
  return asebaros_msgs::srv::builder::Init_LoadScript_Event_info();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__SRV__DETAIL__LOAD_SCRIPT__BUILDER_HPP_
