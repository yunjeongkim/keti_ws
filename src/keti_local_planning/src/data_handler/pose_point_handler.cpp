#include "data_handler/pose_point_handler.h"
#include "tf/tf.h"

PosePointHandler::PosePointHandler()
{

}
PosePointHandler::PosePointHandler(const geometry_msgs::Pose& pose, const geometry_msgs::Point& point)
{
  pose_ = pose;
  point_ = point;
}

void PosePointHandler::setPose(const geometry_msgs::Pose& pose)
{
  pose_ = pose;
}
void PosePointHandler::setPoint(const geometry_msgs::Point& point)
{
  point_ = point;
}
void PosePointHandler::setPosePoint(const geometry_msgs::Pose& pose, const geometry_msgs::Point& point)
{
  pose_ = pose;
  point_ = point;
}
bool PosePointHandler::isPoisitionInFrontOfPose()
{
  double x = PosePointHandler::calcRelativeCoordinate().x;
  if (x < 0)
    return false;
  else
    return true;
}

geometry_msgs::Point PosePointHandler::calcRelativeCoordinate()
{
  tf::Transform inverse;
  tf::poseMsgToTF(pose_, inverse);
  tf::Transform transform = inverse.inverse();

  tf::Point p;
  pointMsgToTF(point_, p);
  tf::Point tf_p = transform * p;
  geometry_msgs::Point tf_point_msg;
  pointTFToMsg(tf_p, tf_point_msg);

  return tf_point_msg;
}
