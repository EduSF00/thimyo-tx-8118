// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from asebaros_msgs:msg/Constant.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "asebaros_msgs/msg/detail/constant__functions.h"
#include "asebaros_msgs/msg/detail/constant__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace asebaros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Constant_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) asebaros_msgs::msg::Constant(_init);
}

void Constant_fini_function(void * message_memory)
{
  auto typed_message = static_cast<asebaros_msgs::msg::Constant *>(message_memory);
  typed_message->~Constant();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Constant_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::Constant, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(asebaros_msgs::msg::Constant, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Constant_message_members = {
  "asebaros_msgs::msg",  // message namespace
  "Constant",  // message name
  2,  // number of fields
  sizeof(asebaros_msgs::msg::Constant),
  false,  // has_any_key_member_
  Constant_message_member_array,  // message members
  Constant_init_function,  // function to initialize message memory (memory has to be allocated)
  Constant_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Constant_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Constant_message_members,
  get_message_typesupport_handle_function,
  &asebaros_msgs__msg__Constant__get_type_hash,
  &asebaros_msgs__msg__Constant__get_type_description,
  &asebaros_msgs__msg__Constant__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace asebaros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<asebaros_msgs::msg::Constant>()
{
  return &::asebaros_msgs::msg::rosidl_typesupport_introspection_cpp::Constant_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, asebaros_msgs, msg, Constant)() {
  return &::asebaros_msgs::msg::rosidl_typesupport_introspection_cpp::Constant_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
