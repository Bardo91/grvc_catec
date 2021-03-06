/* Auto-generated by genmsg_cpp for file /home/bardo91/programing/ROS-CATEC/CATEC_dataTypes/catec_actions_msgs/msg/DownloadDataGoal.msg */
#ifndef CATEC_ACTIONS_MSGS_MESSAGE_DOWNLOADDATAGOAL_H
#define CATEC_ACTIONS_MSGS_MESSAGE_DOWNLOADDATAGOAL_H
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
struct DownloadDataGoal_ {
  typedef DownloadDataGoal_<ContainerAllocator> Type;

  DownloadDataGoal_()
  : download_window()
  {
  }

  DownloadDataGoal_(const ContainerAllocator& _alloc)
  : download_window()
  {
  }

  typedef ros::Time _download_window_type;
  ros::Time download_window;


  typedef boost::shared_ptr< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator>  const> ConstPtr;
}; // struct DownloadDataGoal
typedef  ::catec_actions_msgs::DownloadDataGoal_<std::allocator<void> > DownloadDataGoal;

typedef boost::shared_ptr< ::catec_actions_msgs::DownloadDataGoal> DownloadDataGoalPtr;
typedef boost::shared_ptr< ::catec_actions_msgs::DownloadDataGoal const> DownloadDataGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace catec_actions_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "97c0d2c9554172814a42542fe0ff72cf";
  }

  static const char* value(const  ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x97c0d2c955417281ULL;
  static const uint64_t static_value2 = 0x4a42542fe0ff72cfULL;
};

template<class ContainerAllocator>
struct DataType< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "catec_actions_msgs/DownloadDataGoal";
  }

  static const char* value(const  ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
time download_window\n\
\n\
";
  }

  static const char* value(const  ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.download_window);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DownloadDataGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::catec_actions_msgs::DownloadDataGoal_<ContainerAllocator> & v) 
  {
    s << indent << "download_window: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.download_window);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CATEC_ACTIONS_MSGS_MESSAGE_DOWNLOADDATAGOAL_H

