/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/WayPointGoal.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_WAYPOINTGOAL_H
#define CATEC_ACTIONS_MSGS_MESSAGE_WAYPOINTGOAL_H
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

#include "catec_msgs/WayPointWithCruise.h"

namespace catec_actions_msgs
{
template <class ContainerAllocator>
struct WayPointGoal_ {
  typedef WayPointGoal_<ContainerAllocator> Type;

  WayPointGoal_()
  : waypoint()
  {
  }

  WayPointGoal_(const ContainerAllocator& _alloc)
  : waypoint(_alloc)
  {
  }

  typedef  ::catec_msgs::WayPointWithCruise_<ContainerAllocator>  _waypoint_type;
   ::catec_msgs::WayPointWithCruise_<ContainerAllocator>  waypoint;


  typedef boost::shared_ptr< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator>  const> ConstPtr;
}; // struct WayPointGoal
typedef  ::catec_actions_msgs::WayPointGoal_<std::allocator<void> > WayPointGoal;

typedef boost::shared_ptr< ::catec_actions_msgs::WayPointGoal> WayPointGoalPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::WayPointGoal const> WayPointGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f8dce9f5261654fa8a8325e1cba7b8f4";
  }

  static const char* value(const  ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf8dce9f5261654faULL;
  static const uint64_t static_value2 = 0x8a8325e1cba7b8f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/WayPointGoal";
  }

  static const char* value(const  ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
catec_msgs/WayPointWithCruise waypoint\n\
\n\
================================================================================\n\
MSG: catec_msgs/WayPointWithCruise\n\
float64 x\n\
float64 y\n\
float64 z\n\
float32 cruise\n\
float64 heading\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.waypoint);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct WayPointGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::WayPointGoal_<ContainerAllocator> & v) 
  {
    s << indent << "waypoint: ";
s << std::endl;
    Printer< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> >::stream(s, indent + "  ", v.waypoint);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_WAYPOINTGOAL_H

