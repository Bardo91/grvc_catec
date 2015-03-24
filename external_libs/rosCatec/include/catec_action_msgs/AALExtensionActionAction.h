/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/AALExtensionActionAction.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONACTION_H
#define CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONACTION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "catec_actions_msgs/AALExtensionActionActionGoal.h"
#include "catec_actions_msgs/AALExtensionActionActionResult.h"
#include "catec_actions_msgs/AALExtensionActionActionFeedback.h"

namespace catec_actions_msgs
{
template <class ContainerAllocator>
struct AALExtensionActionAction_ {
  typedef AALExtensionActionAction_<ContainerAllocator> Type;

  AALExtensionActionAction_()
  : action_goal()
  , action_result()
  , action_feedback()
  {
  }

  AALExtensionActionAction_(const ContainerAllocator& _alloc)
  : action_goal(_alloc)
  , action_result(_alloc)
  , action_feedback(_alloc)
  {
  }

  typedef  ::catec_actions_msgs::AALExtensionActionActionGoal_<ContainerAllocator>  _action_goal_type;
   ::catec_actions_msgs::AALExtensionActionActionGoal_<ContainerAllocator>  action_goal;

  typedef  ::catec_actions_msgs::AALExtensionActionActionResult_<ContainerAllocator>  _action_result_type;
   ::catec_actions_msgs::AALExtensionActionActionResult_<ContainerAllocator>  action_result;

  typedef  ::catec_actions_msgs::AALExtensionActionActionFeedback_<ContainerAllocator>  _action_feedback_type;
   ::catec_actions_msgs::AALExtensionActionActionFeedback_<ContainerAllocator>  action_feedback;


  typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator>  const> ConstPtr;
}; // struct AALExtensionActionAction
typedef  ::catec_actions_msgs::AALExtensionActionAction_<std::allocator<void> > AALExtensionActionAction;

typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionAction> AALExtensionActionActionPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionAction const> AALExtensionActionActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b47054461f05340b719fce66abefcfa3";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb47054461f05340bULL;
  static const uint64_t static_value2 = 0x719fce66abefcfa3ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/AALExtensionActionAction";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
AALExtensionActionActionGoal action_goal\n\
AALExtensionActionActionResult action_result\n\
AALExtensionActionActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: catec_actions_msgs/AALExtensionActionActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
AALExtensionActionGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: catec_actions_msgs/AALExtensionActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
uint8 EXTENDED=1\n\
uint8 CONTRACTED=2\n\
uint8 action\n\
\n\
================================================================================\n\
MSG: catec_actions_msgs/AALExtensionActionActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
AALExtensionActionResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: catec_actions_msgs/AALExtensionActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
uint8 ALREADY_EXTENDED=1\n\
uint8 ALREADY_CONTRACTED=2\n\
uint8 EXTENDED=3\n\
uint8 CONTRACTED=4\n\
uint8 IMPOSIBLE=5\n\
uint8 result\n\
\n\
================================================================================\n\
MSG: catec_actions_msgs/AALExtensionActionActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
AALExtensionActionFeedback feedback\n\
\n\
================================================================================\n\
MSG: catec_actions_msgs/AALExtensionActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback definition\n\
uint8 JOINT_1=1\n\
uint8 JOINT_2=2\n\
uint8 JOINT_3=3\n\
uint8 JOINT_4=4\n\
uint8 JOINT_5=5\n\
uint8 JOINT_6=6\n\
uint8 phase\n\
\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.action_goal);
    stream.next(m.action_result);
    stream.next(m.action_feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AALExtensionActionAction_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::AALExtensionActionAction_<ContainerAllocator> & v) 
  {
    s << indent << "action_goal: ";
s << std::endl;
    Printer< ::catec_actions_msgs::AALExtensionActionActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
s << std::endl;
    Printer< ::catec_actions_msgs::AALExtensionActionActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
s << std::endl;
    Printer< ::catec_actions_msgs::AALExtensionActionActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONACTION_H
