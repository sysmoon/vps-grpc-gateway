# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: vp_tracking.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='vp_tracking.proto',
  package='vp.tracking',
  syntax='proto3',
  serialized_options=b'\n\023msgmanager.protobufZ@github.com/sysmoon/vps-grpc-gateway/schema/SensorData/src/golang',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x11vp_tracking.proto\x12\x0bvp.tracking\"n\n\x06Pose_t\x12\x0c\n\x04\x66\x36\x34X\x18\x01 \x01(\x01\x12\x0c\n\x04\x66\x36\x34Y\x18\x02 \x01(\x01\x12\x0c\n\x04\x66\x36\x34Z\x18\x03 \x01(\x01\x12\r\n\x05\x66\x33\x32qX\x18\x04 \x01(\x02\x12\r\n\x05\x66\x33\x32qY\x18\x05 \x01(\x02\x12\r\n\x05\x66\x33\x32qZ\x18\x06 \x01(\x02\x12\r\n\x05\x66\x33\x32qW\x18\x07 \x01(\x02\"u\n\nPoseInfo_t\x12\x14\n\x0cu64Timestamp\x18\x01 \x01(\x04\x12\x11\n\tbPoseFlag\x18\x02 \x01(\x08\x12\x19\n\x11\x66\x33\x32PoseConfidence\x18\x03 \x01(\x02\x12#\n\x06stPose\x18\x04 \x01(\x0b\x32\x13.vp.tracking.Pose_t\"\xb1\x01\n\x0f\x46ramePoseInfo_t\x12.\n\rstVPSPoseInfo\x18\x01 \x01(\x0b\x32\x17.vp.tracking.PoseInfo_t\x12\x36\n\x15stLastDRPoseInfoArray\x18\x02 \x03(\x0b\x32\x17.vp.tracking.PoseInfo_t\x12\x36\n\x15stLastEGPoseInfoArray\x18\x03 \x03(\x0b\x32\x17.vp.tracking.PoseInfo_t\"9\n\x0eKalmanFilter_t\x12\x10\n\x08\x66\x36\x34State\x18\x01 \x03(\x01\x12\x15\n\rf32Covariance\x18\x02 \x03(\x02\"h\n\x07Param_t\x12\x0f\n\x07strName\x18\x01 \x01(\t\x12\x0e\n\x06s32Val\x18\x02 \x01(\x05\x12\x0e\n\x06\x66\x33\x32Val\x18\x03 \x01(\x02\x12\x0e\n\x06\x66\x36\x34Val\x18\x04 \x01(\x01\x12\x0e\n\x06strVal\x18\x05 \x01(\t\x12\x0c\n\x04\x62Val\x18\x06 \x01(\x08\"\x9e\x02\n\x12MetaTrackingMode_t\x12@\n\x15\x65VPStatusTrackingMode\x18\x01 \x01(\x0e\x32!.vp.tracking.VPStatusTrackingMode\x12.\n\rstVPSPoseInfo\x18\x02 \x01(\x0b\x32\x17.vp.tracking.PoseInfo_t\x12+\n\x0estCorrectingTr\x18\x03 \x01(\x0b\x32\x13.vp.tracking.Pose_t\x12\x37\n\x12stLinearVelocityKF\x18\x04 \x01(\x0b\x32\x1b.vp.tracking.KalmanFilter_t\x12\x30\n\x0bstVPSPoseKF\x18\x05 \x01(\x0b\x32\x1b.vp.tracking.KalmanFilter_t*p\n\x14VPStatusTrackingMode\x12\t\n\x05\x65LOST\x10\x00\x12\x10\n\x0c\x65INITIALIZED\x10\x01\x12\x0e\n\neLOCALIZED\x10\x02\x12\x0c\n\x08\x65TRACKED\x10\x03\x12\x0c\n\x08\x65\x43OSTING\x10\x04\x12\x0f\n\x0b\x65TRANSITION\x10\x05\x42W\n\x13msgmanager.protobufZ@github.com/sysmoon/vps-grpc-gateway/schema/SensorData/src/golangb\x06proto3'
)

