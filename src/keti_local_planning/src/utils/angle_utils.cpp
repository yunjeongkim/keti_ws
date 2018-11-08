#include "utils/angle_utils.h"

AngleUtils::AngleUtils()
{
}

AngleUtils::~AngleUtils()
{
}



 double AngleUtils::FixNegativeAngle(const double& a)
{
   double angle = 0;
   if (a < -2.0*M_PI || a > 2.0*M_PI)
  {
     angle = fmod(a, 2.0*M_PI);
  }
   else
     angle = a;


   if(angle < 0)
   {
     angle = 2.0*M_PI + angle;
   }

   return angle;
}

 double AngleUtils::SplitPositiveAngle(const double& a)
{
   double angle = a;

  if (a < -2.0*M_PI || a > 2.0*M_PI)
  {
    angle = fmod(a, 2.0*M_PI);
  }

  if (angle > M_PI)
  {
    angle -= 2.0*M_PI;
  }
  else if (angle < -M_PI)
  {
    angle += 2.0*M_PI;
  }

  return angle;
}

double AngleUtils::InverseAngle(const double& a)
{

   double angle = 0;
   if(a <= M_PI)
    angle =  a + M_PI;
  else
    angle = a - M_PI;

   return angle;
}

double AngleUtils::AngleBetweenTwoAnglesPositive(const double& a1, const double& a2)
{
   double diff = a1 - a2;
   if(diff < 0)
     diff = a2 - a1;

   if(diff > M_PI)
     diff = 2.0*M_PI - diff;

   return diff;
}

double AngleUtils::GetCircularAngle(const double& prevContAngle, const double& prevAngle, const double& currAngle)
{

  double diff = currAngle - prevAngle;
  if(diff > M_PI)
    diff = diff - 2.0*M_PI;
  if(diff < -M_PI)
    diff = diff + 2.0*M_PI;

  double c_ang = 0;
  if(prevContAngle == 0 || fabs(diff) < M_PI_2)
     c_ang = prevContAngle + diff;
  else
    c_ang = prevContAngle;

  return c_ang;
}
