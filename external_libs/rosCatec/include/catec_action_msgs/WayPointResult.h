/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/WayPointResult.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_WAYPOINTRESULT_H
#define CATEC_ACTIONS_MSGS_MESSAGE_WAYPOINTRESULT_H
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


namespace catec_actions_msgs
{
template <class ContainerAllocator>
struct WayPointResult_ {
  typedef WayPointResult_<ContainerAllocator> Type;

  WayPointResult_()
  : distance_to_way_point(0.0)
  {
  }

  WayPointResult_(const ContainerAllocator& _alloc)
  : distance_to_way_point(0.0)
  {
  }

  typedef double _distance_to_way_point_type;
  double distance_to_way_point;


  typedef boost::shared_ptr< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::WayPointResult_<ContainerAllocator>  const> ConstPtr;
}; // struct WayPointResult
typedef  ::catec_actions_msgs::WayPointResult_<std::allocator<void> > WayPointResult;

typedef boost::shared_ptr< ::catec_actions_msgs::WayPointResult> WayPointResultPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::WayPointResult const> WayPointResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::WayPointResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::WayPointResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1d6c3f823f22e163501feb2805e3083c";
  }

  static const char* value(const  ::catec_actions_msgs::WayPointResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1d6c3f823f22e163ULL;
  static const uint64_t static_value2 = 0x501feb2805e3083cULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/WayPointResult";
  }

  static const char* value(const  ::catec_actions_msgs::WayPointResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
float64 distance_to_way_point\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::WayPointResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.distance_to_way_point);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct WayPointResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::WayPointResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::WayPointResult_<ContainerAllocator> & v) 
  {
    s << indent << "distance_to_way_point: ";
    Printer<double>::stream(s, indent + "  ", v.distance_to_way_point);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_WAYPOINTRESULT_H