_VPSTATUSTRACKINGMODE = _descriptor.EnumDescriptor(
  name='VPStatusTrackingMode',
  full_name='vp.tracking.VPStatusTrackingMode',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='eLOST', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='eINITIALIZED', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='eLOCALIZED', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='eTRACKED', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='eCOSTING', index=4, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='eTRANSITION', index=5, number=5,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=899,
  serialized_end=1011,
)
_sym_db.RegisterEnumDescriptor(_VPSTATUSTRACKINGMODE)

VPStatusTrackingMode = enum_type_wrapper.EnumTypeWrapper(_VPSTATUSTRACKINGMODE)
eLOST = 0
eINITIALIZED = 1
eLOCALIZED = 2
eTRACKED = 3
eCOSTING = 4
eTRANSITION = 5



_POSE_T = _descriptor.Descriptor(
  name='Pose_t',
  full_name='vp.tracking.Pose_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='f64X', full_name='vp.tracking.Pose_t.f64X', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f64Y', full_name='vp.tracking.Pose_t.f64Y', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f64Z', full_name='vp.tracking.Pose_t.f64Z', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32qX', full_name='vp.tracking.Pose_t.f32qX', index=3,
      number=4, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32qY', full_name='vp.tracking.Pose_t.f32qY', index=4,
      number=5, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32qZ', full_name='vp.tracking.Pose_t.f32qZ', index=5,
      number=6, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32qW', full_name='vp.tracking.Pose_t.f32qW', index=6,
      number=7, type=2, cpp_type=6, label=1,
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
  serialized_start=34,
  serialized_end=144,
)


_POSEINFO_T = _descriptor.Descriptor(
  name='PoseInfo_t',
  full_name='vp.tracking.PoseInfo_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='u64Timestamp', full_name='vp.tracking.PoseInfo_t.u64Timestamp', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='bPoseFlag', full_name='vp.tracking.PoseInfo_t.bPoseFlag', index=1,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32PoseConfidence', full_name='vp.tracking.PoseInfo_t.f32PoseConfidence', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stPose', full_name='vp.tracking.PoseInfo_t.stPose', index=3,
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
  serialized_start=146,
  serialized_end=263,
)


_FRAMEPOSEINFO_T = _descriptor.Descriptor(
  name='FramePoseInfo_t',
  full_name='vp.tracking.FramePoseInfo_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stVPSPoseInfo', full_name='vp.tracking.FramePoseInfo_t.stVPSPoseInfo', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stLastDRPoseInfoArray', full_name='vp.tracking.FramePoseInfo_t.stLastDRPoseInfoArray', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stLastEGPoseInfoArray', full_name='vp.tracking.FramePoseInfo_t.stLastEGPoseInfoArray', index=2,
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
  serialized_start=266,
  serialized_end=443,
)


_KALMANFILTER_T = _descriptor.Descriptor(
  name='KalmanFilter_t',
  full_name='vp.tracking.KalmanFilter_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='f64State', full_name='vp.tracking.KalmanFilter_t.f64State', index=0,
      number=1, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32Covariance', full_name='vp.tracking.KalmanFilter_t.f32Covariance', index=1,
      number=2, type=2, cpp_type=6, label=3,
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
  serialized_start=445,
  serialized_end=502,
)


_PARAM_T = _descriptor.Descriptor(
  name='Param_t',
  full_name='vp.tracking.Param_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='strName', full_name='vp.tracking.Param_t.strName', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='s32Val', full_name='vp.tracking.Param_t.s32Val', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f32Val', full_name='vp.tracking.Param_t.f32Val', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='f64Val', full_name='vp.tracking.Param_t.f64Val', index=3,
      number=4, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='strVal', full_name='vp.tracking.Param_t.strVal', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='bVal', full_name='vp.tracking.Param_t.bVal', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=504,
  serialized_end=608,
)


_METATRACKINGMODE_T = _descriptor.Descriptor(
  name='MetaTrackingMode_t',
  full_name='vp.tracking.MetaTrackingMode_t',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='eVPStatusTrackingMode', full_name='vp.tracking.MetaTrackingMode_t.eVPStatusTrackingMode', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stVPSPoseInfo', full_name='vp.tracking.MetaTrackingMode_t.stVPSPoseInfo', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stCorrectingTr', full_name='vp.tracking.MetaTrackingMode_t.stCorrectingTr', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stLinearVelocityKF', full_name='vp.tracking.MetaTrackingMode_t.stLinearVelocityKF', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stVPSPoseKF', full_name='vp.tracking.MetaTrackingMode_t.stVPSPoseKF', index=4,
      number=5, type=11, cpp_type=10, label=1,
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
  serialized_start=611,
  serialized_end=897,
)

