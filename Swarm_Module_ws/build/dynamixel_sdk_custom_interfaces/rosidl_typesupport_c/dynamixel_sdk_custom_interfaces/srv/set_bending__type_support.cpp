// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetBending.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__struct.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__type_support.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetBending_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBending_Request_type_support_ids_t;

static const _SetBending_Request_type_support_ids_t _SetBending_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetBending_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBending_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBending_Request_type_support_symbol_names_t _SetBending_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Request)),
  }
};

typedef struct _SetBending_Request_type_support_data_t
{
  void * data[2];
} _SetBending_Request_type_support_data_t;

static _SetBending_Request_type_support_data_t _SetBending_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBending_Request_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_SetBending_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetBending_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetBending_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetBending_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBending_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Request)() {
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_c::SetBending_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__type_support.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetBending_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBending_Response_type_support_ids_t;

static const _SetBending_Response_type_support_ids_t _SetBending_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetBending_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBending_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBending_Response_type_support_symbol_names_t _SetBending_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Response)),
  }
};

typedef struct _SetBending_Response_type_support_data_t
{
  void * data[2];
} _SetBending_Response_type_support_data_t;

static _SetBending_Response_type_support_data_t _SetBending_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBending_Response_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_SetBending_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetBending_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetBending_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetBending_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBending_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Response)() {
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_c::SetBending_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__type_support.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetBending_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBending_Event_type_support_ids_t;

static const _SetBending_Event_type_support_ids_t _SetBending_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetBending_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBending_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBending_Event_type_support_symbol_names_t _SetBending_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Event)),
  }
};

typedef struct _SetBending_Event_type_support_data_t
{
  void * data[2];
} _SetBending_Event_type_support_data_t;

static _SetBending_Event_type_support_data_t _SetBending_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBending_Event_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_SetBending_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetBending_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetBending_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetBending_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBending_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_custom_interfaces, srv, SetBending_Event)() {
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_c::SetBending_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetBending_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetBending_type_support_ids_t;

static const _SetBending_type_support_ids_t _SetBending_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetBending_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetBending_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetBending_type_support_symbol_names_t _SetBending_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, SetBending)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, SetBending)),
  }
};

typedef struct _SetBending_type_support_data_t
{
  void * data[2];
} _SetBending_type_support_data_t;

static _SetBending_type_support_data_t _SetBending_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetBending_service_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_SetBending_service_typesupport_ids.typesupport_identifier[0],
  &_SetBending_service_typesupport_symbol_names.symbol_name[0],
  &_SetBending_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetBending_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetBending_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetBending_Request_message_type_support_handle,
  &SetBending_Response_message_type_support_handle,
  &SetBending_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamixel_sdk_custom_interfaces,
    srv,
    SetBending
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamixel_sdk_custom_interfaces,
    srv,
    SetBending
  ),
  &dynamixel_sdk_custom_interfaces__srv__SetBending__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__SetBending__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__SetBending__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_custom_interfaces, srv, SetBending)() {
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_c::SetBending_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
