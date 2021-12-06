# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: prdb_return_location.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import prdb_meta_pb2 as prdb__meta__pb2
import prdb_return_placevector_pb2 as prdb__return__placevector__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='prdb_return_location.proto',
  package='prdb.location',
  syntax='proto3',
  serialized_options=b'\n\tdbms.prdb',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1aprdb_return_location.proto\x12\rprdb.location\x1a\x0fprdb_meta.proto\x1a\x1dprdb_return_placevector.proto\"o\n\x06\x44\x61ta_t\x12-\n\x11stQueriedLocation\x18\x01 \x01(\x0b\x32\x12.prdb.meta.XYZ64_t\x12\x36\n\x14stSortedLocationData\x18\x02 \x03(\x0b\x32\x18.prdb.placevector.Data_t\"2\n\tLocationR\x12%\n\x06stData\x18\x01 \x03(\x0b\x32\x15.prdb.location.Data_tB\x0b\n\tdbms.prdbb\x06proto3'
  ,
  dependencies=[prdb__meta__pb2.DESCRIPTOR,prdb__return__placevector__pb2.DESCRIPTOR,])




_DATA_T = _descriptor.Descriptor(
  name='Data_t',
  full_name='prdb.location.Data_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stQueriedLocation', full_name='prdb.location.Data_t.stQueriedLocation', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stSortedLocationData', full_name='prdb.location.Data_t.stSortedLocationData', index=1,
      number=2, type=11, cpp_type=10, label=3,
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
  serialized_start=93,
  serialized_end=204,
)


_LOCATIONR = _descriptor.Descriptor(
  name='LocationR',
  full_name='prdb.location.LocationR',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stData', full_name='prdb.location.LocationR.stData', index=0,
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
  serialized_start=206,
  serialized_end=256,
)

_DATA_T.fields_by_name['stQueriedLocation'].message_type = prdb__meta__pb2._XYZ64_T
_DATA_T.fields_by_name['stSortedLocationData'].message_type = prdb__return__placevector__pb2._DATA_T
_LOCATIONR.fields_by_name['stData'].message_type = _DATA_T
DESCRIPTOR.message_types_by_name['Data_t'] = _DATA_T
DESCRIPTOR.message_types_by_name['LocationR'] = _LOCATIONR
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Data_t = _reflection.GeneratedProtocolMessageType('Data_t', (_message.Message,), {
  'DESCRIPTOR' : _DATA_T,
  '__module__' : 'prdb_return_location_pb2'
  # @@protoc_insertion_point(class_scope:prdb.location.Data_t)
  })
_sym_db.RegisterMessage(Data_t)

LocationR = _reflection.GeneratedProtocolMessageType('LocationR', (_message.Message,), {
  'DESCRIPTOR' : _LOCATIONR,
  '__module__' : 'prdb_return_location_pb2'
  # @@protoc_insertion_point(class_scope:prdb.location.LocationR)
  })
_sym_db.RegisterMessage(LocationR)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)