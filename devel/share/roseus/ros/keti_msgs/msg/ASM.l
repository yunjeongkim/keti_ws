;; Auto-generated. Do not edit!


(when (boundp 'keti_msgs::ASM)
  (if (not (find-package "KETI_MSGS"))
    (make-package "KETI_MSGS"))
  (shadow 'ASM (find-package "KETI_MSGS")))
(unless (find-package "KETI_MSGS::ASM")
  (make-package "KETI_MSGS::ASM"))

(in-package "ROS")
;;//! \htmlinclude ASM.msg.html


(defclass keti_msgs::ASM
  :super ros::object
  :slots (_ASM_Fd_EN _Mo_Fd_State _ACC_Fd_ErrBit_PD _ACC_Fd_ErrBit_TCU _ACC_Fd_ErrBit_ASM _ACC_Fd_VSpeed _Mo_Fd_AlvCnt ))

(defmethod keti_msgs::ASM
  (:init
   (&key
    ((:ASM_Fd_EN __ASM_Fd_EN) nil)
    ((:Mo_Fd_State __Mo_Fd_State) 0)
    ((:ACC_Fd_ErrBit_PD __ACC_Fd_ErrBit_PD) nil)
    ((:ACC_Fd_ErrBit_TCU __ACC_Fd_ErrBit_TCU) nil)
    ((:ACC_Fd_ErrBit_ASM __ACC_Fd_ErrBit_ASM) nil)
    ((:ACC_Fd_VSpeed __ACC_Fd_VSpeed) 0)
    ((:Mo_Fd_AlvCnt __Mo_Fd_AlvCnt) 0)
    )
   (send-super :init)
   (setq _ASM_Fd_EN __ASM_Fd_EN)
   (setq _Mo_Fd_State (round __Mo_Fd_State))
   (setq _ACC_Fd_ErrBit_PD __ACC_Fd_ErrBit_PD)
   (setq _ACC_Fd_ErrBit_TCU __ACC_Fd_ErrBit_TCU)
   (setq _ACC_Fd_ErrBit_ASM __ACC_Fd_ErrBit_ASM)
   (setq _ACC_Fd_VSpeed (round __ACC_Fd_VSpeed))
   (setq _Mo_Fd_AlvCnt (round __Mo_Fd_AlvCnt))
   self)
  (:ASM_Fd_EN
   (&optional __ASM_Fd_EN)
   (if __ASM_Fd_EN (setq _ASM_Fd_EN __ASM_Fd_EN)) _ASM_Fd_EN)
  (:Mo_Fd_State
   (&optional __Mo_Fd_State)
   (if __Mo_Fd_State (setq _Mo_Fd_State __Mo_Fd_State)) _Mo_Fd_State)
  (:ACC_Fd_ErrBit_PD
   (&optional __ACC_Fd_ErrBit_PD)
   (if __ACC_Fd_ErrBit_PD (setq _ACC_Fd_ErrBit_PD __ACC_Fd_ErrBit_PD)) _ACC_Fd_ErrBit_PD)
  (:ACC_Fd_ErrBit_TCU
   (&optional __ACC_Fd_ErrBit_TCU)
   (if __ACC_Fd_ErrBit_TCU (setq _ACC_Fd_ErrBit_TCU __ACC_Fd_ErrBit_TCU)) _ACC_Fd_ErrBit_TCU)
  (:ACC_Fd_ErrBit_ASM
   (&optional __ACC_Fd_ErrBit_ASM)
   (if __ACC_Fd_ErrBit_ASM (setq _ACC_Fd_ErrBit_ASM __ACC_Fd_ErrBit_ASM)) _ACC_Fd_ErrBit_ASM)
  (:ACC_Fd_VSpeed
   (&optional __ACC_Fd_VSpeed)
   (if __ACC_Fd_VSpeed (setq _ACC_Fd_VSpeed __ACC_Fd_VSpeed)) _ACC_Fd_VSpeed)
  (:Mo_Fd_AlvCnt
   (&optional __Mo_Fd_AlvCnt)
   (if __Mo_Fd_AlvCnt (setq _Mo_Fd_AlvCnt __Mo_Fd_AlvCnt)) _Mo_Fd_AlvCnt)
  (:serialization-length
   ()
   (+
    ;; bool _ASM_Fd_EN
    1
    ;; uint8 _Mo_Fd_State
    1
    ;; bool _ACC_Fd_ErrBit_PD
    1
    ;; bool _ACC_Fd_ErrBit_TCU
    1
    ;; bool _ACC_Fd_ErrBit_ASM
    1
    ;; uint8 _ACC_Fd_VSpeed
    1
    ;; uint8 _Mo_Fd_AlvCnt
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _ASM_Fd_EN
       (if _ASM_Fd_EN (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _Mo_Fd_State
       (write-byte _Mo_Fd_State s)
     ;; bool _ACC_Fd_ErrBit_PD
       (if _ACC_Fd_ErrBit_PD (write-byte -1 s) (write-byte 0 s))
     ;; bool _ACC_Fd_ErrBit_TCU
       (if _ACC_Fd_ErrBit_TCU (write-byte -1 s) (write-byte 0 s))
     ;; bool _ACC_Fd_ErrBit_ASM
       (if _ACC_Fd_ErrBit_ASM (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _ACC_Fd_VSpeed
       (write-byte _ACC_Fd_VSpeed s)
     ;; uint8 _Mo_Fd_AlvCnt
       (write-byte _Mo_Fd_AlvCnt s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _ASM_Fd_EN
     (setq _ASM_Fd_EN (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _Mo_Fd_State
     (setq _Mo_Fd_State (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _ACC_Fd_ErrBit_PD
     (setq _ACC_Fd_ErrBit_PD (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _ACC_Fd_ErrBit_TCU
     (setq _ACC_Fd_ErrBit_TCU (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _ACC_Fd_ErrBit_ASM
     (setq _ACC_Fd_ErrBit_ASM (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _ACC_Fd_VSpeed
     (setq _ACC_Fd_VSpeed (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _Mo_Fd_AlvCnt
     (setq _Mo_Fd_AlvCnt (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get keti_msgs::ASM :md5sum-) "be08424c4fe25594caaf435dda4497a5")
(setf (get keti_msgs::ASM :datatype-) "keti_msgs/ASM")
(setf (get keti_msgs::ASM :definition-)
      "# Messege that has a data related to velocity from ECU
bool ASM_Fd_EN
uint8 Mo_Fd_State
bool ACC_Fd_ErrBit_PD
bool ACC_Fd_ErrBit_TCU
bool ACC_Fd_ErrBit_ASM
uint8 ACC_Fd_VSpeed     # vehicle's current speed
uint8 Mo_Fd_AlvCnt


")



(provide :keti_msgs/ASM "be08424c4fe25594caaf435dda4497a5")


