// Generated by gencpp from file autoware_msgs/Sync_time_diff.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_SYNC_TIME_DIFF_H
#define AUTOWARE_MSGS_MESSAGE_SYNC_TIME_DIFF_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct Sync_time_diff_
{
  typedef Sync_time_diff_<ContainerAllocator> Type;

  Sync_time_diff_()
    : header()
    , time_diff(0.0)
    , camera()
    , lidar()  {
    }
  Sync_time_diff_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time_diff(0.0)
    , camera()
    , lidar()  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _time_diff_type;
  _time_diff_type time_diff;

   typedef ros::Time _camera_type;
  _camera_type camera;

   typedef ros::Time _lidar_type;
  _lidar_type lidar;





  typedef boost::shared_ptr< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> const> ConstPtr;

}; // struct Sync_time_diff_

typedef ::autoware_msgs::Sync_time_diff_<std::allocator<void> > Sync_time_diff;

typedef boost::shared_ptr< ::autoware_msgs::Sync_time_diff > Sync_time_diffPtr;
typedef boost::shared_ptr< ::autoware_msgs::Sync_time_diff const> Sync_time_diffConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::Sync_time_diff_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'autoware_msgs': ['/home/dallddungi/keti_ws/src/autoware_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c640f7073f6004ba0221e76e2c83ffa1";
  }

  static const char* value(const ::autoware_msgs::Sync_time_diff_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc640f7073f6004baULL;
  static const uint64_t static_value2 = 0x0221e76e2c83ffa1ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/Sync_time_diff";
  }

  static const char* value(const ::autoware_msgs::Sync_time_diff_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 time_diff\n\
time camera\n\
time lidar\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::autoware_msgs::Sync_time_diff_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time_diff);
      stream.next(m.camera);
      stream.next(m.lidar);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Sync_time_diff_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::Sync_time_diff_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::Sync_time_diff_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time_diff: ";
    Printer<double>::stream(s, indent + "  ", v.time_diff);
    s << indent << "camera: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.camera);
    s << indent << "lidar: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.lidar);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_SYNC_TIME_DIFF_H
