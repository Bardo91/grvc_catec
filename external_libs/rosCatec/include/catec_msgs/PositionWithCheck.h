/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/PositionWithCheck.msg */
#ifndef CATEC_MSGS_MESSAGE_POSITIONWITHCHECK_H
#define CATEC_MSGS_MESSAGE_POSITIONWITHCHECK_H
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
struct PositionWithCheck_ {
  typedef PositionWithCheck_<ContainerAllocator> Type;

  PositionWithCheck_()
  : x(0.0)
  , y(0.0)
  , z(0.0)
  , valid(0)
  {
  }

  PositionWithCheck_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  , z(0.0)
  , valid(0)
  {
  }

  typedef double _x_type;
  double x;

  typedef double _y_type;
  double y;

  typedef double _z_type;
  double z;

  typedef uint8_t _valid_type;
  uint8_t valid;


  typedef boost::shared_ptr< ::catec_msgs::PositionWithCheck_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::PositionWithCheck_<ContainerAllocator>  const> ConstPtr;
}; // struct PositionWithCheck
typedef  ::catec_msgs::PositionWithCheck_<std::allocator<void> > PositionWithCheck;

typedef boost::shared_ptr< ::catec_msgs::PositionWithCheck> PositionWithCheckPtr;
typedef boost::shared_ptr< ::catec_msgs::PositionWithCheck const> PositionWithCheckConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::PositionWithCheck_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::PositionWithCheck_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::PositionWithCheck_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::PositionWithCheck_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::PositionWithCheck_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ff5b21fbc90251af2781e78d4985ff94";
  }

  static const char* value(const  ::catec_msgs::PositionWithCheck_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xff5b21fbc90251afULL;
  static const uint64_t static_value2 = 0x2781e78d4985ff94ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::PositionWithCheck_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/PositionWithCheck";
  }

  static const char* value(const  ::catec_msgs::PositionWithCheck_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::PositionWithCheck_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 x\n\
float64 y\n\
float64 z\n\
uint8 valid\n\
";
  }

  static const char* value(const  ::catec_msgs::PositionWithCheck_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_msgs::PositionWithCheck_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::PositionWithCheck_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
    stream.next(m.valid);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PositionWithCheck_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::PositionWithCheck_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::PositionWithCheck_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_POSITIONWITHCHECK_H

