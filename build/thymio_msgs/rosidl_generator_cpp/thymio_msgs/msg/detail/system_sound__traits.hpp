// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "thymio_msgs/msg/system_sound.hpp"


#ifndef THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "thymio_msgs/msg/detail/system_sound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace thymio_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemSound & msg,
  std::ostream & out)
{
  out << "{";
  // member: sound
  {
    out << "sound: ";
    rosidl_generator_traits::value_to_yaml(msg.sound, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemSound & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound: ";
    rosidl_generator_traits::value_to_yaml(msg.sound, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemSound & msg, bool use_flow_style = false)
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
  const thymio_msgs::msg::SystemSound & msg,
  std::ostream & out, size_t indentation = 0)
{
  thymio_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use thymio_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const thymio_msgs::msg::SystemSound & msg)
{
  return thymio_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<thymio_msgs::msg::SystemSound>()
{
  return "thymio_msgs::msg::SystemSound";
}

template<>
inline const char * name<thymio_msgs::msg::SystemSound>()
{
  return "thymio_msgs/msg/SystemSound";
}

template<>
struct has_fixed_size<thymio_msgs::msg::SystemSound>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<thymio_msgs::msg::SystemSound>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<thymio_msgs::msg::SystemSound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__SYSTEM_SOUND__TRAITS_HPP_
