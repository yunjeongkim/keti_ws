#include "curve_fitting.h"
#include "ros/ros.h"

CurveFitting::CurveFitting(const std::vector<WayPoint> lane)
{
  lane_ = lane;
}

CubicSplineParams CurveFitting::getCubicSplineParameter()
{
  std::vector<geometry_msgs::Point> filter_;
  filterData(filter_);
  curveFit(filter_);
  return params_;
}

void CurveFitting::filterData(std::vector<geometry_msgs::Point>& filter)
{
  unsigned int waypoints_number = lane_.size();
  unsigned int each_section_number = waypoints_number / 4;
  double sum_x, sum_y;

  // each section
  unsigned int k;
  for(unsigned int i=0; i<4; i++)
  {
    sum_x = 0; sum_y = 0;
    for(unsigned int j=0; j<each_section_number; j++)
    {
      k=4*i+j;
      sum_x = sum_x + (-lane_.at(k).pos_.y_);
      sum_y = sum_y + lane_.at(k).pos_.x_;
    }
    geometry_msgs::Point point;
    point.x = sum_x/each_section_number;
    point.y = sum_y/each_section_number;
    point.z = 0;
    //ROS_INFO("FilterPoint:[%f,%f]",point.x,point.y);
    filter.push_back(point);
  }
}
void CurveFitting::curveFit(const std::vector<geometry_msgs::Point>& filter)
{
  double d1xdy1[]={0,0,0};
  double d2xdy2[]={0,0};
  double ypd1[]={0,0,0};
  double ypd2[]={0,0};
  double d3xdy3=0;
  for(int i=1;i<4;i++)
  {
    d1xdy1[i-1]=1.0*(filter.at(i).x-filter.at(i-1).x)/(filter.at(i).y-filter.at(i-1).y);
    ypd1[i-1]=(filter.at(i).y+filter.at(i-1).y)/2;
  }
  for(int i=1;i<3;i++)
  {
    d2xdy2[i-1]=1.0*(d1xdy1[i]-d1xdy1[i-1])/(ypd1[i]-ypd1[i-1]);
    ypd2[i-1]=(ypd1[i]+ypd1[i-1])/2;
  }
  d3xdy3 = (d2xdy2[1]-d2xdy2[0])/(ypd2[1]-ypd2[0]);

  params_.c3 = d3xdy3/6;
  params_.c2 = 1.0*(d2xdy2[0]-d3xdy3*ypd2[0])/2;
  params_.c1 = d1xdy1[0]-3*params_.c3*ypd1[0]*ypd1[0]-2*params_.c2*ypd1[0];
  params_.c0 = filter.at(0).x-params_.c1*filter.at(0).y-params_.c2*filter.at(0).y*filter.at(0).y-params_.c3*filter.at(0).y*filter.at(0).y*filter.at(0).y;
}


