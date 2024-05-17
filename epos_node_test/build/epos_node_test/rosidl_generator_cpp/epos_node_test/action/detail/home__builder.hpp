// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from epos_node_test:action/Home.idl
// generated code does not contain a copyright notice

#ifndef EPOS_NODE_TEST__ACTION__DETAIL__HOME__BUILDER_HPP_
#define EPOS_NODE_TEST__ACTION__DETAIL__HOME__BUILDER_HPP_

#include "epos_node_test/action/detail/home__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace epos_node_test
{

namespace action
{

namespace builder
{

class Init_Home_Goal_order
{
public:
  Init_Home_Goal_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::epos_node_test::action::Home_Goal order(::epos_node_test::action::Home_Goal::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_node_test::action::Home_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_node_test::action::Home_Goal>()
{
  return epos_node_test::action::builder::Init_Home_Goal_order();
}

}  // namespace epos_node_test


namespace epos_node_test
{

namespace action
{

namespace builder
{

class Init_Home_Result_sequence
{
public:
  Init_Home_Result_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::epos_node_test::action::Home_Result sequence(::epos_node_test::action::Home_Result::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_node_test::action::Home_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_node_test::action::Home_Result>()
{
  return epos_node_test::action::builder::Init_Home_Result_sequence();
}

}  // namespace epos_node_test


namespace epos_node_test
{

namespace action
{

namespace builder
{

class Init_Home_Feedback_partial_sequence
{
public:
  Init_Home_Feedback_partial_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::epos_node_test::action::Home_Feedback partial_sequence(::epos_node_test::action::Home_Feedback::_partial_sequence_type arg)
  {
    msg_.partial_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_node_test::action::Home_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_node_test::action::Home_Feedback>()
{
  return epos_node_test::action::builder::Init_Home_Feedback_partial_sequence();
}

}  // namespace epos_node_test


namespace epos_node_test
{

namespace action
{

namespace builder
{

class Init_Home_SendGoal_Request_goal
{
public:
  explicit Init_Home_SendGoal_Request_goal(::epos_node_test::action::Home_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::epos_node_test::action::Home_SendGoal_Request goal(::epos_node_test::action::Home_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_node_test::action::Home_SendGoal_Request msg_;
};

class Init_Home_SendGoal_Request_goal_id
{
public:
  Init_Home_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Home_SendGoal_Request_goal goal_id(::epos_node_test::action::Home_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Home_SendGoal_Request_goal(msg_);
  }

private:
  ::epos_node_test::action::Home_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_node_test::action::Home_SendGoal_Request>()
{
  return epos_node_test::action::builder::Init_Home_SendGoal_Request_goal_id();
}

}  // namespace epos_node_test


namespace epos_node_test
{

namespace action
{

namespace builder
{

class Init_Home_SendGoal_Response_stamp
{
public:
  explicit Init_Home_SendGoal_Response_stamp(::epos_node_test::action::Home_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::epos_node_test::action::Home_SendGoal_Response stamp(::epos_node_test::action::Home_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_node_test::action::Home_SendGoal_Response msg_;
};

class Init_Home_SendGoal_Response_accepted
{
public:
  Init_Home_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Home_SendGoal_Response_stamp accepted(::epos_node_test::action::Home_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Home_SendGoal_Response_stamp(msg_);
  }

private:
  ::epos_node_test::action::Home_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_node_test::action::Home_SendGoal_Response>()
{
  return epos_node_test::action::builder::Init_Home_SendGoal_Response_accepted();
}

}  // namespace epos_node_test


namespace epos_node_test
{

namespace action
{

namespace builder
{

class Init_Home_GetResult_Request_goal_id
{
public:
  Init_Home_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::epos_node_test::action::Home_GetResult_Request goal_id(::epos_node_test::action::Home_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_node_test::action::Home_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_node_test::action::Home_GetResult_Request>()
{
  return epos_node_test::action::builder::Init_Home_GetResult_Request_goal_id();
}

}  // namespace epos_node_test


namespace epos_node_test
{

namespace action
{

namespace builder
{

class Init_Home_GetResult_Response_result
{
public:
  explicit Init_Home_GetResult_Response_result(::epos_node_test::action::Home_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::epos_node_test::action::Home_GetResult_Response result(::epos_node_test::action::Home_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_node_test::action::Home_GetResult_Response msg_;
};

class Init_Home_GetResult_Response_status
{
public:
  Init_Home_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Home_GetResult_Response_result status(::epos_node_test::action::Home_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Home_GetResult_Response_result(msg_);
  }

private:
  ::epos_node_test::action::Home_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_node_test::action::Home_GetResult_Response>()
{
  return epos_node_test::action::builder::Init_Home_GetResult_Response_status();
}

}  // namespace epos_node_test


namespace epos_node_test
{

namespace action
{

namespace builder
{

class Init_Home_FeedbackMessage_feedback
{
public:
  explicit Init_Home_FeedbackMessage_feedback(::epos_node_test::action::Home_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::epos_node_test::action::Home_FeedbackMessage feedback(::epos_node_test::action::Home_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::epos_node_test::action::Home_FeedbackMessage msg_;
};

class Init_Home_FeedbackMessage_goal_id
{
public:
  Init_Home_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Home_FeedbackMessage_feedback goal_id(::epos_node_test::action::Home_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Home_FeedbackMessage_feedback(msg_);
  }

private:
  ::epos_node_test::action::Home_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::epos_node_test::action::Home_FeedbackMessage>()
{
  return epos_node_test::action::builder::Init_Home_FeedbackMessage_goal_id();
}

}  // namespace epos_node_test

#endif  // EPOS_NODE_TEST__ACTION__DETAIL__HOME__BUILDER_HPP_
