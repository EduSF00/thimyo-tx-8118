// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from asebaros_msgs:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/event.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "asebaros_msgs/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace asebaros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Event & msg, bool use_flow_style = false)
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
  const asebaros_msgs::msg::Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  asebaros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use asebaros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const asebaros_msgs::msg::Event & msg)
{
  return asebaros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<asebaros_msgs::msg::Event>()
{
  return "asebaros_msgs::msg::Event";
}

template<>
inline const char * name<asebaros_msgs::msg::Event>()
{
  return "asebaros_msgs/msg/Event";
}

template<>
struct has_fixed_size<asebaros_msgs::msg::Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<asebaros_msgs::msg::Event>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<asebaros_msgs::msg::Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASEBAROS_MSGS__MSG__DETAIL__EVENT__TRAITS_HPP_
