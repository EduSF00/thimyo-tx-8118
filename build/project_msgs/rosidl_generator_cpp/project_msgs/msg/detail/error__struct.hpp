// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from project_msgs:msg/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project_msgs/msg/error.hpp"


#ifndef PROJECT_MSGS__MSG__DETAIL__ERROR__STRUCT_HPP_
#define PROJECT_MSGS__MSG__DETAIL__ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__project_msgs__msg__Error __attribute__((deprecated))
#else
# define DEPRECATED__project_msgs__msg__Error __declspec(deprecated)
#endif

namespace project_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Error_
{
  using Type = Error_<ContainerAllocator>;

  explicit Error_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_linear = 0.0;
      this->error_angular = 0.0;
      this->error_angular_sen = 0.0;
      this->error_angular_cos = 0.0;
    }
  }

  explicit Error_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_linear = 0.0;
      this->error_angular = 0.0;
      this->error_angular_sen = 0.0;
      this->error_angular_cos = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _error_linear_type =
    double;
  _error_linear_type error_linear;
  using _error_angular_type =
    double;
  _error_angular_type error_angular;
  using _error_angular_sen_type =
    double;
  _error_angular_sen_type error_angular_sen;
  using _error_angular_cos_type =
    double;
  _error_angular_cos_type error_angular_cos;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__error_linear(
    const double & _arg)
  {
    this->error_linear = _arg;
    return *this;
  }
  Type & set__error_angular(
    const double & _arg)
  {
    this->error_angular = _arg;
    return *this;
  }
  Type & set__error_angular_sen(
    const double & _arg)
  {
    this->error_angular_sen = _arg;
    return *this;
  }
  Type & set__error_angular_cos(
    const double & _arg)
  {
    this->error_angular_cos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    project_msgs::msg::Error_<ContainerAllocator> *;
  using ConstRawPtr =
    const project_msgs::msg::Error_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<project_msgs::msg::Error_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<project_msgs::msg::Error_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      project_msgs::msg::Error_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<project_msgs::msg::Error_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      project_msgs::msg::Error_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<project_msgs::msg::Error_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<project_msgs::msg::Error_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<project_msgs::msg::Error_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__project_msgs__msg__Error
    std::shared_ptr<project_msgs::msg::Error_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__project_msgs__msg__Error
    std::shared_ptr<project_msgs::msg::Error_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Error_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->error_linear != other.error_linear) {
      return false;
    }
    if (this->error_angular != other.error_angular) {
      return false;
    }
    if (this->error_angular_sen != other.error_angular_sen) {
      return false;
    }
    if (this->error_angular_cos != other.error_angular_cos) {
      return false;
    }
    return true;
  }
  bool operator!=(const Error_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Error_

// alias to use template instance with default allocator
using Error =
  project_msgs::msg::Error_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace project_msgs

#endif  // PROJECT_MSGS__MSG__DETAIL__ERROR__STRUCT_HPP_
