;; Auto-generated. Do not edit!


(when (boundp 'keti_msgs::APM)
  (if (not (find-package "KETI_MSGS"))
    (make-package "KETI_MSGS"))
  (shadow 'APM (find-package "KETI_MSGS")))
(unless (find-package "KETI_MSGS::APM")
  (make-package "KETI_MSGS::APM"))

(in-package "ROS")
;;//! \htmlinclude APM.msg.html


(defclass keti_msgs::APM
  :super ros::object
  :slots (_APM_Fd_EN _Mo_Fd_State _APM_Fd_ErrBit_PD _APM_Fd_ErrBit_APM _APM_Fd_ErrBit_VInfo _APM_Fd_ErrBit_SAS _APM_Fd_Ovrrd_Ignore _APM_Fd_Override _APM_Fd_SteerAngle _APM_Fd_Steer_Torq _APM_Fd_Str_out_tq _Mo_Fd_AlvCnt ))

(defmethod keti_msgs::APM
  (:init
   (&key
    ((:APM_Fd_EN __APM_Fd_EN) nil)
    ((:Mo_Fd_State __Mo_Fd_State) 0)
    ((:APM_Fd_ErrBit_PD __APM_Fd_ErrBit_PD) nil)
    ((:APM_Fd_ErrBit_APM __APM_Fd_ErrBit_APM) nil)
    ((:APM_Fd_ErrBit_VInfo __APM_Fd_ErrBit_VInfo) nil)
    ((:APM_Fd_ErrBit_SAS __APM_Fd_ErrBit_SAS) nil)
    ((:APM_Fd_Ovrrd_Ignore __APM_Fd_Ovrrd_Ignore) nil)
    ((:APM_Fd_Override __APM_Fd_Override) nil)
    ((:APM_Fd_SteerAngle __APM_Fd_SteerAngle) 0.0)
    ((:APM_Fd_Steer_Torq __APM_Fd_Steer_Torq) 0.0)
    ((:APM_Fd_Str_out_tq __APM_Fd_Str_out_tq) 0.0)
    ((:Mo_Fd_AlvCnt __Mo_Fd_AlvCnt) 0)
    )
   (send-super :init)
   (setq _APM_Fd_EN __APM_Fd_EN)
   (setq _Mo_Fd_State (round __Mo_Fd_State))
   (setq _APM_Fd_ErrBit_PD __APM_Fd_ErrBit_PD)
   (setq _APM_Fd_ErrBit_APM __APM_Fd_ErrBit_APM)
   (setq _APM_Fd_ErrBit_VInfo __APM_Fd_ErrBit_VInfo)
   (setq _APM_Fd_ErrBit_SAS __APM_Fd_ErrBit_SAS)
   (setq _APM_Fd_Ovrrd_Ignore __APM_Fd_Ovrrd_Ignore)
   (setq _APM_Fd_Override __APM_Fd_Override)
   (setq _APM_Fd_SteerAngle (float __APM_Fd_SteerAngle))
   (setq _APM_Fd_Steer_Torq (float __APM_Fd_Steer_Torq))
   (setq _APM_Fd_Str_out_tq (float __APM_Fd_Str_out_tq))
   (setq _Mo_Fd_AlvCnt (round __Mo_Fd_AlvCnt))
   self)
  (:APM_Fd_EN
   (&optional __APM_Fd_EN)
   (if __APM_Fd_EN (setq _APM_Fd_EN __APM_Fd_EN)) _APM_Fd_EN)
  (:Mo_Fd_State
   (&optional __Mo_Fd_State)
   (if __Mo_Fd_State (setq _Mo_Fd_State __Mo_Fd_State)) _Mo_Fd_State)
  (:APM_Fd_ErrBit_PD
   (&optional __APM_Fd_ErrBit_PD)
   (if __APM_Fd_ErrBit_PD (setq _APM_Fd_ErrBit_PD __APM_Fd_ErrBit_PD)) _APM_Fd_ErrBit_PD)
  (:APM_Fd_ErrBit_APM
   (&optional __APM_Fd_ErrBit_APM)
   (if __APM_Fd_ErrBit_APM (setq _APM_Fd_ErrBit_APM __APM_Fd_ErrBit_APM)) _APM_Fd_ErrBit_APM)
  (:APM_Fd_ErrBit_VInfo
   (&optional __APM_Fd_ErrBit_VInfo)
   (if __APM_Fd_ErrBit_VInfo (setq _APM_Fd_ErrBit_VInfo __APM_Fd_ErrBit_VInfo)) _APM_Fd_ErrBit_VInfo)
  (:APM_Fd_ErrBit_SAS
   (&optional __APM_Fd_ErrBit_SAS)
   (if __APM_Fd_ErrBit_SAS (setq _APM_Fd_ErrBit_SAS __APM_Fd_ErrBit_SAS)) _APM_Fd_ErrBit_SAS)
  (:APM_Fd_Ovrrd_Ignore
   (&optional __APM_Fd_Ovrrd_Ignore)
   (if __APM_Fd_Ovrrd_Ignore (setq _APM_Fd_Ovrrd_Ignore __APM_Fd_Ovrrd_Ignore)) _APM_Fd_Ovrrd_Ignore)
  (:APM_Fd_Override
   (&optional __APM_Fd_Override)
   (if __APM_Fd_Override (setq _APM_Fd_Override __APM_Fd_Override)) _APM_Fd_Override)
  (:APM_Fd_SteerAngle
   (&optional __APM_Fd_SteerAngle)
   (if __APM_Fd_SteerAngle (setq _APM_Fd_SteerAngle __APM_Fd_SteerAngle)) _APM_Fd_SteerAngle)
  (:APM_Fd_Steer_Torq
   (&optional __APM_Fd_Steer_Torq)
   (if __APM_Fd_Steer_Torq (setq _APM_Fd_Steer_Torq __APM_Fd_Steer_Torq)) _APM_Fd_Steer_Torq)
  (:APM_Fd_Str_out_tq
   (&optional __APM_Fd_Str_out_tq)
   (if __APM_Fd_Str_out_tq (setq _APM_Fd_Str_out_tq __APM_Fd_Str_out_tq)) _APM_Fd_Str_out_tq)
  (:Mo_Fd_AlvCnt
   (&optional __Mo_Fd_AlvCnt)
   (if __Mo_Fd_AlvCnt (setq _Mo_Fd_AlvCnt __Mo_Fd_AlvCnt)) _Mo_Fd_AlvCnt)
  (:serialization-length
   ()
   (+
    ;; bool _APM_Fd_EN
    1
    ;; uint8 _Mo_Fd_State
    1
    ;; bool _APM_Fd_ErrBit_PD
    1
    ;; bool _APM_Fd_ErrBit_APM
    1
    ;; bool _APM_Fd_ErrBit_VInfo
    1
    ;; bool _APM_Fd_ErrBit_SAS
    1
    ;; bool _APM_Fd_Ovrrd_Ignore
    1
    ;; bool _APM_Fd_Override
    1
    ;; float32 _APM_Fd_SteerAngle
    4
    ;; float32 _APM_Fd_Steer_Torq
    4
    ;; float32 _APM_Fd_Str_out_tq
    4
    ;; uint8 _Mo_Fd_AlvCnt
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _APM_Fd_EN
       (if _APM_Fd_EN (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _Mo_Fd_State
       (write-byte _Mo_Fd_State s)
     ;; bool _APM_Fd_ErrBit_PD
       (if _APM_Fd_ErrBit_PD (write-byte -1 s) (write-byte 0 s))
     ;; bool _APM_Fd_ErrBit_APM
       (if _APM_Fd_ErrBit_APM (write-byte -1 s) (write-byte 0 s))
     ;; bool _APM_Fd_ErrBit_VInfo
       (if _APM_Fd_ErrBit_VInfo (write-byte -1 s) (write-byte 0 s))
     ;; bool _APM_Fd_ErrBit_SAS
       (if _APM_Fd_ErrBit_SAS (write-byte -1 s) (write-byte 0 s))
     ;; bool _APM_Fd_Ovrrd_Ignore
       (if _APM_Fd_Ovrrd_Ignore (write-byte -1 s) (write-byte 0 s))
     ;; bool _APM_Fd_Override
       (if _APM_Fd_Override (write-byte -1 s) (write-byte 0 s))
     ;; float32 _APM_Fd_SteerAngle
       (sys::poke _APM_Fd_SteerAngle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _APM_Fd_Steer_Torq
       (sys::poke _APM_Fd_Steer_Torq (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _APM_Fd_Str_out_tq
       (sys::poke _APM_Fd_Str_out_tq (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _Mo_Fd_AlvCnt
       (write-byte _Mo_Fd_AlvCnt s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _APM_Fd_EN
     (setq _APM_Fd_EN (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _Mo_Fd_State
     (setq _Mo_Fd_State (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _APM_Fd_ErrBit_PD
     (setq _APM_Fd_ErrBit_PD (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _APM_Fd_ErrBit_APM
     (setq _APM_Fd_ErrBit_APM (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _APM_Fd_ErrBit_VInfo
     (setq _APM_Fd_ErrBit_VInfo (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _APM_Fd_ErrBit_SAS
     (setq _APM_Fd_ErrBit_SAS (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _APM_Fd_Ovrrd_Ignore
     (setq _APM_Fd_Ovrrd_Ignore (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _APM_Fd_Override
     (setq _APM_Fd_Override (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float32 _APM_Fd_SteerAngle
     (setq _APM_Fd_SteerAngle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _APM_Fd_Steer_Torq
     (setq _APM_Fd_Steer_Torq (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _APM_Fd_Str_out_tq
     (setq _APM_Fd_Str_out_tq (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _Mo_Fd_AlvCnt
     (setq _Mo_Fd_AlvCnt (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get keti_msgs::APM :md5sum-) "db7178b9020923d4d2402ddc447555fb")
(setf (get keti_msgs::APM :datatype-) "keti_msgs/APM")
(setf (get keti_msgs::APM :definition-)
      "# Messege that has a data related to steering angle from ECU
bool APM_Fd_EN    # Manual/Auto mode transformation request: 0:disable, 1: enable
uint8 Mo_Fd_State
bool APM_Fd_ErrBit_PD
bool APM_Fd_ErrBit_APM
bool APM_Fd_ErrBit_VInfo
bool APM_Fd_ErrBit_SAS
bool APM_Fd_Ovrrd_Ignore
bool APM_Fd_Override
float32 APM_Fd_SteerAngle   # current steering angle
float32 APM_Fd_Steer_Torq # steering torqe value
float32 APM_Fd_Str_out_tq
#int8 APM_Fd_Str_out_tq
uint8 Mo_Fd_AlvCnt






")



(provide :keti_msgs/APM "db7178b9020923d4d2402ddc447555fb")


