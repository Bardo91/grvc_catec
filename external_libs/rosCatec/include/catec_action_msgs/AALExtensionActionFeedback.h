/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/AALExtensionActionFeedback.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONFEEDBACK_H
#define CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONFEEDBACK_H
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


namespace catec_actions_msgs
{
template <class ContainerAllocator>
struct AALExtensionActionFeedback_ {
  typedef AALExtensionActionFeedback_<ContainerAllocator> Type;

  AALExtensionActionFeedback_()
  : phase(0)
  {
  }

  AALExtensionActionFeedback_(const ContainerAllocator& _alloc)
  : phase(0)
  {
  }

  typedef uint8_t _phase_type;
  uint8_t phase;

  enum { JOINT_1 = 1 };
  enum { JOINT_2 = 2 };
  enum { JOINT_3 = 3 };
  enum { JOINT_4 = 4 };
  enum { JOINT_5 = 5 };
  enum { JOINT_6 = 6 };

  typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator>  const> ConstPtr;
}; // struct AALExtensionActionFeedback
typedef  ::catec_actions_msgs::AALExtensionActionFeedback_<std::allocator<void> > AALExtensionActionFeedback;

typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionFeedback> AALExtensionActionFeedbackPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionFeedback const> AALExtensionActionFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7c105411ea6a2e544e2c03d54ac11aea";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7c105411ea6a2e54ULL;
  static const uint64_t static_value2 = 0x4e2c03d54ac11aeaULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/AALExtensionActionFeedback";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback definition\n\
uint8 JOINT_1=1\n\
uint8 JOINT_2=2\n\
uint8 JOINT_3=3\n\
uint8 JOINT_4=4\n\
uint8 JOINT_5=5\n\
uint8 JOINT_6=6\n\
uint8 phase\n\
\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.phase);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AALExtensionActionFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::AALExtensionActionFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "phase: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.phase);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONFEEDBACK_H
