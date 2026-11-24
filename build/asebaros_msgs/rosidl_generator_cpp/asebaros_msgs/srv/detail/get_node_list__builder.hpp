// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from asebaros_msgs:srv/GetNodeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/get_node_list.hpp"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__BUILDER_HPP_
#define ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "asebaros_msgs/srv/detail/get_node_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodeList_Request_ignored
{
public:
  Init_GetNodeList_Request_ignored()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::asebaros_msgs::srv::GetNodeList_Request ignored(::asebaros_msgs::srv::GetNodeList_Request::_ignored_type arg)
  {
    msg_.ignored = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::GetNodeList_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetNodeList_Request>()
{
  return asebaros_msgs::srv::builder::Init_GetNodeList_Request_ignored();
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodeList_Response_nodes
{
public:
  Init_GetNodeList_Response_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::asebaros_msgs::srv::GetNodeList_Response nodes(::asebaros_msgs::srv::GetNodeList_Response::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::GetNodeList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetNodeList_Response>()
{
  return asebaros_msgs::srv::builder::Init_GetNodeList_Response_nodes();
}

}  // namespace asebaros_msgs


namespace asebaros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodeList_Event_response
{
public:
  explicit Init_GetNodeList_Event_response(::asebaros_msgs::srv::GetNodeList_Event & msg)
  : msg_(msg)
  {}
  ::asebaros_msgs::srv::GetNodeList_Event response(::asebaros_msgs::srv::GetNodeList_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::asebaros_msgs::srv::GetNodeList_Event msg_;
};

class Init_GetNodeList_Event_request
{
public:
  explicit Init_GetNodeList_Event_request(::asebaros_msgs::srv::GetNodeList_Event & msg)
  : msg_(msg)
  {}
  Init_GetNodeList_Event_response request(::asebaros_msgs::srv::GetNodeList_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetNodeList_Event_response(msg_);
  }

private:
  ::asebaros_msgs::srv::GetNodeList_Event msg_;
};

class Init_GetNodeList_Event_info
{
public:
  Init_GetNodeList_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNodeList_Event_request info(::asebaros_msgs::srv::GetNodeList_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetNodeList_Event_request(msg_);
  }

private:
  ::asebaros_msgs::srv::GetNodeList_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::asebaros_msgs::srv::GetNodeList_Event>()
{
  return asebaros_msgs::srv::builder::Init_GetNodeList_Event_info();
}

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__BUILDER_HPP_
