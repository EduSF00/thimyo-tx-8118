// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from asebaros_msgs:srv/LoadScript.idl
// generated code does not contain a copyright notice

#include "asebaros_msgs/srv/detail/load_script__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__srv__LoadScript__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0x7f, 0x85, 0x24, 0x4e, 0x75, 0xbe, 0x36,
      0x78, 0xe4, 0xb7, 0x66, 0xd1, 0xe9, 0x17, 0xd0,
      0x32, 0xb9, 0xf9, 0x0b, 0xda, 0xd4, 0x66, 0x6c,
      0x80, 0xb7, 0x77, 0xe7, 0xb0, 0xf6, 0x8f, 0xd6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__srv__LoadScript_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0x53, 0x73, 0x90, 0x72, 0x4e, 0xd6, 0x87,
      0xb6, 0x41, 0x94, 0xc1, 0x86, 0xde, 0x26, 0x97,
      0x41, 0x8e, 0x8e, 0x5e, 0xcc, 0xc4, 0x3f, 0x10,
      0x7b, 0x2c, 0x74, 0x3f, 0x19, 0xd9, 0x80, 0xc7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__srv__LoadScript_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xc2, 0xe6, 0x82, 0x43, 0x8f, 0xb3, 0xda,
      0xf5, 0xd9, 0xd1, 0x31, 0xf8, 0x96, 0x06, 0x77,
      0x25, 0xfd, 0xc7, 0x58, 0xba, 0x07, 0xdc, 0xcd,
      0xc6, 0xbd, 0x11, 0xe5, 0x02, 0x1b, 0x45, 0x33,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__srv__LoadScript_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x95, 0x19, 0xf5, 0x7c, 0xfc, 0x49, 0x65,
      0x1c, 0x0e, 0x91, 0x40, 0x16, 0xcd, 0x2b, 0xa9,
      0x7e, 0xa8, 0xd2, 0x5c, 0x62, 0x66, 0x38, 0x0e,
      0xe0, 0x82, 0x6e, 0x11, 0xd1, 0x6b, 0x08, 0x0f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "asebaros_msgs/msg/detail/constant__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t asebaros_msgs__msg__Constant__EXPECTED_HASH = {1, {
    0x39, 0x22, 0xb5, 0x31, 0x7a, 0x6c, 0x31, 0x39,
    0x0f, 0x8f, 0x4a, 0x46, 0xc7, 0x02, 0x85, 0xfa,
    0xee, 0xf9, 0x5b, 0x74, 0x21, 0x33, 0x0d, 0x4e,
    0x67, 0x6e, 0x3c, 0xdd, 0x32, 0x50, 0x82, 0x98,
  }};
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

