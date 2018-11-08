#ifndef POSE_POSITION_HANDLER_H
#define POSE_POSITION_HANDLER_H

#include <geometry_msgs/Pose.h>

/**
 * @brief The PosePositionHandler class
 * \ingroup DataHandlingGroup
 */
class PosePointHandler{

private:
  geometry_msgs::Pose pose_;
  geometry_msgs::Pose pose2_;
  geometry_msgs::Point point_;

public:
  PosePointHandler();
  PosePointHandler(const geometry_msgs::Pose& pose, const geometry_msgs::Point& point);
  void setPose(const geometry_msgs::Pose& pose);
  void setPoint(const geometry_msgs::Point& point);
  void setPosePoint(const geometry_msgs::Pose& pose, const geometry_msgs::Point& point);
  /**
    * @brief Check whether a point is in the front of the current_pose.
    * @param pose data
    * @return If ture, WayPoint is in front of the current pose.
    */
  bool isPoisitionInFrontOfPose();
  geometry_msgs::Point calcRelativeCoordinate();
protected:

};
/**@}**/
#endif // POSE_POSITION_HANDLER_H
