/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/PathWithCruise.msg */
#ifndef CATEC_MSGS_MESSAGE_PATHWITHCRUISE_H
#define CATEC_MSGS_MESSAGE_PATHWITHCRUISE_H
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

namespace catec_msgs
{
template <class ContainerAllocator>
struct PathWithCruise_ {
  typedef PathWithCruise_<ContainerAllocator> Type;

  PathWithCruise_()
  : wp()
  {
  }

  PathWithCruise_(const ContainerAllocator& _alloc)
  : wp(_alloc)
  {
  }

  typedef std::vector< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> >::other >  _wp_type;
  std::vector< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> >::other >  wp;


  typedef boost::shared_ptr< ::catec_msgs::PathWithCruise_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::PathWithCruise_<ContainerAllocator>  const> ConstPtr;
}; // struct PathWithCruise
typedef  ::catec_msgs::PathWithCruise_<std::allocator<void> > PathWithCruise;

typedef boost::shared_ptr< ::catec_msgs::PathWithCruise> PathWithCruisePtr;
typedef boost::shared_ptr< ::catec_msgs::PathWithCruise const> PathWithCruiseConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::PathWithCruise_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::PathWithCruise_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::PathWithCruise_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::PathWithCruise_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::PathWithCruise_<ContainerAllocator> > {
  static const char* value() 
  {
    return "33d82206e4232e221fdbef3af4a4f39c";
  }

  static const char* value(const  ::catec_msgs::PathWithCruise_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x33d82206e4232e22ULL;
  static const uint64_t static_value2 = 0x1fdbef3af4a4f39cULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::PathWithCruise_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/PathWithCruise";
  }

  static const char* value(const  ::catec_msgs::PathWithCruise_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::PathWithCruise_<ContainerAllocator> > {
  static const char* value() 
  {
    return "WayPointWithCruise[] wp\n\
================================================================================\n\
MSG: catec_msgs/WayPointWithCruise\n\
float64 x\n\
float64 y\n\
float64 z\n\
float32 cruise\n\
float64 heading\n\
";
  }

  static const char* value(const  ::catec_msgs::PathWithCruise_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::PathWithCruise_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.wp);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PathWithCruise_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::PathWithCruise_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::PathWithCruise_<ContainerAllocator> & v) 
  {
    s << indent << "wp[]" << std::endl;
    for (size_t i = 0; i < v.wp.size(); ++i)
    {
      s << indent << "  wp[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> >::stream(s, indent + "    ", v.wp[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_PATHWITHCRUISE_H
