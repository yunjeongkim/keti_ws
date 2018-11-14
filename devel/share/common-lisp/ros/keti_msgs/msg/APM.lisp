; Auto-generated. Do not edit!


(cl:in-package keti_msgs-msg)


;//! \htmlinclude APM.msg.html

(cl:defclass <APM> (roslisp-msg-protocol:ros-message)
  ((APM_Fd_EN
    :reader APM_Fd_EN
    :initarg :APM_Fd_EN
    :type cl:boolean
    :initform cl:nil)
   (Mo_Fd_State
    :reader Mo_Fd_State
    :initarg :Mo_Fd_State
    :type cl:fixnum
    :initform 0)
   (APM_Fd_ErrBit_PD
    :reader APM_Fd_ErrBit_PD
    :initarg :APM_Fd_ErrBit_PD
    :type cl:boolean
    :initform cl:nil)
   (APM_Fd_ErrBit_APM
    :reader APM_Fd_ErrBit_APM
    :initarg :APM_Fd_ErrBit_APM
    :type cl:boolean
    :initform cl:nil)
   (APM_Fd_ErrBit_VInfo
    :reader APM_Fd_ErrBit_VInfo
    :initarg :APM_Fd_ErrBit_VInfo
    :type cl:boolean
    :initform cl:nil)
   (APM_Fd_ErrBit_SAS
    :reader APM_Fd_ErrBit_SAS
    :initarg :APM_Fd_ErrBit_SAS
    :type cl:boolean
    :initform cl:nil)
   (APM_Fd_Ovrrd_Ignore
    :reader APM_Fd_Ovrrd_Ignore
    :initarg :APM_Fd_Ovrrd_Ignore
    :type cl:boolean
    :initform cl:nil)
   (APM_Fd_Override
    :reader APM_Fd_Override
    :initarg :APM_Fd_Override
    :type cl:boolean
    :initform cl:nil)
   (APM_Fd_SteerAngle
    :reader APM_Fd_SteerAngle
    :initarg :APM_Fd_SteerAngle
    :type cl:float
    :initform 0.0)
   (APM_Fd_Steer_Torq
    :reader APM_Fd_Steer_Torq
    :initarg :APM_Fd_Steer_Torq
    :type cl:float
    :initform 0.0)
   (APM_Fd_Str_out_tq
    :reader APM_Fd_Str_out_tq
    :initarg :APM_Fd_Str_out_tq
    :type cl:float
    :initform 0.0)
   (Mo_Fd_AlvCnt
    :reader Mo_Fd_AlvCnt
    :initarg :Mo_Fd_AlvCnt
    :type cl:fixnum
    :initform 0))
)

