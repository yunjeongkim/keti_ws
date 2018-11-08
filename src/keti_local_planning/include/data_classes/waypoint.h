#ifndef WAYPOINT_H
#define WAYPOINT_H
#include "data_classes/gpspoint.h"
#include "geometry_msgs/Pose.h"
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
  geometry_msgs::Point getPoint()
  {
    geometry_msgs::Point pt;
    pt.x = pos_.x_;
    pt.y = pos_.y_;
    pt.z = pos_.z_;
    return pt;
  }

  double getDistance(geometry_msgs::Point point)
  {
    return sqrt(pow(point.x-pos_.x_,2)+pow(point.y-pos_.y_,2)+pow(point.z-pos_.z_,2));
  }

};
/**@}*/
#endif // WAYPOINT_H
