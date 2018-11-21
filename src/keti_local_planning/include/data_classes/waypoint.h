#ifndef WAYPOINT_H
#define WAYPOINT_H
#include "data_classes/gpspoint.h"
#include "geometry_msgs/Pose.h"
#include "tf/tf.h"
/**
 * @brief type representing class containing (GPSPoint, v)
 * \ingroup DataGroup
 * @{
 */
class WayPoint
{
public:
  GPSPoint	pos_;
  double  	v_;
  //geometry_msgs::Pose pos_;
  WayPoint()
  {

  }
  WayPoint(const double& x, const double& y, const double& z)
  {
      pos_.x_ = x;
      pos_.y_ = y;
      pos_.z_ = z;
  }
  WayPoint(const double& x, const double& y, const double& z, const double& a)
  {
    pos_.x_ = x;
    pos_.y_ = y;
    pos_.z_ = z;
    pos_.a_ = a;
  }
  WayPoint(const double& x, const double& y, const double& z, const double& a, const double& v)
  {
    pos_.x_ = x;
    pos_.y_ = y;
    pos_.z_ = z;
    pos_.a_ = a;
    v_ = v;
  }
  geometry_msgs::Point getPoint() const
  {
    geometry_msgs::Point pt;
    pt.x = pos_.x_;
    pt.y = pos_.y_;
    pt.z = pos_.z_;
    return pt;
  }

  double getDistance(const geometry_msgs::Point point) const
  {
    return sqrt(pow(point.x-pos_.x_,2)+pow(point.y-pos_.y_,2)+pow(point.z-pos_.z_,2));
  }
  geometry_msgs::Pose getPose()
  {
    geometry_msgs::Pose pose;
    pose.position.x = pos_.x_;
    pose.position.y = pos_.y_;
    pose.position.z = pos_.z_;
    pose.orientation = tf::createQuaternionMsgFromYaw(pos_.a_);
    return pose;
  }

};
/**@}*/
#endif // WAYPOINT_H
