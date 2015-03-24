/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/AALExtensionActionGoal.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONGOAL_H
#define CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONGOAL_H
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
struct AALExtensionActionGoal_ {
  typedef AALExtensionActionGoal_<ContainerAllocator> Type;

  AALExtensionActionGoal_()
  : action(0)
  {
  }

  AALExtensionActionGoal_(const ContainerAllocator& _alloc)
  : action(0)
  {
  }

  typedef uint8_t _action_type;
  uint8_t action;

  enum { EXTENDED = 1 };
  enum { CONTRACTED = 2 };

  typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator>  const> ConstPtr;
}; // struct AALExtensionActionGoal
typedef  ::catec_actions_msgs::AALExtensionActionGoal_<std::allocator<void> > AALExtensionActionGoal;

typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionGoal> AALExtensionActionGoalPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::AALExtensionActionGoal const> AALExtensionActionGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b95e144b137952812e5eab421bd264fe";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb95e144b13795281ULL;
  static const uint64_t static_value2 = 0x2e5eab421bd264feULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/AALExtensionActionGoal";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
uint8 EXTENDED=1\n\
uint8 CONTRACTED=2\n\
uint8 action\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.action);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AALExtensionActionGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::AALExtensionActionGoal_<ContainerAllocator> & v) 
  {
    s << indent << "action: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.action);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_AALEXTENSIONACTIONGOAL_H
