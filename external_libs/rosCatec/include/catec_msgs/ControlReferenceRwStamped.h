/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/ControlReferenceRwStamped.msg */
#ifndef CATEC_MSGS_MESSAGE_CONTROLREFERENCERWSTAMPED_H
#define CATEC_MSGS_MESSAGE_CONTROLREFERENCERWSTAMPED_H
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
#include "catec_msgs/ControlReferenceRw.h"

namespace catec_msgs
{
template <class ContainerAllocator>
struct ControlReferenceRwStamped_ {
  typedef ControlReferenceRwStamped_<ContainerAllocator> Type;

  ControlReferenceRwStamped_()
  : header()
  , c_reference_rw()
  {
  }

  ControlReferenceRwStamped_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , c_reference_rw(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::catec_msgs::ControlReferenceRw_<ContainerAllocator>  _c_reference_rw_type;
   ::catec_msgs::ControlReferenceRw_<ContainerAllocator>  c_reference_rw;


  typedef boost::shared_ptr< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator>  const> ConstPtr;
}; // struct ControlReferenceRwStamped
typedef  ::catec_msgs::ControlReferenceRwStamped_<std::allocator<void> > ControlReferenceRwStamped;

typedef boost::shared_ptr< ::catec_msgs::ControlReferenceRwStamped> ControlReferenceRwStampedPtr;
typedef boost::shared_ptr< ::catec_msgs::ControlReferenceRwStamped const> ControlReferenceRwStampedConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "30b960a85e554e35656bed95e8e455a0";
  }

  static const char* value(const  ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x30b960a85e554e35ULL;
  static const uint64_t static_value2 = 0x656bed95e8e455a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/ControlReferenceRwStamped";
  }

  static const char* value(const  ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
ControlReferenceRw c_reference_rw\n\
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
MSG: catec_msgs/ControlReferenceRw\n\
Position position\n\
float64 cruise\n\
float64 heading\n\
================================================================================\n\
MSG: catec_msgs/Position\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.c_reference_rw);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ControlReferenceRwStamped_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::ControlReferenceRwStamped_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "c_reference_rw: ";
s << std::endl;
    Printer< ::catec_msgs::ControlReferenceRw_<ContainerAllocator> >::stream(s, indent + "  ", v.c_reference_rw);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_CONTROLREFERENCERWSTAMPED_H
