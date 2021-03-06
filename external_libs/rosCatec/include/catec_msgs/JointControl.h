/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_msgs/msg/JointControl.msg */
#ifndef CATEC_MSGS_MESSAGE_JOINTCONTROL_H
#define CATEC_MSGS_MESSAGE_JOINTCONTROL_H
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
struct JointControl_ {
  typedef JointControl_<ContainerAllocator> Type;

  JointControl_()
  : joint_name()
  , position(0.0)
  {
  }

  JointControl_(const ContainerAllocator& _alloc)
  : joint_name(_alloc)
  , position(0.0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _joint_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  joint_name;

  typedef double _position_type;
  double position;


  typedef boost::shared_ptr< ::catec_msgs::JointControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_msgs::JointControl_<ContainerAllocator>  const> ConstPtr;
}; // struct JointControl
typedef  ::catec_msgs::JointControl_<std::allocator<void> > JointControl;

typedef boost::shared_ptr< ::catec_msgs::JointControl> JointControlPtr;
typedef boost::shared_ptr< ::catec_msgs::JointControl const> JointControlConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_msgs::JointControl_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_msgs::JointControl_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::JointControl_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_msgs::JointControl_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_msgs::JointControl_<ContainerAllocator> > {
  static const char* value() 
  {
    return "44a2123f701cbe7079d627fbcc112627";
  }

  static const char* value(const  ::catec_msgs::JointControl_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x44a2123f701cbe70ULL;
  static const uint64_t static_value2 = 0x79d627fbcc112627ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_msgs::JointControl_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_msgs/JointControl";
  }

  static const char* value(const  ::catec_msgs::JointControl_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_msgs::JointControl_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string joint_name\n\
float64 position\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::catec_msgs::JointControl_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_msgs::JointControl_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.joint_name);
    stream.next(m.position);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct JointControl_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_msgs::JointControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_msgs::JointControl_<ContainerAllocator> & v) 
  {
    s << indent << "joint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_name);
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_MSGS_MESSAGE_JOINTCONTROL_H

