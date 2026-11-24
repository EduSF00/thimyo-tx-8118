// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/Led.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "thymio_msgs/msg/led.hpp"


#ifndef THYMIO_MSGS__MSG__DETAIL__LED__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__LED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "thymio_msgs/msg/detail/led__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace thymio_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Led & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
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
  const Led & msg,
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

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
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

inline std::string to_yaml(const Led & msg, bool use_flow_style = false)
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

}  // namespace thymio_msgs

namespace rosidl_generator_traits
{

[[deprecated("use thymio_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const thymio_msgs::msg::Led & msg,
  std::ostream & out, size_t indentation = 0)
{
  thymio_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use thymio_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const thymio_msgs::msg::Led & msg)
{
  return thymio_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<thymio_msgs::msg::Led>()
{
  return "thymio_msgs::msg::Led";
}

template<>
inline const char * name<thymio_msgs::msg::Led>()
{
  return "thymio_msgs/msg/Led";
}

template<>
struct has_fixed_size<thymio_msgs::msg::Led>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<thymio_msgs::msg::Led>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<thymio_msgs::msg::Led>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__LED__TRAITS_HPP_
