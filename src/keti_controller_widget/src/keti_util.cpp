#include "../include/keti_controller_widget/keti_util.h"
namespace keti_controller_widget {

float keti_util::km_per_hour_to_m_per_sec(const float input){
  return 3.6*input;
}

float keti_util::degree_to_rad(const float input){
  return 3.141592*input;
}

}

