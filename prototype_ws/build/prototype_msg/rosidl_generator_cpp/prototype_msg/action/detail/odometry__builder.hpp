// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from prototype_msg:action/Odometry.idl
// generated code does not contain a copyright notice

#ifndef PROTOTYPE_MSG__ACTION__DETAIL__ODOMETRY__BUILDER_HPP_
#define PROTOTYPE_MSG__ACTION__DETAIL__ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "prototype_msg/action/detail/odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace prototype_msg
{

namespace action
{

namespace builder
{

class Init_Odometry_Goal_dist
{
public:
  explicit Init_Odometry_Goal_dist(::prototype_msg::action::Odometry_Goal & msg)
  : msg_(msg)
  {}
  ::prototype_msg::action::Odometry_Goal dist(::prototype_msg::action::Odometry_Goal::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype_msg::action::Odometry_Goal msg_;
};

class Init_Odometry_Goal_angular_z
{
public:
  explicit Init_Odometry_Goal_angular_z(::prototype_msg::action::Odometry_Goal & msg)
  : msg_(msg)
  {}
  Init_Odometry_Goal_dist angular_z(::prototype_msg::action::Odometry_Goal::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return Init_Odometry_Goal_dist(msg_);
  }

private:
  ::prototype_msg::action::Odometry_Goal msg_;
};

class Init_Odometry_Goal_linear_x
{
public:
  Init_Odometry_Goal_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_Goal_angular_z linear_x(::prototype_msg::action::Odometry_Goal::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_Odometry_Goal_angular_z(msg_);
  }

private:
  ::prototype_msg::action::Odometry_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype_msg::action::Odometry_Goal>()
{
  return prototype_msg::action::builder::Init_Odometry_Goal_linear_x();
}

}  // namespace prototype_msg


namespace prototype_msg
{

namespace action
{

namespace builder
{

class Init_Odometry_Result_result_dist
{
public:
  explicit Init_Odometry_Result_result_dist(::prototype_msg::action::Odometry_Result & msg)
  : msg_(msg)
  {}
  ::prototype_msg::action::Odometry_Result result_dist(::prototype_msg::action::Odometry_Result::_result_dist_type arg)
  {
    msg_.result_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype_msg::action::Odometry_Result msg_;
};

class Init_Odometry_Result_pos_theta
{
public:
  explicit Init_Odometry_Result_pos_theta(::prototype_msg::action::Odometry_Result & msg)
  : msg_(msg)
  {}
  Init_Odometry_Result_result_dist pos_theta(::prototype_msg::action::Odometry_Result::_pos_theta_type arg)
  {
    msg_.pos_theta = std::move(arg);
    return Init_Odometry_Result_result_dist(msg_);
  }

private:
  ::prototype_msg::action::Odometry_Result msg_;
};

class Init_Odometry_Result_pos_y
{
public:
  explicit Init_Odometry_Result_pos_y(::prototype_msg::action::Odometry_Result & msg)
  : msg_(msg)
  {}
  Init_Odometry_Result_pos_theta pos_y(::prototype_msg::action::Odometry_Result::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_Odometry_Result_pos_theta(msg_);
  }

private:
  ::prototype_msg::action::Odometry_Result msg_;
};

class Init_Odometry_Result_pos_x
{
public:
  Init_Odometry_Result_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_Result_pos_y pos_x(::prototype_msg::action::Odometry_Result::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_Odometry_Result_pos_y(msg_);
  }

private:
  ::prototype_msg::action::Odometry_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype_msg::action::Odometry_Result>()
{
  return prototype_msg::action::builder::Init_Odometry_Result_pos_x();
}

}  // namespace prototype_msg


namespace prototype_msg
{

namespace action
{

namespace builder
{

class Init_Odometry_Feedback_remained_dist
{
public:
  Init_Odometry_Feedback_remained_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype_msg::action::Odometry_Feedback remained_dist(::prototype_msg::action::Odometry_Feedback::_remained_dist_type arg)
  {
    msg_.remained_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype_msg::action::Odometry_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype_msg::action::Odometry_Feedback>()
{
  return prototype_msg::action::builder::Init_Odometry_Feedback_remained_dist();
}

}  // namespace prototype_msg


namespace prototype_msg
{

namespace action
{

namespace builder
{

class Init_Odometry_SendGoal_Request_goal
{
public:
  explicit Init_Odometry_SendGoal_Request_goal(::prototype_msg::action::Odometry_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::prototype_msg::action::Odometry_SendGoal_Request goal(::prototype_msg::action::Odometry_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype_msg::action::Odometry_SendGoal_Request msg_;
};

class Init_Odometry_SendGoal_Request_goal_id
{
public:
  Init_Odometry_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_SendGoal_Request_goal goal_id(::prototype_msg::action::Odometry_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Odometry_SendGoal_Request_goal(msg_);
  }

private:
  ::prototype_msg::action::Odometry_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype_msg::action::Odometry_SendGoal_Request>()
{
  return prototype_msg::action::builder::Init_Odometry_SendGoal_Request_goal_id();
}

}  // namespace prototype_msg


namespace prototype_msg
{

namespace action
{

namespace builder
{

class Init_Odometry_SendGoal_Response_stamp
{
public:
  explicit Init_Odometry_SendGoal_Response_stamp(::prototype_msg::action::Odometry_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::prototype_msg::action::Odometry_SendGoal_Response stamp(::prototype_msg::action::Odometry_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype_msg::action::Odometry_SendGoal_Response msg_;
};

class Init_Odometry_SendGoal_Response_accepted
{
public:
  Init_Odometry_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_SendGoal_Response_stamp accepted(::prototype_msg::action::Odometry_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Odometry_SendGoal_Response_stamp(msg_);
  }

private:
  ::prototype_msg::action::Odometry_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype_msg::action::Odometry_SendGoal_Response>()
{
  return prototype_msg::action::builder::Init_Odometry_SendGoal_Response_accepted();
}

}  // namespace prototype_msg


namespace prototype_msg
{

namespace action
{

namespace builder
{

class Init_Odometry_GetResult_Request_goal_id
{
public:
  Init_Odometry_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::prototype_msg::action::Odometry_GetResult_Request goal_id(::prototype_msg::action::Odometry_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype_msg::action::Odometry_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype_msg::action::Odometry_GetResult_Request>()
{
  return prototype_msg::action::builder::Init_Odometry_GetResult_Request_goal_id();
}

}  // namespace prototype_msg


namespace prototype_msg
{

namespace action
{

namespace builder
{

class Init_Odometry_GetResult_Response_result
{
public:
  explicit Init_Odometry_GetResult_Response_result(::prototype_msg::action::Odometry_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::prototype_msg::action::Odometry_GetResult_Response result(::prototype_msg::action::Odometry_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype_msg::action::Odometry_GetResult_Response msg_;
};

class Init_Odometry_GetResult_Response_status
{
public:
  Init_Odometry_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_GetResult_Response_result status(::prototype_msg::action::Odometry_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Odometry_GetResult_Response_result(msg_);
  }

private:
  ::prototype_msg::action::Odometry_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype_msg::action::Odometry_GetResult_Response>()
{
  return prototype_msg::action::builder::Init_Odometry_GetResult_Response_status();
}

}  // namespace prototype_msg


namespace prototype_msg
{

namespace action
{

namespace builder
{

class Init_Odometry_FeedbackMessage_feedback
{
public:
  explicit Init_Odometry_FeedbackMessage_feedback(::prototype_msg::action::Odometry_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::prototype_msg::action::Odometry_FeedbackMessage feedback(::prototype_msg::action::Odometry_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::prototype_msg::action::Odometry_FeedbackMessage msg_;
};

class Init_Odometry_FeedbackMessage_goal_id
{
public:
  Init_Odometry_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_FeedbackMessage_feedback goal_id(::prototype_msg::action::Odometry_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Odometry_FeedbackMessage_feedback(msg_);
  }

private:
  ::prototype_msg::action::Odometry_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::prototype_msg::action::Odometry_FeedbackMessage>()
{
  return prototype_msg::action::builder::Init_Odometry_FeedbackMessage_goal_id();
}

}  // namespace prototype_msg

#endif  // PROTOTYPE_MSG__ACTION__DETAIL__ODOMETRY__BUILDER_HPP_
