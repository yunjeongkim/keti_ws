#ifndef MATH_CONSTANT_H
#define MATH_CONSTANT_H
#include <math.h>

const double DEG2RAD = M_PI / 180;
const double RAD2DEG  = 180. / M_PI;

template<typename T>
inline bool sign(const T& x){
  return (x > 0) ? 1 : ((x < 0) ? -1 : 0);
}

template<typename T>
inline T min(const T& x,const T& y)
{
  return (x <= y ? x : y);
}

template<typename T>
inline T max(const T& x,const T& y)
{
  return (x >= y ? x : y);
}

#endif // MATH_CONSTANT_H
