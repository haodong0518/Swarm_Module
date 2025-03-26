// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamixel_sdk_custom_interfaces:srv/Movement.idl
// generated code does not contain a copyright notice

#include "dynamixel_sdk_custom_interfaces/srv/detail/movement__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__Movement__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x80, 0x4f, 0x39, 0x34, 0x24, 0x1f, 0x9e,
      0x09, 0xf9, 0xcf, 0x36, 0x87, 0xfd, 0x29, 0x28,
      0xa1, 0x3a, 0x2c, 0xf3, 0x65, 0xd5, 0x03, 0x2c,
      0x36, 0x0d, 0x73, 0x84, 0x3a, 0x66, 0x98, 0x01,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3f, 0x99, 0x7b, 0x6a, 0x11, 0xb0, 0x8d, 0x60,
      0xc8, 0x87, 0xc9, 0xcf, 0x18, 0x51, 0xdb, 0x8f,
      0x5e, 0xd4, 0x5f, 0xe8, 0x4c, 0x4a, 0x79, 0x50,
      0x94, 0x55, 0xa1, 0x9d, 0x3d, 0x6f, 0x6e, 0xea,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0xac, 0xf3, 0x5d, 0x56, 0xc5, 0x98, 0x53,
      0xa3, 0x2d, 0x3e, 0x7d, 0xb0, 0xcd, 0xd5, 0x90,
      0x5a, 0xd1, 0xdc, 0x42, 0xbd, 0x92, 0xe9, 0x3d,
      0x64, 0x40, 0xff, 0x3d, 0x1c, 0xa7, 0x7c, 0xd8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xd8, 0x48, 0x29, 0x08, 0x92, 0xb4, 0x0e,
      0x81, 0x2d, 0xfa, 0x81, 0x76, 0xcc, 0x3e, 0x25,
      0x58, 0xf0, 0x70, 0xb4, 0xbf, 0x9b, 0xb4, 0xb2,
      0x15, 0x05, 0xa0, 0x7c, 0x7e, 0x20, 0xe1, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char dynamixel_sdk_custom_interfaces__srv__Movement__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/Movement";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Event__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/Movement_Event";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Request__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/Movement_Request";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Response__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/Movement_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__Movement__FIELD_NAME__request_message[] = "request_message";
static char dynamixel_sdk_custom_interfaces__srv__Movement__FIELD_NAME__response_message[] = "response_message";
static char dynamixel_sdk_custom_interfaces__srv__Movement__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__Movement__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__Movement_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__Movement_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__Movement_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_sdk_custom_interfaces__srv__Movement__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__Movement__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__Movement__TYPE_NAME, 44, 44},
      {dynamixel_sdk_custom_interfaces__srv__Movement__FIELDS, 3, 3},
    },
    {dynamixel_sdk_custom_interfaces__srv__Movement__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__movement[] = "movement";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__time_period[] = "time_period";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__twist_dir[] = "twist_dir";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__bending_face[] = "bending_face";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__bending_range[] = "bending_range";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__movement, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__time_period, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__twist_dir, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__bending_face, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELD_NAME__bending_range, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__Movement_Request__TYPE_NAME, 52, 52},
      {dynamixel_sdk_custom_interfaces__srv__Movement_Request__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__Movement_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__Movement_Response__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__Movement_Response__TYPE_NAME, 53, 53},
      {dynamixel_sdk_custom_interfaces__srv__Movement_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__Movement_Event__FIELD_NAME__info[] = "info";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Event__FIELD_NAME__request[] = "request";
static char dynamixel_sdk_custom_interfaces__srv__Movement_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__Movement_Event__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamixel_sdk_custom_interfaces__srv__Movement_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamixel_sdk_custom_interfaces__srv__Movement_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_sdk_custom_interfaces__srv__Movement_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__Movement_Event__TYPE_NAME, 50, 50},
      {dynamixel_sdk_custom_interfaces__srv__Movement_Event__FIELDS, 3, 3},
    },
    {dynamixel_sdk_custom_interfaces__srv__Movement_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Constants\n"
  "# Request\n"
  "string movement\n"
  "int32 time_period\n"
  "int32 twist_dir\n"
  "int32 bending_face\n"
  "float32 bending_range\n"
  "---\n"
  "# Response\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__Movement__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__Movement__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 140, 140},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__Movement_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__Movement__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__Movement__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_individual_type_description_source(NULL);
    sources[3] = *dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_individual_type_description_source(NULL);
    sources[4] = *dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__Movement_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamixel_sdk_custom_interfaces__srv__Movement_Request__get_individual_type_description_source(NULL);
    sources[3] = *dynamixel_sdk_custom_interfaces__srv__Movement_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
