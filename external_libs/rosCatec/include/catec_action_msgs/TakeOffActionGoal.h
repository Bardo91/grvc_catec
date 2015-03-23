/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/TakeOffActionGoal.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_TAKEOFFACTIONGOAL_H
#define CATEC_ACTIONS_MSGS_MESSAGE_TAKEOFFACTIONGOAL_H
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

#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "catec_actions_msgs/TakeOffGoal.h"

namespace catec_actions_msgs
{
template <class ContainerAllocator>
struct TakeOffActionGoal_ {
  typedef TakeOffActionGoal_<ContainerAllocator> Type;

  TakeOffActionGoal_()
  : header()
  , goal_id()
  , goal()
  {
  }

  TakeOffActionGoal_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , goal_id(_alloc)
  , goal(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
   ::actionlib_msgs::GoalID_<ContainerAllocator>  goal_id;

  typedef  ::catec_actions_msgs::TakeOffGoal_<ContainerAllocator>  _goal_type;
   ::catec_actions_msgs::TakeOffGoal_<ContainerAllocator>  goal;


  typedef boost::shared_ptr< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator>  const> ConstPtr;
}; // struct TakeOffActionGoal
typedef  ::catec_actions_msgs::TakeOffActionGoal_<std::allocator<void> > TakeOffActionGoal;

typedef boost::shared_ptr< ::catec_actions_msgs::TakeOffActionGoal> TakeOffActionGoalPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::TakeOffActionGoal const> TakeOffActionGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4b30be6cd12b9e72826df56b481f40e0";
  }

  static const char* value(const  ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4b30be6cd12b9e72ULL;
  static const uint64_t static_value2 = 0x826df56b481f40e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/TakeOffActionGoal";
  }

  static const char* value(const  ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
TakeOffGoal goal\n\
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
MSG: catec_actions_msgs/TakeOffGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
#no goal data\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.goal_id);
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TakeOffActionGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::TakeOffActionGoal_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
s << std::endl;
    Printer< ::catec_actions_msgs::TakeOffGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_TAKEOFFACTIONGOAL_H

