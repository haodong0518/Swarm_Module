// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_custom_interfaces:srv/Movement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_sdk_custom_interfaces/srv/movement.h"


#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__MOVEMENT__STRUCT_H_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__MOVEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'movement'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Movement in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__Movement_Request
{
  rosidl_runtime_c__String movement;
  int32_t time_period;
  int32_t twist_dir;
  int32_t bending_face;
  float bending_range;
} dynamixel_sdk_custom_interfaces__srv__Movement_Request;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__Movement_Request.
typedef struct dynamixel_sdk_custom_interfaces__srv__Movement_Request__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__Movement_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__Movement_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Movement in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__Movement_Response
{
  bool success;
} dynamixel_sdk_custom_interfaces__srv__Movement_Response;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__Movement_Response.
typedef struct dynamixel_sdk_custom_interfaces__srv__Movement_Response__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__Movement_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__Movement_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dynamixel_sdk_custom_interfaces__srv__Movement_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dynamixel_sdk_custom_interfaces__srv__Movement_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Movement in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__Movement_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dynamixel_sdk_custom_interfaces__srv__Movement_Request__Sequence request;
  dynamixel_sdk_custom_interfaces__srv__Movement_Response__Sequence response;
} dynamixel_sdk_custom_interfaces__srv__Movement_Event;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__Movement_Event.
typedef struct dynamixel_sdk_custom_interfaces__srv__Movement_Event__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__Movement_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__Movement_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__MOVEMENT__STRUCT_H_
