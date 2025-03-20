// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetCrawling.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/set_crawling__functions.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/set_crawling__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCrawling_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCrawling_Request_type_support_ids_t;

static const _SetCrawling_Request_type_support_ids_t _SetCrawling_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCrawling_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCrawling_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCrawling_Request_type_support_symbol_names_t _SetCrawling_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Request)),
  }
};

typedef struct _SetCrawling_Request_type_support_data_t
{
  void * data[2];
} _SetCrawling_Request_type_support_data_t;

static _SetCrawling_Request_type_support_data_t _SetCrawling_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCrawling_Request_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_SetCrawling_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetCrawling_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetCrawling_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCrawling_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCrawling_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request>()
{
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_cpp::SetCrawling_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Request)() {
  return get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request>();
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
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_crawling__functions.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_crawling__struct.hpp"
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

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCrawling_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCrawling_Response_type_support_ids_t;

static const _SetCrawling_Response_type_support_ids_t _SetCrawling_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCrawling_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCrawling_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCrawling_Response_type_support_symbol_names_t _SetCrawling_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Response)),
  }
};

typedef struct _SetCrawling_Response_type_support_data_t
{
  void * data[2];
} _SetCrawling_Response_type_support_data_t;

static _SetCrawling_Response_type_support_data_t _SetCrawling_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCrawling_Response_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_SetCrawling_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetCrawling_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetCrawling_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCrawling_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCrawling_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Response>()
{
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_cpp::SetCrawling_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Response)() {
  return get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Response>();
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
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_crawling__functions.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_crawling__struct.hpp"
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

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCrawling_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCrawling_Event_type_support_ids_t;

static const _SetCrawling_Event_type_support_ids_t _SetCrawling_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCrawling_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCrawling_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCrawling_Event_type_support_symbol_names_t _SetCrawling_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Event)),
  }
};

typedef struct _SetCrawling_Event_type_support_data_t
{
  void * data[2];
} _SetCrawling_Event_type_support_data_t;

static _SetCrawling_Event_type_support_data_t _SetCrawling_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCrawling_Event_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_SetCrawling_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetCrawling_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetCrawling_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCrawling_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCrawling_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event>()
{
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_cpp::SetCrawling_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling_Event)() {
  return get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event>();
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
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_crawling__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCrawling_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCrawling_type_support_ids_t;

static const _SetCrawling_type_support_ids_t _SetCrawling_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCrawling_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCrawling_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCrawling_type_support_symbol_names_t _SetCrawling_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling)),
  }
};

typedef struct _SetCrawling_type_support_data_t
{
  void * data[2];
} _SetCrawling_type_support_data_t;

static _SetCrawling_type_support_data_t _SetCrawling_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCrawling_service_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_SetCrawling_service_typesupport_ids.typesupport_identifier[0],
  &_SetCrawling_service_typesupport_symbol_names.symbol_name[0],
  &_SetCrawling_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetCrawling_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCrawling_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dynamixel_sdk_custom_interfaces::srv::SetCrawling>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dynamixel_sdk_custom_interfaces::srv::SetCrawling>,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__SetCrawling__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling>()
{
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_cpp::SetCrawling_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_sdk_custom_interfaces, srv, SetCrawling)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dynamixel_sdk_custom_interfaces::srv::SetCrawling>();
}

#ifdef __cplusplus
}
#endif
