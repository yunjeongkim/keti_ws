; Auto-generated. Do not edit!


(cl:in-package keti_msgs-msg)


;//! \htmlinclude MoConf.msg.html

(cl:defclass <MoConf> (roslisp-msg-protocol:ros-message)
  ((APM_En
    :reader APM_En
    :initarg :APM_En
    :type cl:boolean
    :initform cl:nil)
   (APM_IGNORE
    :reader APM_IGNORE
    :initarg :APM_IGNORE
    :type cl:boolean
    :initform cl:nil)
   (APM_Slevel
    :reader APM_Slevel
    :initarg :APM_Slevel
    :type cl:fixnum
    :initform 0)
   (ASM_En
    :reader ASM_En
    :initarg :ASM_En
    :type cl:fixnum
    :initform 0)
   (ACC_StopReq
    :reader ACC_StopReq
    :initarg :ACC_StopReq
    :type cl:boolean
    :initform cl:nil)
   (Mo_AlvCnt
    :reader Mo_AlvCnt
    :initarg :Mo_AlvCnt
    :type cl:fixnum
    :initform 0))
)

(cl:defclass MoConf (<MoConf>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoConf>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoConf)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name keti_msgs-msg:<MoConf> is deprecated: use keti_msgs-msg:MoConf instead.")))

(cl:ensure-generic-function 'APM_En-val :lambda-list '(m))
(cl:defmethod APM_En-val ((m <MoConf>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_En-val is deprecated.  Use keti_msgs-msg:APM_En instead.")
  (APM_En m))

(cl:ensure-generic-function 'APM_IGNORE-val :lambda-list '(m))
(cl:defmethod APM_IGNORE-val ((m <MoConf>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_IGNORE-val is deprecated.  Use keti_msgs-msg:APM_IGNORE instead.")
  (APM_IGNORE m))

(cl:ensure-generic-function 'APM_Slevel-val :lambda-list '(m))
(cl:defmethod APM_Slevel-val ((m <MoConf>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:APM_Slevel-val is deprecated.  Use keti_msgs-msg:APM_Slevel instead.")
  (APM_Slevel m))

(cl:ensure-generic-function 'ASM_En-val :lambda-list '(m))
(cl:defmethod ASM_En-val ((m <MoConf>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:ASM_En-val is deprecated.  Use keti_msgs-msg:ASM_En instead.")
  (ASM_En m))

(cl:ensure-generic-function 'ACC_StopReq-val :lambda-list '(m))
(cl:defmethod ACC_StopReq-val ((m <MoConf>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:ACC_StopReq-val is deprecated.  Use keti_msgs-msg:ACC_StopReq instead.")
  (ACC_StopReq m))

(cl:ensure-generic-function 'Mo_AlvCnt-val :lambda-list '(m))
(cl:defmethod Mo_AlvCnt-val ((m <MoConf>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Mo_AlvCnt-val is deprecated.  Use keti_msgs-msg:Mo_AlvCnt instead.")
  (Mo_AlvCnt m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoConf>) ostream)
  "Serializes a message object of type '<MoConf>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_En) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'APM_IGNORE) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'APM_Slevel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ASM_En)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ACC_StopReq) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_AlvCnt)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoConf>) istream)
  "Deserializes a message object of type '<MoConf>"
    (cl:setf (cl:slot-value msg 'APM_En) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'APM_IGNORE) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'APM_Slevel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ASM_En)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ACC_StopReq) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_AlvCnt)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoConf>)))
  "Returns string type for a message object of type '<MoConf>"
  "keti_msgs/MoConf")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoConf)))
  "Returns string type for a message object of type 'MoConf"
  "keti_msgs/MoConf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoConf>)))
  "Returns md5sum for a message object of type '<MoConf>"
  "88553aee21526e55707e4beec0e2dbf9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoConf)))
  "Returns md5sum for a message object of type 'MoConf"
  "88553aee21526e55707e4beec0e2dbf9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoConf>)))
  "Returns full string definition for message of type '<MoConf>"
  (cl:format cl:nil "bool APM_En~%bool APM_IGNORE~%uint8 APM_Slevel~%uint8 ASM_En~%bool ACC_StopReq~%uint8 Mo_AlvCnt~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoConf)))
  "Returns full string definition for message of type 'MoConf"
  (cl:format cl:nil "bool APM_En~%bool APM_IGNORE~%uint8 APM_Slevel~%uint8 ASM_En~%bool ACC_StopReq~%uint8 Mo_AlvCnt~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoConf>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoConf>))
  "Converts a ROS message object to a list"
  (cl:list 'MoConf
    (cl:cons ':APM_En (APM_En msg))
    (cl:cons ':APM_IGNORE (APM_IGNORE msg))
    (cl:cons ':APM_Slevel (APM_Slevel msg))
    (cl:cons ':ASM_En (ASM_En msg))
    (cl:cons ':ACC_StopReq (ACC_StopReq msg))
    (cl:cons ':Mo_AlvCnt (Mo_AlvCnt msg))
))
