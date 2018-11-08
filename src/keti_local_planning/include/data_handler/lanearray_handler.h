#ifndef TYPE_CONVERSION_H
#define TYPE_CONVERSION_H

#include "autoware_msgs/LaneArray.h"
#include "autoware_msgs/lane.h"
#include "data_classes/waypoint.h"

/**
 * @brief The TypeConversion class
 * This class is handling lane array information.
 *
 * \ingroup DataHandlingGroup
 * @{
 */
class LaneArrayHandler{
public:
  LaneArrayHandler();
  void setLaneArray(const autoware_msgs::LaneArray& lane_array);
  std::vector<std::vector<WayPoint> > lanes_;
  autoware_msgs::LaneArray autoware_lanearray_;
private:

protected:
  std::vector<std::vector<WayPoint> > convertFromLaneArrayToWaypointsVector(const autoware_msgs::LaneArray& lane_array);
};
/**@}*/

#endif // TYPE_CONVERSION_H
