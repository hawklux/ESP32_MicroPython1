// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_pkg1:action/Action1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__ACTION__DETAIL__ACTION1__STRUCT_H_
#define MSG_PKG1__ACTION__DETAIL__ACTION1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Action1 in the package msg_pkg1.
typedef struct msg_pkg1__action__Action1_Goal
{
  float linear_x;
  float angular_z;
  float dist;
} msg_pkg1__action__Action1_Goal;

// Struct for a sequence of msg_pkg1__action__Action1_Goal.
typedef struct msg_pkg1__action__Action1_Goal__Sequence
{
  msg_pkg1__action__Action1_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__action__Action1_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Action1 in the package msg_pkg1.
typedef struct msg_pkg1__action__Action1_Result
{
  float pos_x;
  float pos_y;
  float pos_theta;
  float result_dist;
} msg_pkg1__action__Action1_Result;

// Struct for a sequence of msg_pkg1__action__Action1_Result.
typedef struct msg_pkg1__action__Action1_Result__Sequence
{
  msg_pkg1__action__Action1_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__action__Action1_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Action1 in the package msg_pkg1.
typedef struct msg_pkg1__action__Action1_Feedback
{
  float remained_dist;
} msg_pkg1__action__Action1_Feedback;

// Struct for a sequence of msg_pkg1__action__Action1_Feedback.
typedef struct msg_pkg1__action__Action1_Feedback__Sequence
{
  msg_pkg1__action__Action1_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__action__Action1_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "msg_pkg1/action/detail/action1__struct.h"

/// Struct defined in action/Action1 in the package msg_pkg1.
typedef struct msg_pkg1__action__Action1_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_pkg1__action__Action1_Goal goal;
} msg_pkg1__action__Action1_SendGoal_Request;

// Struct for a sequence of msg_pkg1__action__Action1_SendGoal_Request.
typedef struct msg_pkg1__action__Action1_SendGoal_Request__Sequence
{
  msg_pkg1__action__Action1_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__action__Action1_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Action1 in the package msg_pkg1.
typedef struct msg_pkg1__action__Action1_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} msg_pkg1__action__Action1_SendGoal_Response;

// Struct for a sequence of msg_pkg1__action__Action1_SendGoal_Response.
typedef struct msg_pkg1__action__Action1_SendGoal_Response__Sequence
{
  msg_pkg1__action__Action1_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__action__Action1_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Action1 in the package msg_pkg1.
typedef struct msg_pkg1__action__Action1_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} msg_pkg1__action__Action1_GetResult_Request;

// Struct for a sequence of msg_pkg1__action__Action1_GetResult_Request.
typedef struct msg_pkg1__action__Action1_GetResult_Request__Sequence
{
  msg_pkg1__action__Action1_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__action__Action1_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "msg_pkg1/action/detail/action1__struct.h"

/// Struct defined in action/Action1 in the package msg_pkg1.
typedef struct msg_pkg1__action__Action1_GetResult_Response
{
  int8_t status;
  msg_pkg1__action__Action1_Result result;
} msg_pkg1__action__Action1_GetResult_Response;

// Struct for a sequence of msg_pkg1__action__Action1_GetResult_Response.
typedef struct msg_pkg1__action__Action1_GetResult_Response__Sequence
{
  msg_pkg1__action__Action1_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__action__Action1_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "msg_pkg1/action/detail/action1__struct.h"

/// Struct defined in action/Action1 in the package msg_pkg1.
typedef struct msg_pkg1__action__Action1_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_pkg1__action__Action1_Feedback feedback;
} msg_pkg1__action__Action1_FeedbackMessage;

// Struct for a sequence of msg_pkg1__action__Action1_FeedbackMessage.
typedef struct msg_pkg1__action__Action1_FeedbackMessage__Sequence
{
  msg_pkg1__action__Action1_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__action__Action1_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PKG1__ACTION__DETAIL__ACTION1__STRUCT_H_
