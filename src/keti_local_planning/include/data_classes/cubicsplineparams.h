#ifndef CUBICSPLINEPARAMS_H
#define CUBICSPLINEPARAMS_H
/**
 * @brief cubic spline parameter y = c3*x^3 + c2*x^2 + c1*x + c0
 * \ingroup DataGroup
 * @{
 */
class CubicSplineParams{
public:
  CubicSplineParams(){
    c0=0;
    c1=0;
    c2=0;
    c3=0;
  }
  double c0;
  double c1;
  double c2;
  double c3;

};
#endif // CUBICSPLINEPARAMS_H
