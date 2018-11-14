; Auto-generated. Do not edit!


(cl:in-package keti_msgs-msg)


;//! \htmlinclude Misc.msg.html

(cl:defclass <Misc> (roslisp-msg-protocol:ros-message)
  ((Switch_Plus
    :reader Switch_Plus
    :initarg :Switch_Plus
    :type cl:boolean
    :initform cl:nil)
   (Switch_Minus
    :reader Switch_Minus
    :initarg :Switch_Minus
    :type cl:boolean
    :initform cl:nil)
   (Switch_cancel
    :reader Switch_cancel
    :initarg :Switch_cancel
    :type cl:boolean
    :initform cl:nil)
   (Switch_ACC
    :reader Switch_ACC
    :initarg :Switch_ACC
    :type cl:boolean
    :initform cl:nil)
   (Accel_Pedal_Pushed
    :reader Accel_Pedal_Pushed
    :initarg :Accel_Pedal_Pushed
    :type cl:boolean
    :initform cl:nil)
   (Brake_Pedal_Pushed
    :reader Brake_Pedal_Pushed
    :initarg :Brake_Pedal_Pushed
    :type cl:boolean
    :initform cl:nil)
   (Mo_Fd_Alv_Cnt
    :reader Mo_Fd_Alv_Cnt
    :initarg :Mo_Fd_Alv_Cnt
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Misc (<Misc>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Misc>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Misc)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name keti_msgs-msg:<Misc> is deprecated: use keti_msgs-msg:Misc instead.")))

(cl:ensure-generic-function 'Switch_Plus-val :lambda-list '(m))
(cl:defmethod Switch_Plus-val ((m <Misc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Switch_Plus-val is deprecated.  Use keti_msgs-msg:Switch_Plus instead.")
  (Switch_Plus m))

(cl:ensure-generic-function 'Switch_Minus-val :lambda-list '(m))
(cl:defmethod Switch_Minus-val ((m <Misc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Switch_Minus-val is deprecated.  Use keti_msgs-msg:Switch_Minus instead.")
  (Switch_Minus m))

(cl:ensure-generic-function 'Switch_cancel-val :lambda-list '(m))
(cl:defmethod Switch_cancel-val ((m <Misc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Switch_cancel-val is deprecated.  Use keti_msgs-msg:Switch_cancel instead.")
  (Switch_cancel m))

(cl:ensure-generic-function 'Switch_ACC-val :lambda-list '(m))
(cl:defmethod Switch_ACC-val ((m <Misc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Switch_ACC-val is deprecated.  Use keti_msgs-msg:Switch_ACC instead.")
  (Switch_ACC m))

(cl:ensure-generic-function 'Accel_Pedal_Pushed-val :lambda-list '(m))
(cl:defmethod Accel_Pedal_Pushed-val ((m <Misc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Accel_Pedal_Pushed-val is deprecated.  Use keti_msgs-msg:Accel_Pedal_Pushed instead.")
  (Accel_Pedal_Pushed m))

(cl:ensure-generic-function 'Brake_Pedal_Pushed-val :lambda-list '(m))
(cl:defmethod Brake_Pedal_Pushed-val ((m <Misc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Brake_Pedal_Pushed-val is deprecated.  Use keti_msgs-msg:Brake_Pedal_Pushed instead.")
  (Brake_Pedal_Pushed m))

(cl:ensure-generic-function 'Mo_Fd_Alv_Cnt-val :lambda-list '(m))
(cl:defmethod Mo_Fd_Alv_Cnt-val ((m <Misc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Mo_Fd_Alv_Cnt-val is deprecated.  Use keti_msgs-msg:Mo_Fd_Alv_Cnt instead.")
  (Mo_Fd_Alv_Cnt m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Misc>) ostream)
  "Serializes a message object of type '<Misc>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Switch_Plus) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Switch_Minus) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Switch_cancel) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Switch_ACC) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Accel_Pedal_Pushed) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'Brake_Pedal_Pushed) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_Alv_Cnt)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Misc>) istream)
  "Deserializes a message object of type '<Misc>"
    (cl:setf (cl:slot-value msg 'Switch_Plus) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'Switch_Minus) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'Switch_cancel) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'Switch_ACC) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'Accel_Pedal_Pushed) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'Brake_Pedal_Pushed) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Mo_Fd_Alv_Cnt)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Misc>)))
  "Returns string type for a message object of type '<Misc>"
  "keti_msgs/Misc")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Misc)))
  "Returns string type for a message object of type 'Misc"
  "keti_msgs/Misc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Misc>)))
  "Returns md5sum for a message object of type '<Misc>"
  "9a7483f16b1f4eff5a04bdcb10871411")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Misc)))
  "Returns md5sum for a message object of type 'Misc"
  "9a7483f16b1f4eff5a04bdcb10871411")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Misc>)))
  "Returns full string definition for message of type '<Misc>"
  (cl:format cl:nil "# Messege that has a data related to vehicle's command from ECU~%bool Switch_Plus~%bool Switch_Minus~%bool Switch_cancel~%bool Switch_ACC~%bool Accel_Pedal_Pushed~%bool Brake_Pedal_Pushed~%uint8 Mo_Fd_Alv_Cnt~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Misc)))
  "Returns full string definition for message of type 'Misc"
  (cl:format cl:nil "# Messege that has a data related to vehicle's command from ECU~%bool Switch_Plus~%bool Switch_Minus~%bool Switch_cancel~%bool Switch_ACC~%bool Accel_Pedal_Pushed~%bool Brake_Pedal_Pushed~%uint8 Mo_Fd_Alv_Cnt~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Misc>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Misc>))
  "Converts a ROS message object to a list"
  (cl:list 'Misc
    (cl:cons ':Switch_Plus (Switch_Plus msg))
    (cl:cons ':Switch_Minus (Switch_Minus msg))
    (cl:cons ':Switch_cancel (Switch_cancel msg))
    (cl:cons ':Switch_ACC (Switch_ACC msg))
    (cl:cons ':Accel_Pedal_Pushed (Accel_Pedal_Pushed msg))
    (cl:cons ':Brake_Pedal_Pushed (Brake_Pedal_Pushed msg))
    (cl:cons ':Mo_Fd_Alv_Cnt (Mo_Fd_Alv_Cnt msg))
))
