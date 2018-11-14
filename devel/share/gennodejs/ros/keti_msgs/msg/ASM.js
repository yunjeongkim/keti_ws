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

class ASM {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.ASM_Fd_EN = null;
      this.Mo_Fd_State = null;
      this.ACC_Fd_ErrBit_PD = null;
      this.ACC_Fd_ErrBit_TCU = null;
      this.ACC_Fd_ErrBit_ASM = null;
      this.ACC_Fd_VSpeed = null;
      this.Mo_Fd_AlvCnt = null;
    }
    else {
      if (initObj.hasOwnProperty('ASM_Fd_EN')) {
        this.ASM_Fd_EN = initObj.ASM_Fd_EN
      }
      else {
        this.ASM_Fd_EN = false;
      }
      if (initObj.hasOwnProperty('Mo_Fd_State')) {
        this.Mo_Fd_State = initObj.Mo_Fd_State
      }
      else {
        this.Mo_Fd_State = 0;
      }
      if (initObj.hasOwnProperty('ACC_Fd_ErrBit_PD')) {
        this.ACC_Fd_ErrBit_PD = initObj.ACC_Fd_ErrBit_PD
      }
      else {
        this.ACC_Fd_ErrBit_PD = false;
      }
      if (initObj.hasOwnProperty('ACC_Fd_ErrBit_TCU')) {
        this.ACC_Fd_ErrBit_TCU = initObj.ACC_Fd_ErrBit_TCU
      }
      else {
        this.ACC_Fd_ErrBit_TCU = false;
      }
      if (initObj.hasOwnProperty('ACC_Fd_ErrBit_ASM')) {
        this.ACC_Fd_ErrBit_ASM = initObj.ACC_Fd_ErrBit_ASM
      }
      else {
        this.ACC_Fd_ErrBit_ASM = false;
      }
      if (initObj.hasOwnProperty('ACC_Fd_VSpeed')) {
        this.ACC_Fd_VSpeed = initObj.ACC_Fd_VSpeed
      }
      else {
        this.ACC_Fd_VSpeed = 0;
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
    // Serializes a message object of type ASM
    // Serialize message field [ASM_Fd_EN]
    bufferOffset = _serializer.bool(obj.ASM_Fd_EN, buffer, bufferOffset);
    // Serialize message field [Mo_Fd_State]
    bufferOffset = _serializer.uint8(obj.Mo_Fd_State, buffer, bufferOffset);
    // Serialize message field [ACC_Fd_ErrBit_PD]
    bufferOffset = _serializer.bool(obj.ACC_Fd_ErrBit_PD, buffer, bufferOffset);
    // Serialize message field [ACC_Fd_ErrBit_TCU]
    bufferOffset = _serializer.bool(obj.ACC_Fd_ErrBit_TCU, buffer, bufferOffset);
    // Serialize message field [ACC_Fd_ErrBit_ASM]
    bufferOffset = _serializer.bool(obj.ACC_Fd_ErrBit_ASM, buffer, bufferOffset);
    // Serialize message field [ACC_Fd_VSpeed]
    bufferOffset = _serializer.uint8(obj.ACC_Fd_VSpeed, buffer, bufferOffset);
    // Serialize message field [Mo_Fd_AlvCnt]
    bufferOffset = _serializer.uint8(obj.Mo_Fd_AlvCnt, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ASM
    let len;
    let data = new ASM(null);
    // Deserialize message field [ASM_Fd_EN]
    data.ASM_Fd_EN = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Mo_Fd_State]
    data.Mo_Fd_State = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [ACC_Fd_ErrBit_PD]
    data.ACC_Fd_ErrBit_PD = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [ACC_Fd_ErrBit_TCU]
    data.ACC_Fd_ErrBit_TCU = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [ACC_Fd_ErrBit_ASM]
    data.ACC_Fd_ErrBit_ASM = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [ACC_Fd_VSpeed]
    data.ACC_Fd_VSpeed = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [Mo_Fd_AlvCnt]
    data.Mo_Fd_AlvCnt = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 7;
  }

  static datatype() {
    // Returns string type for a message object
    return 'keti_msgs/ASM';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'be08424c4fe25594caaf435dda4497a5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Messege that has a data related to velocity from ECU
    bool ASM_Fd_EN
    uint8 Mo_Fd_State
    bool ACC_Fd_ErrBit_PD
    bool ACC_Fd_ErrBit_TCU
    bool ACC_Fd_ErrBit_ASM
    uint8 ACC_Fd_VSpeed     # vehicle's current speed
    uint8 Mo_Fd_AlvCnt
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ASM(null);
    if (msg.ASM_Fd_EN !== undefined) {
      resolved.ASM_Fd_EN = msg.ASM_Fd_EN;
    }
    else {
      resolved.ASM_Fd_EN = false
    }

    if (msg.Mo_Fd_State !== undefined) {
      resolved.Mo_Fd_State = msg.Mo_Fd_State;
    }
    else {
      resolved.Mo_Fd_State = 0
    }

    if (msg.ACC_Fd_ErrBit_PD !== undefined) {
      resolved.ACC_Fd_ErrBit_PD = msg.ACC_Fd_ErrBit_PD;
    }
    else {
      resolved.ACC_Fd_ErrBit_PD = false
    }

    if (msg.ACC_Fd_ErrBit_TCU !== undefined) {
      resolved.ACC_Fd_ErrBit_TCU = msg.ACC_Fd_ErrBit_TCU;
    }
    else {
      resolved.ACC_Fd_ErrBit_TCU = false
    }

    if (msg.ACC_Fd_ErrBit_ASM !== undefined) {
      resolved.ACC_Fd_ErrBit_ASM = msg.ACC_Fd_ErrBit_ASM;
    }
    else {
      resolved.ACC_Fd_ErrBit_ASM = false
    }

    if (msg.ACC_Fd_VSpeed !== undefined) {
      resolved.ACC_Fd_VSpeed = msg.ACC_Fd_VSpeed;
    }
    else {
      resolved.ACC_Fd_VSpeed = 0
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

module.exports = ASM;
