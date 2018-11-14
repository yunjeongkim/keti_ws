;; Auto-generated. Do not edit!


(when (boundp 'keti_msgs::Misc)
  (if (not (find-package "KETI_MSGS"))
    (make-package "KETI_MSGS"))
  (shadow 'Misc (find-package "KETI_MSGS")))
(unless (find-package "KETI_MSGS::MISC")
  (make-package "KETI_MSGS::MISC"))

(in-package "ROS")
;;//! \htmlinclude Misc.msg.html


(defclass keti_msgs::Misc
  :super ros::object
  :slots (_Switch_Plus _Switch_Minus _Switch_cancel _Switch_ACC _Accel_Pedal_Pushed _Brake_Pedal_Pushed _Mo_Fd_Alv_Cnt ))

(defmethod keti_msgs::Misc
  (:init
   (&key
    ((:Switch_Plus __Switch_Plus) nil)
    ((:Switch_Minus __Switch_Minus) nil)
    ((:Switch_cancel __Switch_cancel) nil)
    ((:Switch_ACC __Switch_ACC) nil)
    ((:Accel_Pedal_Pushed __Accel_Pedal_Pushed) nil)
    ((:Brake_Pedal_Pushed __Brake_Pedal_Pushed) nil)
    ((:Mo_Fd_Alv_Cnt __Mo_Fd_Alv_Cnt) 0)
    )
   (send-super :init)
   (setq _Switch_Plus __Switch_Plus)
   (setq _Switch_Minus __Switch_Minus)
   (setq _Switch_cancel __Switch_cancel)
   (setq _Switch_ACC __Switch_ACC)
   (setq _Accel_Pedal_Pushed __Accel_Pedal_Pushed)
   (setq _Brake_Pedal_Pushed __Brake_Pedal_Pushed)
   (setq _Mo_Fd_Alv_Cnt (round __Mo_Fd_Alv_Cnt))
   self)
  (:Switch_Plus
   (&optional __Switch_Plus)
   (if __Switch_Plus (setq _Switch_Plus __Switch_Plus)) _Switch_Plus)
  (:Switch_Minus
   (&optional __Switch_Minus)
   (if __Switch_Minus (setq _Switch_Minus __Switch_Minus)) _Switch_Minus)
  (:Switch_cancel
   (&optional __Switch_cancel)
   (if __Switch_cancel (setq _Switch_cancel __Switch_cancel)) _Switch_cancel)
  (:Switch_ACC
   (&optional __Switch_ACC)
   (if __Switch_ACC (setq _Switch_ACC __Switch_ACC)) _Switch_ACC)
  (:Accel_Pedal_Pushed
   (&optional __Accel_Pedal_Pushed)
   (if __Accel_Pedal_Pushed (setq _Accel_Pedal_Pushed __Accel_Pedal_Pushed)) _Accel_Pedal_Pushed)
  (:Brake_Pedal_Pushed
   (&optional __Brake_Pedal_Pushed)
   (if __Brake_Pedal_Pushed (setq _Brake_Pedal_Pushed __Brake_Pedal_Pushed)) _Brake_Pedal_Pushed)
  (:Mo_Fd_Alv_Cnt
   (&optional __Mo_Fd_Alv_Cnt)
   (if __Mo_Fd_Alv_Cnt (setq _Mo_Fd_Alv_Cnt __Mo_Fd_Alv_Cnt)) _Mo_Fd_Alv_Cnt)
  (:serialization-length
   ()
   (+
    ;; bool _Switch_Plus
    1
    ;; bool _Switch_Minus
    1
    ;; bool _Switch_cancel
    1
    ;; bool _Switch_ACC
    1
    ;; bool _Accel_Pedal_Pushed
    1
    ;; bool _Brake_Pedal_Pushed
    1
    ;; uint8 _Mo_Fd_Alv_Cnt
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _Switch_Plus
       (if _Switch_Plus (write-byte -1 s) (write-byte 0 s))
     ;; bool _Switch_Minus
       (if _Switch_Minus (write-byte -1 s) (write-byte 0 s))
     ;; bool _Switch_cancel
       (if _Switch_cancel (write-byte -1 s) (write-byte 0 s))
     ;; bool _Switch_ACC
       (if _Switch_ACC (write-byte -1 s) (write-byte 0 s))
     ;; bool _Accel_Pedal_Pushed
       (if _Accel_Pedal_Pushed (write-byte -1 s) (write-byte 0 s))
     ;; bool _Brake_Pedal_Pushed
       (if _Brake_Pedal_Pushed (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _Mo_Fd_Alv_Cnt
       (write-byte _Mo_Fd_Alv_Cnt s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _Switch_Plus
     (setq _Switch_Plus (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _Switch_Minus
     (setq _Switch_Minus (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _Switch_cancel
     (setq _Switch_cancel (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _Switch_ACC
     (setq _Switch_ACC (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _Accel_Pedal_Pushed
     (setq _Accel_Pedal_Pushed (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _Brake_Pedal_Pushed
     (setq _Brake_Pedal_Pushed (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _Mo_Fd_Alv_Cnt
     (setq _Mo_Fd_Alv_Cnt (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get keti_msgs::Misc :md5sum-) "9a7483f16b1f4eff5a04bdcb10871411")
(setf (get keti_msgs::Misc :datatype-) "keti_msgs/Misc")
(setf (get keti_msgs::Misc :definition-)
      "# Messege that has a data related to vehicle's command from ECU
bool Switch_Plus
bool Switch_Minus
bool Switch_cancel
bool Switch_ACC
bool Accel_Pedal_Pushed
bool Brake_Pedal_Pushed
uint8 Mo_Fd_Alv_Cnt


")



(provide :keti_msgs/Misc "9a7483f16b1f4eff5a04bdcb10871411")


