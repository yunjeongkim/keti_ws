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

class MoConf {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.APM_En = null;
      this.APM_IGNORE = null;
      this.APM_Slevel = null;
      this.ASM_En = null;
      this.ACC_StopReq = null;
      this.Mo_AlvCnt = null;
    }
    else {
      if (initObj.hasOwnProperty('APM_En')) {
        this.APM_En = initObj.APM_En
      }
      else {
        this.APM_En = false;
      }
      if (initObj.hasOwnProperty('APM_IGNORE')) {
        this.APM_IGNORE = initObj.APM_IGNORE
      }
      else {
        this.APM_IGNORE = false;
      }
      if (initObj.hasOwnProperty('APM_Slevel')) {
        this.APM_Slevel = initObj.APM_Slevel
      }
      else {
        this.APM_Slevel = 0;
      }
      if (initObj.hasOwnProperty('ASM_En')) {
        this.ASM_En = initObj.ASM_En
      }
      else {
        this.ASM_En = 0;
      }
      if (initObj.hasOwnProperty('ACC_StopReq')) {
        this.ACC_StopReq = initObj.ACC_StopReq
      }
      else {
        this.ACC_StopReq = false;
      }
      if (initObj.hasOwnProperty('Mo_AlvCnt')) {
        this.Mo_AlvCnt = initObj.Mo_AlvCnt
      }
      else {
        this.Mo_AlvCnt = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MoConf
    // Serialize message field [APM_En]
    bufferOffset = _serializer.bool(obj.APM_En, buffer, bufferOffset);
    // Serialize message field [APM_IGNORE]
    bufferOffset = _serializer.bool(obj.APM_IGNORE, buffer, bufferOffset);
    // Serialize message field [APM_Slevel]
    bufferOffset = _serializer.uint8(obj.APM_Slevel, buffer, bufferOffset);
    // Serialize message field [ASM_En]
    bufferOffset = _serializer.uint8(obj.ASM_En, buffer, bufferOffset);
    // Serialize message field [ACC_StopReq]
    bufferOffset = _serializer.bool(obj.ACC_StopReq, buffer, bufferOffset);
    // Serialize message field [Mo_AlvCnt]
    bufferOffset = _serializer.uint8(obj.Mo_AlvCnt, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MoConf
    let len;
    let data = new MoConf(null);
    // Deserialize message field [APM_En]
    data.APM_En = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [APM_IGNORE]
    data.APM_IGNORE = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [APM_Slevel]
    data.APM_Slevel = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [ASM_En]
    data.ASM_En = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [ACC_StopReq]
    data.ACC_StopReq = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Mo_AlvCnt]
    data.Mo_AlvCnt = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 6;
  }

  static datatype() {
    // Returns string type for a message object
    return 'keti_msgs/MoConf';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '88553aee21526e55707e4beec0e2dbf9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool APM_En
    bool APM_IGNORE
    uint8 APM_Slevel
    uint8 ASM_En
    bool ACC_StopReq
    uint8 Mo_AlvCnt
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MoConf(null);
    if (msg.APM_En !== undefined) {
      resolved.APM_En = msg.APM_En;
    }
    else {
      resolved.APM_En = false
    }

    if (msg.APM_IGNORE !== undefined) {
      resolved.APM_IGNORE = msg.APM_IGNORE;
    }
    else {
      resolved.APM_IGNORE = false
    }

    if (msg.APM_Slevel !== undefined) {
      resolved.APM_Slevel = msg.APM_Slevel;
    }
    else {
      resolved.APM_Slevel = 0
    }

    if (msg.ASM_En !== undefined) {
      resolved.ASM_En = msg.ASM_En;
    }
    else {
      resolved.ASM_En = 0
    }

    if (msg.ACC_StopReq !== undefined) {
      resolved.ACC_StopReq = msg.ACC_StopReq;
    }
    else {
      resolved.ACC_StopReq = false
    }

    if (msg.Mo_AlvCnt !== undefined) {
      resolved.Mo_AlvCnt = msg.Mo_AlvCnt;
    }
    else {
      resolved.Mo_AlvCnt = 0
    }

    return resolved;
    }
};

module.exports = MoConf;
