// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from asebaros_msgs:msg/Node.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "asebaros_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace asebaros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Node & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: name_space
  {
    out << "name_space: ";
    rosidl_generator_traits::value_to_yaml(msg.name_space, out);
    out << ", ";
  }

  // member: running
  {
    out << "running: ";
    rosidl_generator_traits::value_to_yaml(msg.running, out);
    out << ", ";
  }

  // member: ignored
  {
    out << "ignored: ";
    rosidl_generator_traits::value_to_yaml(msg.ignored, out);
    out << ", ";
  }

  // member: connected
  {
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: name_space
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_space: ";
    rosidl_generator_traits::value_to_yaml(msg.name_space, out);
    out << "\n";
  }

  // member: running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "running: ";
    rosidl_generator_traits::value_to_yaml(msg.running, out);
    out << "\n";
  }

  // member: ignored
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignored: ";
    rosidl_generator_traits::value_to_yaml(msg.ignored, out);
    out << "\n";
  }

  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    rosidl_generator_traits::value_to_yaml(msg.connected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Node & msg, bool use_flow_style = false)
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
  const asebaros_msgs::msg::Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  asebaros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use asebaros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const asebaros_msgs::msg::Node & msg)
{
  return asebaros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<asebaros_msgs::msg::Node>()
{
  return "asebaros_msgs::msg::Node";
}

template<>
inline const char * name<asebaros_msgs::msg::Node>()
{
  return "asebaros_msgs/msg/Node";
}

template<>
struct has_fixed_size<asebaros_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<asebaros_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<asebaros_msgs::msg::Node>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
