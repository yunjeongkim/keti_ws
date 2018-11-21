#ifndef LANE_HANDLER_H
#define LANE_HANDLER_H
#include "autoware_msgs/lane.h"
#include "data_classes/waypoint.h"
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Pose.h>
//#include <ecl/containers/array.hpp>
/**
 * @brief This class treats lane information with autowar_msgs::lane and std::vector<WayPoint>
 * \ingroup DataHandlingGroup
 * @{
 */
class LaneHandler{


public:
  std::vector<WayPoint> waypoints_lane_;
  autoware_msgs::lane autoware_lane_;

  LaneHandler();
  LaneHandler(const std::vector<WayPoint>& lane);
  LaneHandler(const autoware_msgs::lane& lane);

  void setLane(const autoware_msgs::lane& lane);
  void setLane(const std::vector<WayPoint>& lane);
  autoware_msgs::lane getAutowareLane();
  std::vector<WayPoint> getWaypointsLane();

  /**
   * @brief Find a point on the lane which is the closest point to the WayPoint.
   * @param wp
   * @return index of the closest waypoint on the lane.
   */
  int getClosestWaypoint(const geometry_msgs::Pose& wp);
  //void convertFromWaypointsToArray(Array<double>& x_set,Array<double>& y_set);

  /**
   * @brief getFrontWaypoint
   * @param wp
   * @return index of the front waypoint on the lane
   */
  int getFrontWaypoint(const geometry_msgs::Pose& wp, const int num_idx_to_skip);
  int getFrontWaypointByDistance(const geometry_msgs::Pose& wp, const float distance);


  int getClosestWaypointNextLane(const std::vector<WayPoint> next_lane_, const int curr_lane_waypoint_idx);

protected:
  void convertFromLaneToWaypoints(const autoware_msgs::lane& lane, std::vector<WayPoint>& path);
  void convertFromWaypointsToLane(const std::vector<WayPoint>& path, const int& iStart,
                                                           autoware_msgs::lane& trajectory);

};
/**@}**/
#endif // LANE_HANDLER_H
