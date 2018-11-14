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

class APM {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.APM_Fd_EN = null;
      this.Mo_Fd_State = null;
      this.APM_Fd_ErrBit_PD = null;
      this.APM_Fd_ErrBit_APM = null;
      this.APM_Fd_ErrBit_VInfo = null;
      this.APM_Fd_ErrBit_SAS = null;
      this.APM_Fd_Ovrrd_Ignore = null;
      this.APM_Fd_Override = null;
      this.APM_Fd_SteerAngle = null;
      this.APM_Fd_Steer_Torq = null;
      this.APM_Fd_Str_out_tq = null;
      this.Mo_Fd_AlvCnt = null;
    }
    else {
      if (initObj.hasOwnProperty('APM_Fd_EN')) {
        this.APM_Fd_EN = initObj.APM_Fd_EN
      }
      else {
        this.APM_Fd_EN = false;
      }
      if (initObj.hasOwnProperty('Mo_Fd_State')) {
        this.Mo_Fd_State = initObj.Mo_Fd_State
      }
      else {
        this.Mo_Fd_State = 0;
      }
      if (initObj.hasOwnProperty('APM_Fd_ErrBit_PD')) {
        this.APM_Fd_ErrBit_PD = initObj.APM_Fd_ErrBit_PD
      }
      else {
        this.APM_Fd_ErrBit_PD = false;
      }
      if (initObj.hasOwnProperty('APM_Fd_ErrBit_APM')) {
        this.APM_Fd_ErrBit_APM = initObj.APM_Fd_ErrBit_APM
      }
      else {
        this.APM_Fd_ErrBit_APM = false;
      }
      if (initObj.hasOwnProperty('APM_Fd_ErrBit_VInfo')) {
        this.APM_Fd_ErrBit_VInfo = initObj.APM_Fd_ErrBit_VInfo
      }
      else {
        this.APM_Fd_ErrBit_VInfo = false;
      }
      if (initObj.hasOwnProperty('APM_Fd_ErrBit_SAS')) {
        this.APM_Fd_ErrBit_SAS = initObj.APM_Fd_ErrBit_SAS
      }
      else {
        this.APM_Fd_ErrBit_SAS = false;
      }
      if (initObj.hasOwnProperty('APM_Fd_Ovrrd_Ignore')) {
        this.APM_Fd_Ovrrd_Ignore = initObj.APM_Fd_Ovrrd_Ignore
      }
      else {
        this.APM_Fd_Ovrrd_Ignore = false;
      }
      if (initObj.hasOwnProperty('APM_Fd_Override')) {
        this.APM_Fd_Override = initObj.APM_Fd_Override
      }
      else {
        this.APM_Fd_Override = false;
      }
      if (initObj.hasOwnProperty('APM_Fd_SteerAngle')) {
        this.APM_Fd_SteerAngle = initObj.APM_Fd_SteerAngle
      }
      else {
        this.APM_Fd_SteerAngle = 0.0;
      }
      if (initObj.hasOwnProperty('APM_Fd_Steer_Torq')) {
        this.APM_Fd_Steer_Torq = initObj.APM_Fd_Steer_Torq
      }
      else {
        this.APM_Fd_Steer_Torq = 0.0;
      }
      if (initObj.hasOwnProperty('APM_Fd_Str_out_tq')) {
        this.APM_Fd_Str_out_tq = initObj.APM_Fd_Str_out_tq
      }
      else {
        this.APM_Fd_Str_out_tq = 0.0;
      }
      if (initObj.hasOwnProperty('Mo_Fd_AlvCnt')) {
        this.Mo_Fd_AlvCnt = initObj.Mo_Fd_AlvCnt
      }
      else {
        this.Mo_Fd_AlvCnt = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type APM
    // Serialize message field [APM_Fd_EN]
    bufferOffset = _serializer.bool(obj.APM_Fd_EN, buffer, bufferOffset);
    // Serialize message field [Mo_Fd_State]
    bufferOffset = _serializer.uint8(obj.Mo_Fd_State, buffer, bufferOffset);
    // Serialize message field [APM_Fd_ErrBit_PD]
    bufferOffset = _serializer.bool(obj.APM_Fd_ErrBit_PD, buffer, bufferOffset);
    // Serialize message field [APM_Fd_ErrBit_APM]
    bufferOffset = _serializer.bool(obj.APM_Fd_ErrBit_APM, buffer, bufferOffset);
    // Serialize message field [APM_Fd_ErrBit_VInfo]
    bufferOffset = _serializer.bool(obj.APM_Fd_ErrBit_VInfo, buffer, bufferOffset);
    // Serialize message field [APM_Fd_ErrBit_SAS]
    bufferOffset = _serializer.bool(obj.APM_Fd_ErrBit_SAS, buffer, bufferOffset);
    // Serialize message field [APM_Fd_Ovrrd_Ignore]
    bufferOffset = _serializer.bool(obj.APM_Fd_Ovrrd_Ignore, buffer, bufferOffset);
    // Serialize message field [APM_Fd_Override]
    bufferOffset = _serializer.bool(obj.APM_Fd_Override, buffer, bufferOffset);
    // Serialize message field [APM_Fd_SteerAngle]
    bufferOffset = _serializer.float32(obj.APM_Fd_SteerAngle, buffer, bufferOffset);
    // Serialize message field [APM_Fd_Steer_Torq]
    bufferOffset = _serializer.float32(obj.APM_Fd_Steer_Torq, buffer, bufferOffset);
    // Serialize message field [APM_Fd_Str_out_tq]
    bufferOffset = _serializer.float32(obj.APM_Fd_Str_out_tq, buffer, bufferOffset);
    // Serialize message field [Mo_Fd_AlvCnt]
    bufferOffset = _serializer.uint8(obj.Mo_Fd_AlvCnt, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type APM
    let len;
    let data = new APM(null);
    // Deserialize message field [APM_Fd_EN]
    data.APM_Fd_EN = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Mo_Fd_State]
    data.Mo_Fd_State = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_ErrBit_PD]
    data.APM_Fd_ErrBit_PD = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_ErrBit_APM]
    data.APM_Fd_ErrBit_APM = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_ErrBit_VInfo]
    data.APM_Fd_ErrBit_VInfo = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_ErrBit_SAS]
    data.APM_Fd_ErrBit_SAS = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_Ovrrd_Ignore]
    data.APM_Fd_Ovrrd_Ignore = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_Override]
    data.APM_Fd_Override = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_SteerAngle]
    data.APM_Fd_SteerAngle = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_Steer_Torq]
    data.APM_Fd_Steer_Torq = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [APM_Fd_Str_out_tq]
    data.APM_Fd_Str_out_tq = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [Mo_Fd_AlvCnt]
    data.Mo_Fd_AlvCnt = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 21;
  }

  static datatype() {
    // Returns string type for a message object
    return 'keti_msgs/APM';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'db7178b9020923d4d2402ddc447555fb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Messege that has a data related to steering angle from ECU
    bool APM_Fd_EN    # Manual/Auto mode transformation request: 0:disable, 1: enable
    uint8 Mo_Fd_State
    bool APM_Fd_ErrBit_PD
    bool APM_Fd_ErrBit_APM
    bool APM_Fd_ErrBit_VInfo
    bool APM_Fd_ErrBit_SAS
    bool APM_Fd_Ovrrd_Ignore
    bool APM_Fd_Override
    float32 APM_Fd_SteerAngle   # current steering angle
    float32 APM_Fd_Steer_Torq # steering torqe value
    float32 APM_Fd_Str_out_tq
    #int8 APM_Fd_Str_out_tq
    uint8 Mo_Fd_AlvCnt
    
    
    
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new APM(null);
    if (msg.APM_Fd_EN !== undefined) {
      resolved.APM_Fd_EN = msg.APM_Fd_EN;
    }
    else {
      resolved.APM_Fd_EN = false
    }

    if (msg.Mo_Fd_State !== undefined) {
      resolved.Mo_Fd_State = msg.Mo_Fd_State;
    }
    else {
      resolved.Mo_Fd_State = 0
    }

    if (msg.APM_Fd_ErrBit_PD !== undefined) {
      resolved.APM_Fd_ErrBit_PD = msg.APM_Fd_ErrBit_PD;
    }
    else {
      resolved.APM_Fd_ErrBit_PD = false
    }

    if (msg.APM_Fd_ErrBit_APM !== undefined) {
      resolved.APM_Fd_ErrBit_APM = msg.APM_Fd_ErrBit_APM;
    }
    else {
      resolved.APM_Fd_ErrBit_APM = false
    }

    if (msg.APM_Fd_ErrBit_VInfo !== undefined) {
      resolved.APM_Fd_ErrBit_VInfo = msg.APM_Fd_ErrBit_VInfo;
    }
    else {
      resolved.APM_Fd_ErrBit_VInfo = false
    }

    if (msg.APM_Fd_ErrBit_SAS !== undefined) {
      resolved.APM_Fd_ErrBit_SAS = msg.APM_Fd_ErrBit_SAS;
    }
    else {
      resolved.APM_Fd_ErrBit_SAS = false
    }

    if (msg.APM_Fd_Ovrrd_Ignore !== undefined) {
      resolved.APM_Fd_Ovrrd_Ignore = msg.APM_Fd_Ovrrd_Ignore;
    }
    else {
      resolved.APM_Fd_Ovrrd_Ignore = false
    }

    if (msg.APM_Fd_Override !== undefined) {
      resolved.APM_Fd_Override = msg.APM_Fd_Override;
    }
    else {
      resolved.APM_Fd_Override = false
    }

    if (msg.APM_Fd_SteerAngle !== undefined) {
      resolved.APM_Fd_SteerAngle = msg.APM_Fd_SteerAngle;
    }
    else {
      resolved.APM_Fd_SteerAngle = 0.0
    }

    if (msg.APM_Fd_Steer_Torq !== undefined) {
      resolved.APM_Fd_Steer_Torq = msg.APM_Fd_Steer_Torq;
    }
    else {
      resolved.APM_Fd_Steer_Torq = 0.0
    }

    if (msg.APM_Fd_Str_out_tq !== undefined) {
      resolved.APM_Fd_Str_out_tq = msg.APM_Fd_Str_out_tq;
    }
    else {
      resolved.APM_Fd_Str_out_tq = 0.0
    }

    if (msg.Mo_Fd_AlvCnt !== undefined) {
      resolved.Mo_Fd_AlvCnt = msg.Mo_Fd_AlvCnt;
    }
    else {
      resolved.Mo_Fd_AlvCnt = 0
    }

    return resolved;
    }
};

module.exports = APM;
