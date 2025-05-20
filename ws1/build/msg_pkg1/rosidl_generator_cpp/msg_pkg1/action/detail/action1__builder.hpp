// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_pkg1:action/Action1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__ACTION__DETAIL__ACTION1__BUILDER_HPP_
#define MSG_PKG1__ACTION__DETAIL__ACTION1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_pkg1/action/detail/action1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_pkg1
{

namespace action
{

namespace builder
{

class Init_Action1_Goal_dist
{
public:
  explicit Init_Action1_Goal_dist(::msg_pkg1::action::Action1_Goal & msg)
  : msg_(msg)
  {}
  ::msg_pkg1::action::Action1_Goal dist(::msg_pkg1::action::Action1_Goal::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::action::Action1_Goal msg_;
};

class Init_Action1_Goal_angular_z
{
public:
  explicit Init_Action1_Goal_angular_z(::msg_pkg1::action::Action1_Goal & msg)
  : msg_(msg)
  {}
  Init_Action1_Goal_dist angular_z(::msg_pkg1::action::Action1_Goal::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return Init_Action1_Goal_dist(msg_);
  }

private:
  ::msg_pkg1::action::Action1_Goal msg_;
};

class Init_Action1_Goal_linear_x
{
public:
  Init_Action1_Goal_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action1_Goal_angular_z linear_x(::msg_pkg1::action::Action1_Goal::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_Action1_Goal_angular_z(msg_);
  }

private:
  ::msg_pkg1::action::Action1_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::action::Action1_Goal>()
{
  return msg_pkg1::action::builder::Init_Action1_Goal_linear_x();
}

}  // namespace msg_pkg1


namespace msg_pkg1
{

namespace action
{

namespace builder
{

class Init_Action1_Result_result_dist
{
public:
  explicit Init_Action1_Result_result_dist(::msg_pkg1::action::Action1_Result & msg)
  : msg_(msg)
  {}
  ::msg_pkg1::action::Action1_Result result_dist(::msg_pkg1::action::Action1_Result::_result_dist_type arg)
  {
    msg_.result_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::action::Action1_Result msg_;
};

class Init_Action1_Result_pos_theta
{
public:
  explicit Init_Action1_Result_pos_theta(::msg_pkg1::action::Action1_Result & msg)
  : msg_(msg)
  {}
  Init_Action1_Result_result_dist pos_theta(::msg_pkg1::action::Action1_Result::_pos_theta_type arg)
  {
    msg_.pos_theta = std::move(arg);
    return Init_Action1_Result_result_dist(msg_);
  }

private:
  ::msg_pkg1::action::Action1_Result msg_;
};

class Init_Action1_Result_pos_y
{
public:
  explicit Init_Action1_Result_pos_y(::msg_pkg1::action::Action1_Result & msg)
  : msg_(msg)
  {}
  Init_Action1_Result_pos_theta pos_y(::msg_pkg1::action::Action1_Result::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_Action1_Result_pos_theta(msg_);
  }

private:
  ::msg_pkg1::action::Action1_Result msg_;
};

class Init_Action1_Result_pos_x
{
public:
  Init_Action1_Result_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action1_Result_pos_y pos_x(::msg_pkg1::action::Action1_Result::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_Action1_Result_pos_y(msg_);
  }

private:
  ::msg_pkg1::action::Action1_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::action::Action1_Result>()
{
  return msg_pkg1::action::builder::Init_Action1_Result_pos_x();
}

}  // namespace msg_pkg1


namespace msg_pkg1
{

namespace action
{

namespace builder
{

class Init_Action1_Feedback_remained_dist
{
public:
  Init_Action1_Feedback_remained_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_pkg1::action::Action1_Feedback remained_dist(::msg_pkg1::action::Action1_Feedback::_remained_dist_type arg)
  {
    msg_.remained_dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::action::Action1_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::action::Action1_Feedback>()
{
  return msg_pkg1::action::builder::Init_Action1_Feedback_remained_dist();
}

}  // namespace msg_pkg1


namespace msg_pkg1
{

namespace action
{

namespace builder
{

class Init_Action1_SendGoal_Request_goal
{
public:
  explicit Init_Action1_SendGoal_Request_goal(::msg_pkg1::action::Action1_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::msg_pkg1::action::Action1_SendGoal_Request goal(::msg_pkg1::action::Action1_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::action::Action1_SendGoal_Request msg_;
};

class Init_Action1_SendGoal_Request_goal_id
{
public:
  Init_Action1_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action1_SendGoal_Request_goal goal_id(::msg_pkg1::action::Action1_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Action1_SendGoal_Request_goal(msg_);
  }

private:
  ::msg_pkg1::action::Action1_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::action::Action1_SendGoal_Request>()
{
  return msg_pkg1::action::builder::Init_Action1_SendGoal_Request_goal_id();
}

}  // namespace msg_pkg1


namespace msg_pkg1
{

namespace action
{

namespace builder
{

class Init_Action1_SendGoal_Response_stamp
{
public:
  explicit Init_Action1_SendGoal_Response_stamp(::msg_pkg1::action::Action1_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::msg_pkg1::action::Action1_SendGoal_Response stamp(::msg_pkg1::action::Action1_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::action::Action1_SendGoal_Response msg_;
};

class Init_Action1_SendGoal_Response_accepted
{
public:
  Init_Action1_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action1_SendGoal_Response_stamp accepted(::msg_pkg1::action::Action1_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Action1_SendGoal_Response_stamp(msg_);
  }

private:
  ::msg_pkg1::action::Action1_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::action::Action1_SendGoal_Response>()
{
  return msg_pkg1::action::builder::Init_Action1_SendGoal_Response_accepted();
}

}  // namespace msg_pkg1


namespace msg_pkg1
{

namespace action
{

namespace builder
{

class Init_Action1_GetResult_Request_goal_id
{
public:
  Init_Action1_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_pkg1::action::Action1_GetResult_Request goal_id(::msg_pkg1::action::Action1_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::action::Action1_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::action::Action1_GetResult_Request>()
{
  return msg_pkg1::action::builder::Init_Action1_GetResult_Request_goal_id();
}

}  // namespace msg_pkg1


namespace msg_pkg1
{

namespace action
{

namespace builder
{

class Init_Action1_GetResult_Response_result
{
public:
  explicit Init_Action1_GetResult_Response_result(::msg_pkg1::action::Action1_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::msg_pkg1::action::Action1_GetResult_Response result(::msg_pkg1::action::Action1_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::action::Action1_GetResult_Response msg_;
};

class Init_Action1_GetResult_Response_status
{
public:
  Init_Action1_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action1_GetResult_Response_result status(::msg_pkg1::action::Action1_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Action1_GetResult_Response_result(msg_);
  }

private:
  ::msg_pkg1::action::Action1_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::action::Action1_GetResult_Response>()
{
  return msg_pkg1::action::builder::Init_Action1_GetResult_Response_status();
}

}  // namespace msg_pkg1


namespace msg_pkg1
{

namespace action
{

namespace builder
{

class Init_Action1_FeedbackMessage_feedback
{
public:
  explicit Init_Action1_FeedbackMessage_feedback(::msg_pkg1::action::Action1_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::msg_pkg1::action::Action1_FeedbackMessage feedback(::msg_pkg1::action::Action1_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::action::Action1_FeedbackMessage msg_;
};

class Init_Action1_FeedbackMessage_goal_id
{
public:
  Init_Action1_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action1_FeedbackMessage_feedback goal_id(::msg_pkg1::action::Action1_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Action1_FeedbackMessage_feedback(msg_);
  }

private:
  ::msg_pkg1::action::Action1_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::action::Action1_FeedbackMessage>()
{
  return msg_pkg1::action::builder::Init_Action1_FeedbackMessage_goal_id();
}

}  // namespace msg_pkg1

#endif  // MSG_PKG1__ACTION__DETAIL__ACTION1__BUILDER_HPP_
