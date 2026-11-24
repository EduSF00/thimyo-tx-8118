// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from asebaros_msgs:msg/NodeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/msg/node_list.hpp"


#ifndef ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__TRAITS_HPP_
#define ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "asebaros_msgs/msg/detail/node_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nodes'
#include "asebaros_msgs/msg/detail/node__traits.hpp"

namespace asebaros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeList & msg,
  std::ostream & out)
{
  out << "{";
  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
        to_flow_style_yaml(item, out);
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
  const NodeList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeList & msg, bool use_flow_style = false)
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
  const asebaros_msgs::msg::NodeList & msg,
  std::ostream & out, size_t indentation = 0)
{
  asebaros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use asebaros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const asebaros_msgs::msg::NodeList & msg)
{
  return asebaros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<asebaros_msgs::msg::NodeList>()
{
  return "asebaros_msgs::msg::NodeList";
}

template<>
inline const char * name<asebaros_msgs::msg::NodeList>()
{
  return "asebaros_msgs/msg/NodeList";
}

template<>
struct has_fixed_size<asebaros_msgs::msg::NodeList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<asebaros_msgs::msg::NodeList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<asebaros_msgs::msg::NodeList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASEBAROS_MSGS__MSG__DETAIL__NODE_LIST__TRAITS_HPP_
