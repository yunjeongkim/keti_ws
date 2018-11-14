; Auto-generated. Do not edit!


(cl:in-package keti_msgs-msg)


;//! \htmlinclude MoVal.msg.html

(cl:defclass <MoVal> (roslisp-msg-protocol:ros-message)
  ((Steer_Cmd
    :reader Steer_Cmd
    :initarg :Steer_Cmd
    :type cl:float
    :initform 0.0)
   (SetDispSpeed
    :reader SetDispSpeed
    :initarg :SetDispSpeed
    :type cl:fixnum
    :initform 0)
   (aReqMax_Cmd
    :reader aReqMax_Cmd
    :initarg :aReqMax_Cmd
    :type cl:float
    :initform 0.0))
)

(cl:defclass MoVal (<MoVal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoVal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoVal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name keti_msgs-msg:<MoVal> is deprecated: use keti_msgs-msg:MoVal instead.")))

(cl:ensure-generic-function 'Steer_Cmd-val :lambda-list '(m))
(cl:defmethod Steer_Cmd-val ((m <MoVal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:Steer_Cmd-val is deprecated.  Use keti_msgs-msg:Steer_Cmd instead.")
  (Steer_Cmd m))

(cl:ensure-generic-function 'SetDispSpeed-val :lambda-list '(m))
(cl:defmethod SetDispSpeed-val ((m <MoVal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:SetDispSpeed-val is deprecated.  Use keti_msgs-msg:SetDispSpeed instead.")
  (SetDispSpeed m))

(cl:ensure-generic-function 'aReqMax_Cmd-val :lambda-list '(m))
(cl:defmethod aReqMax_Cmd-val ((m <MoVal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keti_msgs-msg:aReqMax_Cmd-val is deprecated.  Use keti_msgs-msg:aReqMax_Cmd instead.")
  (aReqMax_Cmd m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoVal>) ostream)
  "Serializes a message object of type '<MoVal>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'Steer_Cmd))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'SetDispSpeed)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'aReqMax_Cmd))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoVal>) istream)
  "Deserializes a message object of type '<MoVal>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Steer_Cmd) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'SetDispSpeed)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'aReqMax_Cmd) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoVal>)))
  "Returns string type for a message object of type '<MoVal>"
  "keti_msgs/MoVal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoVal)))
  "Returns string type for a message object of type 'MoVal"
  "keti_msgs/MoVal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoVal>)))
  "Returns md5sum for a message object of type '<MoVal>"
  "c68df90795d8d5e4ac08398d3dbc65ad")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoVal)))
  "Returns md5sum for a message object of type 'MoVal"
  "c68df90795d8d5e4ac08398d3dbc65ad")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoVal>)))
  "Returns full string definition for message of type '<MoVal>"
  (cl:format cl:nil "float32 Steer_Cmd~%uint8 SetDispSpeed~%float32 aReqMax_Cmd~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoVal)))
  "Returns full string definition for message of type 'MoVal"
  (cl:format cl:nil "float32 Steer_Cmd~%uint8 SetDispSpeed~%float32 aReqMax_Cmd~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoVal>))
  (cl:+ 0
     4
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoVal>))
  "Converts a ROS message object to a list"
  (cl:list 'MoVal
    (cl:cons ':Steer_Cmd (Steer_Cmd msg))
    (cl:cons ':SetDispSpeed (SetDispSpeed msg))
    (cl:cons ':aReqMax_Cmd (aReqMax_Cmd msg))
))
