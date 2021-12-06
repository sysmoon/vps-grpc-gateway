# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: lfsppdb_query_localfeature.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import lfsppdb_pb2 as lfsppdb__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='lfsppdb_query_localfeature.proto',
  package='lfsppdb.localfeature',
  syntax='proto3',
  serialized_options=b'\n\014dbms.lfsppdb',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n lfsppdb_query_localfeature.proto\x12\x14lfsppdb.localfeature\x1a\rlfsppdb.proto\"\xae\x01\n\rLocalFeatureQ\x12\x18\n\x10u64KeyFrameIndex\x18\x01 \x03(\x04\x12 \n\x18u8NumofMatchedK4KeyPoint\x18\x02 \x01(\r\x12+\n\x0e\x61rstKeyPointIn\x18\x03 \x03(\x0b\x32\x13.lfsppdb.KeyPoint_t\x12\x16\n\x0eu8DistanceType\x18\x04 \x01(\r\x12\x1c\n\x14\x66\x33\x32\x44istanceThreshold\x18\x05 \x01(\x02\x42\x0e\n\x0c\x64\x62ms.lfsppdbb\x06proto3'
  ,
  dependencies=[lfsppdb__pb2.DESCRIPTOR,])




_LOCALFEATUREQ = _descriptor.Descriptor(
  name='LocalFeatureQ',
  full_name='lfsppdb.localfeature.LocalFeatureQ',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='u64KeyFrameIndex', full_name='lfsppdb.localfeature.LocalFeatureQ.u64KeyFrameIndex', index=0,
      number=1, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u8NumofMatchedK4KeyPoint', full_name='lfsppdb.localfeature.LocalFeatureQ.u8NumofMatchedK4KeyPoint', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arstKeyPointIn', full_name='lfsppdb.localfeature.LocalFeatureQ.arstKeyPointIn', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u8DistanceType', full_name='lfsppdb.localfeature.LocalFeatureQ.u8DistanceType', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32DistanceThreshold', full_name='lfsppdb.localfeature.LocalFeatureQ.f32DistanceThreshold', index=4,
      number=5, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
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
  serialized_start=74,
  serialized_end=248,
)

_LOCALFEATUREQ.fields_by_name['arstKeyPointIn'].message_type = lfsppdb__pb2._KEYPOINT_T
DESCRIPTOR.message_types_by_name['LocalFeatureQ'] = _LOCALFEATUREQ
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

LocalFeatureQ = _reflection.GeneratedProtocolMessageType('LocalFeatureQ', (_message.Message,), {
  'DESCRIPTOR' : _LOCALFEATUREQ,
  '__module__' : 'lfsppdb_query_localfeature_pb2'
  # @@protoc_insertion_point(class_scope:lfsppdb.localfeature.LocalFeatureQ)
  })
_sym_db.RegisterMessage(LocalFeatureQ)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)