/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/LandResult.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_LANDRESULT_H
#define CATEC_ACTIONS_MSGS_MESSAGE_LANDRESULT_H
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
struct LandResult_ {
  typedef LandResult_<ContainerAllocator> Type;

  LandResult_()
  : result(0)
  {
  }

  LandResult_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef uint8_t _result_type;
  uint8_t result;

  enum { LANDED = 0 };
  enum { ALREADY_LANDED = 1 };
  enum { TAKINGOFF = 2 };
  enum { LAND_CANCELED = 3 };

  typedef boost::shared_ptr< ::catec_actions_msgs::LandResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::LandResult_<ContainerAllocator>  const> ConstPtr;
}; // struct LandResult
typedef  ::catec_actions_msgs::LandResult_<std::allocator<void> > LandResult;

typedef boost::shared_ptr< ::catec_actions_msgs::LandResult> LandResultPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::LandResult const> LandResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::LandResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::LandResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::LandResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::LandResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::LandResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c2cac9d25b1276e920055c0d981ee932";
  }

  static const char* value(const  ::catec_actions_msgs::LandResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc2cac9d25b1276e9ULL;
  static const uint64_t static_value2 = 0x20055c0d981ee932ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::LandResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/LandResult";
  }

  static const char* value(const  ::catec_actions_msgs::LandResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::LandResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
uint8 LANDED=0\n\
uint8 ALREADY_LANDED=1\n\
uint8 TAKINGOFF=2\n\
uint8 LAND_CANCELED=3\n\
uint8 result\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::LandResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::LandResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::LandResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LandResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::LandResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::LandResult_<ContainerAllocator> & v) 
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_LANDRESULT_H

