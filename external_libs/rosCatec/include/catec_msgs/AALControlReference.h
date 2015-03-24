/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/AALControlReference.msg */
#ifndef CATEC_MSGS_MESSAGE_AALCONTROLREFERENCE_H
#define CATEC_MSGS_MESSAGE_AALCONTROLREFERENCE_H
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

#include "catec_msgs/Position.h"
#include "catec_msgs/Orientation.h"

namespace catec_msgs
{
template <class ContainerAllocator>
struct AALControlReference_ {
  typedef AALControlReference_<ContainerAllocator> Type;

  AALControlReference_()
  : mode(0)
  , final_effector_position()
  , final_effector_orientation()
  , claw(0.0)
  , joints_angles()
  {
    joints_angles.assign(0.0);
  }

  AALControlReference_(const ContainerAllocator& _alloc)
  : mode(0)
  , final_effector_position(_alloc)
  , final_effector_orientation(_alloc)
  , claw(0.0)
  , joints_angles()
  {
    joints_angles.assign(0.0);
  }

  typedef uint8_t _mode_type;
  uint8_t mode;

  typedef  ::catec_msgs::Position_<ContainerAllocator>  _final_effector_position_type;
   ::catec_msgs::Position_<ContainerAllocator>  final_effector_position;

  typedef  ::catec_msgs::Orientation_<ContainerAllocator>  _final_effector_orientation_type;
   ::catec_msgs::Orientation_<ContainerAllocator>  final_effector_orientation;

  typedef double _claw_type;
  double claw;

  typedef boost::array<double, 6>  _joints_angles_type;
  boost::array<double, 6>  joints_angles;

  enum { POSITION = 1 };
  enum { ANGLES = 2 };

  typedef boost::shared_ptr< ::catec_msgs::AALControlReference_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::AALControlReference_<ContainerAllocator>  const> ConstPtr;
}; // struct AALControlReference
typedef  ::catec_msgs::AALControlReference_<std::allocator<void> > AALControlReference;

typedef boost::shared_ptr< ::catec_msgs::AALControlReference> AALControlReferencePtr;
typedef boost::shared_ptr< ::catec_msgs::AALControlReference const> AALControlReferenceConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::AALControlReference_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::AALControlReference_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::AALControlReference_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::AALControlReference_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::AALControlReference_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5d2052bdaf46caab2b53a5be0db0151c";
  }

  static const char* value(const  ::catec_msgs::AALControlReference_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5d2052bdaf46caabULL;
  static const uint64_t static_value2 = 0x2b53a5be0db0151cULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::AALControlReference_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/AALControlReference";
  }

  static const char* value(const  ::catec_msgs::AALControlReference_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::AALControlReference_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 POSITION=1\n\
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

  static const char* value(const  ::catec_msgs::AALControlReference_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_msgs::AALControlReference_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::AALControlReference_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.mode);
    stream.next(m.final_effector_position);
    stream.next(m.final_effector_orientation);
    stream.next(m.claw);
    stream.next(m.joints_angles);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AALControlReference_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::AALControlReference_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::AALControlReference_<ContainerAllocator> & v) 
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "final_effector_position: ";
s << std::endl;
    Printer< ::catec_msgs::Position_<ContainerAllocator> >::stream(s, indent + "  ", v.final_effector_position);
    s << indent << "final_effector_orientation: ";
s << std::endl;
    Printer< ::catec_msgs::Orientation_<ContainerAllocator> >::stream(s, indent + "  ", v.final_effector_orientation);
    s << indent << "claw: ";
    Printer<double>::stream(s, indent + "  ", v.claw);
    s << indent << "joints_angles[]" << std::endl;
    for (size_t i = 0; i < v.joints_angles.size(); ++i)
    {
      s << indent << "  joints_angles[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joints_angles[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_AALCONTROLREFERENCE_H