(cl:defclass APM (<APM>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <APM>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'APM)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name keti_msgs-msg:<APM> is deprecated: use keti_msgs-msg:APM instead.")))

(cl:ensure-generic-function 'APM_Fd_EN-val :lambda-list '(m))
(cl:defmethod APM_Fd_EN-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_EN-val is deprecated.  Use keti_msgs-msg:APM_Fd_EN instead.")
  (APM_Fd_EN m))

(cl:ensure-generic-function 'Mo_Fd_State-val :lambda-list '(m))
(cl:defmethod Mo_Fd_State-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Mo_Fd_State-val is deprecated.  Use keti_msgs-msg:Mo_Fd_State instead.")
  (Mo_Fd_State m))

(cl:ensure-generic-function 'APM_Fd_ErrBit_PD-val :lambda-list '(m))
(cl:defmethod APM_Fd_ErrBit_PD-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_ErrBit_PD-val is deprecated.  Use keti_msgs-msg:APM_Fd_ErrBit_PD instead.")
  (APM_Fd_ErrBit_PD m))

(cl:ensure-generic-function 'APM_Fd_ErrBit_APM-val :lambda-list '(m))
(cl:defmethod APM_Fd_ErrBit_APM-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_ErrBit_APM-val is deprecated.  Use keti_msgs-msg:APM_Fd_ErrBit_APM instead.")
  (APM_Fd_ErrBit_APM m))

(cl:ensure-generic-function 'APM_Fd_ErrBit_VInfo-val :lambda-list '(m))
(cl:defmethod APM_Fd_ErrBit_VInfo-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_ErrBit_VInfo-val is deprecated.  Use keti_msgs-msg:APM_Fd_ErrBit_VInfo instead.")
  (APM_Fd_ErrBit_VInfo m))

(cl:ensure-generic-function 'APM_Fd_ErrBit_SAS-val :lambda-list '(m))
(cl:defmethod APM_Fd_ErrBit_SAS-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_ErrBit_SAS-val is deprecated.  Use keti_msgs-msg:APM_Fd_ErrBit_SAS instead.")
  (APM_Fd_ErrBit_SAS m))

(cl:ensure-generic-function 'APM_Fd_Ovrrd_Ignore-val :lambda-list '(m))
(cl:defmethod APM_Fd_Ovrrd_Ignore-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_Ovrrd_Ignore-val is deprecated.  Use keti_msgs-msg:APM_Fd_Ovrrd_Ignore instead.")
  (APM_Fd_Ovrrd_Ignore m))

(cl:ensure-generic-function 'APM_Fd_Override-val :lambda-list '(m))
(cl:defmethod APM_Fd_Override-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_Override-val is deprecated.  Use keti_msgs-msg:APM_Fd_Override instead.")
  (APM_Fd_Override m))

(cl:ensure-generic-function 'APM_Fd_SteerAngle-val :lambda-list '(m))
(cl:defmethod APM_Fd_SteerAngle-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_SteerAngle-val is deprecated.  Use keti_msgs-msg:APM_Fd_SteerAngle instead.")
  (APM_Fd_SteerAngle m))

(cl:ensure-generic-function 'APM_Fd_Steer_Torq-val :lambda-list '(m))
(cl:defmethod APM_Fd_Steer_Torq-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_Steer_Torq-val is deprecated.  Use keti_msgs-msg:APM_Fd_Steer_Torq instead.")
  (APM_Fd_Steer_Torq m))

(cl:ensure-generic-function 'APM_Fd_Str_out_tq-val :lambda-list '(m))
(cl:defmethod APM_Fd_Str_out_tq-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Fd_Str_out_tq-val is deprecated.  Use keti_msgs-msg:APM_Fd_Str_out_tq instead.")
  (APM_Fd_Str_out_tq m))

(cl:ensure-generic-function 'Mo_Fd_AlvCnt-val :lambda-list '(m))
(cl:defmethod Mo_Fd_AlvCnt-val ((m <APM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Mo_Fd_AlvCnt-val is deprecated.  Use keti_msgs-msg:Mo_Fd_AlvCnt instead.")
  (Mo_Fd_AlvCnt m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <APM>) ostream)
  "Serializes a message object of type '<APM>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_Fd_EN) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_State)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_Fd_ErrBit_PD) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_Fd_ErrBit_APM) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_Fd_ErrBit_VInfo) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_Fd_ErrBit_SAS) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_Fd_Ovrrd_Ignore) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_Fd_Override) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'APM_Fd_SteerAngle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'APM_Fd_Steer_Torq))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'APM_Fd_Str_out_tq))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_AlvCnt)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <APM>) istream)
  "Deserializes a message object of type '<APM>"
    (cl:setf (cl:slot-value msg 'APM_Fd_EN) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_State)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'APM_Fd_ErrBit_PD) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'APM_Fd_ErrBit_APM) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'APM_Fd_ErrBit_VInfo) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'APM_Fd_ErrBit_SAS) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'APM_Fd_Ovrrd_Ignore) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'APM_Fd_Override) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'APM_Fd_SteerAngle) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'APM_Fd_Steer_Torq) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'APM_Fd_Str_out_tq) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_AlvCnt)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<APM>)))
  "Returns string type for a message object of type '<APM>"
  "keti_msgs/APM")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'APM)))
  "Returns string type for a message object of type 'APM"
  "keti_msgs/APM")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<APM>)))
  "Returns md5sum for a message object of type '<APM>"
  "db7178b9020923d4d2402ddc447555fb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'APM)))
  "Returns md5sum for a message object of type 'APM"
  "db7178b9020923d4d2402ddc447555fb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<APM>)))
  "Returns full string definition for message of type '<APM>"
  (cl:format cl:nil "# Messege that has a data related to steering angle from ECU~%bool APM_Fd_EN    # Manual/Auto mode transformation request: 0:disable, 1: enable~%uint8 Mo_Fd_State~%bool APM_Fd_ErrBit_PD~%bool APM_Fd_ErrBit_APM~%bool APM_Fd_ErrBit_VInfo~%bool APM_Fd_ErrBit_SAS~%bool APM_Fd_Ovrrd_Ignore~%bool APM_Fd_Override~%float32 APM_Fd_SteerAngle   # current steering angle~%float32 APM_Fd_Steer_Torq # steering torqe value~%float32 APM_Fd_Str_out_tq~%#int8 APM_Fd_Str_out_tq~%uint8 Mo_Fd_AlvCnt~%~%~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'APM)))
  "Returns full string definition for message of type 'APM"
  (cl:format cl:nil "# Messege that has a data related to steering angle from ECU~%bool APM_Fd_EN    # Manual/Auto mode transformation request: 0:disable, 1: enable~%uint8 Mo_Fd_State~%bool APM_Fd_ErrBit_PD~%bool APM_Fd_ErrBit_APM~%bool APM_Fd_ErrBit_VInfo~%bool APM_Fd_ErrBit_SAS~%bool APM_Fd_Ovrrd_Ignore~%bool APM_Fd_Override~%float32 APM_Fd_SteerAngle   # current steering angle~%float32 APM_Fd_Steer_Torq # steering torqe value~%float32 APM_Fd_Str_out_tq~%#int8 APM_Fd_Str_out_tq~%uint8 Mo_Fd_AlvCnt~%~%~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <APM>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
     1
     4
     4
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <APM>))
  "Converts a ROS message object to a list"
  (cl:list 'APM
    (cl:cons ':APM_Fd_EN (APM_Fd_EN msg))
    (cl:cons ':Mo_Fd_State (Mo_Fd_State msg))
    (cl:cons ':APM_Fd_ErrBit_PD (APM_Fd_ErrBit_PD msg))
    (cl:cons ':APM_Fd_ErrBit_APM (APM_Fd_ErrBit_APM msg))
    (cl:cons ':APM_Fd_ErrBit_VInfo (APM_Fd_ErrBit_VInfo msg))
    (cl:cons ':APM_Fd_ErrBit_SAS (APM_Fd_ErrBit_SAS msg))
    (cl:cons ':APM_Fd_Ovrrd_Ignore (APM_Fd_Ovrrd_Ignore msg))
    (cl:cons ':APM_Fd_Override (APM_Fd_Override msg))
    (cl:cons ':APM_Fd_SteerAngle (APM_Fd_SteerAngle msg))
    (cl:cons ':APM_Fd_Steer_Torq (APM_Fd_Steer_Torq msg))
    (cl:cons ':APM_Fd_Str_out_tq (APM_Fd_Str_out_tq msg))
    (cl:cons ':Mo_Fd_AlvCnt (Mo_Fd_AlvCnt msg))
))
