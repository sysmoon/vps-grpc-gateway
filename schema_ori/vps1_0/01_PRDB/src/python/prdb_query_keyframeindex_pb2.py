# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: prdb_query_keyframeindex.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='prdb_query_keyframeindex.proto',
  package='prdb.keyframeindex',
  syntax='proto3',
  serialized_options=b'\n\tdbms.prdb',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1eprdb_query_keyframeindex.proto\x12\x12prdb.keyframeindex\"F\n\x0eKeyFrameIndexQ\x12\x18\n\x10u64KeyFrameIndex\x18\x01 \x03(\x04\x12\x1a\n\x12u8LocalFeatureFlag\x18\x02 \x01(\rB\x0b\n\tdbms.prdbb\x06proto3'
)




_KEYFRAMEINDEXQ = _descriptor.Descriptor(
  name='KeyFrameIndexQ',
  full_name='prdb.keyframeindex.KeyFrameIndexQ',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='u64KeyFrameIndex', full_name='prdb.keyframeindex.KeyFrameIndexQ.u64KeyFrameIndex', index=0,
      number=1, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u8LocalFeatureFlag', full_name='prdb.keyframeindex.KeyFrameIndexQ.u8LocalFeatureFlag', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=54,
  serialized_end=124,
)

DESCRIPTOR.message_types_by_name['KeyFrameIndexQ'] = _KEYFRAMEINDEXQ
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

KeyFrameIndexQ = _reflection.GeneratedProtocolMessageType('KeyFrameIndexQ', (_message.Message,), {
  'DESCRIPTOR' : _KEYFRAMEINDEXQ,
  '__module__' : 'prdb_query_keyframeindex_pb2'
  # @@protoc_insertion_point(class_scope:prdb.keyframeindex.KeyFrameIndexQ)
  })
_sym_db.RegisterMessage(KeyFrameIndexQ)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
