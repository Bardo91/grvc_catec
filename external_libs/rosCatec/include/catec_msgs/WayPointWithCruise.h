/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/WayPointWithCruise.msg */
#ifndef CATEC_MSGS_MESSAGE_WAYPOINTWITHCRUISE_H
#define CATEC_MSGS_MESSAGE_WAYPOINTWITHCRUISE_H
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


namespace catec_msgs
{
template <class ContainerAllocator>
struct WayPointWithCruise_ {
  typedef WayPointWithCruise_<ContainerAllocator> Type;

  WayPointWithCruise_()
  : x(0.0)
  , y(0.0)
  , z(0.0)
  , cruise(0.0)
  , heading(0.0)
  {
  }

  WayPointWithCruise_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  , z(0.0)
  , cruise(0.0)
  , heading(0.0)
  {
  }

  typedef double _x_type;
  double x;

  typedef double _y_type;
  double y;

  typedef double _z_type;
  double z;

  typedef float _cruise_type;
  float cruise;

  typedef double _heading_type;
  double heading;


  typedef boost::shared_ptr< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::WayPointWithCruise_<ContainerAllocator>  const> ConstPtr;
}; // struct WayPointWithCruise
typedef  ::catec_msgs::WayPointWithCruise_<std::allocator<void> > WayPointWithCruise;

typedef boost::shared_ptr< ::catec_msgs::WayPointWithCruise> WayPointWithCruisePtr;
typedef boost::shared_ptr< ::catec_msgs::WayPointWithCruise const> WayPointWithCruiseConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::WayPointWithCruise_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::WayPointWithCruise_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7bd8a07e60925529c69b87a8c8e76116";
  }

  static const char* value(const  ::catec_msgs::WayPointWithCruise_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7bd8a07e60925529ULL;
  static const uint64_t static_value2 = 0xc69b87a8c8e76116ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/WayPointWithCruise";
  }

  static const char* value(const  ::catec_msgs::WayPointWithCruise_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 x\n\
float64 y\n\
float64 z\n\
float32 cruise\n\
float64 heading\n\
";
  }

  static const char* value(const  ::catec_msgs::WayPointWithCruise_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
    stream.next(m.cruise);
    stream.next(m.heading);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct WayPointWithCruise_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::WayPointWithCruise_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::WayPointWithCruise_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "cruise: ";
    Printer<float>::stream(s, indent + "  ", v.cruise);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_WAYPOINTWITHCRUISE_H

