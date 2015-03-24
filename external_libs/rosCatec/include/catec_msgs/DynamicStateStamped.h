/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/DynamicStateStamped.msg */
#ifndef CATEC_MSGS_MESSAGE_DYNAMICSTATESTAMPED_H
#define CATEC_MSGS_MESSAGE_DYNAMICSTATESTAMPED_H
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
#include "catec_msgs/DynamicState.h"

namespace catec_msgs
{
template <class ContainerAllocator>
struct DynamicStateStamped_ {
  typedef DynamicStateStamped_<ContainerAllocator> Type;

  DynamicStateStamped_()
  : header()
  , dynamic_state()
  {
  }

  DynamicStateStamped_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , dynamic_state(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::catec_msgs::DynamicState_<ContainerAllocator>  _dynamic_state_type;
   ::catec_msgs::DynamicState_<ContainerAllocator>  dynamic_state;


  typedef boost::shared_ptr< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::DynamicStateStamped_<ContainerAllocator>  const> ConstPtr;
}; // struct DynamicStateStamped
typedef  ::catec_msgs::DynamicStateStamped_<std::allocator<void> > DynamicStateStamped;

typedef boost::shared_ptr< ::catec_msgs::DynamicStateStamped> DynamicStateStampedPtr;
typedef boost::shared_ptr< ::catec_msgs::DynamicStateStamped const> DynamicStateStampedConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::DynamicStateStamped_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::DynamicStateStamped_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6617d73c95525005e09302b361ea8796";
  }

  static const char* value(const  ::catec_msgs::DynamicStateStamped_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6617d73c95525005ULL;
  static const uint64_t static_value2 = 0xe09302b361ea8796ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/DynamicStateStamped";
  }

  static const char* value(const  ::catec_msgs::DynamicStateStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
DynamicState dynamic_state\n\
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
MSG: catec_msgs/DynamicState\n\
PositionWithCheck position\n\
OrientationWithCheck orientation\n\
VelocityWithCheck velocity\n\
================================================================================\n\
MSG: catec_msgs/PositionWithCheck\n\
float64 x\n\
float64 y\n\
float64 z\n\
uint8 valid\n\
================================================================================\n\
MSG: catec_msgs/OrientationWithCheck\n\
float64 x\n\
float64 y\n\
float64 z\n\
uint8 valid\n\
================================================================================\n\
MSG: catec_msgs/VelocityWithCheck\n\
float64 x\n\
float64 y\n\
float64 z\n\
uint8 valid\n\
";
  }

  static const char* value(const  ::catec_msgs::DynamicStateStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::catec_msgs::DynamicStateStamped_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.dynamic_state);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DynamicStateStamped_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::DynamicStateStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::DynamicStateStamped_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "dynamic_state: ";
s << std::endl;
    Printer< ::catec_msgs::DynamicState_<ContainerAllocator> >::stream(s, indent + "  ", v.dynamic_state);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_DYNAMICSTATESTAMPED_H
