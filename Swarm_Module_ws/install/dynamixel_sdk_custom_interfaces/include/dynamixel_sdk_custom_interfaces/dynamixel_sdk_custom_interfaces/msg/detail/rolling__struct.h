// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_custom_interfaces:msg/Rolling.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_sdk_custom_interfaces/msg/rolling.h"


#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__ROLLING__STRUCT_H_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__ROLLING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Rolling in the package dynamixel_sdk_custom_interfaces.
/**
  * Messages
 */
typedef struct dynamixel_sdk_custom_interfaces__msg__Rolling
{
  uint8_t id;
} dynamixel_sdk_custom_interfaces__msg__Rolling;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__msg__Rolling.
typedef struct dynamixel_sdk_custom_interfaces__msg__Rolling__Sequence
{
  dynamixel_sdk_custom_interfaces__msg__Rolling * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__msg__Rolling__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__ROLLING__STRUCT_H_
