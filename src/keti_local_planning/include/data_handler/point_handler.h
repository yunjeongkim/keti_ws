#ifndef POINT_HANDLER_H
#define POINT_HANDLER_H
#include <geometry_msgs/Point.h>

/**
 * @brief Point handling class
 * \ingroup DataHandlingGroup
 * @{
 */

class PointHandler{
private:
  geometry_msgs::Point point_;
public:
  double getDistance(geometry_msgs::Point point)
  {
    return sqrt(pow(point.x-point_.x,2)+pow(point.y-point_.y,2)+pow(point.z-point_.z,2));
  }
protected:

}
/**@}**/
#endif // POINT_HANDLER_H
