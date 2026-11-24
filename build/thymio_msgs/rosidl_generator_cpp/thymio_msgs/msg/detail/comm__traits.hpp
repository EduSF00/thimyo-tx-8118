// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio_msgs:msg/Comm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "thymio_msgs/msg/comm.hpp"


#ifndef THYMIO_MSGS__MSG__DETAIL__COMM__TRAITS_HPP_
#define THYMIO_MSGS__MSG__DETAIL__COMM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "thymio_msgs/msg/detail/comm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace thymio_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Comm & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: payloads
  {
    if (msg.payloads.size() == 0) {
      out << "payloads: []";
    } else {
      out << "payloads: [";
      size_t pending_items = msg.payloads.size();
      for (auto item : msg.payloads) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intensities
  {
    if (msg.intensities.size() == 0) {
      out << "intensities: []";
    } else {
      out << "intensities: [";
      size_t pending_items = msg.intensities.size();
      for (auto item : msg.intensities) {
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
  const Comm & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: payloads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payloads.size() == 0) {
      out << "payloads: []\n";
    } else {
      out << "payloads:\n";
      for (auto item : msg.payloads) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: intensities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensities.size() == 0) {
      out << "intensities: []\n";
    } else {
      out << "intensities:\n";
      for (auto item : msg.intensities) {
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

inline std::string to_yaml(const Comm & msg, bool use_flow_style = false)
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
  const thymio_msgs::msg::Comm & msg,
  std::ostream & out, size_t indentation = 0)
{
  thymio_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use thymio_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const thymio_msgs::msg::Comm & msg)
{
  return thymio_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<thymio_msgs::msg::Comm>()
{
  return "thymio_msgs::msg::Comm";
}

template<>
inline const char * name<thymio_msgs::msg::Comm>()
{
  return "thymio_msgs/msg/Comm";
}

template<>
struct has_fixed_size<thymio_msgs::msg::Comm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<thymio_msgs::msg::Comm>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<thymio_msgs::msg::Comm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO_MSGS__MSG__DETAIL__COMM__TRAITS_HPP_
