// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetCrawling.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_sdk_custom_interfaces/srv/set_crawling.h"


#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_CRAWLING__STRUCT_H_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_CRAWLING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetCrawling in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request
{
  rosidl_runtime_c__String state;
  int32_t time_period;
} dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request.
typedef struct dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetCrawling in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response
{
  bool success;
} dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response.
typedef struct dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetCrawling in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dynamixel_sdk_custom_interfaces__srv__SetCrawling_Request__Sequence request;
  dynamixel_sdk_custom_interfaces__srv__SetCrawling_Response__Sequence response;
} dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event.
typedef struct dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__SetCrawling_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_CRAWLING__STRUCT_H_
