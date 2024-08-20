// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from prototype_msg:action/Movefeedback.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "prototype_msg/action/detail/movefeedback__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_Goal_type_support_ids_t;

static const _Movefeedback_Goal_type_support_ids_t _Movefeedback_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_Goal_type_support_symbol_names_t _Movefeedback_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_Goal)),
  }
};

typedef struct _Movefeedback_Goal_type_support_data_t
{
  void * data[2];
} _Movefeedback_Goal_type_support_data_t;

static _Movefeedback_Goal_type_support_data_t _Movefeedback_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_Goal_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movefeedback_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype_msg::action::Movefeedback_Goal>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype_msg, action, Movefeedback_Goal)() {
  return get_message_type_support_handle<prototype_msg::action::Movefeedback_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_Result_type_support_ids_t;

static const _Movefeedback_Result_type_support_ids_t _Movefeedback_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_Result_type_support_symbol_names_t _Movefeedback_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_Result)),
  }
};

typedef struct _Movefeedback_Result_type_support_data_t
{
  void * data[2];
} _Movefeedback_Result_type_support_data_t;

static _Movefeedback_Result_type_support_data_t _Movefeedback_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_Result_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movefeedback_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype_msg::action::Movefeedback_Result>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype_msg, action, Movefeedback_Result)() {
  return get_message_type_support_handle<prototype_msg::action::Movefeedback_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_Feedback_type_support_ids_t;

static const _Movefeedback_Feedback_type_support_ids_t _Movefeedback_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_Feedback_type_support_symbol_names_t _Movefeedback_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_Feedback)),
  }
};

typedef struct _Movefeedback_Feedback_type_support_data_t
{
  void * data[2];
} _Movefeedback_Feedback_type_support_data_t;

static _Movefeedback_Feedback_type_support_data_t _Movefeedback_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_Feedback_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movefeedback_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype_msg::action::Movefeedback_Feedback>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype_msg, action, Movefeedback_Feedback)() {
  return get_message_type_support_handle<prototype_msg::action::Movefeedback_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_SendGoal_Request_type_support_ids_t;

static const _Movefeedback_SendGoal_Request_type_support_ids_t _Movefeedback_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_SendGoal_Request_type_support_symbol_names_t _Movefeedback_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_SendGoal_Request)),
  }
};

typedef struct _Movefeedback_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Movefeedback_SendGoal_Request_type_support_data_t;

static _Movefeedback_SendGoal_Request_type_support_data_t _Movefeedback_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_SendGoal_Request_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movefeedback_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype_msg::action::Movefeedback_SendGoal_Request>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype_msg, action, Movefeedback_SendGoal_Request)() {
  return get_message_type_support_handle<prototype_msg::action::Movefeedback_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_SendGoal_Response_type_support_ids_t;

static const _Movefeedback_SendGoal_Response_type_support_ids_t _Movefeedback_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_SendGoal_Response_type_support_symbol_names_t _Movefeedback_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_SendGoal_Response)),
  }
};

typedef struct _Movefeedback_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Movefeedback_SendGoal_Response_type_support_data_t;

static _Movefeedback_SendGoal_Response_type_support_data_t _Movefeedback_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_SendGoal_Response_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movefeedback_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype_msg::action::Movefeedback_SendGoal_Response>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype_msg, action, Movefeedback_SendGoal_Response)() {
  return get_message_type_support_handle<prototype_msg::action::Movefeedback_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_SendGoal_type_support_ids_t;

static const _Movefeedback_SendGoal_type_support_ids_t _Movefeedback_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_SendGoal_type_support_symbol_names_t _Movefeedback_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_SendGoal)),
  }
};

typedef struct _Movefeedback_SendGoal_type_support_data_t
{
  void * data[2];
} _Movefeedback_SendGoal_type_support_data_t;

static _Movefeedback_SendGoal_type_support_data_t _Movefeedback_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_SendGoal_service_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Movefeedback_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<prototype_msg::action::Movefeedback_SendGoal>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_GetResult_Request_type_support_ids_t;

static const _Movefeedback_GetResult_Request_type_support_ids_t _Movefeedback_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_GetResult_Request_type_support_symbol_names_t _Movefeedback_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_GetResult_Request)),
  }
};

typedef struct _Movefeedback_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Movefeedback_GetResult_Request_type_support_data_t;

static _Movefeedback_GetResult_Request_type_support_data_t _Movefeedback_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_GetResult_Request_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movefeedback_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype_msg::action::Movefeedback_GetResult_Request>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype_msg, action, Movefeedback_GetResult_Request)() {
  return get_message_type_support_handle<prototype_msg::action::Movefeedback_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_GetResult_Response_type_support_ids_t;

static const _Movefeedback_GetResult_Response_type_support_ids_t _Movefeedback_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_GetResult_Response_type_support_symbol_names_t _Movefeedback_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_GetResult_Response)),
  }
};

typedef struct _Movefeedback_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Movefeedback_GetResult_Response_type_support_data_t;

static _Movefeedback_GetResult_Response_type_support_data_t _Movefeedback_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_GetResult_Response_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movefeedback_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype_msg::action::Movefeedback_GetResult_Response>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype_msg, action, Movefeedback_GetResult_Response)() {
  return get_message_type_support_handle<prototype_msg::action::Movefeedback_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_GetResult_type_support_ids_t;

static const _Movefeedback_GetResult_type_support_ids_t _Movefeedback_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_GetResult_type_support_symbol_names_t _Movefeedback_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_GetResult)),
  }
};

typedef struct _Movefeedback_GetResult_type_support_data_t
{
  void * data[2];
} _Movefeedback_GetResult_type_support_data_t;

static _Movefeedback_GetResult_type_support_data_t _Movefeedback_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_GetResult_service_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Movefeedback_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<prototype_msg::action::Movefeedback_GetResult>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Movefeedback_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Movefeedback_FeedbackMessage_type_support_ids_t;

static const _Movefeedback_FeedbackMessage_type_support_ids_t _Movefeedback_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Movefeedback_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Movefeedback_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Movefeedback_FeedbackMessage_type_support_symbol_names_t _Movefeedback_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, prototype_msg, action, Movefeedback_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, prototype_msg, action, Movefeedback_FeedbackMessage)),
  }
};

typedef struct _Movefeedback_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Movefeedback_FeedbackMessage_type_support_data_t;

static _Movefeedback_FeedbackMessage_type_support_data_t _Movefeedback_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Movefeedback_FeedbackMessage_message_typesupport_map = {
  2,
  "prototype_msg",
  &_Movefeedback_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Movefeedback_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Movefeedback_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Movefeedback_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Movefeedback_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<prototype_msg::action::Movefeedback_FeedbackMessage>()
{
  return &::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, prototype_msg, action, Movefeedback_FeedbackMessage)() {
  return get_message_type_support_handle<prototype_msg::action::Movefeedback_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace prototype_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Movefeedback_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<prototype_msg::action::Movefeedback>()
{
  using ::prototype_msg::action::rosidl_typesupport_cpp::Movefeedback_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Movefeedback_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::prototype_msg::action::Movefeedback::Impl::SendGoalService>();
  Movefeedback_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::prototype_msg::action::Movefeedback::Impl::GetResultService>();
  Movefeedback_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::prototype_msg::action::Movefeedback::Impl::CancelGoalService>();
  Movefeedback_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::prototype_msg::action::Movefeedback::Impl::FeedbackMessage>();
  Movefeedback_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::prototype_msg::action::Movefeedback::Impl::GoalStatusMessage>();
  return &Movefeedback_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
