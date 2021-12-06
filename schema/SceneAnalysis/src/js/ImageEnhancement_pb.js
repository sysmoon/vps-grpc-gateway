// source: ImageEnhancement.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {missingRequire} reports error on implicit type usages.
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!
/* eslint-disable */
// @ts-nocheck

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var vp_msg_pb = require('./vp_msg_pb.js');
goog.object.extend(proto, vp_msg_pb);
goog.exportSymbol('proto.vlam.sa.ImageEnhancementIn', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.vlam.sa.ImageEnhancementIn = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.vlam.sa.ImageEnhancementIn, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.vlam.sa.ImageEnhancementIn.displayName = 'proto.vlam.sa.ImageEnhancementIn';
}



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.vlam.sa.ImageEnhancementIn.prototype.toObject = function(opt_includeInstance) {
  return proto.vlam.sa.ImageEnhancementIn.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.vlam.sa.ImageEnhancementIn} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.vlam.sa.ImageEnhancementIn.toObject = function(includeInstance, msg) {
  var f, obj = {
    stvpsensordata: (f = msg.getStvpsensordata()) && vp_msg_pb.VPData.toObject(includeInstance, f)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.vlam.sa.ImageEnhancementIn}
 */
proto.vlam.sa.ImageEnhancementIn.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.vlam.sa.ImageEnhancementIn;
  return proto.vlam.sa.ImageEnhancementIn.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.vlam.sa.ImageEnhancementIn} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.vlam.sa.ImageEnhancementIn}
 */
proto.vlam.sa.ImageEnhancementIn.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new vp_msg_pb.VPData;
      reader.readMessage(value,vp_msg_pb.VPData.deserializeBinaryFromReader);
      msg.setStvpsensordata(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.vlam.sa.ImageEnhancementIn.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.vlam.sa.ImageEnhancementIn.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.vlam.sa.ImageEnhancementIn} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.vlam.sa.ImageEnhancementIn.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getStvpsensordata();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      vp_msg_pb.VPData.serializeBinaryToWriter
    );
  }
};


/**
 * optional vpdata.VPData stVPSensorData = 1;
 * @return {?proto.vpdata.VPData}
 */
proto.vlam.sa.ImageEnhancementIn.prototype.getStvpsensordata = function() {
  return /** @type{?proto.vpdata.VPData} */ (
    jspb.Message.getWrapperField(this, vp_msg_pb.VPData, 1));
};


/**
 * @param {?proto.vpdata.VPData|undefined} value
 * @return {!proto.vlam.sa.ImageEnhancementIn} returns this
*/
proto.vlam.sa.ImageEnhancementIn.prototype.setStvpsensordata = function(value) {
  return jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.vlam.sa.ImageEnhancementIn} returns this
 */
proto.vlam.sa.ImageEnhancementIn.prototype.clearStvpsensordata = function() {
  return this.setStvpsensordata(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.vlam.sa.ImageEnhancementIn.prototype.hasStvpsensordata = function() {
  return jspb.Message.getField(this, 1) != null;
};


goog.object.extend(exports, proto.vlam.sa);