// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from prototype_msg:action/Movefeedback.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE_MSG__ACTION__DETAIL__MOVEFEEDBACK__STRUCT_H_
#define PROTOTYPE_MSG__ACTION__DETAIL__MOVEFEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Movefeedback in the package prototype_msg.
typedef struct prototype_msg__action__Movefeedback_Goal
{
  float linear_x;
  float target_x;
  float target_y;
} prototype_msg__action__Movefeedback_Goal;

// Struct for a sequence of prototype_msg__action__Movefeedback_Goal.
typedef struct prototype_msg__action__Movefeedback_Goal__Sequence
{
  prototype_msg__action__Movefeedback_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Movefeedback_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Movefeedback in the package prototype_msg.
typedef struct prototype_msg__action__Movefeedback_Result
{
  float pos_x;
  float pos_y;
} prototype_msg__action__Movefeedback_Result;

// Struct for a sequence of prototype_msg__action__Movefeedback_Result.
typedef struct prototype_msg__action__Movefeedback_Result__Sequence
{
  prototype_msg__action__Movefeedback_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Movefeedback_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Movefeedback in the package prototype_msg.
typedef struct prototype_msg__action__Movefeedback_Feedback
{
  float error_s;
  float error_theta;
} prototype_msg__action__Movefeedback_Feedback;

// Struct for a sequence of prototype_msg__action__Movefeedback_Feedback.
typedef struct prototype_msg__action__Movefeedback_Feedback__Sequence
{
  prototype_msg__action__Movefeedback_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Movefeedback_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "prototype_msg/action/detail/movefeedback__struct.h"

/// Struct defined in action/Movefeedback in the package prototype_msg.
typedef struct prototype_msg__action__Movefeedback_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  prototype_msg__action__Movefeedback_Goal goal;
} prototype_msg__action__Movefeedback_SendGoal_Request;

// Struct for a sequence of prototype_msg__action__Movefeedback_SendGoal_Request.
typedef struct prototype_msg__action__Movefeedback_SendGoal_Request__Sequence
{
  prototype_msg__action__Movefeedback_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Movefeedback_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Movefeedback in the package prototype_msg.
typedef struct prototype_msg__action__Movefeedback_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} prototype_msg__action__Movefeedback_SendGoal_Response;

// Struct for a sequence of prototype_msg__action__Movefeedback_SendGoal_Response.
typedef struct prototype_msg__action__Movefeedback_SendGoal_Response__Sequence
{
  prototype_msg__action__Movefeedback_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Movefeedback_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Movefeedback in the package prototype_msg.
typedef struct prototype_msg__action__Movefeedback_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} prototype_msg__action__Movefeedback_GetResult_Request;

// Struct for a sequence of prototype_msg__action__Movefeedback_GetResult_Request.
typedef struct prototype_msg__action__Movefeedback_GetResult_Request__Sequence
{
  prototype_msg__action__Movefeedback_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Movefeedback_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.h"

/// Struct defined in action/Movefeedback in the package prototype_msg.
typedef struct prototype_msg__action__Movefeedback_GetResult_Response
{
  int8_t status;
  prototype_msg__action__Movefeedback_Result result;
} prototype_msg__action__Movefeedback_GetResult_Response;

// Struct for a sequence of prototype_msg__action__Movefeedback_GetResult_Response.
typedef struct prototype_msg__action__Movefeedback_GetResult_Response__Sequence
{
  prototype_msg__action__Movefeedback_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Movefeedback_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "prototype_msg/action/detail/movefeedback__struct.h"

/// Struct defined in action/Movefeedback in the package prototype_msg.
typedef struct prototype_msg__action__Movefeedback_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  prototype_msg__action__Movefeedback_Feedback feedback;
} prototype_msg__action__Movefeedback_FeedbackMessage;

// Struct for a sequence of prototype_msg__action__Movefeedback_FeedbackMessage.
typedef struct prototype_msg__action__Movefeedback_FeedbackMessage__Sequence
{
  prototype_msg__action__Movefeedback_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Movefeedback_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE_MSG__ACTION__DETAIL__MOVEFEEDBACK__STRUCT_H_
