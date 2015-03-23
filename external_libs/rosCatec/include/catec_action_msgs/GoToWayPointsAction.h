/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/GoToWayPointsAction.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_GOTOWAYPOINTSACTION_H
#define CATEC_ACTIONS_MSGS_MESSAGE_GOTOWAYPOINTSACTION_H
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

#include "catec_actions_msgs/GoToWayPointsActionGoal.h"
#include "catec_actions_msgs/GoToWayPointsActionResult.h"
#include "catec_actions_msgs/GoToWayPointsActionFeedback.h"

namespace catec_actions_msgs
{
template <class ContainerAllocator>
struct GoToWayPointsAction_ {
  typedef GoToWayPointsAction_<ContainerAllocator> Type;

  GoToWayPointsAction_()
  : action_goal()
  , action_result()
  , action_feedback()
  {
  }

  GoToWayPointsAction_(const ContainerAllocator& _alloc)
  : action_goal(_alloc)
  , action_result(_alloc)
  , action_feedback(_alloc)
  {
  }

  typedef  ::catec_actions_msgs::GoToWayPointsActionGoal_<ContainerAllocator>  _action_goal_type;
   ::catec_actions_msgs::GoToWayPointsActionGoal_<ContainerAllocator>  action_goal;

  typedef  ::catec_actions_msgs::GoToWayPointsActionResult_<ContainerAllocator>  _action_result_type;
   ::catec_actions_msgs::GoToWayPointsActionResult_<ContainerAllocator>  action_result;

  typedef  ::catec_actions_msgs::GoToWayPointsActionFeedback_<ContainerAllocator>  _action_feedback_type;
   ::catec_actions_msgs::GoToWayPointsActionFeedback_<ContainerAllocator>  action_feedback;


  typedef boost::shared_ptr< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator>  const> ConstPtr;
}; // struct GoToWayPointsAction
typedef  ::catec_actions_msgs::GoToWayPointsAction_<std::allocator<void> > GoToWayPointsAction;

typedef boost::shared_ptr< ::catec_actions_msgs::GoToWayPointsAction> GoToWayPointsActionPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::GoToWayPointsAction const> GoToWayPointsActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3c0dd1f67658461cb94da558345752b0";
  }

  static const char* value(const  ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3c0dd1f67658461cULL;
  static const uint64_t static_value2 = 0xb94da558345752b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/GoToWayPointsAction";
  }

  static const char* value(const  ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
GoToWayPointsActionGoal action_goal\n\
GoToWayPointsActionResult action_result\n\
GoToWayPointsActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: catec_actions_msgs/GoToWayPointsActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
GoToWayPointsGoal goal\n\
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
MSG: catec_actions_msgs/GoToWayPointsGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
catec_msgs/WayPointWithCruiseStamped[] way_points\n\
uint32 size\n\
\n\
================================================================================\n\
MSG: catec_msgs/WayPointWithCruiseStamped\n\
Header header\n\
WayPointWithCruise way_point\n\
================================================================================\n\
MSG: catec_msgs/WayPointWithCruise\n\
float64 x\n\
float64 y\n\
float64 z\n\
float32 cruise\n\
float64 heading\n\
================================================================================\n\
MSG: catec_actions_msgs/GoToWayPointsActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
GoToWayPointsResult result\n\
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
MSG: catec_actions_msgs/GoToWayPointsResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#reult definition\n\
catec_msgs/PositionWithCheckStamped final_position\n\
\n\
================================================================================\n\
MSG: catec_msgs/PositionWithCheckStamped\n\
Header header\n\
PositionWithCheck position\n\
================================================================================\n\
MSG: catec_msgs/PositionWithCheck\n\
float64 x\n\
float64 y\n\
float64 z\n\
uint8 valid\n\
================================================================================\n\
MSG: catec_actions_msgs/GoToWayPointsActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
GoToWayPointsFeedback feedback\n\
\n\
================================================================================\n\
MSG: catec_actions_msgs/GoToWayPointsFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback definition\n\
float32 distance_to_goal\n\
float32 distance_to_next_waypoint\n\
catec_msgs/WayPointWithCruiseStamped way_point\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.action_goal);
    stream.next(m.action_result);
    stream.next(m.action_feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GoToWayPointsAction_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::GoToWayPointsAction_<ContainerAllocator> & v) 
  {
    s << indent << "action_goal: ";
s << std::endl;
    Printer< ::catec_actions_msgs::GoToWayPointsActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
s << std::endl;
    Printer< ::catec_actions_msgs::GoToWayPointsActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
s << std::endl;
    Printer< ::catec_actions_msgs::GoToWayPointsActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_GOTOWAYPOINTSACTION_H

