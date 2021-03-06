# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: localfeature.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import vgeodb_common_pb2 as vgeodb__common__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='localfeature.proto',
  package='VgeoDB',
  syntax='proto3',
  serialized_options=b'\n\023vgeodb.localfeatureB\004lfdb',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x12localfeature.proto\x12\x06VgeoDB\x1a\x13vgeodb_common.proto\"}\n\x10SuperPointDesc_t\x12\x19\n\rarfDescriptor\x18\x02 \x03(\x02\x42\x02\x10\x01\x12\x31\n\x05\x65Type\x18\x03 \x01(\x0e\x32\".VgeoDB.SuperPointDesc_t.eDescType\"\x1b\n\teDescType\x12\x0e\n\nSPP_512_v1\x10\x00\"r\n\nKP2DDesc_t\x12\x19\n\rarfDescriptor\x18\x02 \x03(\x02\x42\x02\x10\x01\x12+\n\x05\x65Type\x18\x03 \x01(\x0e\x32\x1c.VgeoDB.KP2DDesc_t.eDescType\"\x1c\n\teDescType\x12\x0f\n\x0bKP2D_256_v1\x10\x00\"~\n\x10LocalFeatureDesc\x12-\n\tstSPPDesc\x18\x03 \x01(\x0b\x32\x18.VgeoDB.SuperPointDesc_tH\x00\x12(\n\nstKP2DDesc\x18\x04 \x01(\x0b\x32\x12.VgeoDB.KP2DDesc_tH\x00\x42\x11\n\x0fuLocalFeature_t\"\x86\x01\n\x0fLocalFeatMeta_t\x12\x14\n\x0cun64UniqueID\x18\x01 \x01(\x04\x12\x19\n\x11un64KeyPointCount\x18\x02 \x01(\x04\x12\x13\n\x0bun64GroupID\x18\x03 \x01(\x04\x12-\n\rstRefLocation\x18\x04 \x01(\x0b\x32\x16.VgeoDB.common.XYZ64_t\"\xa0\x02\n\nKeyPoint_t\x12\x11\n\tun64Index\x18\x01 \x01(\x04\x12\x15\n\run64Timestamp\x18\x02 \x01(\x04\x12*\n\nstLocation\x18\x03 \x01(\x0b\x32\x16.VgeoDB.common.XYZ32_t\x12-\n\x0buDescriptor\x18\x04 \x01(\x0b\x32\x18.VgeoDB.LocalFeatureDesc\x12\"\n\x16\x61run64KeyframeUniqueID\x18\x05 \x03(\x04\x42\x02\x10\x01\x12\x1f\n\x13\x61run64KeyframeIndex\x18\x06 \x03(\x04\x42\x02\x10\x01\x12\x33\n\x11\x61rstKeyPointImage\x18\x07 \x03(\x0b\x32\x18.VgeoDB.common.UVPoint_t\x12\x13\n\x0b\x66Similarity\x18\x0b \x01(\x02\"_\n\x0cLocalFeature\x12\'\n\x06stMeta\x18\x01 \x01(\x0b\x32\x17.VgeoDB.LocalFeatMeta_t\x12&\n\nstKeypoint\x18\x02 \x03(\x0b\x32\x12.VgeoDB.KeyPoint_t\"A\n\x0fLocalFeatureSet\x12.\n\x10\x61rstLocalFeature\x18\x01 \x03(\x0b\x32\x14.VgeoDB.LocalFeatureB\x1b\n\x13vgeodb.localfeatureB\x04lfdbb\x06proto3'
  ,
  dependencies=[vgeodb__common__pb2.DESCRIPTOR,])



_SUPERPOINTDESC_T_EDESCTYPE = _descriptor.EnumDescriptor(
  name='eDescType',
  full_name='VgeoDB.SuperPointDesc_t.eDescType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='SPP_512_v1', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=149,
  serialized_end=176,
)
_sym_db.RegisterEnumDescriptor(_SUPERPOINTDESC_T_EDESCTYPE)

_KP2DDESC_T_EDESCTYPE = _descriptor.EnumDescriptor(
  name='eDescType',
  full_name='VgeoDB.KP2DDesc_t.eDescType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='KP2D_256_v1', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=264,
  serialized_end=292,
)
_sym_db.RegisterEnumDescriptor(_KP2DDESC_T_EDESCTYPE)


_SUPERPOINTDESC_T = _descriptor.Descriptor(
  name='SuperPointDesc_t',
  full_name='VgeoDB.SuperPointDesc_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='arfDescriptor', full_name='VgeoDB.SuperPointDesc_t.arfDescriptor', index=0,
      number=2, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='eType', full_name='VgeoDB.SuperPointDesc_t.eType', index=1,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SUPERPOINTDESC_T_EDESCTYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=51,
  serialized_end=176,
)


