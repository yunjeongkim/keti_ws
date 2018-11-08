#ifndef GPSPOINT_H
#define GPSPOINT_H
#include <math.h>
#include <geometry_msgs/Point.h>
/**
 * @brief type representing class containing (x,y,z,a)
 * \ingroup DataGroup
 * @{
 */
class GPSPoint
{
public:
  double x_;
  double y_;
  double z_;
  double a_;

  GPSPoint()
  {
    x_ = 0;
    y_ = 0;
    z_ = 0;
    a_ = 0;
  }

  GPSPoint(const double& x, const double& y, const double& z, const double& a)
  {
    this->x_ = x;
    this->y_ = y;
    this->z_ = z;
    this->a_ = a;

  }

  geometry_msgs::Point getPoint()
  {
    geometry_msgs::Point pt;
    pt.x = x_;
    pt.y = y_;
    pt.z = z_;
    return pt;
  }
};
/**@}*/
#endif // GPSPOINT_H
