/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/LandFeedback.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_LANDFEEDBACK_H
#define CATEC_ACTIONS_MSGS_MESSAGE_LANDFEEDBACK_H
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
struct LandFeedback_ {
  typedef LandFeedback_<ContainerAllocator> Type;

  LandFeedback_()
  : phase(0)
  {
  }

  LandFeedback_(const ContainerAllocator& _alloc)
  : phase(0)
  {
  }

  typedef uint8_t _phase_type;
  uint8_t phase;

  enum { STOPPED = 0 };
  enum { INITIAL_PHASE = 1 };
  enum { FINAL_PHASE = 2 };

  typedef boost::shared_ptr< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::LandFeedback_<ContainerAllocator>  const> ConstPtr;
}; // struct LandFeedback
typedef  ::catec_actions_msgs::LandFeedback_<std::allocator<void> > LandFeedback;

typedef boost::shared_ptr< ::catec_actions_msgs::LandFeedback> LandFeedbackPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::LandFeedback const> LandFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::LandFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::LandFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e19f270310780d593a17c8dd22639076";
  }

  static const char* value(const  ::catec_actions_msgs::LandFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe19f270310780d59ULL;
  static const uint64_t static_value2 = 0x3a17c8dd22639076ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/LandFeedback";
  }

  static const char* value(const  ::catec_actions_msgs::LandFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback definition\n\
uint8 STOPPED=0\n\
uint8 INITIAL_PHASE=1\n\
uint8 FINAL_PHASE=2\n\
uint8 phase\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::LandFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.phase);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LandFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::LandFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::LandFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "phase: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.phase);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_LANDFEEDBACK_H
