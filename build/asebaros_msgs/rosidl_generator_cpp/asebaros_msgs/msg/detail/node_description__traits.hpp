// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from asebaros_msgs:msg/NodeDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node_description.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__TRAITS_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "asebaros_msgs/msg/detail/node_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'constants'
#include "asebaros_msgs/msg/detail/constant__traits.hpp"

namespace asebaros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeDescription & msg,
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

  // member: constants
  {
    if (msg.constants.size() == 0) {
      out << "constants: []";
    } else {
      out << "constants: [";
      size_t pending_items = msg.constants.size();
      for (auto item : msg.constants) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: events
  {
    if (msg.events.size() == 0) {
      out << "events: []";
    } else {
      out << "events: [";
      size_t pending_items = msg.events.size();
      for (auto item : msg.events) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: variables
  {
    if (msg.variables.size() == 0) {
      out << "variables: []";
    } else {
      out << "variables: [";
      size_t pending_items = msg.variables.size();
      for (auto item : msg.variables) {
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
  const NodeDescription & msg,
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

  // member: constants
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constants.size() == 0) {
      out << "constants: []\n";
    } else {
      out << "constants:\n";
      for (auto item : msg.constants) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.events.size() == 0) {
      out << "events: []\n";
    } else {
      out << "events:\n";
      for (auto item : msg.events) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: variables
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.variables.size() == 0) {
      out << "variables: []\n";
    } else {
      out << "variables:\n";
      for (auto item : msg.variables) {
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

inline std::string to_yaml(const NodeDescription & msg, bool use_flow_style = false)
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
  const asebaros_msgs::msg::NodeDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  asebaros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use asebaros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const asebaros_msgs::msg::NodeDescription & msg)
{
  return asebaros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<asebaros_msgs::msg::NodeDescription>()
{
  return "asebaros_msgs::msg::NodeDescription";
}

template<>
inline const char * name<asebaros_msgs::msg::NodeDescription>()
{
  return "asebaros_msgs/msg/NodeDescription";
}

template<>
struct has_fixed_size<asebaros_msgs::msg::NodeDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<asebaros_msgs::msg::NodeDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<asebaros_msgs::msg::NodeDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE_DESCRIPTION__TRAITS_HPP_