static char asebaros_msgs__srv__LoadScript__TYPE_NAME[] = "asebaros_msgs/srv/LoadScript";
static char asebaros_msgs__msg__Constant__TYPE_NAME[] = "asebaros_msgs/msg/Constant";
static char asebaros_msgs__srv__LoadScript_Event__TYPE_NAME[] = "asebaros_msgs/srv/LoadScript_Event";
static char asebaros_msgs__srv__LoadScript_Request__TYPE_NAME[] = "asebaros_msgs/srv/LoadScript_Request";
static char asebaros_msgs__srv__LoadScript_Response__TYPE_NAME[] = "asebaros_msgs/srv/LoadScript_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char asebaros_msgs__srv__LoadScript__FIELD_NAME__request_message[] = "request_message";
static char asebaros_msgs__srv__LoadScript__FIELD_NAME__response_message[] = "response_message";
static char asebaros_msgs__srv__LoadScript__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field asebaros_msgs__srv__LoadScript__FIELDS[] = {
  {
    {asebaros_msgs__srv__LoadScript__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {asebaros_msgs__srv__LoadScript_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {asebaros_msgs__srv__LoadScript_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {asebaros_msgs__srv__LoadScript_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription asebaros_msgs__srv__LoadScript__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {asebaros_msgs__msg__Constant__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__srv__LoadScript__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {asebaros_msgs__srv__LoadScript__TYPE_NAME, 28, 28},
      {asebaros_msgs__srv__LoadScript__FIELDS, 3, 3},
    },
    {asebaros_msgs__srv__LoadScript__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&asebaros_msgs__msg__Constant__EXPECTED_HASH, asebaros_msgs__msg__Constant__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = asebaros_msgs__msg__Constant__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = asebaros_msgs__srv__LoadScript_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = asebaros_msgs__srv__LoadScript_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = asebaros_msgs__srv__LoadScript_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char asebaros_msgs__srv__LoadScript_Request__FIELD_NAME__file_name[] = "file_name";
static char asebaros_msgs__srv__LoadScript_Request__FIELD_NAME__constants[] = "constants";
static char asebaros_msgs__srv__LoadScript_Request__FIELD_NAME__node_ids[] = "node_ids";
static char asebaros_msgs__srv__LoadScript_Request__FIELD_NAME__set_as_default[] = "set_as_default";
static char asebaros_msgs__srv__LoadScript_Request__DEFAULT_VALUE__set_as_default[] = "False";

static rosidl_runtime_c__type_description__Field asebaros_msgs__srv__LoadScript_Request__FIELDS[] = {
  {
    {asebaros_msgs__srv__LoadScript_Request__FIELD_NAME__file_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Request__FIELD_NAME__constants, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {asebaros_msgs__msg__Constant__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Request__FIELD_NAME__node_ids, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Request__FIELD_NAME__set_as_default, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {asebaros_msgs__srv__LoadScript_Request__DEFAULT_VALUE__set_as_default, 5, 5},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription asebaros_msgs__srv__LoadScript_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {asebaros_msgs__msg__Constant__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__srv__LoadScript_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {asebaros_msgs__srv__LoadScript_Request__TYPE_NAME, 36, 36},
      {asebaros_msgs__srv__LoadScript_Request__FIELDS, 4, 4},
    },
    {asebaros_msgs__srv__LoadScript_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&asebaros_msgs__msg__Constant__EXPECTED_HASH, asebaros_msgs__msg__Constant__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = asebaros_msgs__msg__Constant__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char asebaros_msgs__srv__LoadScript_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field asebaros_msgs__srv__LoadScript_Response__FIELDS[] = {
  {
    {asebaros_msgs__srv__LoadScript_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
asebaros_msgs__srv__LoadScript_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {asebaros_msgs__srv__LoadScript_Response__TYPE_NAME, 37, 37},
      {asebaros_msgs__srv__LoadScript_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char asebaros_msgs__srv__LoadScript_Event__FIELD_NAME__info[] = "info";
static char asebaros_msgs__srv__LoadScript_Event__FIELD_NAME__request[] = "request";
static char asebaros_msgs__srv__LoadScript_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field asebaros_msgs__srv__LoadScript_Event__FIELDS[] = {
  {
    {asebaros_msgs__srv__LoadScript_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {asebaros_msgs__srv__LoadScript_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {asebaros_msgs__srv__LoadScript_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription asebaros_msgs__srv__LoadScript_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {asebaros_msgs__msg__Constant__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {asebaros_msgs__srv__LoadScript_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__srv__LoadScript_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {asebaros_msgs__srv__LoadScript_Event__TYPE_NAME, 34, 34},
      {asebaros_msgs__srv__LoadScript_Event__FIELDS, 3, 3},
    },
    {asebaros_msgs__srv__LoadScript_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&asebaros_msgs__msg__Constant__EXPECTED_HASH, asebaros_msgs__msg__Constant__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = asebaros_msgs__msg__Constant__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = asebaros_msgs__srv__LoadScript_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = asebaros_msgs__srv__LoadScript_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string file_name\n"
  "asebaros_msgs/Constant[] constants\n"
  "# Leave empty to load to all nodes\n"
  "uint16[] node_ids\n"
  "bool set_as_default false\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__srv__LoadScript__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {asebaros_msgs__srv__LoadScript__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 135, 135},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__srv__LoadScript_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {asebaros_msgs__srv__LoadScript_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__srv__LoadScript_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {asebaros_msgs__srv__LoadScript_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__srv__LoadScript_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {asebaros_msgs__srv__LoadScript_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__srv__LoadScript__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *asebaros_msgs__srv__LoadScript__get_individual_type_description_source(NULL),
    sources[1] = *asebaros_msgs__msg__Constant__get_individual_type_description_source(NULL);
    sources[2] = *asebaros_msgs__srv__LoadScript_Event__get_individual_type_description_source(NULL);
    sources[3] = *asebaros_msgs__srv__LoadScript_Request__get_individual_type_description_source(NULL);
    sources[4] = *asebaros_msgs__srv__LoadScript_Response__get_individual_type_description_source(NULL);
    sources[5] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__srv__LoadScript_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *asebaros_msgs__srv__LoadScript_Request__get_individual_type_description_source(NULL),
    sources[1] = *asebaros_msgs__msg__Constant__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__srv__LoadScript_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *asebaros_msgs__srv__LoadScript_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__srv__LoadScript_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *asebaros_msgs__srv__LoadScript_Event__get_individual_type_description_source(NULL),
    sources[1] = *asebaros_msgs__msg__Constant__get_individual_type_description_source(NULL);
    sources[2] = *asebaros_msgs__srv__LoadScript_Request__get_individual_type_description_source(NULL);
    sources[3] = *asebaros_msgs__srv__LoadScript_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
