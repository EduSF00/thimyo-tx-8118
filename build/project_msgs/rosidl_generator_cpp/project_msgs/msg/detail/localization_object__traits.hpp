// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project_msgs:msg/LocalizationObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project_msgs/msg/localization_object.hpp"


#ifndef PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__TRAITS_HPP_
#define PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "project_msgs/msg/detail/localization_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace project_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalizationObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: distance_linear
  {
    out << "distance_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_linear, out);
    out << ", ";
  }

  // member: distance_angular
  {
    out << "distance_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_angular, out);
    out << ", ";
  }

  // member: sen_angular
  {
    out << "sen_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.sen_angular, out);
    out << ", ";
  }

  // member: cos_angular
  {
    out << "cos_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.cos_angular, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalizationObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: distance_linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_linear, out);
    out << "\n";
  }

  // member: distance_angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_angular, out);
    out << "\n";
  }

  // member: sen_angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sen_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.sen_angular, out);
    out << "\n";
  }

  // member: cos_angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cos_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.cos_angular, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalizationObject & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace project_msgs

namespace rosidl_generator_traits
{

[[deprecated("use project_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const project_msgs::msg::LocalizationObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  project_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use project_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const project_msgs::msg::LocalizationObject & msg)
{
  return project_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<project_msgs::msg::LocalizationObject>()
{
  return "project_msgs::msg::LocalizationObject";
}

template<>
inline const char * name<project_msgs::msg::LocalizationObject>()
{
  return "project_msgs/msg/LocalizationObject";
}

template<>
struct has_fixed_size<project_msgs::msg::LocalizationObject>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<project_msgs::msg::LocalizationObject>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<project_msgs::msg::LocalizationObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROJECT_MSGS__MSG__DETAIL__LOCALIZATION_OBJECT__TRAITS_HPP_
