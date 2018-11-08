; Auto-generated. Do not edit!


(cl:in-package autoware_msgs-msg)


;//! \htmlinclude traffic_light.msg.html

(cl:defclass <traffic_light> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (traffic_light
    :reader traffic_light
    :initarg :traffic_light
    :type cl:integer
    :initform 0))
)

(cl:defclass traffic_light (<traffic_light>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <traffic_light>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'traffic_light)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autoware_msgs-msg:<traffic_light> is deprecated: use autoware_msgs-msg:traffic_light instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <traffic_light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:header-val is deprecated.  Use autoware_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'traffic_light-val :lambda-list '(m))
(cl:defmethod traffic_light-val ((m <traffic_light>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autoware_msgs-msg:traffic_light-val is deprecated.  Use autoware_msgs-msg:traffic_light instead.")
  (traffic_light m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <traffic_light>) ostream)
  "Serializes a message object of type '<traffic_light>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'traffic_light)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <traffic_light>) istream)
  "Deserializes a message object of type '<traffic_light>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'traffic_light) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<traffic_light>)))
  "Returns string type for a message object of type '<traffic_light>"
  "autoware_msgs/traffic_light")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'traffic_light)))
  "Returns string type for a message object of type 'traffic_light"
  "autoware_msgs/traffic_light")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<traffic_light>)))
  "Returns md5sum for a message object of type '<traffic_light>"
  "a4931ba214a0e37e220dd00b2acca20a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'traffic_light)))
  "Returns md5sum for a message object of type 'traffic_light"
  "a4931ba214a0e37e220dd00b2acca20a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<traffic_light>)))
  "Returns full string definition for message of type '<traffic_light>"
  (cl:format cl:nil "Header header~%int32 traffic_light~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'traffic_light)))
  "Returns full string definition for message of type 'traffic_light"
  (cl:format cl:nil "Header header~%int32 traffic_light~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <traffic_light>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <traffic_light>))
  "Converts a ROS message object to a list"
  (cl:list 'traffic_light
    (cl:cons ':header (header msg))
    (cl:cons ':traffic_light (traffic_light msg))
))
