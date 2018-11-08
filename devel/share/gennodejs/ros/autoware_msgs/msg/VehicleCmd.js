// Auto-generated. Do not edit!

// (in-package autoware_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let steer_cmd = require('./steer_cmd.js');
let accel_cmd = require('./accel_cmd.js');
let brake_cmd = require('./brake_cmd.js');
let lamp_cmd = require('./lamp_cmd.js');
let ControlCommand = require('./ControlCommand.js');
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class VehicleCmd {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.steer_cmd = null;
      this.accel_cmd = null;
      this.brake_cmd = null;
      this.lamp_cmd = null;
      this.gear = null;
      this.mode = null;
      this.twist_cmd = null;
      this.ctrl_cmd = null;
      this.emergency = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('steer_cmd')) {
        this.steer_cmd = initObj.steer_cmd
      }
      else {
        this.steer_cmd = new steer_cmd();
      }
      if (initObj.hasOwnProperty('accel_cmd')) {
        this.accel_cmd = initObj.accel_cmd
      }
      else {
        this.accel_cmd = new accel_cmd();
      }
      if (initObj.hasOwnProperty('brake_cmd')) {
        this.brake_cmd = initObj.brake_cmd
      }
      else {
        this.brake_cmd = new brake_cmd();
      }
      if (initObj.hasOwnProperty('lamp_cmd')) {
        this.lamp_cmd = initObj.lamp_cmd
      }
      else {
        this.lamp_cmd = new lamp_cmd();
      }
      if (initObj.hasOwnProperty('gear')) {
        this.gear = initObj.gear
      }
      else {
        this.gear = 0;
      }
      if (initObj.hasOwnProperty('mode')) {
        this.mode = initObj.mode
      }
      else {
        this.mode = 0;
      }
      if (initObj.hasOwnProperty('twist_cmd')) {
        this.twist_cmd = initObj.twist_cmd
      }
      else {
        this.twist_cmd = new geometry_msgs.msg.TwistStamped();
      }
      if (initObj.hasOwnProperty('ctrl_cmd')) {
        this.ctrl_cmd = initObj.ctrl_cmd
      }
      else {
        this.ctrl_cmd = new ControlCommand();
      }
      if (initObj.hasOwnProperty('emergency')) {
        this.emergency = initObj.emergency
      }
      else {
        this.emergency = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type VehicleCmd
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [steer_cmd]
    bufferOffset = steer_cmd.serialize(obj.steer_cmd, buffer, bufferOffset);
    // Serialize message field [accel_cmd]
    bufferOffset = accel_cmd.serialize(obj.accel_cmd, buffer, bufferOffset);
    // Serialize message field [brake_cmd]
    bufferOffset = brake_cmd.serialize(obj.brake_cmd, buffer, bufferOffset);
    // Serialize message field [lamp_cmd]
    bufferOffset = lamp_cmd.serialize(obj.lamp_cmd, buffer, bufferOffset);
    // Serialize message field [gear]
    bufferOffset = _serializer.int32(obj.gear, buffer, bufferOffset);
    // Serialize message field [mode]
    bufferOffset = _serializer.int32(obj.mode, buffer, bufferOffset);
    // Serialize message field [twist_cmd]
    bufferOffset = geometry_msgs.msg.TwistStamped.serialize(obj.twist_cmd, buffer, bufferOffset);
    // Serialize message field [ctrl_cmd]
    bufferOffset = ControlCommand.serialize(obj.ctrl_cmd, buffer, bufferOffset);
    // Serialize message field [emergency]
    bufferOffset = _serializer.int32(obj.emergency, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type VehicleCmd
    let len;
    let data = new VehicleCmd(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [steer_cmd]
    data.steer_cmd = steer_cmd.deserialize(buffer, bufferOffset);
    // Deserialize message field [accel_cmd]
    data.accel_cmd = accel_cmd.deserialize(buffer, bufferOffset);
    // Deserialize message field [brake_cmd]
    data.brake_cmd = brake_cmd.deserialize(buffer, bufferOffset);
    // Deserialize message field [lamp_cmd]
    data.lamp_cmd = lamp_cmd.deserialize(buffer, bufferOffset);
    // Deserialize message field [gear]
    data.gear = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [mode]
    data.mode = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [twist_cmd]
    data.twist_cmd = geometry_msgs.msg.TwistStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [ctrl_cmd]
    data.ctrl_cmd = ControlCommand.deserialize(buffer, bufferOffset);
    // Deserialize message field [emergency]
    data.emergency = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += steer_cmd.getMessageSize(object.steer_cmd);
    length += accel_cmd.getMessageSize(object.accel_cmd);
    length += brake_cmd.getMessageSize(object.brake_cmd);
    length += lamp_cmd.getMessageSize(object.lamp_cmd);
    length += geometry_msgs.msg.TwistStamped.getMessageSize(object.twist_cmd);
    return length + 36;
  }

  static datatype() {
    // Returns string type for a message object
    return 'autoware_msgs/VehicleCmd';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '153301368e83526f24c12f8e8cddf283';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    autoware_msgs/steer_cmd steer_cmd
    autoware_msgs/accel_cmd accel_cmd
    autoware_msgs/brake_cmd brake_cmd
    autoware_msgs/lamp_cmd lamp_cmd
    int32 gear
    int32 mode
    geometry_msgs/TwistStamped twist_cmd
    autoware_msgs/ControlCommand ctrl_cmd
    int32 emergency
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: autoware_msgs/steer_cmd
    Header header
    int32 steer
    
    ================================================================================
    MSG: autoware_msgs/accel_cmd
    Header header
    int32 accel
    
    ================================================================================
    MSG: autoware_msgs/brake_cmd
    Header header
    int32 brake
    
    ================================================================================
    MSG: autoware_msgs/lamp_cmd
    Header header
    int32 l
    int32 r
    
    ================================================================================
    MSG: geometry_msgs/TwistStamped
    # A twist with reference coordinate frame and timestamp
    Header header
    Twist twist
    
    ================================================================================
    MSG: geometry_msgs/Twist
    # This expresses velocity in free space broken into its linear and angular parts.
    Vector3  linear
    Vector3  angular
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    ================================================================================
    MSG: autoware_msgs/ControlCommand
    float64 linear_velocity
    float64 linear_acceleration #m/s^2
    float64 steering_angle
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new VehicleCmd(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.steer_cmd !== undefined) {
      resolved.steer_cmd = steer_cmd.Resolve(msg.steer_cmd)
    }
    else {
      resolved.steer_cmd = new steer_cmd()
    }

    if (msg.accel_cmd !== undefined) {
      resolved.accel_cmd = accel_cmd.Resolve(msg.accel_cmd)
    }
    else {
      resolved.accel_cmd = new accel_cmd()
    }

    if (msg.brake_cmd !== undefined) {
      resolved.brake_cmd = brake_cmd.Resolve(msg.brake_cmd)
    }
    else {
      resolved.brake_cmd = new brake_cmd()
    }

    if (msg.lamp_cmd !== undefined) {
      resolved.lamp_cmd = lamp_cmd.Resolve(msg.lamp_cmd)
    }
    else {
      resolved.lamp_cmd = new lamp_cmd()
    }

    if (msg.gear !== undefined) {
      resolved.gear = msg.gear;
    }
    else {
      resolved.gear = 0
    }

    if (msg.mode !== undefined) {
      resolved.mode = msg.mode;
    }
    else {
      resolved.mode = 0
    }

    if (msg.twist_cmd !== undefined) {
      resolved.twist_cmd = geometry_msgs.msg.TwistStamped.Resolve(msg.twist_cmd)
    }
    else {
      resolved.twist_cmd = new geometry_msgs.msg.TwistStamped()
    }

    if (msg.ctrl_cmd !== undefined) {
      resolved.ctrl_cmd = ControlCommand.Resolve(msg.ctrl_cmd)
    }
    else {
      resolved.ctrl_cmd = new ControlCommand()
    }

    if (msg.emergency !== undefined) {
      resolved.emergency = msg.emergency;
    }
    else {
      resolved.emergency = 0
    }

    return resolved;
    }
};

module.exports = VehicleCmd;
