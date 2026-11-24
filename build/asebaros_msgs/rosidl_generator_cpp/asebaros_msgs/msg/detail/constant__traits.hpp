// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from asebaros_msgs:msg/Constant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/constant.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__TRAITS_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "asebaros_msgs/msg/detail/constant__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace asebaros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Constant & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Constant & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Constant & msg, bool use_flow_style = false)
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

}  // namespace asebaros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use asebaros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const asebaros_msgs::msg::Constant & msg,
  std::ostream & out, size_t indentation = 0)
{
  asebaros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use asebaros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const asebaros_msgs::msg::Constant & msg)
{
  return asebaros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<asebaros_msgs::msg::Constant>()
{
  return "asebaros_msgs::msg::Constant";
}

template<>
inline const char * name<asebaros_msgs::msg::Constant>()
{
  return "asebaros_msgs/msg/Constant";
}

template<>
struct has_fixed_size<asebaros_msgs::msg::Constant>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<asebaros_msgs::msg::Constant>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<asebaros_msgs::msg::Constant>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASEBAROS_MSGS__MSG__DETAIL__CONSTANT__TRAITS_HPP_
