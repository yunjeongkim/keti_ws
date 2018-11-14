;; Auto-generated. Do not edit!


(when (boundp 'keti_msgs::MoVal)
  (if (not (find-package "KETI_MSGS"))
    (make-package "KETI_MSGS"))
  (shadow 'MoVal (find-package "KETI_MSGS")))
(unless (find-package "KETI_MSGS::MOVAL")
  (make-package "KETI_MSGS::MOVAL"))

(in-package "ROS")
;;//! \htmlinclude MoVal.msg.html


(defclass keti_msgs::MoVal
  :super ros::object
  :slots (_Steer_Cmd _SetDispSpeed _aReqMax_Cmd ))

(defmethod keti_msgs::MoVal
  (:init
   (&key
    ((:Steer_Cmd __Steer_Cmd) 0.0)
    ((:SetDispSpeed __SetDispSpeed) 0)
    ((:aReqMax_Cmd __aReqMax_Cmd) 0.0)
    )
   (send-super :init)
   (setq _Steer_Cmd (float __Steer_Cmd))
   (setq _SetDispSpeed (round __SetDispSpeed))
   (setq _aReqMax_Cmd (float __aReqMax_Cmd))
   self)
  (:Steer_Cmd
   (&optional __Steer_Cmd)
   (if __Steer_Cmd (setq _Steer_Cmd __Steer_Cmd)) _Steer_Cmd)
  (:SetDispSpeed
   (&optional __SetDispSpeed)
   (if __SetDispSpeed (setq _SetDispSpeed __SetDispSpeed)) _SetDispSpeed)
  (:aReqMax_Cmd
   (&optional __aReqMax_Cmd)
   (if __aReqMax_Cmd (setq _aReqMax_Cmd __aReqMax_Cmd)) _aReqMax_Cmd)
  (:serialization-length
   ()
   (+
    ;; float32 _Steer_Cmd
    4
    ;; uint8 _SetDispSpeed
    1
    ;; float32 _aReqMax_Cmd
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _Steer_Cmd
       (sys::poke _Steer_Cmd (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _SetDispSpeed
       (write-byte _SetDispSpeed s)
     ;; float32 _aReqMax_Cmd
       (sys::poke _aReqMax_Cmd (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _Steer_Cmd
     (setq _Steer_Cmd (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _SetDispSpeed
     (setq _SetDispSpeed (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _aReqMax_Cmd
     (setq _aReqMax_Cmd (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get keti_msgs::MoVal :md5sum-) "c68df90795d8d5e4ac08398d3dbc65ad")
(setf (get keti_msgs::MoVal :datatype-) "keti_msgs/MoVal")
(setf (get keti_msgs::MoVal :definition-)
      "float32 Steer_Cmd
uint8 SetDispSpeed
float32 aReqMax_Cmd

")



(provide :keti_msgs/MoVal "c68df90795d8d5e4ac08398d3dbc65ad")


