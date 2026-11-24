// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from asebaros_msgs:srv/GetNodeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/get_node_list.hpp"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__STRUCT_HPP_
#define ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__asebaros_msgs__srv__GetNodeList_Request __attribute__((deprecated))
#else
# define DEPRECATED__asebaros_msgs__srv__GetNodeList_Request __declspec(deprecated)
#endif

namespace asebaros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNodeList_Request_
{
  using Type = GetNodeList_Request_<ContainerAllocator>;

  explicit GetNodeList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->ignored = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->ignored = false;
    }
  }

  explicit GetNodeList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->ignored = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->ignored = false;
    }
  }

  // field types and members
  using _ignored_type =
    bool;
  _ignored_type ignored;

  // setters for named parameter idiom
  Type & set__ignored(
    const bool & _arg)
  {
    this->ignored = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__asebaros_msgs__srv__GetNodeList_Request
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__asebaros_msgs__srv__GetNodeList_Request
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNodeList_Request_ & other) const
  {
    if (this->ignored != other.ignored) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNodeList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNodeList_Request_

// alias to use template instance with default allocator
using GetNodeList_Request =
  asebaros_msgs::srv::GetNodeList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace asebaros_msgs


// Include directives for member types
// Member 'nodes'
#include "asebaros_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__asebaros_msgs__srv__GetNodeList_Response __attribute__((deprecated))
#else
# define DEPRECATED__asebaros_msgs__srv__GetNodeList_Response __declspec(deprecated)
#endif

namespace asebaros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNodeList_Response_
{
  using Type = GetNodeList_Response_<ContainerAllocator>;

  explicit GetNodeList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetNodeList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _nodes_type =
    std::vector<asebaros_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<asebaros_msgs::msg::Node_<ContainerAllocator>>>;
  _nodes_type nodes;

  // setters for named parameter idiom
  Type & set__nodes(
    const std::vector<asebaros_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<asebaros_msgs::msg::Node_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__asebaros_msgs__srv__GetNodeList_Response
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__asebaros_msgs__srv__GetNodeList_Response
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNodeList_Response_ & other) const
  {
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNodeList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNodeList_Response_

// alias to use template instance with default allocator
using GetNodeList_Response =
  asebaros_msgs::srv::GetNodeList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace asebaros_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__asebaros_msgs__srv__GetNodeList_Event __attribute__((deprecated))
#else
# define DEPRECATED__asebaros_msgs__srv__GetNodeList_Event __declspec(deprecated)
#endif

namespace asebaros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetNodeList_Event_
{
  using Type = GetNodeList_Event_<ContainerAllocator>;

  explicit GetNodeList_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetNodeList_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<asebaros_msgs::srv::GetNodeList_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<asebaros_msgs::srv::GetNodeList_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__asebaros_msgs__srv__GetNodeList_Event
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__asebaros_msgs__srv__GetNodeList_Event
    std::shared_ptr<asebaros_msgs::srv::GetNodeList_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetNodeList_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetNodeList_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetNodeList_Event_

// alias to use template instance with default allocator
using GetNodeList_Event =
  asebaros_msgs::srv::GetNodeList_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace asebaros_msgs

namespace asebaros_msgs
{

namespace srv
{

struct GetNodeList
{
  using Request = asebaros_msgs::srv::GetNodeList_Request;
  using Response = asebaros_msgs::srv::GetNodeList_Response;
  using Event = asebaros_msgs::srv::GetNodeList_Event;
};

}  // namespace srv

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__STRUCT_HPP_
