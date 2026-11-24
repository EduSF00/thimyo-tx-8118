// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from asebaros_msgs:msg/NodeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node_list.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__STRUCT_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nodes'
#include "asebaros_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__asebaros_msgs__msg__NodeList __attribute__((deprecated))
#else
# define DEPRECATED__asebaros_msgs__msg__NodeList __declspec(deprecated)
#endif

namespace asebaros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeList_
{
  using Type = NodeList_<ContainerAllocator>;

  explicit NodeList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NodeList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    asebaros_msgs::msg::NodeList_<ContainerAllocator> *;
  using ConstRawPtr =
    const asebaros_msgs::msg::NodeList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<asebaros_msgs::msg::NodeList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<asebaros_msgs::msg::NodeList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::msg::NodeList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::msg::NodeList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::msg::NodeList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::msg::NodeList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<asebaros_msgs::msg::NodeList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<asebaros_msgs::msg::NodeList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__asebaros_msgs__msg__NodeList
    std::shared_ptr<asebaros_msgs::msg::NodeList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__asebaros_msgs__msg__NodeList
    std::shared_ptr<asebaros_msgs::msg::NodeList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeList_ & other) const
  {
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeList_

// alias to use template instance with default allocator
using NodeList =
  asebaros_msgs::msg::NodeList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__STRUCT_HPP_
