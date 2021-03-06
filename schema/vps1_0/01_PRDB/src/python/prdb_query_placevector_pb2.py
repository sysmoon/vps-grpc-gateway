# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: prdb_query_placevector.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import prdb_meta_pb2 as prdb__meta__pb2
import prdb_netvlad_pb2 as prdb__netvlad__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='prdb_query_placevector.proto',
  package='prdb.placevector',
  syntax='proto3',
  serialized_options=b'\n\tdbms.prdb',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1cprdb_query_placevector.proto\x12\x10prdb.placevector\x1a\x0fprdb_meta.proto\x1a\x12prdb_netvlad.proto\"\x9e\x02\n\x0cPlaceVectorQ\x12\x30\n\x0fstNetVLADVector\x18\x01 \x01(\x0b\x32\x17.prdb.netvlad.NetVLAD_t\x12\x15\n\ru8NearestMaxK\x18\x02 \x01(\r\x12\x16\n\x0eu8DistanceType\x18\x03 \x01(\r\x12\x1c\n\x14\x66\x33\x32\x44istanceThreshold\x18\x04 \x01(\x02\x12,\n\x10stSearchLocation\x18\x05 \x01(\x0b\x32\x12.prdb.meta.XYZ64_t\x12\x17\n\x0f\x66\x33\x32SearchRadius\x18\x06 \x01(\x02\x12-\n\x11stDirectionVector\x18\x07 \x01(\x0b\x32\x12.prdb.meta.XYZ32_t\x12\x19\n\x11\x66\x33\x32\x44irectionRange\x18\x08 \x01(\x02\x42\x0b\n\tdbms.prdbb\x06proto3'
  ,
  dependencies=[prdb__meta__pb2.DESCRIPTOR,prdb__netvlad__pb2.DESCRIPTOR,])




_PLACEVECTORQ = _descriptor.Descriptor(
  name='PlaceVectorQ',
  full_name='prdb.placevector.PlaceVectorQ',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stNetVLADVector', full_name='prdb.placevector.PlaceVectorQ.stNetVLADVector', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u8NearestMaxK', full_name='prdb.placevector.PlaceVectorQ.u8NearestMaxK', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u8DistanceType', full_name='prdb.placevector.PlaceVectorQ.u8DistanceType', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32DistanceThreshold', full_name='prdb.placevector.PlaceVectorQ.f32DistanceThreshold', index=3,
      number=4, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stSearchLocation', full_name='prdb.placevector.PlaceVectorQ.stSearchLocation', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32SearchRadius', full_name='prdb.placevector.PlaceVectorQ.f32SearchRadius', index=5,
      number=6, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stDirectionVector', full_name='prdb.placevector.PlaceVectorQ.stDirectionVector', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32DirectionRange', full_name='prdb.placevector.PlaceVectorQ.f32DirectionRange', index=7,
      number=8, type=2, cpp_type=6, label=1,
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
  serialized_start=88,
  serialized_end=374,
)

_PLACEVECTORQ.fields_by_name['stNetVLADVector'].message_type = prdb__netvlad__pb2._NETVLAD_T
_PLACEVECTORQ.fields_by_name['stSearchLocation'].message_type = prdb__meta__pb2._XYZ64_T
_PLACEVECTORQ.fields_by_name['stDirectionVector'].message_type = prdb__meta__pb2._XYZ32_T
DESCRIPTOR.message_types_by_name['PlaceVectorQ'] = _PLACEVECTORQ
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PlaceVectorQ = _reflection.GeneratedProtocolMessageType('PlaceVectorQ', (_message.Message,), {
  'DESCRIPTOR' : _PLACEVECTORQ,
  '__module__' : 'prdb_query_placevector_pb2'
  # @@protoc_insertion_point(class_scope:prdb.placevector.PlaceVectorQ)
  })
_sym_db.RegisterMessage(PlaceVectorQ)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
