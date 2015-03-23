/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/PathResult.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_PATHRESULT_H
#define CATEC_ACTIONS_MSGS_MESSAGE_PATHRESULT_H
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
struct PathResult_ {
  typedef PathResult_<ContainerAllocator> Type;

  PathResult_()
  : path_length(0.0)
  {
  }

  PathResult_(const ContainerAllocator& _alloc)
  : path_length(0.0)
  {
  }

  typedef double _path_length_type;
  double path_length;


  typedef boost::shared_ptr< ::catec_actions_msgs::PathResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::PathResult_<ContainerAllocator>  const> ConstPtr;
}; // struct PathResult
typedef  ::catec_actions_msgs::PathResult_<std::allocator<void> > PathResult;

typedef boost::shared_ptr< ::catec_actions_msgs::PathResult> PathResultPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::PathResult const> PathResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::PathResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::PathResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::PathResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::PathResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::PathResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9f38de6379ffa6a9a6c1a34a9cae7be4";
  }

  static const char* value(const  ::catec_actions_msgs::PathResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9f38de6379ffa6a9ULL;
  static const uint64_t static_value2 = 0xa6c1a34a9cae7be4ULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::PathResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/PathResult";
  }

  static const char* value(const  ::catec_actions_msgs::PathResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::PathResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
float64 path_length\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::PathResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::PathResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::PathResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.path_length);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PathResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::PathResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::PathResult_<ContainerAllocator> & v) 
  {
    s << indent << "path_length: ";
    Printer<double>::stream(s, indent + "  ", v.path_length);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_PATHRESULT_H

