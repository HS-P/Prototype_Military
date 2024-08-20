// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from prototype_msg:action/Movefeedback.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE_MSG__ACTION__DETAIL__MOVEFEEDBACK__TRAITS_HPP_
#define PROTOTYPE_MSG__ACTION__DETAIL__MOVEFEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "prototype_msg/action/detail/movefeedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace prototype_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Movefeedback_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_x
  {
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << ", ";
  }

  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movefeedback_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << "\n";
  }

  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movefeedback_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_generator_traits
{

[[deprecated("use prototype_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype_msg::action::Movefeedback_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype_msg::action::Movefeedback_Goal & msg)
{
  return prototype_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_Goal>()
{
  return "prototype_msg::action::Movefeedback_Goal";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_Goal>()
{
  return "prototype_msg/action/Movefeedback_Goal";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<prototype_msg::action::Movefeedback_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace prototype_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Movefeedback_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_x
  {
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << ", ";
  }

  // member: pos_y
  {
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movefeedback_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movefeedback_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_generator_traits
{

[[deprecated("use prototype_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype_msg::action::Movefeedback_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype_msg::action::Movefeedback_Result & msg)
{
  return prototype_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_Result>()
{
  return "prototype_msg::action::Movefeedback_Result";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_Result>()
{
  return "prototype_msg/action/Movefeedback_Result";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<prototype_msg::action::Movefeedback_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace prototype_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Movefeedback_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_s
  {
    out << "error_s: ";
    rosidl_generator_traits::value_to_yaml(msg.error_s, out);
    out << ", ";
  }

  // member: error_theta
  {
    out << "error_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.error_theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movefeedback_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_s: ";
    rosidl_generator_traits::value_to_yaml(msg.error_s, out);
    out << "\n";
  }

  // member: error_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.error_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movefeedback_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_generator_traits
{

[[deprecated("use prototype_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype_msg::action::Movefeedback_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype_msg::action::Movefeedback_Feedback & msg)
{
  return prototype_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_Feedback>()
{
  return "prototype_msg::action::Movefeedback_Feedback";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_Feedback>()
{
  return "prototype_msg/action/Movefeedback_Feedback";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<prototype_msg::action::Movefeedback_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "prototype_msg/action/detail/movefeedback__traits.hpp"

namespace prototype_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Movefeedback_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movefeedback_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movefeedback_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_generator_traits
{

[[deprecated("use prototype_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype_msg::action::Movefeedback_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype_msg::action::Movefeedback_SendGoal_Request & msg)
{
  return prototype_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_SendGoal_Request>()
{
  return "prototype_msg::action::Movefeedback_SendGoal_Request";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_SendGoal_Request>()
{
  return "prototype_msg/action/Movefeedback_SendGoal_Request";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<prototype_msg::action::Movefeedback_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<prototype_msg::action::Movefeedback_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype_msg::action::Movefeedback_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace prototype_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Movefeedback_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movefeedback_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movefeedback_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_generator_traits
{

[[deprecated("use prototype_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype_msg::action::Movefeedback_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype_msg::action::Movefeedback_SendGoal_Response & msg)
{
  return prototype_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_SendGoal_Response>()
{
  return "prototype_msg::action::Movefeedback_SendGoal_Response";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_SendGoal_Response>()
{
  return "prototype_msg/action/Movefeedback_SendGoal_Response";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<prototype_msg::action::Movefeedback_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_SendGoal>()
{
  return "prototype_msg::action::Movefeedback_SendGoal";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_SendGoal>()
{
  return "prototype_msg/action/Movefeedback_SendGoal";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<prototype_msg::action::Movefeedback_SendGoal_Request>::value &&
    has_fixed_size<prototype_msg::action::Movefeedback_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<prototype_msg::action::Movefeedback_SendGoal_Request>::value &&
    has_bounded_size<prototype_msg::action::Movefeedback_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<prototype_msg::action::Movefeedback_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<prototype_msg::action::Movefeedback_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<prototype_msg::action::Movefeedback_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace prototype_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Movefeedback_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movefeedback_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movefeedback_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_generator_traits
{

[[deprecated("use prototype_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype_msg::action::Movefeedback_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype_msg::action::Movefeedback_GetResult_Request & msg)
{
  return prototype_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_GetResult_Request>()
{
  return "prototype_msg::action::Movefeedback_GetResult_Request";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_GetResult_Request>()
{
  return "prototype_msg/action/Movefeedback_GetResult_Request";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype_msg::action::Movefeedback_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "prototype_msg/action/detail/movefeedback__traits.hpp"

namespace prototype_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Movefeedback_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movefeedback_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movefeedback_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_generator_traits
{

[[deprecated("use prototype_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype_msg::action::Movefeedback_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype_msg::action::Movefeedback_GetResult_Response & msg)
{
  return prototype_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_GetResult_Response>()
{
  return "prototype_msg::action::Movefeedback_GetResult_Response";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_GetResult_Response>()
{
  return "prototype_msg/action/Movefeedback_GetResult_Response";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<prototype_msg::action::Movefeedback_Result>::value> {};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<prototype_msg::action::Movefeedback_Result>::value> {};

template<>
struct is_message<prototype_msg::action::Movefeedback_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_GetResult>()
{
  return "prototype_msg::action::Movefeedback_GetResult";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_GetResult>()
{
  return "prototype_msg/action/Movefeedback_GetResult";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<prototype_msg::action::Movefeedback_GetResult_Request>::value &&
    has_fixed_size<prototype_msg::action::Movefeedback_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<prototype_msg::action::Movefeedback_GetResult_Request>::value &&
    has_bounded_size<prototype_msg::action::Movefeedback_GetResult_Response>::value
  >
{
};

template<>
struct is_service<prototype_msg::action::Movefeedback_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<prototype_msg::action::Movefeedback_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<prototype_msg::action::Movefeedback_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "prototype_msg/action/detail/movefeedback__traits.hpp"

namespace prototype_msg
{

namespace action
{

inline void to_flow_style_yaml(
  const Movefeedback_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Movefeedback_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Movefeedback_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace prototype_msg

namespace rosidl_generator_traits
{

[[deprecated("use prototype_msg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const prototype_msg::action::Movefeedback_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  prototype_msg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use prototype_msg::action::to_yaml() instead")]]
inline std::string to_yaml(const prototype_msg::action::Movefeedback_FeedbackMessage & msg)
{
  return prototype_msg::action::to_yaml(msg);
}

template<>
inline const char * data_type<prototype_msg::action::Movefeedback_FeedbackMessage>()
{
  return "prototype_msg::action::Movefeedback_FeedbackMessage";
}

template<>
inline const char * name<prototype_msg::action::Movefeedback_FeedbackMessage>()
{
  return "prototype_msg/action/Movefeedback_FeedbackMessage";
}

template<>
struct has_fixed_size<prototype_msg::action::Movefeedback_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<prototype_msg::action::Movefeedback_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<prototype_msg::action::Movefeedback_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<prototype_msg::action::Movefeedback_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<prototype_msg::action::Movefeedback_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<prototype_msg::action::Movefeedback>
  : std::true_type
{
};

template<>
struct is_action_goal<prototype_msg::action::Movefeedback_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<prototype_msg::action::Movefeedback_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<prototype_msg::action::Movefeedback_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROTOTYPE_MSG__ACTION__DETAIL__MOVEFEEDBACK__TRAITS_HPP_
