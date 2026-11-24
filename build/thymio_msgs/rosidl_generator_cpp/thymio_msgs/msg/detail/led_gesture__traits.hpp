// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "thymio_msgs/msg/led_gesture.hpp"


#ifndef THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "thymio_msgs/msg/detail/led_gesture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace thymio_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedGesture & msg,
  std::ostream & out)
{
  out << "{";
  // member: gesture
  {
    out << "gesture: ";
    rosidl_generator_traits::value_to_yaml(msg.gesture, out);
    out << ", ";
  }

  // member: wave
  {
    out << "wave: ";
    rosidl_generator_traits::value_to_yaml(msg.wave, out);
    out << ", ";
  }

  // member: leds
  {
    out << "leds: ";
    rosidl_generator_traits::value_to_yaml(msg.leds, out);
    out << ", ";
  }

  // member: period
  {
    out << "period: ";
    rosidl_generator_traits::value_to_yaml(msg.period, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: mirror
  {
    out << "mirror: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror, out);
    out << ", ";
  }

  // member: mask
  {
    if (msg.mask.size() == 0) {
      out << "mask: []";
    } else {
      out << "mask: [";
      size_t pending_items = msg.mask.size();
      for (auto item : msg.mask) {
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
  const LedGesture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gesture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gesture: ";
    rosidl_generator_traits::value_to_yaml(msg.gesture, out);
    out << "\n";
  }

  // member: wave
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wave: ";
    rosidl_generator_traits::value_to_yaml(msg.wave, out);
    out << "\n";
  }

  // member: leds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leds: ";
    rosidl_generator_traits::value_to_yaml(msg.leds, out);
    out << "\n";
  }

  // member: period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period: ";
    rosidl_generator_traits::value_to_yaml(msg.period, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: mirror
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirror: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror, out);
    out << "\n";
  }

  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mask.size() == 0) {
      out << "mask: []\n";
    } else {
      out << "mask:\n";
      for (auto item : msg.mask) {
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

inline std::string to_yaml(const LedGesture & msg, bool use_flow_style = false)
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
  const thymio_msgs::msg::LedGesture & msg,
  std::ostream & out, size_t indentation = 0)
{
  thymio_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use thymio_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const thymio_msgs::msg::LedGesture & msg)
{
  return thymio_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<thymio_msgs::msg::LedGesture>()
{
  return "thymio_msgs::msg::LedGesture";
}

template<>
inline const char * name<thymio_msgs::msg::LedGesture>()
{
  return "thymio_msgs/msg/LedGesture";
}

template<>
struct has_fixed_size<thymio_msgs::msg::LedGesture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<thymio_msgs::msg::LedGesture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<thymio_msgs::msg::LedGesture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__LED_GESTURE__TRAITS_HPP_
