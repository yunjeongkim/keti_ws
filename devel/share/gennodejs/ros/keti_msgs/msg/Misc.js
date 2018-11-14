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

class Misc {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Switch_Plus = null;
      this.Switch_Minus = null;
      this.Switch_cancel = null;
      this.Switch_ACC = null;
      this.Accel_Pedal_Pushed = null;
      this.Brake_Pedal_Pushed = null;
      this.Mo_Fd_Alv_Cnt = null;
    }
    else {
      if (initObj.hasOwnProperty('Switch_Plus')) {
        this.Switch_Plus = initObj.Switch_Plus
      }
      else {
        this.Switch_Plus = false;
      }
      if (initObj.hasOwnProperty('Switch_Minus')) {
        this.Switch_Minus = initObj.Switch_Minus
      }
      else {
        this.Switch_Minus = false;
      }
      if (initObj.hasOwnProperty('Switch_cancel')) {
        this.Switch_cancel = initObj.Switch_cancel
      }
      else {
        this.Switch_cancel = false;
      }
      if (initObj.hasOwnProperty('Switch_ACC')) {
        this.Switch_ACC = initObj.Switch_ACC
      }
      else {
        this.Switch_ACC = false;
      }
      if (initObj.hasOwnProperty('Accel_Pedal_Pushed')) {
        this.Accel_Pedal_Pushed = initObj.Accel_Pedal_Pushed
      }
      else {
        this.Accel_Pedal_Pushed = false;
      }
      if (initObj.hasOwnProperty('Brake_Pedal_Pushed')) {
        this.Brake_Pedal_Pushed = initObj.Brake_Pedal_Pushed
      }
      else {
        this.Brake_Pedal_Pushed = false;
      }
      if (initObj.hasOwnProperty('Mo_Fd_Alv_Cnt')) {
        this.Mo_Fd_Alv_Cnt = initObj.Mo_Fd_Alv_Cnt
      }
      else {
        this.Mo_Fd_Alv_Cnt = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Misc
    // Serialize message field [Switch_Plus]
    bufferOffset = _serializer.bool(obj.Switch_Plus, buffer, bufferOffset);
    // Serialize message field [Switch_Minus]
    bufferOffset = _serializer.bool(obj.Switch_Minus, buffer, bufferOffset);
    // Serialize message field [Switch_cancel]
    bufferOffset = _serializer.bool(obj.Switch_cancel, buffer, bufferOffset);
    // Serialize message field [Switch_ACC]
    bufferOffset = _serializer.bool(obj.Switch_ACC, buffer, bufferOffset);
    // Serialize message field [Accel_Pedal_Pushed]
    bufferOffset = _serializer.bool(obj.Accel_Pedal_Pushed, buffer, bufferOffset);
    // Serialize message field [Brake_Pedal_Pushed]
    bufferOffset = _serializer.bool(obj.Brake_Pedal_Pushed, buffer, bufferOffset);
    // Serialize message field [Mo_Fd_Alv_Cnt]
    bufferOffset = _serializer.uint8(obj.Mo_Fd_Alv_Cnt, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Misc
    let len;
    let data = new Misc(null);
    // Deserialize message field [Switch_Plus]
    data.Switch_Plus = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Switch_Minus]
    data.Switch_Minus = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Switch_cancel]
    data.Switch_cancel = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Switch_ACC]
    data.Switch_ACC = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Accel_Pedal_Pushed]
    data.Accel_Pedal_Pushed = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Brake_Pedal_Pushed]
    data.Brake_Pedal_Pushed = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Mo_Fd_Alv_Cnt]
    data.Mo_Fd_Alv_Cnt = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 7;
  }

  static datatype() {
    // Returns string type for a message object
    return 'keti_msgs/Misc';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9a7483f16b1f4eff5a04bdcb10871411';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Messege that has a data related to vehicle's command from ECU
    bool Switch_Plus
    bool Switch_Minus
    bool Switch_cancel
    bool Switch_ACC
    bool Accel_Pedal_Pushed
    bool Brake_Pedal_Pushed
    uint8 Mo_Fd_Alv_Cnt
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Misc(null);
    if (msg.Switch_Plus !== undefined) {
      resolved.Switch_Plus = msg.Switch_Plus;
    }
    else {
      resolved.Switch_Plus = false
    }

    if (msg.Switch_Minus !== undefined) {
      resolved.Switch_Minus = msg.Switch_Minus;
    }
    else {
      resolved.Switch_Minus = false
    }

    if (msg.Switch_cancel !== undefined) {
      resolved.Switch_cancel = msg.Switch_cancel;
    }
    else {
      resolved.Switch_cancel = false
    }

    if (msg.Switch_ACC !== undefined) {
      resolved.Switch_ACC = msg.Switch_ACC;
    }
    else {
      resolved.Switch_ACC = false
    }

    if (msg.Accel_Pedal_Pushed !== undefined) {
      resolved.Accel_Pedal_Pushed = msg.Accel_Pedal_Pushed;
    }
    else {
      resolved.Accel_Pedal_Pushed = false
    }

    if (msg.Brake_Pedal_Pushed !== undefined) {
      resolved.Brake_Pedal_Pushed = msg.Brake_Pedal_Pushed;
    }
    else {
      resolved.Brake_Pedal_Pushed = false
    }

    if (msg.Mo_Fd_Alv_Cnt !== undefined) {
      resolved.Mo_Fd_Alv_Cnt = msg.Mo_Fd_Alv_Cnt;
    }
    else {
      resolved.Mo_Fd_Alv_Cnt = 0
    }

    return resolved;
    }
};

module.exports = Misc;
