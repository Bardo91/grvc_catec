/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/AALControlReferenceStamped.msg */
#ifndef CATEC_MSGS_MESSAGE_AALCONTROLREFERENCESTAMPED_H
#define CATEC_MSGS_MESSAGE_AALCONTROLREFERENCESTAMPED_H
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
#include "catec_msgs/AALControlReference.h"

namespace catec_msgs
{
template <class ContainerAllocator>
struct AALControlReferenceStamped_ {
  typedef AALControlReferenceStamped_<ContainerAllocator> Type;

  AALControlReferenceStamped_()
  : header()
  , control_reference()
  {
  }

  AALControlReferenceStamped_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , control_reference(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::catec_msgs::AALControlReference_<ContainerAllocator>  _control_reference_type;
   ::catec_msgs::AALControlReference_<ContainerAllocator>  control_reference;


  typedef boost::shared_ptr< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator>  const> ConstPtr;
}; // struct AALControlReferenceStamped
typedef  ::catec_msgs::AALControlReferenceStamped_<std::allocator<void> > AALControlReferenceStamped;

typedef boost::shared_ptr< ::catec_msgs::AALControlReferenceStamped> AALControlReferenceStampedPtr;
typedef boost::shared_ptr< ::catec_msgs::AALControlReferenceStamped const> AALControlReferenceStampedConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8d6b2dfe261a46b1146837f3e560683d";
  }

  static const char* value(const  ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8d6b2dfe261a46b1ULL;
  static const uint64_t static_value2 = 0x146837f3e560683dULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/AALControlReferenceStamped";
  }

  static const char* value(const  ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
AALControlReference control_reference\n\
\n\
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
MSG: catec_msgs/AALControlReference\n\
uint8 POSITION=1\n\
uint8 ANGLES=2\n\
uint8 mode\n\
Position final_effector_position\n\
Orientation final_effector_orientation\n\
float64    claw\n\
float64[6] joints_angles\n\
\n\
\n\
\n\
================================================================================\n\
MSG: catec_msgs/Position\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: catec_msgs/Orientation\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.control_reference);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AALControlReferenceStamped_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::AALControlReferenceStamped_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "control_reference: ";
s << std::endl;
    Printer< ::catec_msgs::AALControlReference_<ContainerAllocator> >::stream(s, indent + "  ", v.control_reference);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_AALCONTROLREFERENCESTAMPED_H
