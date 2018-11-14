// Auto-generated. Do not edit!

// (in-package keti_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class MoVal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Steer_Cmd = null;
      this.SetDispSpeed = null;
      this.aReqMax_Cmd = null;
    }
    else {
      if (initObj.hasOwnProperty('Steer_Cmd')) {
        this.Steer_Cmd = initObj.Steer_Cmd
      }
      else {
        this.Steer_Cmd = 0.0;
      }
      if (initObj.hasOwnProperty('SetDispSpeed')) {
        this.SetDispSpeed = initObj.SetDispSpeed
      }
      else {
        this.SetDispSpeed = 0;
      }
      if (initObj.hasOwnProperty('aReqMax_Cmd')) {
        this.aReqMax_Cmd = initObj.aReqMax_Cmd
      }
      else {
        this.aReqMax_Cmd = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MoVal
    // Serialize message field [Steer_Cmd]
    bufferOffset = _serializer.float32(obj.Steer_Cmd, buffer, bufferOffset);
    // Serialize message field [SetDispSpeed]
    bufferOffset = _serializer.uint8(obj.SetDispSpeed, buffer, bufferOffset);
    // Serialize message field [aReqMax_Cmd]
    bufferOffset = _serializer.float32(obj.aReqMax_Cmd, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MoVal
    let len;
    let data = new MoVal(null);
    // Deserialize message field [Steer_Cmd]
    data.Steer_Cmd = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [SetDispSpeed]
    data.SetDispSpeed = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [aReqMax_Cmd]
    data.aReqMax_Cmd = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'keti_msgs/MoVal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c68df90795d8d5e4ac08398d3dbc65ad';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 Steer_Cmd
    uint8 SetDispSpeed
    float32 aReqMax_Cmd
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MoVal(null);
    if (msg.Steer_Cmd !== undefined) {
      resolved.Steer_Cmd = msg.Steer_Cmd;
    }
    else {
      resolved.Steer_Cmd = 0.0
    }

    if (msg.SetDispSpeed !== undefined) {
      resolved.SetDispSpeed = msg.SetDispSpeed;
    }
    else {
      resolved.SetDispSpeed = 0
    }

    if (msg.aReqMax_Cmd !== undefined) {
      resolved.aReqMax_Cmd = msg.aReqMax_Cmd;
    }
    else {
      resolved.aReqMax_Cmd = 0.0
    }

    return resolved;
    }
};

module.exports = MoVal;
