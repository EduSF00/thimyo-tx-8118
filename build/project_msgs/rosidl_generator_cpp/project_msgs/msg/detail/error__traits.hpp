// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project_msgs:msg/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project_msgs/msg/error.hpp"


#ifndef PROJECT_MSGS__MSG__DETAIL__ERROR__TRAITS_HPP_
#define PROJECT_MSGS__MSG__DETAIL__ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "project_msgs/msg/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace project_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Error & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: error_linear
  {
    out << "error_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.error_linear, out);
    out << ", ";
  }

  // member: error_angular
  {
    out << "error_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.error_angular, out);
    out << ", ";
  }

  // member: error_angular_sen
  {
    out << "error_angular_sen: ";
    rosidl_generator_traits::value_to_yaml(msg.error_angular_sen, out);
    out << ", ";
  }

  // member: error_angular_cos
  {
    out << "error_angular_cos: ";
    rosidl_generator_traits::value_to_yaml(msg.error_angular_cos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Error & msg,
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

  // member: error_linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.error_linear, out);
    out << "\n";
  }

  // member: error_angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.error_angular, out);
    out << "\n";
  }

  // member: error_angular_sen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_angular_sen: ";
    rosidl_generator_traits::value_to_yaml(msg.error_angular_sen, out);
    out << "\n";
  }

  // member: error_angular_cos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_angular_cos: ";
    rosidl_generator_traits::value_to_yaml(msg.error_angular_cos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Error & msg, bool use_flow_style = false)
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
  const project_msgs::msg::Error & msg,
  std::ostream & out, size_t indentation = 0)
{
  project_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use project_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const project_msgs::msg::Error & msg)
{
  return project_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<project_msgs::msg::Error>()
{
  return "project_msgs::msg::Error";
}

template<>
inline const char * name<project_msgs::msg::Error>()
{
  return "project_msgs/msg/Error";
}

template<>
struct has_fixed_size<project_msgs::msg::Error>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<project_msgs::msg::Error>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<project_msgs::msg::Error>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROJECT_MSGS__MSG__DETAIL__ERROR__TRAITS_HPP_
