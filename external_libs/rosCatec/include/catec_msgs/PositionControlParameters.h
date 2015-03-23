/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/PositionControlParameters.msg */
#ifndef CATEC_MSGS_MESSAGE_POSITIONCONTROLPARAMETERS_H
#define CATEC_MSGS_MESSAGE_POSITIONCONTROLPARAMETERS_H
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
struct PositionControlParameters_ {
  typedef PositionControlParameters_<ContainerAllocator> Type;

  PositionControlParameters_()
  : pid(0)
  , Kp(0.0)
  , Ki(0.0)
  , Kd(0.0)
  , i_min(0.0)
  , i_max(0.0)
  , max_velocity(0.0)
  {
  }

  PositionControlParameters_(const ContainerAllocator& _alloc)
  : pid(0)
  , Kp(0.0)
  , Ki(0.0)
  , Kd(0.0)
  , i_min(0.0)
  , i_max(0.0)
  , max_velocity(0.0)
  {
  }

  typedef int32_t _pid_type;
  int32_t pid;

  typedef double _Kp_type;
  double Kp;

  typedef double _Ki_type;
  double Ki;

  typedef double _Kd_type;
  double Kd;

  typedef double _i_min_type;
  double i_min;

  typedef double _i_max_type;
  double i_max;

  typedef double _max_velocity_type;
  double max_velocity;


  typedef boost::shared_ptr< ::catec_msgs::PositionControlParameters_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::PositionControlParameters_<ContainerAllocator>  const> ConstPtr;
}; // struct PositionControlParameters
typedef  ::catec_msgs::PositionControlParameters_<std::allocator<void> > PositionControlParameters;

typedef boost::shared_ptr< ::catec_msgs::PositionControlParameters> PositionControlParametersPtr;
typedef boost::shared_ptr< ::catec_msgs::PositionControlParameters const> PositionControlParametersConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::PositionControlParameters_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::PositionControlParameters_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::PositionControlParameters_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::PositionControlParameters_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::PositionControlParameters_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4c0a96c962b78df5e0ce5b434936e2cc";
  }

  static const char* value(const  ::catec_msgs::PositionControlParameters_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4c0a96c962b78df5ULL;
  static const uint64_t static_value2 = 0xe0ce5b434936e2ccULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::PositionControlParameters_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/PositionControlParameters";
  }

  static const char* value(const  ::catec_msgs::PositionControlParameters_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::PositionControlParameters_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 pid\n\
float64 Kp\n\
float64 Ki\n\
float64 Kd\n\
float64 i_min\n\
float64 i_max\n\
float64 max_velocity\n\
\n\
\n\
";
  }

  static const char* value(const  ::catec_msgs::PositionControlParameters_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_msgs::PositionControlParameters_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::PositionControlParameters_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.pid);
    stream.next(m.Kp);
    stream.next(m.Ki);
    stream.next(m.Kd);
    stream.next(m.i_min);
    stream.next(m.i_max);
    stream.next(m.max_velocity);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PositionControlParameters_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::PositionControlParameters_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::PositionControlParameters_<ContainerAllocator> & v) 
  {
    s << indent << "pid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pid);
    s << indent << "Kp: ";
    Printer<double>::stream(s, indent + "  ", v.Kp);
    s << indent << "Ki: ";
    Printer<double>::stream(s, indent + "  ", v.Ki);
    s << indent << "Kd: ";
    Printer<double>::stream(s, indent + "  ", v.Kd);
    s << indent << "i_min: ";
    Printer<double>::stream(s, indent + "  ", v.i_min);
    s << indent << "i_max: ";
    Printer<double>::stream(s, indent + "  ", v.i_max);
    s << indent << "max_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.max_velocity);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_POSITIONCONTROLPARAMETERS_H

