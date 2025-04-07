// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/Movement.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/movement__struct.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/movement__type_support.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/movement__functions.h"
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

typedef struct _Movement_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movement_Request_type_support_ids_t;

static const _Movement_Request_type_support_ids_t _Movement_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Movement_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movement_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movement_Request_type_support_symbol_names_t _Movement_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, Movement_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, Movement_Request)),
  }
};

typedef struct _Movement_Request_type_support_data_t
{
  void * data[2];
} _Movement_Request_type_support_data_t;

static _Movement_Request_type_support_data_t _Movement_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movement_Request_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_Movement_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Movement_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Movement_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movement_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movement_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_custom_interfaces, srv, Movement_Request)() {
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_c::Movement_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/movement__struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/movement__type_support.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/movement__functions.h"
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

typedef struct _Movement_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movement_Response_type_support_ids_t;

static const _Movement_Response_type_support_ids_t _Movement_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Movement_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movement_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movement_Response_type_support_symbol_names_t _Movement_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, Movement_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, Movement_Response)),
  }
};

typedef struct _Movement_Response_type_support_data_t
{
  void * data[2];
} _Movement_Response_type_support_data_t;

static _Movement_Response_type_support_data_t _Movement_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movement_Response_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_Movement_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Movement_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Movement_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movement_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movement_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_custom_interfaces, srv, Movement_Response)() {
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_c::Movement_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/movement__struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/movement__type_support.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/movement__functions.h"
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

typedef struct _Movement_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movement_Event_type_support_ids_t;

static const _Movement_Event_type_support_ids_t _Movement_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Movement_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movement_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movement_Event_type_support_symbol_names_t _Movement_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, Movement_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, Movement_Event)),
  }
};

typedef struct _Movement_Event_type_support_data_t
{
  void * data[2];
} _Movement_Event_type_support_data_t;

static _Movement_Event_type_support_data_t _Movement_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movement_Event_message_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_Movement_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Movement_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Movement_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movement_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movement_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_custom_interfaces, srv, Movement_Event)() {
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_c::Movement_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/movement__type_support.h"
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
typedef struct _Movement_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movement_type_support_ids_t;

static const _Movement_type_support_ids_t _Movement_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Movement_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movement_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movement_type_support_symbol_names_t _Movement_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, Movement)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, Movement)),
  }
};

typedef struct _Movement_type_support_data_t
{
  void * data[2];
} _Movement_type_support_data_t;

static _Movement_type_support_data_t _Movement_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movement_service_typesupport_map = {
  2,
  "dynamixel_sdk_custom_interfaces",
  &_Movement_service_typesupport_ids.typesupport_identifier[0],
  &_Movement_service_typesupport_symbol_names.symbol_name[0],
  &_Movement_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Movement_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movement_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Movement_Request_message_type_support_handle,
  &Movement_Response_message_type_support_handle,
  &Movement_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamixel_sdk_custom_interfaces,
    srv,
    Movement
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamixel_sdk_custom_interfaces,
    srv,
    Movement
  ),
  &dynamixel_sdk_custom_interfaces__srv__Movement__get_type_hash,
  &dynamixel_sdk_custom_interfaces__srv__Movement__get_type_description,
  &dynamixel_sdk_custom_interfaces__srv__Movement__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_sdk_custom_interfaces, srv, Movement)() {
  return &::dynamixel_sdk_custom_interfaces::srv::rosidl_typesupport_c::Movement_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
