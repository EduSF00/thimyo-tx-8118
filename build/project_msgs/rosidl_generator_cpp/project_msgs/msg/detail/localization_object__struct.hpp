// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from project_msgs:msg/LocalizationObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project_msgs/msg/localization_object.hpp"


#ifndef PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__STRUCT_HPP_
#define PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__STRUCT_HPP_

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
# define DEPRECATED__project_msgs__msg__LocalizationObject __attribute__((deprecated))
#else
# define DEPRECATED__project_msgs__msg__LocalizationObject __declspec(deprecated)
#endif

namespace project_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalizationObject_
{
  using Type = LocalizationObject_<ContainerAllocator>;

  explicit LocalizationObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_linear = 0.0;
      this->distance_angular = 0.0;
      this->sen_angular = 0.0;
      this->cos_angular = 0.0;
    }
  }

  explicit LocalizationObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_linear = 0.0;
      this->distance_angular = 0.0;
      this->sen_angular = 0.0;
      this->cos_angular = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _distance_linear_type =
    double;
  _distance_linear_type distance_linear;
  using _distance_angular_type =
    double;
  _distance_angular_type distance_angular;
  using _sen_angular_type =
    double;
  _sen_angular_type sen_angular;
  using _cos_angular_type =
    double;
  _cos_angular_type cos_angular;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__distance_linear(
    const double & _arg)
  {
    this->distance_linear = _arg;
    return *this;
  }
  Type & set__distance_angular(
    const double & _arg)
  {
    this->distance_angular = _arg;
    return *this;
  }
  Type & set__sen_angular(
    const double & _arg)
  {
    this->sen_angular = _arg;
    return *this;
  }
  Type & set__cos_angular(
    const double & _arg)
  {
    this->cos_angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    project_msgs::msg::LocalizationObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const project_msgs::msg::LocalizationObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<project_msgs::msg::LocalizationObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<project_msgs::msg::LocalizationObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      project_msgs::msg::LocalizationObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<project_msgs::msg::LocalizationObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      project_msgs::msg::LocalizationObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<project_msgs::msg::LocalizationObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<project_msgs::msg::LocalizationObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<project_msgs::msg::LocalizationObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__project_msgs__msg__LocalizationObject
    std::shared_ptr<project_msgs::msg::LocalizationObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__project_msgs__msg__LocalizationObject
    std::shared_ptr<project_msgs::msg::LocalizationObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizationObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->distance_linear != other.distance_linear) {
      return false;
    }
    if (this->distance_angular != other.distance_angular) {
      return false;
    }
    if (this->sen_angular != other.sen_angular) {
      return false;
    }
    if (this->cos_angular != other.cos_angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizationObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizationObject_

// alias to use template instance with default allocator
using LocalizationObject =
  project_msgs::msg::LocalizationObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace project_msgs

#endif  // PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__STRUCT_HPP_
