#ifndef ROS_HELPERS_H
#define ROS_HELPERS_H
#include <visualization_msgs/MarkerArray.h>
#include "autoware_msgs/lane.h"
#include <tf/tf.h>
#include "data_classes/waypoint.h"
#include "data_classes/cubicsplineparams.h"
#include <math.h>
#include "waypoint.h"

class RosHelpers
{
public:
  RosHelpers();
  virtual ~RosHelpers();

   /**
   * @brief ConvertWaypointUsingTF
   * @param wp input wp is waypoint to be converted using transform
   * @param transform input
   * @param result output result is the waypoint in the coordinate with wp as the origin.
   */
  static void ConvertWaypointUsingTF(const WayPoint& wp,const tf::Transform& transform, WayPoint& result);

  /**
   * @brief GetTransformFromWaypoint get transform from zero to child waypoint.
   * @param child intput
   * @param transform output
   */
  static void GetTransformFromWaypoint(const WayPoint& child, tf::Transform& transform);

  static void GetTransformFromTF(const std::string parent_frame, const std::string child_frame, tf::StampedTransform &transform);

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
