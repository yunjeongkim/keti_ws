#include "data_handler/lanearray_handler.h"
#include <tf/tf.h>

LaneArrayHandler::LaneArrayHandler()
{

}
void LaneArrayHandler::setLaneArray(const autoware_msgs::LaneArray& lane_array)
{
  lanes_ = convertFromLaneArrayToWaypointsVector(lane_array);
  autoware_lanearray_ = lane_array;
}
std::vector<std::vector<WayPoint> > LaneArrayHandler::convertFromLaneArrayToWaypointsVector(const autoware_msgs::LaneArray& lane_array)
{
  std::vector<std::vector<WayPoint> > paths;
  for(unsigned int i = 0 ; i < lane_array.lanes.size(); i++)
  {
    std::vector<WayPoint> path;
    for(unsigned int j = 0 ; j < lane_array.lanes.at(i).waypoints.size(); j++)
    {
      WayPoint wp(lane_array.lanes.at(i).waypoints.at(j).pose.pose.position.x,
                  lane_array.lanes.at(i).waypoints.at(j).pose.pose.position.y,
                  lane_array.lanes.at(i).waypoints.at(j).pose.pose.position.z,
                  tf::getYaw(lane_array.lanes.at(i).waypoints.at(j).pose.pose.orientation));
      wp.v_ = lane_array.lanes.at(i).waypoints.at(j).twist.twist.linear.x;
      path.push_back(wp);
    }
    paths.push_back(path);
  }
  return paths;
}
