// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from asebaros_msgs:srv/SetVariable.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "asebaros_msgs/srv/detail/set_variable__functions.h"
#include "asebaros_msgs/srv/detail/set_variable__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace asebaros_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetVariable_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetVariable_Request_type_support_ids_t;

static const _SetVariable_Request_type_support_ids_t _SetVariable_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetVariable_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetVariable_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetVariable_Request_type_support_symbol_names_t _SetVariable_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, asebaros_msgs, srv, SetVariable_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, asebaros_msgs, srv, SetVariable_Request)),
  }
};

typedef struct _SetVariable_Request_type_support_data_t
{
  void * data[2];
} _SetVariable_Request_type_support_data_t;

static _SetVariable_Request_type_support_data_t _SetVariable_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetVariable_Request_message_typesupport_map = {
  2,
  "asebaros_msgs",
  &_SetVariable_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetVariable_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetVariable_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetVariable_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetVariable_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &asebaros_msgs__srv__SetVariable_Request__get_type_hash,
  &asebaros_msgs__srv__SetVariable_Request__get_type_description,
  &asebaros_msgs__srv__SetVariable_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace asebaros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Request>()
{
  return &::asebaros_msgs::srv::rosidl_typesupport_cpp::SetVariable_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, asebaros_msgs, srv, SetVariable_Request)() {
  return get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__functions.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace asebaros_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetVariable_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetVariable_Response_type_support_ids_t;

static const _SetVariable_Response_type_support_ids_t _SetVariable_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetVariable_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetVariable_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetVariable_Response_type_support_symbol_names_t _SetVariable_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, asebaros_msgs, srv, SetVariable_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, asebaros_msgs, srv, SetVariable_Response)),
  }
};

typedef struct _SetVariable_Response_type_support_data_t
{
  void * data[2];
} _SetVariable_Response_type_support_data_t;

static _SetVariable_Response_type_support_data_t _SetVariable_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetVariable_Response_message_typesupport_map = {
  2,
  "asebaros_msgs",
  &_SetVariable_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetVariable_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetVariable_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetVariable_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetVariable_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &asebaros_msgs__srv__SetVariable_Response__get_type_hash,
  &asebaros_msgs__srv__SetVariable_Response__get_type_description,
  &asebaros_msgs__srv__SetVariable_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace asebaros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Response>()
{
  return &::asebaros_msgs::srv::rosidl_typesupport_cpp::SetVariable_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, asebaros_msgs, srv, SetVariable_Response)() {
  return get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__functions.h"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace asebaros_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetVariable_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetVariable_Event_type_support_ids_t;

static const _SetVariable_Event_type_support_ids_t _SetVariable_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetVariable_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetVariable_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetVariable_Event_type_support_symbol_names_t _SetVariable_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, asebaros_msgs, srv, SetVariable_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, asebaros_msgs, srv, SetVariable_Event)),
  }
};

typedef struct _SetVariable_Event_type_support_data_t
{
  void * data[2];
} _SetVariable_Event_type_support_data_t;

static _SetVariable_Event_type_support_data_t _SetVariable_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetVariable_Event_message_typesupport_map = {
  2,
  "asebaros_msgs",
  &_SetVariable_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetVariable_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetVariable_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetVariable_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetVariable_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &asebaros_msgs__srv__SetVariable_Event__get_type_hash,
  &asebaros_msgs__srv__SetVariable_Event__get_type_description,
  &asebaros_msgs__srv__SetVariable_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace asebaros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Event>()
{
  return &::asebaros_msgs::srv::rosidl_typesupport_cpp::SetVariable_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, asebaros_msgs, srv, SetVariable_Event)() {
  return get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "asebaros_msgs/srv/detail/set_variable__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace asebaros_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetVariable_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetVariable_type_support_ids_t;

static const _SetVariable_type_support_ids_t _SetVariable_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetVariable_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetVariable_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetVariable_type_support_symbol_names_t _SetVariable_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, asebaros_msgs, srv, SetVariable)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, asebaros_msgs, srv, SetVariable)),
  }
};

typedef struct _SetVariable_type_support_data_t
{
  void * data[2];
} _SetVariable_type_support_data_t;

static _SetVariable_type_support_data_t _SetVariable_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetVariable_service_typesupport_map = {
  2,
  "asebaros_msgs",
  &_SetVariable_service_typesupport_ids.typesupport_identifier[0],
  &_SetVariable_service_typesupport_symbol_names.symbol_name[0],
  &_SetVariable_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetVariable_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetVariable_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<asebaros_msgs::srv::SetVariable_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<asebaros_msgs::srv::SetVariable>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<asebaros_msgs::srv::SetVariable>,
  &asebaros_msgs__srv__SetVariable__get_type_hash,
  &asebaros_msgs__srv__SetVariable__get_type_description,
  &asebaros_msgs__srv__SetVariable__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace asebaros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<asebaros_msgs::srv::SetVariable>()
{
  return &::asebaros_msgs::srv::rosidl_typesupport_cpp::SetVariable_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, asebaros_msgs, srv, SetVariable)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<asebaros_msgs::srv::SetVariable>();
}

#ifdef __cplusplus
}
#endif
