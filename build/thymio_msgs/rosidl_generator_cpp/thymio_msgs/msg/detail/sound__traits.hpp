// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "thymio_msgs/msg/sound.hpp"


#ifndef THYMIO_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "thymio_msgs/msg/detail/sound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace thymio_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sound & msg,
  std::ostream & out)
{
  out << "{";
  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sound & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sound & msg, bool use_flow_style = false)
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
  const thymio_msgs::msg::Sound & msg,
  std::ostream & out, size_t indentation = 0)
{
  thymio_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use thymio_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const thymio_msgs::msg::Sound & msg)
{
  return thymio_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<thymio_msgs::msg::Sound>()
{
  return "thymio_msgs::msg::Sound";
}

template<>
inline const char * name<thymio_msgs::msg::Sound>()
{
  return "thymio_msgs/msg/Sound";
}

template<>
struct has_fixed_size<thymio_msgs::msg::Sound>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<thymio_msgs::msg::Sound>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<thymio_msgs::msg::Sound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_
