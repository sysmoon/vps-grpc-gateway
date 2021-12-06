# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: lfsppdb_return_keyframeindex.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import prdb_meta_pb2 as prdb__meta__pb2
import lfsppdb_pb2 as lfsppdb__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='lfsppdb_return_keyframeindex.proto',
  package='lfsppdb.keyframeindex',
  syntax='proto3',
  serialized_options=b'\n\014dbms.lfsppdb',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\"lfsppdb_return_keyframeindex.proto\x12\x15lfsppdb.keyframeindex\x1a\x0fprdb_meta.proto\x1a\rlfsppdb.proto\"\x85\x01\n\x06\x44\x61ta_t\x12\x1f\n\x17u64QueriedKeyFrameIndex\x18\x01 \x01(\x04\x12/\n\x13stReferenceLocation\x18\x02 \x01(\x0b\x32\x12.prdb.meta.XYZ64_t\x12)\n\x0c\x61rstKeyPoint\x18\x03 \x03(\x0b\x32\x13.lfsppdb.KeyPoint_t\"?\n\x0eKeyFrameIndexR\x12-\n\x06stData\x18\x01 \x03(\x0b\x32\x1d.lfsppdb.keyframeindex.Data_tB\x0e\n\x0c\x64\x62ms.lfsppdbb\x06proto3'
  ,
  dependencies=[prdb__meta__pb2.DESCRIPTOR,lfsppdb__pb2.DESCRIPTOR,])




_DATA_T = _descriptor.Descriptor(
  name='Data_t',
  full_name='lfsppdb.keyframeindex.Data_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='u64QueriedKeyFrameIndex', full_name='lfsppdb.keyframeindex.Data_t.u64QueriedKeyFrameIndex', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stReferenceLocation', full_name='lfsppdb.keyframeindex.Data_t.stReferenceLocation', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arstKeyPoint', full_name='lfsppdb.keyframeindex.Data_t.arstKeyPoint', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=94,
  serialized_end=227,
)


_KEYFRAMEINDEXR = _descriptor.Descriptor(
  name='KeyFrameIndexR',
  full_name='lfsppdb.keyframeindex.KeyFrameIndexR',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stData', full_name='lfsppdb.keyframeindex.KeyFrameIndexR.stData', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=229,
  serialized_end=292,
)

_DATA_T.fields_by_name['stReferenceLocation'].message_type = prdb__meta__pb2._XYZ64_T
_DATA_T.fields_by_name['arstKeyPoint'].message_type = lfsppdb__pb2._KEYPOINT_T
_KEYFRAMEINDEXR.fields_by_name['stData'].message_type = _DATA_T
DESCRIPTOR.message_types_by_name['Data_t'] = _DATA_T
DESCRIPTOR.message_types_by_name['KeyFrameIndexR'] = _KEYFRAMEINDEXR
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Data_t = _reflection.GeneratedProtocolMessageType('Data_t', (_message.Message,), {
  'DESCRIPTOR' : _DATA_T,
  '__module__' : 'lfsppdb_return_keyframeindex_pb2'
  # @@protoc_insertion_point(class_scope:lfsppdb.keyframeindex.Data_t)
  })
_sym_db.RegisterMessage(Data_t)

KeyFrameIndexR = _reflection.GeneratedProtocolMessageType('KeyFrameIndexR', (_message.Message,), {
  'DESCRIPTOR' : _KEYFRAMEINDEXR,
  '__module__' : 'lfsppdb_return_keyframeindex_pb2'
  # @@protoc_insertion_point(class_scope:lfsppdb.keyframeindex.KeyFrameIndexR)
  })
_sym_db.RegisterMessage(KeyFrameIndexR)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
