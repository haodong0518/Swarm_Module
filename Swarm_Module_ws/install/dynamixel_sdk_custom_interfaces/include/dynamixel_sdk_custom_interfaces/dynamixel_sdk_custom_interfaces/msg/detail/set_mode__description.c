// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamixel_sdk_custom_interfaces:msg/SetMode.idl
// generated code does not contain a copyright notice

#include "dynamixel_sdk_custom_interfaces/msg/detail/set_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0xfb, 0x93, 0xf3, 0x19, 0x97, 0x33, 0xa7,
      0x0d, 0x93, 0xbf, 0x09, 0x80, 0xc2, 0xb8, 0x48,
      0x6c, 0x5c, 0x01, 0xc9, 0xca, 0x54, 0xed, 0x81,
      0xbc, 0x60, 0x00, 0xc5, 0x21, 0xb0, 0xc0, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dynamixel_sdk_custom_interfaces__msg__SetMode__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/msg/SetMode";

// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__msg__SetMode__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__msg__SetMode__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__msg__SetMode__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__msg__SetMode__TYPE_NAME, 43, 43},
      {dynamixel_sdk_custom_interfaces__msg__SetMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 mode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__msg__SetMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__msg__SetMode__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 11, 11},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__msg__SetMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
