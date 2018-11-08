#ifndef CURVE_FITTING_H
#define CURVE_FITTING_H
#include "waypoint.h"
#include "cubicsplineparams.h"
#include <geometry_msgs/Point.h>
/**
 * @brief Input is vector<WayPoint> and we generate 4 points to fit,
 * and we get 4 parameter values of 3rd order polynomial equation.
 * \ingroup UtilsGroup
 */
class CurveFitting{

public:
  CurveFitting(const std::vector<WayPoint> lane);

  /**
   * @brief Conduct curveFit() and filterData() and return cubic spline parameters
   * @return CubicSplineParams
   */
  CubicSplineParams getCubicSplineParameter();

private:
  /**
   * @brief input value which is put through constructor
   */
  std::vector<WayPoint> lane_;
  /**
   * @brief output value which represents cubic spline's parameter.
   */
  CubicSplineParams params_;

  /**
   * @brief Generate 4 parameter of cubic spline
   * @param filter input data which is generated in filterData().
   */
  void curveFit(const std::vector<geometry_msgs::Point>& filter);

  /**
   * @brief Generate 4 points among lane
   * @param filter ouput which contains 4 points value
   * @attention Relation Coordinate Camera(x,y) = ROS(-y,x)
   */
  void filterData(std::vector<geometry_msgs::Point>& filter);
};


#endif // CURVE_FITTING_H
