#ifndef ANGLE_UTILS_H
#define ANGLE_UTILS_H
#include <assert.h>
#include <string>
#include <math.h>


class AngleUtils{
public:
  AngleUtils();
  virtual ~AngleUtils();
  static double FixNegativeAngle(const double& a);
  static double SplitPositiveAngle(const double& a);
  static double InverseAngle(const double& a);
  static double AngleBetweenTwoAnglesPositive(const double& a1, const double& a2);
  static double GetCircularAngle(const double& prevContAngle, const double& prevAngle, const double& currAngle);
};
#endif // ANGLE_UTILS_H
