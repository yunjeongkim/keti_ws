#ifndef KETI_DISPATCH_H
#define KETI_DISPATCH_H
#include <stdint.h>
namespace keti_controller_widget {
enum{
  ID_MOCONF=0x0156,
  ID_MOVAL=0x0157,
  ID_APM=0x0710,
  ID_ASM=0x0711,
  ID_MISC=0x071F,
};

typedef struct
{
  // 8th line //
  uint8_t mo_fd_alvcnt :8;
  // 7th line : Should be fixed
  uint8_t apm_fd_str_out_tq_upper :8;
  uint8_t apm_fd_steer_torq_upper :4;
  uint8_t apm_fd_str_out_tq_lower :4;
  uint8_t apm_fd_steer_torq_lower :8;

  // 3rd and 4th line//
  uint8_t apm_fd_steerangle_upper :8;
  uint8_t apm_fd_steerangle_lower :8;

  // 2nd line//
  uint8_t apm_fd_override :1;
  uint8_t :3;
  uint8_t apm_fd_ovrrd_ignore :1;
  uint8_t :3;

  // 1st line //
  uint8_t apm_fd_en :1;
  uint8_t mo_fd_state :3;
  uint8_t apm_fd_errbit_pd :1;
  uint8_t apm_fd_errbit_apm :1;
  uint8_t apm_fd_errbit_vinfo :1;
  uint8_t apm_fd_errbit_sas :1;
}MsgReportAPM;

typedef struct{
  uint8_t mo_fd_alvcnt;
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t acc_fd_vspeed :8;
  uint8_t asm_fd_en :1;
  uint8_t mo_fd_state :3;
  uint8_t acc_fd_errbit_pd :1;
  uint8_t :1;
  uint8_t acc_fd_errbit_tcu :1;
  uint8_t acc_fd_errbit_asm :1;
} MsgReportASM;

typedef struct
{
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t mo_fd_alv_cnt :8;
  uint8_t switch_plus :1;
  uint8_t switch_minus :1;
  uint8_t switch_cancel :1;
  uint8_t :1;
  uint8_t switch_acc :1;
  uint8_t accel_pedal_pushed :1;
  uint8_t brake_pedal_pushed :1;
  uint8_t :1;
} MsgReportMisc;

typedef struct
{
  uint8_t mo_alvcnt :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t asm_en:2;
  uint8_t :2;
  uint8_t acc_stopreq:1;
  uint8_t :3;
  uint8_t apm_slevel :8;
  uint8_t apm_en:1;
  uint8_t :1;
  uint8_t apm_ignore :1;
  uint8_t :5;
} MsgMoConf;

typedef struct
{
  uint8_t :8;
  uint8_t :8;
  uint8_t :8;
  uint8_t areqmax_cmd_upper;
  uint8_t areqmax_cmd_lower;
  uint8_t set_disp_speed;
  uint8_t steer_cmd_upper;
  uint8_t steer_cmd_lower;
} MsgMoVal;

}
#endif // KETI_DISPATCH_H
