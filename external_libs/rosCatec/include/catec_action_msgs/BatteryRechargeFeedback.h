/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/BatteryRechargeFeedback.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_BATTERYRECHARGEFEEDBACK_H
#define CATEC_ACTIONS_MSGS_MESSAGE_BATTERYRECHARGEFEEDBACK_H
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
struct BatteryRechargeFeedback_ {
  typedef BatteryRechargeFeedback_<ContainerAllocator> Type;

  BatteryRechargeFeedback_()
  : state(0)
  {
  }

  BatteryRechargeFeedback_(const ContainerAllocator& _alloc)
  : state(0)
  {
  }

  typedef uint8_t _state_type;
  uint8_t state;

  enum { MINIMUM_BATTERY_RECHARGE = 1 };
  enum { EXTRA_BATTERY_RECHARGE = 2 };

  typedef boost::shared_ptr< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator>  const> ConstPtr;
}; // struct BatteryRechargeFeedback
typedef  ::catec_actions_msgs::BatteryRechargeFeedback_<std::allocator<void> > BatteryRechargeFeedback;

typedef boost::shared_ptr< ::catec_actions_msgs::BatteryRechargeFeedback> BatteryRechargeFeedbackPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::BatteryRechargeFeedback const> BatteryRechargeFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c139b2379b56bc9d13a0c313fe8762d2";
  }

  static const char* value(const  ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc139b2379b56bc9dULL;
  static const uint64_t static_value2 = 0x13a0c313fe8762d2ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/BatteryRechargeFeedback";
  }

  static const char* value(const  ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback definition\n\
uint8 MINIMUM_BATTERY_RECHARGE=1\n\
uint8 EXTRA_BATTERY_RECHARGE=2\n\
uint8 state\n\
\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct BatteryRechargeFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::BatteryRechargeFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_BATTERYRECHARGEFEEDBACK_H

