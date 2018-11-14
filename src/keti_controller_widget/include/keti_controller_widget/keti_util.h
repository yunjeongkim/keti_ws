#ifndef KETI_UTILS_H
#define KETI_UTILS_H
namespace keti_controller_widget {
class keti_util
{
public:
  float km_per_hour_to_m_per_sec(const float vel);
  float degree_to_rad(const float deg);
};

}
#endif // KETI_UTILS_H
