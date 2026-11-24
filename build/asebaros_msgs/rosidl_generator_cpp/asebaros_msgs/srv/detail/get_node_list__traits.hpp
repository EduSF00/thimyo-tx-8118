// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from asebaros_msgs:srv/GetNodeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/get_node_list.hpp"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__TRAITS_HPP_
#define ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "asebaros_msgs/srv/detail/get_node_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace asebaros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeList_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ignored
  {
    out << "ignored: ";
    rosidl_generator_traits::value_to_yaml(msg.ignored, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNodeList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ignored
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignored: ";
    rosidl_generator_traits::value_to_yaml(msg.ignored, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNodeList_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace asebaros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use asebaros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const asebaros_msgs::srv::GetNodeList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  asebaros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use asebaros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const asebaros_msgs::srv::GetNodeList_Request & msg)
{
  return asebaros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<asebaros_msgs::srv::GetNodeList_Request>()
{
  return "asebaros_msgs::srv::GetNodeList_Request";
}

template<>
inline const char * name<asebaros_msgs::srv::GetNodeList_Request>()
{
  return "asebaros_msgs/srv/GetNodeList_Request";
}

template<>
struct has_fixed_size<asebaros_msgs::srv::GetNodeList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<asebaros_msgs::srv::GetNodeList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<asebaros_msgs::srv::GetNodeList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'nodes'
#include "asebaros_msgs/msg/detail/node__traits.hpp"

namespace asebaros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeList_Response & msg,
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
  const GetNodeList_Response & msg,
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

inline std::string to_yaml(const GetNodeList_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace asebaros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use asebaros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const asebaros_msgs::srv::GetNodeList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  asebaros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use asebaros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const asebaros_msgs::srv::GetNodeList_Response & msg)
{
  return asebaros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<asebaros_msgs::srv::GetNodeList_Response>()
{
  return "asebaros_msgs::srv::GetNodeList_Response";
}

template<>
inline const char * name<asebaros_msgs::srv::GetNodeList_Response>()
{
  return "asebaros_msgs/srv/GetNodeList_Response";
}

template<>
struct has_fixed_size<asebaros_msgs::srv::GetNodeList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<asebaros_msgs::srv::GetNodeList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<asebaros_msgs::srv::GetNodeList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace asebaros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeList_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const GetNodeList_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNodeList_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace asebaros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use asebaros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const asebaros_msgs::srv::GetNodeList_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  asebaros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use asebaros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const asebaros_msgs::srv::GetNodeList_Event & msg)
{
  return asebaros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<asebaros_msgs::srv::GetNodeList_Event>()
{
  return "asebaros_msgs::srv::GetNodeList_Event";
}

template<>
inline const char * name<asebaros_msgs::srv::GetNodeList_Event>()
{
  return "asebaros_msgs/srv/GetNodeList_Event";
}

template<>
struct has_fixed_size<asebaros_msgs::srv::GetNodeList_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<asebaros_msgs::srv::GetNodeList_Event>
  : std::integral_constant<bool, has_bounded_size<asebaros_msgs::srv::GetNodeList_Request>::value && has_bounded_size<asebaros_msgs::srv::GetNodeList_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<asebaros_msgs::srv::GetNodeList_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<asebaros_msgs::srv::GetNodeList>()
{
  return "asebaros_msgs::srv::GetNodeList";
}

template<>
inline const char * name<asebaros_msgs::srv::GetNodeList>()
{
  return "asebaros_msgs/srv/GetNodeList";
}

template<>
struct has_fixed_size<asebaros_msgs::srv::GetNodeList>
  : std::integral_constant<
    bool,
    has_fixed_size<asebaros_msgs::srv::GetNodeList_Request>::value &&
    has_fixed_size<asebaros_msgs::srv::GetNodeList_Response>::value
  >
{
};

template<>
struct has_bounded_size<asebaros_msgs::srv::GetNodeList>
  : std::integral_constant<
    bool,
    has_bounded_size<asebaros_msgs::srv::GetNodeList_Request>::value &&
    has_bounded_size<asebaros_msgs::srv::GetNodeList_Response>::value
  >
{
};

template<>
struct is_service<asebaros_msgs::srv::GetNodeList>
  : std::true_type
{
};

template<>
struct is_service_request<asebaros_msgs::srv::GetNodeList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<asebaros_msgs::srv::GetNodeList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ASEBAROS_MSGS__SRV__DETAIL__GET_NODE_LIST__TRAITS_HPP_
