// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from asebaros_msgs:msg/Constant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/constant.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__STRUCT_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__asebaros_msgs__msg__Constant __attribute__((deprecated))
#else
# define DEPRECATED__asebaros_msgs__msg__Constant __declspec(deprecated)
#endif

namespace asebaros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Constant_
{
  using Type = Constant_<ContainerAllocator>;

  explicit Constant_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = 0;
    }
  }

  explicit Constant_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _value_type =
    int16_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__value(
    const int16_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    asebaros_msgs::msg::Constant_<ContainerAllocator> *;
  using ConstRawPtr =
    const asebaros_msgs::msg::Constant_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<asebaros_msgs::msg::Constant_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<asebaros_msgs::msg::Constant_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::msg::Constant_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::msg::Constant_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      asebaros_msgs::msg::Constant_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<asebaros_msgs::msg::Constant_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<asebaros_msgs::msg::Constant_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<asebaros_msgs::msg::Constant_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__asebaros_msgs__msg__Constant
    std::shared_ptr<asebaros_msgs::msg::Constant_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__asebaros_msgs__msg__Constant
    std::shared_ptr<asebaros_msgs::msg::Constant_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Constant_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Constant_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Constant_

// alias to use template instance with default allocator
using Constant =
  asebaros_msgs::msg::Constant_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace asebaros_msgs

#endif  // ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__STRUCT_HPP_
