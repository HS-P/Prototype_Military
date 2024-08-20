// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from prototype_msg:action/Odometry.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE_MSG__ACTION__DETAIL__ODOMETRY__STRUCT_H_
#define PROTOTYPE_MSG__ACTION__DETAIL__ODOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Odometry in the package prototype_msg.
typedef struct prototype_msg__action__Odometry_Goal
{
  float linear_x;
  float angular_z;
  float dist;
} prototype_msg__action__Odometry_Goal;

// Struct for a sequence of prototype_msg__action__Odometry_Goal.
typedef struct prototype_msg__action__Odometry_Goal__Sequence
{
  prototype_msg__action__Odometry_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Odometry_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Odometry in the package prototype_msg.
typedef struct prototype_msg__action__Odometry_Result
{
  float pos_x;
  float pos_y;
  float pos_theta;
  float result_dist;
} prototype_msg__action__Odometry_Result;

// Struct for a sequence of prototype_msg__action__Odometry_Result.
typedef struct prototype_msg__action__Odometry_Result__Sequence
{
  prototype_msg__action__Odometry_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Odometry_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Odometry in the package prototype_msg.
typedef struct prototype_msg__action__Odometry_Feedback
{
  float remained_dist;
} prototype_msg__action__Odometry_Feedback;

// Struct for a sequence of prototype_msg__action__Odometry_Feedback.
typedef struct prototype_msg__action__Odometry_Feedback__Sequence
{
  prototype_msg__action__Odometry_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Odometry_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "prototype_msg/action/detail/odometry__struct.h"

/// Struct defined in action/Odometry in the package prototype_msg.
typedef struct prototype_msg__action__Odometry_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  prototype_msg__action__Odometry_Goal goal;
} prototype_msg__action__Odometry_SendGoal_Request;

// Struct for a sequence of prototype_msg__action__Odometry_SendGoal_Request.
typedef struct prototype_msg__action__Odometry_SendGoal_Request__Sequence
{
  prototype_msg__action__Odometry_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Odometry_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Odometry in the package prototype_msg.
typedef struct prototype_msg__action__Odometry_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} prototype_msg__action__Odometry_SendGoal_Response;

// Struct for a sequence of prototype_msg__action__Odometry_SendGoal_Response.
typedef struct prototype_msg__action__Odometry_SendGoal_Response__Sequence
{
  prototype_msg__action__Odometry_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Odometry_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Odometry in the package prototype_msg.
typedef struct prototype_msg__action__Odometry_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} prototype_msg__action__Odometry_GetResult_Request;

// Struct for a sequence of prototype_msg__action__Odometry_GetResult_Request.
typedef struct prototype_msg__action__Odometry_GetResult_Request__Sequence
{
  prototype_msg__action__Odometry_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Odometry_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"

/// Struct defined in action/Odometry in the package prototype_msg.
typedef struct prototype_msg__action__Odometry_GetResult_Response
{
  int8_t status;
  prototype_msg__action__Odometry_Result result;
} prototype_msg__action__Odometry_GetResult_Response;

// Struct for a sequence of prototype_msg__action__Odometry_GetResult_Response.
typedef struct prototype_msg__action__Odometry_GetResult_Response__Sequence
{
  prototype_msg__action__Odometry_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Odometry_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "prototype_msg/action/detail/odometry__struct.h"

/// Struct defined in action/Odometry in the package prototype_msg.
typedef struct prototype_msg__action__Odometry_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  prototype_msg__action__Odometry_Feedback feedback;
} prototype_msg__action__Odometry_FeedbackMessage;

// Struct for a sequence of prototype_msg__action__Odometry_FeedbackMessage.
typedef struct prototype_msg__action__Odometry_FeedbackMessage__Sequence
{
  prototype_msg__action__Odometry_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} prototype_msg__action__Odometry_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOTYPE_MSG__ACTION__DETAIL__ODOMETRY__STRUCT_H_
