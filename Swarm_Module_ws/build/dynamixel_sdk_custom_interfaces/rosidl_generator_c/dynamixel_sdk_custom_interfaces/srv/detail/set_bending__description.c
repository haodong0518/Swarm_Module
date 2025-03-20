// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetBending.idl
// generated code does not contain a copyright notice

#include "dynamixel_sdk_custom_interfaces/srv/detail/set_bending__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__SetBending__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0xda, 0x7f, 0xef, 0xf6, 0xaa, 0x42, 0x8a,
      0xc1, 0x77, 0xdf, 0x36, 0x42, 0xf6, 0x4a, 0x8f,
      0x33, 0x68, 0xf0, 0xe6, 0x40, 0x06, 0x37, 0x38,
      0xdf, 0x27, 0x86, 0x64, 0x04, 0x21, 0x0f, 0x42,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0x98, 0x00, 0x16, 0x52, 0xdf, 0x4c, 0x44,
      0xc0, 0x3c, 0xbc, 0xd0, 0x32, 0x0f, 0x09, 0x31,
      0xdc, 0x58, 0xb8, 0x27, 0x3e, 0x06, 0x39, 0xf9,
      0xf7, 0xad, 0x47, 0x07, 0x19, 0xcc, 0x58, 0x55,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0x28, 0xb3, 0x14, 0x26, 0xf1, 0x54, 0xfc,
      0xcd, 0x2d, 0x53, 0xfa, 0x05, 0x21, 0x03, 0xf6,
      0x34, 0xfc, 0x1e, 0xd9, 0x6f, 0xed, 0x97, 0x80,
      0x2d, 0xb3, 0xf6, 0x75, 0xbb, 0x55, 0xa4, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0xaa, 0xf1, 0x11, 0x9f, 0x5c, 0x77, 0xf1,
      0x01, 0x9e, 0x6a, 0x47, 0x44, 0x15, 0x6f, 0xe0,
      0x8d, 0xed, 0xf8, 0x55, 0x73, 0xb3, 0x53, 0x08,
      0x78, 0x56, 0xfd, 0x58, 0xff, 0x7a, 0x77, 0x61,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char dynamixel_sdk_custom_interfaces__srv__SetBending__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/SetBending";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Event__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/SetBending_Event";
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Request__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/SetBending_Request";
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Response__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/SetBending_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__SetBending__FIELD_NAME__request_message[] = "request_message";
static char dynamixel_sdk_custom_interfaces__srv__SetBending__FIELD_NAME__response_message[] = "response_message";
static char dynamixel_sdk_custom_interfaces__srv__SetBending__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__SetBending__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Response__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_sdk_custom_interfaces__srv__SetBending__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Response__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__SetBending__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__SetBending__TYPE_NAME, 46, 46},
      {dynamixel_sdk_custom_interfaces__srv__SetBending__FIELDS, 3, 3},
    },
    {dynamixel_sdk_custom_interfaces__srv__SetBending__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Request__FIELD_NAME__bend_state[] = "bend_state";
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Request__FIELD_NAME__face[] = "face";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__SetBending_Request__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__FIELD_NAME__bend_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__FIELD_NAME__face, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__TYPE_NAME, 54, 54},
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__SetBending_Response__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Response__FIELD_NAME__success, 7, 7},
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
dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Response__TYPE_NAME, 55, 55},
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Event__FIELD_NAME__info[] = "info";
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Event__FIELD_NAME__request[] = "request";
static char dynamixel_sdk_custom_interfaces__srv__SetBending_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__SetBending_Event__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Response__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_sdk_custom_interfaces__srv__SetBending_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Response__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__TYPE_NAME, 52, 52},
      {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__FIELDS, 3, 3},
    },
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Constants\n"
  "# Request\n"
  "float64 bend_state\n"
  "int32 face\n"
  "---\n"
  "# Response\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__SetBending__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__SetBending__TYPE_NAME, 46, 46},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Request__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Response__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__SetBending_Event__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__SetBending__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__SetBending__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_individual_type_description_source(NULL);
    sources[3] = *dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_individual_type_description_source(NULL);
    sources[4] = *dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__SetBending_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamixel_sdk_custom_interfaces__srv__SetBending_Request__get_individual_type_description_source(NULL);
    sources[3] = *dynamixel_sdk_custom_interfaces__srv__SetBending_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
