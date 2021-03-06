/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/Velocity.msg */
#ifndef CATEC_MSGS_MESSAGE_VELOCITY_H
#define CATEC_MSGS_MESSAGE_VELOCITY_H
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
struct Velocity_ {
  typedef Velocity_<ContainerAllocator> Type;

  Velocity_()
  : x(0.0)
  , y(0.0)
  , z(0.0)
  {
  }

  Velocity_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  , z(0.0)
  {
  }

  typedef double _x_type;
  double x;

  typedef double _y_type;
  double y;

  typedef double _z_type;
  double z;


  typedef boost::shared_ptr< ::catec_msgs::Velocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::Velocity_<ContainerAllocator>  const> ConstPtr;
}; // struct Velocity
typedef  ::catec_msgs::Velocity_<std::allocator<void> > Velocity;

typedef boost::shared_ptr< ::catec_msgs::Velocity> VelocityPtr;
typedef boost::shared_ptr< ::catec_msgs::Velocity const> VelocityConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::Velocity_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::Velocity_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::Velocity_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::Velocity_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::Velocity_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4a842b65f413084dc2b10fb484ea7f17";
  }

  static const char* value(const  ::catec_msgs::Velocity_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4a842b65f413084dULL;
  static const uint64_t static_value2 = 0xc2b10fb484ea7f17ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::Velocity_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/Velocity";
  }

  static const char* value(const  ::catec_msgs::Velocity_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::Velocity_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::catec_msgs::Velocity_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_msgs::Velocity_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::Velocity_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Velocity_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::Velocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::Velocity_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_VELOCITY_H

