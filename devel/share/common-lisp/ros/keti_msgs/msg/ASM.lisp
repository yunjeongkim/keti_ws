; Auto-generated. Do not edit!


(cl:in-package keti_msgs-msg)


;//! \htmlinclude ASM.msg.html

(cl:defclass <ASM> (roslisp-msg-protocol:ros-message)
  ((ASM_Fd_EN
    :reader ASM_Fd_EN
    :initarg :ASM_Fd_EN
    :type cl:boolean
    :initform cl:nil)
   (Mo_Fd_State
    :reader Mo_Fd_State
    :initarg :Mo_Fd_State
    :type cl:fixnum
    :initform 0)
   (ACC_Fd_ErrBit_PD
    :reader ACC_Fd_ErrBit_PD
    :initarg :ACC_Fd_ErrBit_PD
    :type cl:boolean
    :initform cl:nil)
   (ACC_Fd_ErrBit_TCU
    :reader ACC_Fd_ErrBit_TCU
    :initarg :ACC_Fd_ErrBit_TCU
    :type cl:boolean
    :initform cl:nil)
   (ACC_Fd_ErrBit_ASM
    :reader ACC_Fd_ErrBit_ASM
    :initarg :ACC_Fd_ErrBit_ASM
    :type cl:boolean
    :initform cl:nil)
   (ACC_Fd_VSpeed
    :reader ACC_Fd_VSpeed
    :initarg :ACC_Fd_VSpeed
    :type cl:fixnum
    :initform 0)
   (Mo_Fd_AlvCnt
    :reader Mo_Fd_AlvCnt
    :initarg :Mo_Fd_AlvCnt
    :type cl:fixnum
    :initform 0))
)

(cl:defclass ASM (<ASM>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ASM>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ASM)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name keti_msgs-msg:<ASM> is deprecated: use keti_msgs-msg:ASM instead.")))

(cl:ensure-generic-function 'ASM_Fd_EN-val :lambda-list '(m))
(cl:defmethod ASM_Fd_EN-val ((m <ASM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:ASM_Fd_EN-val is deprecated.  Use keti_msgs-msg:ASM_Fd_EN instead.")
  (ASM_Fd_EN m))

(cl:ensure-generic-function 'Mo_Fd_State-val :lambda-list '(m))
(cl:defmethod Mo_Fd_State-val ((m <ASM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Mo_Fd_State-val is deprecated.  Use keti_msgs-msg:Mo_Fd_State instead.")
  (Mo_Fd_State m))

(cl:ensure-generic-function 'ACC_Fd_ErrBit_PD-val :lambda-list '(m))
(cl:defmethod ACC_Fd_ErrBit_PD-val ((m <ASM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:ACC_Fd_ErrBit_PD-val is deprecated.  Use keti_msgs-msg:ACC_Fd_ErrBit_PD instead.")
  (ACC_Fd_ErrBit_PD m))

(cl:ensure-generic-function 'ACC_Fd_ErrBit_TCU-val :lambda-list '(m))
(cl:defmethod ACC_Fd_ErrBit_TCU-val ((m <ASM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:ACC_Fd_ErrBit_TCU-val is deprecated.  Use keti_msgs-msg:ACC_Fd_ErrBit_TCU instead.")
  (ACC_Fd_ErrBit_TCU m))

(cl:ensure-generic-function 'ACC_Fd_ErrBit_ASM-val :lambda-list '(m))
(cl:defmethod ACC_Fd_ErrBit_ASM-val ((m <ASM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:ACC_Fd_ErrBit_ASM-val is deprecated.  Use keti_msgs-msg:ACC_Fd_ErrBit_ASM instead.")
  (ACC_Fd_ErrBit_ASM m))

(cl:ensure-generic-function 'ACC_Fd_VSpeed-val :lambda-list '(m))
(cl:defmethod ACC_Fd_VSpeed-val ((m <ASM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:ACC_Fd_VSpeed-val is deprecated.  Use keti_msgs-msg:ACC_Fd_VSpeed instead.")
  (ACC_Fd_VSpeed m))

(cl:ensure-generic-function 'Mo_Fd_AlvCnt-val :lambda-list '(m))
(cl:defmethod Mo_Fd_AlvCnt-val ((m <ASM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Mo_Fd_AlvCnt-val is deprecated.  Use keti_msgs-msg:Mo_Fd_AlvCnt instead.")
  (Mo_Fd_AlvCnt m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ASM>) ostream)
  "Serializes a message object of type '<ASM>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ASM_Fd_EN) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_State)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ACC_Fd_ErrBit_PD) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ACC_Fd_ErrBit_TCU) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ACC_Fd_ErrBit_ASM) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ACC_Fd_VSpeed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_AlvCnt)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ASM>) istream)
  "Deserializes a message object of type '<ASM>"
    (cl:setf (cl:slot-value msg 'ASM_Fd_EN) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_State)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ACC_Fd_ErrBit_PD) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'ACC_Fd_ErrBit_TCU) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'ACC_Fd_ErrBit_ASM) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ACC_Fd_VSpeed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_AlvCnt)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ASM>)))
  "Returns string type for a message object of type '<ASM>"
  "keti_msgs/ASM")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ASM)))
  "Returns string type for a message object of type 'ASM"
  "keti_msgs/ASM")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ASM>)))
  "Returns md5sum for a message object of type '<ASM>"
  "be08424c4fe25594caaf435dda4497a5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ASM)))
  "Returns md5sum for a message object of type 'ASM"
  "be08424c4fe25594caaf435dda4497a5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ASM>)))
  "Returns full string definition for message of type '<ASM>"
  (cl:format cl:nil "# Messege that has a data related to velocity from ECU~%bool ASM_Fd_EN~%uint8 Mo_Fd_State~%bool ACC_Fd_ErrBit_PD~%bool ACC_Fd_ErrBit_TCU~%bool ACC_Fd_ErrBit_ASM~%uint8 ACC_Fd_VSpeed     # vehicle's current speed~%uint8 Mo_Fd_AlvCnt~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ASM)))
  "Returns full string definition for message of type 'ASM"
  (cl:format cl:nil "# Messege that has a data related to velocity from ECU~%bool ASM_Fd_EN~%uint8 Mo_Fd_State~%bool ACC_Fd_ErrBit_PD~%bool ACC_Fd_ErrBit_TCU~%bool ACC_Fd_ErrBit_ASM~%uint8 ACC_Fd_VSpeed     # vehicle's current speed~%uint8 Mo_Fd_AlvCnt~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ASM>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ASM>))
  "Converts a ROS message object to a list"
  (cl:list 'ASM
    (cl:cons ':ASM_Fd_EN (ASM_Fd_EN msg))
    (cl:cons ':Mo_Fd_State (Mo_Fd_State msg))
    (cl:cons ':ACC_Fd_ErrBit_PD (ACC_Fd_ErrBit_PD msg))
    (cl:cons ':ACC_Fd_ErrBit_TCU (ACC_Fd_ErrBit_TCU msg))
    (cl:cons ':ACC_Fd_ErrBit_ASM (ACC_Fd_ErrBit_ASM msg))
    (cl:cons ':ACC_Fd_VSpeed (ACC_Fd_VSpeed msg))
    (cl:cons ':Mo_Fd_AlvCnt (Mo_Fd_AlvCnt msg))
))
