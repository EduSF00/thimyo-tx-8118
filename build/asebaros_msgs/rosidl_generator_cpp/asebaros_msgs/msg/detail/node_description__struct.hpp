// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from asebaros_msgs:msg/NodeDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node_description.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__STRUCT_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'constants'
#include "asebaros_msgs/msg/detail/constant__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__asebaros_msgs__msg__NodeDescription __attribute__((deprecated))
#else
# define DEPRECATED__asebaros_msgs__msg__NodeDescription __declspec(deprecated)
#endif

namespace asebaros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeDescription_
{
  using Type = NodeDescription_<ContainerAllocator>;

  explicit NodeDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->name = "";
    }
  }

  explicit NodeDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->name = "";
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _constants_type =
    std::vector<asebaros_msgs::msg::Constant_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<asebaros_msgs::msg::Constant_<ContainerAllocator>>>;
  _constants_type constants;
  using _events_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _events_type events;
  using _variables_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _variables_type variables;

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
  Type & set__constants(
    const std::vector<asebaros_msgs::msg::Constant_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<asebaros_msgs::msg::Constant_<ContainerAllocator>>> & _arg)
  {
    this->constants = _arg;
    return *this;
  }
  Type & set__events(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->events = _arg;
    return *this;
  }
  Type & set__variables(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->variables = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    asebaros_msgs::msg::NodeDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const asebaros_msgs::msg::NodeDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<asebaros_msgs::msg::NodeDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<asebaros_msgs::msg::NodeDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::msg::NodeDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::msg::NodeDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::msg::NodeDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::msg::NodeDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<asebaros_msgs::msg::NodeDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<asebaros_msgs::msg::NodeDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__asebaros_msgs__msg__NodeDescription
    std::shared_ptr<asebaros_msgs::msg::NodeDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__asebaros_msgs__msg__NodeDescription
    std::shared_ptr<asebaros_msgs::msg::NodeDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeDescription_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->constants != other.constants) {
      return false;
    }
    if (this->events != other.events) {
      return false;
    }
    if (this->variables != other.variables) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeDescription_

// alias to use template instance with default allocator
using NodeDescription =
  asebaros_msgs::msg::NodeDescription_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__STRUCT_HPP_