_KP2DDESC_T = _descriptor.Descriptor(
  name='KP2DDesc_t',
  full_name='VgeoDB.KP2DDesc_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='arfDescriptor', full_name='VgeoDB.KP2DDesc_t.arfDescriptor', index=0,
      number=2, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='eType', full_name='VgeoDB.KP2DDesc_t.eType', index=1,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _KP2DDESC_T_EDESCTYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=178,
  serialized_end=292,
)


_LOCALFEATUREDESC = _descriptor.Descriptor(
  name='LocalFeatureDesc',
  full_name='VgeoDB.LocalFeatureDesc',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stSPPDesc', full_name='VgeoDB.LocalFeatureDesc.stSPPDesc', index=0,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stKP2DDesc', full_name='VgeoDB.LocalFeatureDesc.stKP2DDesc', index=1,
      number=4, type=11, cpp_type=10, label=1,
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
    _descriptor.OneofDescriptor(
      name='uLocalFeature_t', full_name='VgeoDB.LocalFeatureDesc.uLocalFeature_t',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=294,
  serialized_end=420,
)


_LOCALFEATMETA_T = _descriptor.Descriptor(
  name='LocalFeatMeta_t',
  full_name='VgeoDB.LocalFeatMeta_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='un64UniqueID', full_name='VgeoDB.LocalFeatMeta_t.un64UniqueID', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='un64KeyPointCount', full_name='VgeoDB.LocalFeatMeta_t.un64KeyPointCount', index=1,
      number=2, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='un64GroupID', full_name='VgeoDB.LocalFeatMeta_t.un64GroupID', index=2,
      number=3, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stRefLocation', full_name='VgeoDB.LocalFeatMeta_t.stRefLocation', index=3,
      number=4, type=11, cpp_type=10, label=1,
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
  serialized_start=423,
  serialized_end=557,
)


_KEYPOINT_T = _descriptor.Descriptor(
  name='KeyPoint_t',
  full_name='VgeoDB.KeyPoint_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='un64Index', full_name='VgeoDB.KeyPoint_t.un64Index', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='un64Timestamp', full_name='VgeoDB.KeyPoint_t.un64Timestamp', index=1,
      number=2, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stLocation', full_name='VgeoDB.KeyPoint_t.stLocation', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='uDescriptor', full_name='VgeoDB.KeyPoint_t.uDescriptor', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arun64KeyframeUniqueID', full_name='VgeoDB.KeyPoint_t.arun64KeyframeUniqueID', index=4,
      number=5, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arun64KeyframeIndex', full_name='VgeoDB.KeyPoint_t.arun64KeyframeIndex', index=5,
      number=6, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\020\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arstKeyPointImage', full_name='VgeoDB.KeyPoint_t.arstKeyPointImage', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='fSimilarity', full_name='VgeoDB.KeyPoint_t.fSimilarity', index=7,
      number=11, type=2, cpp_type=6, label=1,
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
  serialized_start=560,
  serialized_end=848,
)


_LOCALFEATURE = _descriptor.Descriptor(
  name='LocalFeature',
  full_name='VgeoDB.LocalFeature',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stMeta', full_name='VgeoDB.LocalFeature.stMeta', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stKeypoint', full_name='VgeoDB.LocalFeature.stKeypoint', index=1,
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
  serialized_start=850,
  serialized_end=945,
)


_LOCALFEATURESET = _descriptor.Descriptor(
  name='LocalFeatureSet',
  full_name='VgeoDB.LocalFeatureSet',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='arstLocalFeature', full_name='VgeoDB.LocalFeatureSet.arstLocalFeature', index=0,
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
  serialized_start=947,
  serialized_end=1012,
)

_SUPERPOINTDESC_T.fields_by_name['eType'].enum_type = _SUPERPOINTDESC_T_EDESCTYPE
_SUPERPOINTDESC_T_EDESCTYPE.containing_type = _SUPERPOINTDESC_T
_KP2DDESC_T.fields_by_name['eType'].enum_type = _KP2DDESC_T_EDESCTYPE
_KP2DDESC_T_EDESCTYPE.containing_type = _KP2DDESC_T
_LOCALFEATUREDESC.fields_by_name['stSPPDesc'].message_type = _SUPERPOINTDESC_T
_LOCALFEATUREDESC.fields_by_name['stKP2DDesc'].message_type = _KP2DDESC_T
_LOCALFEATUREDESC.oneofs_by_name['uLocalFeature_t'].fields.append(
  _LOCALFEATUREDESC.fields_by_name['stSPPDesc'])
_LOCALFEATUREDESC.fields_by_name['stSPPDesc'].containing_oneof = _LOCALFEATUREDESC.oneofs_by_name['uLocalFeature_t']
_LOCALFEATUREDESC.oneofs_by_name['uLocalFeature_t'].fields.append(
  _LOCALFEATUREDESC.fields_by_name['stKP2DDesc'])
_LOCALFEATUREDESC.fields_by_name['stKP2DDesc'].containing_oneof = _LOCALFEATUREDESC.oneofs_by_name['uLocalFeature_t']
_LOCALFEATMETA_T.fields_by_name['stRefLocation'].message_type = vgeodb__common__pb2._XYZ64_T
_KEYPOINT_T.fields_by_name['stLocation'].message_type = vgeodb__common__pb2._XYZ32_T
_KEYPOINT_T.fields_by_name['uDescriptor'].message_type = _LOCALFEATUREDESC
_KEYPOINT_T.fields_by_name['arstKeyPointImage'].message_type = vgeodb__common__pb2._UVPOINT_T
_LOCALFEATURE.fields_by_name['stMeta'].message_type = _LOCALFEATMETA_T
_LOCALFEATURE.fields_by_name['stKeypoint'].message_type = _KEYPOINT_T
_LOCALFEATURESET.fields_by_name['arstLocalFeature'].message_type = _LOCALFEATURE
DESCRIPTOR.message_types_by_name['SuperPointDesc_t'] = _SUPERPOINTDESC_T
DESCRIPTOR.message_types_by_name['KP2DDesc_t'] = _KP2DDESC_T
DESCRIPTOR.message_types_by_name['LocalFeatureDesc'] = _LOCALFEATUREDESC
DESCRIPTOR.message_types_by_name['LocalFeatMeta_t'] = _LOCALFEATMETA_T
DESCRIPTOR.message_types_by_name['KeyPoint_t'] = _KEYPOINT_T
DESCRIPTOR.message_types_by_name['LocalFeature'] = _LOCALFEATURE
DESCRIPTOR.message_types_by_name['LocalFeatureSet'] = _LOCALFEATURESET
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SuperPointDesc_t = _reflection.GeneratedProtocolMessageType('SuperPointDesc_t', (_message.Message,), {
  'DESCRIPTOR' : _SUPERPOINTDESC_T,
  '__module__' : 'localfeature_pb2'
  # @@protoc_insertion_point(class_scope:VgeoDB.SuperPointDesc_t)
  })
_sym_db.RegisterMessage(SuperPointDesc_t)

KP2DDesc_t = _reflection.GeneratedProtocolMessageType('KP2DDesc_t', (_message.Message,), {
  'DESCRIPTOR' : _KP2DDESC_T,
  '__module__' : 'localfeature_pb2'
  # @@protoc_insertion_point(class_scope:VgeoDB.KP2DDesc_t)
  })
_sym_db.RegisterMessage(KP2DDesc_t)

LocalFeatureDesc = _reflection.GeneratedProtocolMessageType('LocalFeatureDesc', (_message.Message,), {
  'DESCRIPTOR' : _LOCALFEATUREDESC,
  '__module__' : 'localfeature_pb2'
  # @@protoc_insertion_point(class_scope:VgeoDB.LocalFeatureDesc)
  })
_sym_db.RegisterMessage(LocalFeatureDesc)

LocalFeatMeta_t = _reflection.GeneratedProtocolMessageType('LocalFeatMeta_t', (_message.Message,), {
  'DESCRIPTOR' : _LOCALFEATMETA_T,
  '__module__' : 'localfeature_pb2'
  # @@protoc_insertion_point(class_scope:VgeoDB.LocalFeatMeta_t)
  })
_sym_db.RegisterMessage(LocalFeatMeta_t)

KeyPoint_t = _reflection.GeneratedProtocolMessageType('KeyPoint_t', (_message.Message,), {
  'DESCRIPTOR' : _KEYPOINT_T,
  '__module__' : 'localfeature_pb2'
  # @@protoc_insertion_point(class_scope:VgeoDB.KeyPoint_t)
  })
_sym_db.RegisterMessage(KeyPoint_t)

LocalFeature = _reflection.GeneratedProtocolMessageType('LocalFeature', (_message.Message,), {
  'DESCRIPTOR' : _LOCALFEATURE,
  '__module__' : 'localfeature_pb2'
  # @@protoc_insertion_point(class_scope:VgeoDB.LocalFeature)
  })
_sym_db.RegisterMessage(LocalFeature)

LocalFeatureSet = _reflection.GeneratedProtocolMessageType('LocalFeatureSet', (_message.Message,), {
  'DESCRIPTOR' : _LOCALFEATURESET,
  '__module__' : 'localfeature_pb2'
  # @@protoc_insertion_point(class_scope:VgeoDB.LocalFeatureSet)
  })
_sym_db.RegisterMessage(LocalFeatureSet)


DESCRIPTOR._options = None
_SUPERPOINTDESC_T.fields_by_name['arfDescriptor']._options = None
_KP2DDESC_T.fields_by_name['arfDescriptor']._options = None
_KEYPOINT_T.fields_by_name['arun64KeyframeUniqueID']._options = None
_KEYPOINT_T.fields_by_name['arun64KeyframeIndex']._options = None
# @@protoc_insertion_point(module_scope)
