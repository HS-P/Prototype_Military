// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from prototype_msg:action/Odometry.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "prototype_msg/action/detail/odometry__struct.h"
#include "prototype_msg/action/detail/odometry__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_Goal_type_support_ids_t;

static const _Odometry_Goal_type_support_ids_t _Odometry_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_Goal_type_support_symbol_names_t _Odometry_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_Goal)),
  }
};

typedef struct _Odometry_Goal_type_support_data_t
{
  void * data[2];
} _Odometry_Goal_type_support_data_t;

static _Odometry_Goal_type_support_data_t _Odometry_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_Goal_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Odometry_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Odometry_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Odometry_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_Goal)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
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

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_Result_type_support_ids_t;

static const _Odometry_Result_type_support_ids_t _Odometry_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_Result_type_support_symbol_names_t _Odometry_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_Result)),
  }
};

typedef struct _Odometry_Result_type_support_data_t
{
  void * data[2];
} _Odometry_Result_type_support_data_t;

static _Odometry_Result_type_support_data_t _Odometry_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_Result_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Odometry_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Odometry_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Odometry_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_Result)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
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

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_Feedback_type_support_ids_t;

static const _Odometry_Feedback_type_support_ids_t _Odometry_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_Feedback_type_support_symbol_names_t _Odometry_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_Feedback)),
  }
};

typedef struct _Odometry_Feedback_type_support_data_t
{
  void * data[2];
} _Odometry_Feedback_type_support_data_t;

static _Odometry_Feedback_type_support_data_t _Odometry_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_Feedback_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Odometry_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Odometry_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Odometry_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_Feedback)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
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

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_SendGoal_Request_type_support_ids_t;

static const _Odometry_SendGoal_Request_type_support_ids_t _Odometry_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_SendGoal_Request_type_support_symbol_names_t _Odometry_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_SendGoal_Request)),
  }
};

typedef struct _Odometry_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Odometry_SendGoal_Request_type_support_data_t;

static _Odometry_SendGoal_Request_type_support_data_t _Odometry_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_SendGoal_Request_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Odometry_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Odometry_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Odometry_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_SendGoal_Request)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
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

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_SendGoal_Response_type_support_ids_t;

static const _Odometry_SendGoal_Response_type_support_ids_t _Odometry_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_SendGoal_Response_type_support_symbol_names_t _Odometry_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_SendGoal_Response)),
  }
};

typedef struct _Odometry_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Odometry_SendGoal_Response_type_support_data_t;

static _Odometry_SendGoal_Response_type_support_data_t _Odometry_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_SendGoal_Response_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Odometry_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Odometry_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Odometry_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_SendGoal_Response)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_SendGoal_type_support_ids_t;

static const _Odometry_SendGoal_type_support_ids_t _Odometry_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_SendGoal_type_support_symbol_names_t _Odometry_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_SendGoal)),
  }
};

typedef struct _Odometry_SendGoal_type_support_data_t
{
  void * data[2];
} _Odometry_SendGoal_type_support_data_t;

static _Odometry_SendGoal_type_support_data_t _Odometry_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_SendGoal_service_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Odometry_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Odometry_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Odometry_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_SendGoal)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
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

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_GetResult_Request_type_support_ids_t;

static const _Odometry_GetResult_Request_type_support_ids_t _Odometry_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_GetResult_Request_type_support_symbol_names_t _Odometry_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_GetResult_Request)),
  }
};

typedef struct _Odometry_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Odometry_GetResult_Request_type_support_data_t;

static _Odometry_GetResult_Request_type_support_data_t _Odometry_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_GetResult_Request_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Odometry_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Odometry_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Odometry_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_GetResult_Request)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
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

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_GetResult_Response_type_support_ids_t;

static const _Odometry_GetResult_Response_type_support_ids_t _Odometry_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_GetResult_Response_type_support_symbol_names_t _Odometry_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_GetResult_Response)),
  }
};

typedef struct _Odometry_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Odometry_GetResult_Response_type_support_data_t;

static _Odometry_GetResult_Response_type_support_data_t _Odometry_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_GetResult_Response_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Odometry_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Odometry_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Odometry_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_GetResult_Response)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_GetResult_type_support_ids_t;

static const _Odometry_GetResult_type_support_ids_t _Odometry_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_GetResult_type_support_symbol_names_t _Odometry_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_GetResult)),
  }
};

typedef struct _Odometry_GetResult_type_support_data_t
{
  void * data[2];
} _Odometry_GetResult_type_support_data_t;

static _Odometry_GetResult_type_support_data_t _Odometry_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_GetResult_service_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Odometry_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Odometry_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Odometry_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_GetResult)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"
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

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Odometry_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Odometry_FeedbackMessage_type_support_ids_t;

static const _Odometry_FeedbackMessage_type_support_ids_t _Odometry_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Odometry_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Odometry_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Odometry_FeedbackMessage_type_support_symbol_names_t _Odometry_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, prototype_msg, action, Odometry_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, prototype_msg, action, Odometry_FeedbackMessage)),
  }
};

typedef struct _Odometry_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Odometry_FeedbackMessage_type_support_data_t;

static _Odometry_FeedbackMessage_type_support_data_t _Odometry_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Odometry_FeedbackMessage_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Odometry_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Odometry_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Odometry_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Odometry_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Odometry_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace prototype_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, prototype_msg, action, Odometry_FeedbackMessage)() {
  return &::prototype_msg::action::rosidl_typesupport_c::Odometry_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "prototype_msg/action/odometry.h"
// already included above
// #include "prototype_msg/action/detail/odometry__type_support.h"

static rosidl_action_type_support_t _prototype_msg__action__Odometry__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, prototype_msg, action, Odometry)()
{
  // Thread-safe by always writing the same values to the static struct
  _prototype_msg__action__Odometry__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, prototype_msg, action, Odometry_SendGoal)();
  _prototype_msg__action__Odometry__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, prototype_msg, action, Odometry_GetResult)();
  _prototype_msg__action__Odometry__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _prototype_msg__action__Odometry__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, prototype_msg, action, Odometry_FeedbackMessage)();
  _prototype_msg__action__Odometry__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_prototype_msg__action__Odometry__typesupport_c;
}

#ifdef __cplusplus
}
#endif
