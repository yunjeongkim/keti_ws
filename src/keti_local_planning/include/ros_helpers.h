#ifndef ROS_HELPERS_H
#define ROS_HELPERS_H
#include <visualization_msgs/MarkerArray.h>
#include "autoware_msgs/lane.h"
#include <tf/tf.h>
#include "data_classes/waypoint.h"
#include "data_classes/cubicsplineparams.h"
#include <math.h>

class RosHelpers
{
public:
  RosHelpers();
  virtual ~RosHelpers();

  static void ConvertFromPlannerHToAutowareVisualizePathFormat(const std::vector<std::vector<WayPoint> >& globalPaths,
                                                               const std::string& frame,
                                                               visualization_msgs::MarkerArray& markerArray);

  static void ConvertFromPlannerHToAutowareVisualizePathFormat(const std::vector<std::vector<WayPoint> >& globalPaths,
                                                                visualization_msgs::MarkerArray& markerArray);

  static void ConvertFromPlannerHToAutowareVisualizePathFormat(const std::vector<WayPoint>& globalPaths,
                                                                visualization_msgs::MarkerArray& markerArray);
  static void ConvertFromLocalPlannerHToAutowareVisualizePathFormat(const std::vector<WayPoint>& paths,
                                                                      visualization_msgs::MarkerArray& markerArray);
  static void ConvertFromLocalPlannerHToAutowareVisualizePathFormat(const std::vector<WayPoint>& paths,
                                                                    const std::string& frame,
                                                                    visualization_msgs::MarkerArray& markerArray);
  /**
   * @brief Visualize cubic spline in Rviz
   * @param params input:cubi spline's parameter
   * @param frame input
   * @param markerArray output
   */
  static void ConvertFromCubicSplineToVisualizePathFormat(const CubicSplineParams& params,
                                                          const std::string& frame,
                                                          visualization_msgs::MarkerArray& markerArray);
};
#endif // ROS_HELPERS_H
