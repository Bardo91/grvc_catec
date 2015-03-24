/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/AALState.msg */
#ifndef CATEC_MSGS_MESSAGE_AALSTATE_H
#define CATEC_MSGS_MESSAGE_AALSTATE_H
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
struct AALState_ {
  typedef AALState_<ContainerAllocator> Type;

  AALState_()
  : state(0)
  , final_effector_position()
  , final_effector_orientation()
  , claw(0.0)
  , joints_angles()
  {
    joints_angles.assign(0.0);
  }

  AALState_(const ContainerAllocator& _alloc)
  : state(0)
  , final_effector_position(_alloc)
  , final_effector_orientation(_alloc)
  , claw(0.0)
  , joints_angles()
  {
    joints_angles.assign(0.0);
  }

  typedef uint8_t _state_type;
  uint8_t state;

  typedef  ::catec_msgs::Position_<ContainerAllocator>  _final_effector_position_type;
   ::catec_msgs::Position_<ContainerAllocator>  final_effector_position;

  typedef  ::catec_msgs::Orientation_<ContainerAllocator>  _final_effector_orientation_type;
   ::catec_msgs::Orientation_<ContainerAllocator>  final_effector_orientation;

  typedef double _claw_type;
  double claw;

  typedef boost::array<double, 6>  _joints_angles_type;
  boost::array<double, 6>  joints_angles;

  enum { CONTRACTED = 1 };
  enum { CONTRACTING = 1 };
  enum { EXTENDED = 1 };
  enum { EXTENDING = 1 };

  typedef boost::shared_ptr< ::catec_msgs::AALState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::AALState_<ContainerAllocator>  const> ConstPtr;
}; // struct AALState
typedef  ::catec_msgs::AALState_<std::allocator<void> > AALState;

typedef boost::shared_ptr< ::catec_msgs::AALState> AALStatePtr;
typedef boost::shared_ptr< ::catec_msgs::AALState const> AALStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::AALState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::AALState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::AALState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::AALState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::AALState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e82adcfa3a988ed0f95e35f8be72eb44";
  }

  static const char* value(const  ::catec_msgs::AALState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe82adcfa3a988ed0ULL;
  static const uint64_t static_value2 = 0xf95e35f8be72eb44ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::AALState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/AALState";
  }

  static const char* value(const  ::catec_msgs::AALState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::AALState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 CONTRACTED=1\n\
uint8 CONTRACTING=1\n\
uint8 EXTENDED=1\n\
uint8 EXTENDING=1\n\
uint8 state\n\
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

  static const char* value(const  ::catec_msgs::AALState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_msgs::AALState_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::AALState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
    stream.next(m.final_effector_position);
    stream.next(m.final_effector_orientation);
    stream.next(m.claw);
    stream.next(m.joints_angles);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AALState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::AALState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::AALState_<ContainerAllocator> & v) 
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
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

#endif // CATEC_MSGS_MESSAGE_AALSTATE_H
