// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from epos_action_node:action/Move.idl
// generated code does not contain a copyright notice

#ifndef EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "epos_action_node/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace epos_action_node
{

namespace action
{

namespace builder
{

class Init_Move_Goal_order
{
public:
  Init_Move_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::epos_action_node::action::Move_Goal order(::epos_action_node::action::Move_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_action_node::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_action_node::action::Move_Goal>()
{
  return epos_action_node::action::builder::Init_Move_Goal_order();
}

}  // namespace epos_action_node


namespace epos_action_node
{

namespace action
{

namespace builder
{

class Init_Move_Result_sequence
{
public:
  Init_Move_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::epos_action_node::action::Move_Result sequence(::epos_action_node::action::Move_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_action_node::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_action_node::action::Move_Result>()
{
  return epos_action_node::action::builder::Init_Move_Result_sequence();
}

}  // namespace epos_action_node


namespace epos_action_node
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_partial_sequences
{
public:
  Init_Move_Feedback_partial_sequences()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::epos_action_node::action::Move_Feedback partial_sequences(::epos_action_node::action::Move_Feedback::_partial_sequences_type arg)
  {
    msg_.partial_sequences = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_action_node::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_action_node::action::Move_Feedback>()
{
  return epos_action_node::action::builder::Init_Move_Feedback_partial_sequences();
}

}  // namespace epos_action_node


namespace epos_action_node
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::epos_action_node::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::epos_action_node::action::Move_SendGoal_Request goal(::epos_action_node::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_action_node::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::epos_action_node::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::epos_action_node::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_action_node::action::Move_SendGoal_Request>()
{
  return epos_action_node::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace epos_action_node


namespace epos_action_node
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::epos_action_node::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::epos_action_node::action::Move_SendGoal_Response stamp(::epos_action_node::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_action_node::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::epos_action_node::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::epos_action_node::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_action_node::action::Move_SendGoal_Response>()
{
  return epos_action_node::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace epos_action_node


namespace epos_action_node
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::epos_action_node::action::Move_GetResult_Request goal_id(::epos_action_node::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_action_node::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_action_node::action::Move_GetResult_Request>()
{
  return epos_action_node::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace epos_action_node


namespace epos_action_node
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::epos_action_node::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::epos_action_node::action::Move_GetResult_Response result(::epos_action_node::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_action_node::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::epos_action_node::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::epos_action_node::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_action_node::action::Move_GetResult_Response>()
{
  return epos_action_node::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace epos_action_node


namespace epos_action_node
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::epos_action_node::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::epos_action_node::action::Move_FeedbackMessage feedback(::epos_action_node::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_action_node::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::epos_action_node::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::epos_action_node::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_action_node::action::Move_FeedbackMessage>()
{
  return epos_action_node::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace epos_action_node

#endif  // EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__BUILDER_HPP_