_POSEINFO_T.fields_by_name['stPose'].message_type = _POSE_T
_FRAMEPOSEINFO_T.fields_by_name['stVPSPoseInfo'].message_type = _POSEINFO_T
_FRAMEPOSEINFO_T.fields_by_name['stLastDRPoseInfoArray'].message_type = _POSEINFO_T
_FRAMEPOSEINFO_T.fields_by_name['stLastEGPoseInfoArray'].message_type = _POSEINFO_T
_METATRACKINGMODE_T.fields_by_name['eVPStatusTrackingMode'].enum_type = _VPSTATUSTRACKINGMODE
_METATRACKINGMODE_T.fields_by_name['stVPSPoseInfo'].message_type = _POSEINFO_T
_METATRACKINGMODE_T.fields_by_name['stCorrectingTr'].message_type = _POSE_T
_METATRACKINGMODE_T.fields_by_name['stLinearVelocityKF'].message_type = _KALMANFILTER_T
_METATRACKINGMODE_T.fields_by_name['stVPSPoseKF'].message_type = _KALMANFILTER_T
DESCRIPTOR.message_types_by_name['Pose_t'] = _POSE_T
DESCRIPTOR.message_types_by_name['PoseInfo_t'] = _POSEINFO_T
DESCRIPTOR.message_types_by_name['FramePoseInfo_t'] = _FRAMEPOSEINFO_T
DESCRIPTOR.message_types_by_name['KalmanFilter_t'] = _KALMANFILTER_T
DESCRIPTOR.message_types_by_name['Param_t'] = _PARAM_T
DESCRIPTOR.message_types_by_name['MetaTrackingMode_t'] = _METATRACKINGMODE_T
DESCRIPTOR.enum_types_by_name['VPStatusTrackingMode'] = _VPSTATUSTRACKINGMODE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Pose_t = _reflection.GeneratedProtocolMessageType('Pose_t', (_message.Message,), {
  'DESCRIPTOR' : _POSE_T,
  '__module__' : 'vp_tracking_pb2'
  # @@protoc_insertion_point(class_scope:vp.tracking.Pose_t)
  })
_sym_db.RegisterMessage(Pose_t)

PoseInfo_t = _reflection.GeneratedProtocolMessageType('PoseInfo_t', (_message.Message,), {
  'DESCRIPTOR' : _POSEINFO_T,
  '__module__' : 'vp_tracking_pb2'
  # @@protoc_insertion_point(class_scope:vp.tracking.PoseInfo_t)
  })
_sym_db.RegisterMessage(PoseInfo_t)

FramePoseInfo_t = _reflection.GeneratedProtocolMessageType('FramePoseInfo_t', (_message.Message,), {
  'DESCRIPTOR' : _FRAMEPOSEINFO_T,
  '__module__' : 'vp_tracking_pb2'
  # @@protoc_insertion_point(class_scope:vp.tracking.FramePoseInfo_t)
  })
_sym_db.RegisterMessage(FramePoseInfo_t)

KalmanFilter_t = _reflection.GeneratedProtocolMessageType('KalmanFilter_t', (_message.Message,), {
  'DESCRIPTOR' : _KALMANFILTER_T,
  '__module__' : 'vp_tracking_pb2'
  # @@protoc_insertion_point(class_scope:vp.tracking.KalmanFilter_t)
  })
_sym_db.RegisterMessage(KalmanFilter_t)

Param_t = _reflection.GeneratedProtocolMessageType('Param_t', (_message.Message,), {
  'DESCRIPTOR' : _PARAM_T,
  '__module__' : 'vp_tracking_pb2'
  # @@protoc_insertion_point(class_scope:vp.tracking.Param_t)
  })
_sym_db.RegisterMessage(Param_t)

MetaTrackingMode_t = _reflection.GeneratedProtocolMessageType('MetaTrackingMode_t', (_message.Message,), {
  'DESCRIPTOR' : _METATRACKINGMODE_T,
  '__module__' : 'vp_tracking_pb2'
  # @@protoc_insertion_point(class_scope:vp.tracking.MetaTrackingMode_t)
  })
_sym_db.RegisterMessage(MetaTrackingMode_t)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
