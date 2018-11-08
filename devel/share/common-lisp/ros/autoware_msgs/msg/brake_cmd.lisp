; Auto-generated. Do not edit!


(cl:in-package autoware_msgs-msg)


;//! \htmlinclude brake_cmd.msg.html

(cl:defclass <brake_cmd> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (brake
    :reader brake
    :initarg :brake
    :type cl:integer
    :initform 0))
)

(cl:defclass brake_cmd (<brake_cmd>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <brake_cmd>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'brake_cmd)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autoware_msgs-msg:<brake_cmd> is deprecated: use autoware_msgs-msg:brake_cmd instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <brake_cmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:header-val is deprecated.  Use autoware_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'brake-val :lambda-list '(m))
(cl:defmethod brake-val ((m <brake_cmd>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:brake-val is deprecated.  Use autoware_msgs-msg:brake instead.")
  (brake m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <brake_cmd>) ostream)
  "Serializes a message object of type '<brake_cmd>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'brake)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <brake_cmd>) istream)
  "Deserializes a message object of type '<brake_cmd>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'brake) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<brake_cmd>)))
  "Returns string type for a message object of type '<brake_cmd>"
  "autoware_msgs/brake_cmd")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'brake_cmd)))
  "Returns string type for a message object of type 'brake_cmd"
  "autoware_msgs/brake_cmd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<brake_cmd>)))
  "Returns md5sum for a message object of type '<brake_cmd>"
  "5705431e779f450d71c11d56d5a2d8ed")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'brake_cmd)))
  "Returns md5sum for a message object of type 'brake_cmd"
  "5705431e779f450d71c11d56d5a2d8ed")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<brake_cmd>)))
  "Returns full string definition for message of type '<brake_cmd>"
  (cl:format cl:nil "Header header~%int32 brake~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'brake_cmd)))
  "Returns full string definition for message of type 'brake_cmd"
  (cl:format cl:nil "Header header~%int32 brake~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <brake_cmd>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <brake_cmd>))
  "Converts a ROS message object to a list"
  (cl:list 'brake_cmd
    (cl:cons ':header (header msg))
    (cl:cons ':brake (brake msg))
))
