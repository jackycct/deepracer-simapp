// Auto-generated. Do not edit!

// (in-package deepracer_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetVisualVisibleRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.link_name = null;
      this.visual_name = null;
      this.visible = null;
      this.block = null;
    }
    else {
      if (initObj.hasOwnProperty('link_name')) {
        this.link_name = initObj.link_name
      }
      else {
        this.link_name = '';
      }
      if (initObj.hasOwnProperty('visual_name')) {
        this.visual_name = initObj.visual_name
      }
      else {
        this.visual_name = '';
      }
      if (initObj.hasOwnProperty('visible')) {
        this.visible = initObj.visible
      }
      else {
        this.visible = false;
      }
      if (initObj.hasOwnProperty('block')) {
        this.block = initObj.block
      }
      else {
        this.block = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetVisualVisibleRequest
    // Serialize message field [link_name]
    bufferOffset = _serializer.string(obj.link_name, buffer, bufferOffset);
    // Serialize message field [visual_name]
    bufferOffset = _serializer.string(obj.visual_name, buffer, bufferOffset);
    // Serialize message field [visible]
    bufferOffset = _serializer.bool(obj.visible, buffer, bufferOffset);
    // Serialize message field [block]
    bufferOffset = _serializer.bool(obj.block, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetVisualVisibleRequest
    let len;
    let data = new SetVisualVisibleRequest(null);
    // Deserialize message field [link_name]
    data.link_name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [visual_name]
    data.visual_name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [visible]
    data.visible = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [block]
    data.block = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.link_name.length;
    length += object.visual_name.length;
    return length + 10;
  }

  static datatype() {
    // Returns string type for a service object
    return 'deepracer_msgs/SetVisualVisibleRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd93faa2da1676999e4228e6094b3f85f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string link_name
    string visual_name
    bool visible
    bool block
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetVisualVisibleRequest(null);
    if (msg.link_name !== undefined) {
      resolved.link_name = msg.link_name;
    }
    else {
      resolved.link_name = ''
    }

    if (msg.visual_name !== undefined) {
      resolved.visual_name = msg.visual_name;
    }
    else {
      resolved.visual_name = ''
    }

    if (msg.visible !== undefined) {
      resolved.visible = msg.visible;
    }
    else {
      resolved.visible = false
    }

    if (msg.block !== undefined) {
      resolved.block = msg.block;
    }
    else {
      resolved.block = false
    }

    return resolved;
    }
};

class SetVisualVisibleResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
      this.status_message = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
      if (initObj.hasOwnProperty('status_message')) {
        this.status_message = initObj.status_message
      }
      else {
        this.status_message = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetVisualVisibleResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [status_message]
    bufferOffset = _serializer.string(obj.status_message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetVisualVisibleResponse
    let len;
    let data = new SetVisualVisibleResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [status_message]
    data.status_message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.status_message.length;
    return length + 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'deepracer_msgs/SetVisualVisibleResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2ec6f3eff0161f4257b808b12bc830c2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    string status_message
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetVisualVisibleResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    if (msg.status_message !== undefined) {
      resolved.status_message = msg.status_message;
    }
    else {
      resolved.status_message = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: SetVisualVisibleRequest,
  Response: SetVisualVisibleResponse,
  md5sum() { return '91b990c22664a5d31142982439721968'; },
  datatype() { return 'deepracer_msgs/SetVisualVisible'; }
};
