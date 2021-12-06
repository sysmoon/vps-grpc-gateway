# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: PoseEstimation.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import placevector_pb2 as placevector__pb2
import localfeature_pb2 as localfeature__pb2
import vp_msg_pb2 as vp__msg__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='PoseEstimation.proto',
  package='vlam.pe',
  syntax='proto3',
  serialized_options=b'\n\023vlam.poseestimation',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x14PoseEstimation.proto\x12\x07vlam.pe\x1a\x11placevector.proto\x1a\x12localfeature.proto\x1a\x0cvp_msg.proto\"\xa6\x01\n\x10PoseEstimationIn\x12&\n\x0estVPSensorData\x18\x01 \x01(\x0b\x32\x0e.vpdata.VPData\x12\x33\n\x13\x61rstPlaceVectorList\x18\x0b \x01(\x0b\x32\x16.VgeoDB.PlaceVectorSet\x12\x35\n\x14\x61rstLocalFeatureList\x18\x0c \x01(\x0b\x32\x17.VgeoDB.LocalFeatureSetB\x15\n\x13vlam.poseestimationb\x06proto3'
  ,
  dependencies=[placevector__pb2.DESCRIPTOR,localfeature__pb2.DESCRIPTOR,vp__msg__pb2.DESCRIPTOR,])




_POSEESTIMATIONIN = _descriptor.Descriptor(
  name='PoseEstimationIn',
  full_name='vlam.pe.PoseEstimationIn',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stVPSensorData', full_name='vlam.pe.PoseEstimationIn.stVPSensorData', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arstPlaceVectorList', full_name='vlam.pe.PoseEstimationIn.arstPlaceVectorList', index=1,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arstLocalFeatureList', full_name='vlam.pe.PoseEstimationIn.arstLocalFeatureList', index=2,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=87,
  serialized_end=253,
)

_POSEESTIMATIONIN.fields_by_name['stVPSensorData'].message_type = vp__msg__pb2._VPDATA
_POSEESTIMATIONIN.fields_by_name['arstPlaceVectorList'].message_type = placevector__pb2._PLACEVECTORSET
_POSEESTIMATIONIN.fields_by_name['arstLocalFeatureList'].message_type = localfeature__pb2._LOCALFEATURESET
DESCRIPTOR.message_types_by_name['PoseEstimationIn'] = _POSEESTIMATIONIN
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PoseEstimationIn = _reflection.GeneratedProtocolMessageType('PoseEstimationIn', (_message.Message,), {
  'DESCRIPTOR' : _POSEESTIMATIONIN,
  '__module__' : 'PoseEstimation_pb2'
  # @@protoc_insertion_point(class_scope:vlam.pe.PoseEstimationIn)
  })
_sym_db.RegisterMessage(PoseEstimationIn)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)