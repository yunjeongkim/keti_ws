// Generated by gencpp from file autoware_msgs/ConfigNdt.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_CONFIGNDT_H
#define AUTOWARE_MSGS_MESSAGE_CONFIGNDT_H


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
struct ConfigNdt_
{
  typedef ConfigNdt_<ContainerAllocator> Type;

  ConfigNdt_()
    : header()
    , init_pos_gnss(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , use_predict_pose(0)
    , error_threshold(0.0)
    , resolution(0.0)
    , step_size(0.0)
    , trans_epsilon(0.0)
    , max_iterations(0)  {
    }
  ConfigNdt_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , init_pos_gnss(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , use_predict_pose(0)
    , error_threshold(0.0)
    , resolution(0.0)
    , step_size(0.0)
    , trans_epsilon(0.0)
    , max_iterations(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _init_pos_gnss_type;
  _init_pos_gnss_type init_pos_gnss;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef int32_t _use_predict_pose_type;
  _use_predict_pose_type use_predict_pose;

   typedef float _error_threshold_type;
  _error_threshold_type error_threshold;

   typedef float _resolution_type;
  _resolution_type resolution;

   typedef float _step_size_type;
  _step_size_type step_size;

   typedef float _trans_epsilon_type;
  _trans_epsilon_type trans_epsilon;

   typedef int32_t _max_iterations_type;
  _max_iterations_type max_iterations;





  typedef boost::shared_ptr< ::autoware_msgs::ConfigNdt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ConfigNdt_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigNdt_

typedef ::autoware_msgs::ConfigNdt_<std::allocator<void> > ConfigNdt;

typedef boost::shared_ptr< ::autoware_msgs::ConfigNdt > ConfigNdtPtr;
typedef boost::shared_ptr< ::autoware_msgs::ConfigNdt const> ConfigNdtConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ConfigNdt_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigNdt_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigNdt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigNdt_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0cbb0e4cacb81e2b6991a89a4ad992e8";
  }

  static const char* value(const ::autoware_msgs::ConfigNdt_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0cbb0e4cacb81e2bULL;
  static const uint64_t static_value2 = 0x6991a89a4ad992e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ConfigNdt";
  }

  static const char* value(const ::autoware_msgs::ConfigNdt_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 init_pos_gnss\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 roll\n\
float32 pitch\n\
float32 yaw\n\
#int32 lidar_original\n\
#int32 max\n\
#int32 min\n\
#int32 layer\n\
int32 use_predict_pose\n\
float32 error_threshold\n\
float32 resolution\n\
float32 step_size\n\
float32 trans_epsilon\n\
int32 max_iterations\n\
#float32 leaf_size\n\
#float32 angle_error\n\
#float32 shift_x\n\
#float32 shift_y\n\
#float32 shift_z\n\
\n\
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

  static const char* value(const ::autoware_msgs::ConfigNdt_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.init_pos_gnss);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.use_predict_pose);
      stream.next(m.error_threshold);
      stream.next(m.resolution);
      stream.next(m.step_size);
      stream.next(m.trans_epsilon);
      stream.next(m.max_iterations);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigNdt_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ConfigNdt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ConfigNdt_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "init_pos_gnss: ";
    Printer<int32_t>::stream(s, indent + "  ", v.init_pos_gnss);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "use_predict_pose: ";
    Printer<int32_t>::stream(s, indent + "  ", v.use_predict_pose);
    s << indent << "error_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.error_threshold);
    s << indent << "resolution: ";
    Printer<float>::stream(s, indent + "  ", v.resolution);
    s << indent << "step_size: ";
    Printer<float>::stream(s, indent + "  ", v.step_size);
    s << indent << "trans_epsilon: ";
    Printer<float>::stream(s, indent + "  ", v.trans_epsilon);
    s << indent << "max_iterations: ";
    Printer<int32_t>::stream(s, indent + "  ", v.max_iterations);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_CONFIGNDT_H
