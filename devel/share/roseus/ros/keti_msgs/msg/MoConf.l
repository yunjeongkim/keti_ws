;; Auto-generated. Do not edit!


(when (boundp 'keti_msgs::MoConf)
  (if (not (find-package "KETI_MSGS"))
    (make-package "KETI_MSGS"))
  (shadow 'MoConf (find-package "KETI_MSGS")))
(unless (find-package "KETI_MSGS::MOCONF")
  (make-package "KETI_MSGS::MOCONF"))

(in-package "ROS")
;;//! \htmlinclude MoConf.msg.html


(defclass keti_msgs::MoConf
  :super ros::object
  :slots (_APM_En _APM_IGNORE _APM_Slevel _ASM_En _ACC_StopReq _Mo_AlvCnt ))

(defmethod keti_msgs::MoConf
  (:init
   (&key
    ((:APM_En __APM_En) nil)
    ((:APM_IGNORE __APM_IGNORE) nil)
    ((:APM_Slevel __APM_Slevel) 0)
    ((:ASM_En __ASM_En) 0)
    ((:ACC_StopReq __ACC_StopReq) nil)
    ((:Mo_AlvCnt __Mo_AlvCnt) 0)
    )
   (send-super :init)
   (setq _APM_En __APM_En)
   (setq _APM_IGNORE __APM_IGNORE)
   (setq _APM_Slevel (round __APM_Slevel))
   (setq _ASM_En (round __ASM_En))
   (setq _ACC_StopReq __ACC_StopReq)
   (setq _Mo_AlvCnt (round __Mo_AlvCnt))
   self)
  (:APM_En
   (&optional __APM_En)
   (if __APM_En (setq _APM_En __APM_En)) _APM_En)
  (:APM_IGNORE
   (&optional __APM_IGNORE)
   (if __APM_IGNORE (setq _APM_IGNORE __APM_IGNORE)) _APM_IGNORE)
  (:APM_Slevel
   (&optional __APM_Slevel)
   (if __APM_Slevel (setq _APM_Slevel __APM_Slevel)) _APM_Slevel)
  (:ASM_En
   (&optional __ASM_En)
   (if __ASM_En (setq _ASM_En __ASM_En)) _ASM_En)
  (:ACC_StopReq
   (&optional __ACC_StopReq)
   (if __ACC_StopReq (setq _ACC_StopReq __ACC_StopReq)) _ACC_StopReq)
  (:Mo_AlvCnt
   (&optional __Mo_AlvCnt)
   (if __Mo_AlvCnt (setq _Mo_AlvCnt __Mo_AlvCnt)) _Mo_AlvCnt)
  (:serialization-length
   ()
   (+
    ;; bool _APM_En
    1
    ;; bool _APM_IGNORE
    1
    ;; uint8 _APM_Slevel
    1
    ;; uint8 _ASM_En
    1
    ;; bool _ACC_StopReq
    1
    ;; uint8 _Mo_AlvCnt
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _APM_En
       (if _APM_En (write-byte -1 s) (write-byte 0 s))
     ;; bool _APM_IGNORE
       (if _APM_IGNORE (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _APM_Slevel
       (write-byte _APM_Slevel s)
     ;; uint8 _ASM_En
       (write-byte _ASM_En s)
     ;; bool _ACC_StopReq
       (if _ACC_StopReq (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _Mo_AlvCnt
       (write-byte _Mo_AlvCnt s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _APM_En
     (setq _APM_En (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _APM_IGNORE
     (setq _APM_IGNORE (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _APM_Slevel
     (setq _APM_Slevel (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _ASM_En
     (setq _ASM_En (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _ACC_StopReq
     (setq _ACC_StopReq (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _Mo_AlvCnt
     (setq _Mo_AlvCnt (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get keti_msgs::MoConf :md5sum-) "88553aee21526e55707e4beec0e2dbf9")
(setf (get keti_msgs::MoConf :datatype-) "keti_msgs/MoConf")
(setf (get keti_msgs::MoConf :definition-)
      "bool APM_En
bool APM_IGNORE
uint8 APM_Slevel
uint8 ASM_En
bool ACC_StopReq
uint8 Mo_AlvCnt

")



(provide :keti_msgs/MoConf "88553aee21526e55707e4beec0e2dbf9")


