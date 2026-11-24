// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from asebaros_msgs:msg/Node.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__asebaros_msgs__msg__Node __attribute__((deprecated))
#else
# define DEPRECATED__asebaros_msgs__msg__Node __declspec(deprecated)
#endif

namespace asebaros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Node_
{
  using Type = Node_<ContainerAllocator>;

  explicit Node_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->name = "";
      this->name_space = "";
      this->running = false;
      this->ignored = false;
      this->connected = false;
    }
  }

  explicit Node_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    name_space(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->name = "";
      this->name_space = "";
      this->running = false;
      this->ignored = false;
      this->connected = false;
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _name_space_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_space_type name_space;
  using _running_type =
    bool;
  _running_type running;
  using _ignored_type =
    bool;
  _ignored_type ignored;
  using _connected_type =
    bool;
  _connected_type connected;

  // setters for named parameter idiom
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__name_space(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name_space = _arg;
    return *this;
  }
  Type & set__running(
    const bool & _arg)
  {
    this->running = _arg;
    return *this;
  }
  Type & set__ignored(
    const bool & _arg)
  {
    this->ignored = _arg;
    return *this;
  }
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    asebaros_msgs::msg::Node_<ContainerAllocator> *;
  using ConstRawPtr =
    const asebaros_msgs::msg::Node_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<asebaros_msgs::msg::Node_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<asebaros_msgs::msg::Node_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::msg::Node_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::msg::Node_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::msg::Node_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::msg::Node_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<asebaros_msgs::msg::Node_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<asebaros_msgs::msg::Node_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__asebaros_msgs__msg__Node
    std::shared_ptr<asebaros_msgs::msg::Node_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__asebaros_msgs__msg__Node
    std::shared_ptr<asebaros_msgs::msg::Node_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Node_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->name_space != other.name_space) {
      return false;
    }
    if (this->running != other.running) {
      return false;
    }
    if (this->ignored != other.ignored) {
      return false;
    }
    if (this->connected != other.connected) {
      return false;
    }
    return true;
  }
  bool operator!=(const Node_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Node_

// alias to use template instance with default allocator
using Node =
  asebaros_msgs::msg::Node_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
