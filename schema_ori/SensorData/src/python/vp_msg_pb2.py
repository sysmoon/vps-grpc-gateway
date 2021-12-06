# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: vp_msg.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import vp_state_pb2 as vp__state__pb2
import vp_camera_pb2 as vp__camera__pb2
import vp_sensors_pb2 as vp__sensors__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='vp_msg.proto',
  package='vpdata',
  syntax='proto3',
  serialized_options=b'\n\023msgmanager.protobufZ@github.com/sysmoon/vps-grpc-gateway/schema/SensorData/src/golang',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x0cvp_msg.proto\x12\x06vpdata\x1a\x0evp_state.proto\x1a\x0fvp_camera.proto\x1a\x10vp_sensors.proto\"\xce\x01\n\x08VPHeader\x12\x14\n\x0cstrSchemaVer\x18\x01 \x01(\t\x12\x15\n\rstrDeviceName\x18\x02 \x01(\t\x12\x11\n\tstrOSInfo\x18\x03 \x01(\t\x12\x15\n\rars32TelcoPCI\x18\x04 \x03(\x05\x12\x14\n\x0cs32TelcoRSSI\x18\x05 \x01(\x05\x12\x11\n\tu64TSSend\x18\x06 \x01(\x04\x12\x14\n\x0c\x61rf64LastLoc\x18\x07 \x03(\x01\x12\x16\n\x0e\x61rf32Extrinsic\x18\x08 \x03(\x02\x12\x14\n\x0cstrTargetEnv\x18\t \x01(\t\"\xb7\x06\n\x06VPBody\x12(\n\x07stState\x18\x01 \x01(\x0b\x32\x17.vpdata.state.VPState_t\x12)\n\x08stCamera\x18\x02 \x01(\x0b\x32\x17.vpdata.camera.Camera_t\x12$\n\x05stGPS\x18\x03 \x03(\x0b\x32\x15.vpdata.sensors.GPS_t\x12$\n\x05stIMU\x18\x04 \x03(\x0b\x32\x15.vpdata.sensors.IMU_t\x12\x30\n\x0bstBaroMeter\x18\x05 \x03(\x0b\x32\x1b.vpdata.sensors.Barometer_t\x12\x35\n\x11stMagneticCompass\x18\x06 \x03(\x0b\x32\x1a.vpdata.sensors.MCompass_t\x12<\n\x11stGPSLocationInfo\x18\x07 \x03(\x0b\x32!.vpdata.sensors.GPSLocationInfo_t\x12@\n\x13stAccelerometerInfo\x18\x08 \x03(\x0b\x32#.vpdata.sensors.AccelerometerInfo_t\x12\x38\n\x0fstGyroscopeInfo\x18\t \x03(\x0b\x32\x1f.vpdata.sensors.GyroscopeInfo_t\x12\x42\n\x14stRotationVectorInfo\x18\n \x03(\x0b\x32$.vpdata.sensors.RotationVectorInfo_t\x12<\n\x11stStepCounterInfo\x18\x0b \x03(\x0b\x32!.vpdata.sensors.StepCounterInfo_t\x12>\n\x12stStepDetectorInfo\x18\x0c \x03(\x0b\x32\".vpdata.sensors.StepDetectorInfo_t\x12@\n\x13stMagneticFieldInfo\x18\r \x03(\x0b\x32#.vpdata.sensors.MagneticFieldInfo_t\x12\x36\n\x0estPressureInfo\x18\x0e \x03(\x0b\x32\x1e.vpdata.sensors.PressureInfo_t\x12-\n\x0cstSubCameras\x18\x15 \x03(\x0b\x32\x17.vpdata.camera.Camera_t\"P\n\x06VPData\x12$\n\nstVPHeader\x18\x01 \x01(\x0b\x32\x10.vpdata.VPHeader\x12 \n\x08stVPBody\x18\x02 \x01(\x0b\x32\x0e.vpdata.VPBodyBW\n\x13msgmanager.protobufZ@github.com/sysmoon/vps-grpc-gateway/schema/SensorData/src/golangb\x06proto3'
  ,
  dependencies=[vp__state__pb2.DESCRIPTOR,vp__camera__pb2.DESCRIPTOR,vp__sensors__pb2.DESCRIPTOR,])




_VPHEADER = _descriptor.Descriptor(
  name='VPHeader',
  full_name='vpdata.VPHeader',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='strSchemaVer', full_name='vpdata.VPHeader.strSchemaVer', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='strDeviceName', full_name='vpdata.VPHeader.strDeviceName', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='strOSInfo', full_name='vpdata.VPHeader.strOSInfo', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='ars32TelcoPCI', full_name='vpdata.VPHeader.ars32TelcoPCI', index=3,
      number=4, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='s32TelcoRSSI', full_name='vpdata.VPHeader.s32TelcoRSSI', index=4,
      number=5, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='u64TSSend', full_name='vpdata.VPHeader.u64TSSend', index=5,
      number=6, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arf64LastLoc', full_name='vpdata.VPHeader.arf64LastLoc', index=6,
      number=7, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='arf32Extrinsic', full_name='vpdata.VPHeader.arf32Extrinsic', index=7,
      number=8, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='strTargetEnv', full_name='vpdata.VPHeader.strTargetEnv', index=8,
      number=9, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
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
  serialized_start=76,
  serialized_end=282,
)


_VPBODY = _descriptor.Descriptor(
  name='VPBody',
  full_name='vpdata.VPBody',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stState', full_name='vpdata.VPBody.stState', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stCamera', full_name='vpdata.VPBody.stCamera', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stGPS', full_name='vpdata.VPBody.stGPS', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stIMU', full_name='vpdata.VPBody.stIMU', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stBaroMeter', full_name='vpdata.VPBody.stBaroMeter', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stMagneticCompass', full_name='vpdata.VPBody.stMagneticCompass', index=5,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stGPSLocationInfo', full_name='vpdata.VPBody.stGPSLocationInfo', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stAccelerometerInfo', full_name='vpdata.VPBody.stAccelerometerInfo', index=7,
      number=8, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stGyroscopeInfo', full_name='vpdata.VPBody.stGyroscopeInfo', index=8,
      number=9, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stRotationVectorInfo', full_name='vpdata.VPBody.stRotationVectorInfo', index=9,
      number=10, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stStepCounterInfo', full_name='vpdata.VPBody.stStepCounterInfo', index=10,
      number=11, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stStepDetectorInfo', full_name='vpdata.VPBody.stStepDetectorInfo', index=11,
      number=12, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stMagneticFieldInfo', full_name='vpdata.VPBody.stMagneticFieldInfo', index=12,
      number=13, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stPressureInfo', full_name='vpdata.VPBody.stPressureInfo', index=13,
      number=14, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stSubCameras', full_name='vpdata.VPBody.stSubCameras', index=14,
      number=21, type=11, cpp_type=10, label=3,
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
  serialized_start=285,
  serialized_end=1108,
)


_VPDATA = _descriptor.Descriptor(
  name='VPData',
  full_name='vpdata.VPData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='stVPHeader', full_name='vpdata.VPData.stVPHeader', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='stVPBody', full_name='vpdata.VPData.stVPBody', index=1,
      number=2, type=11, cpp_type=10, label=1,
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
  serialized_start=1110,
  serialized_end=1190,
)

_VPBODY.fields_by_name['stState'].message_type = vp__state__pb2._VPSTATE_T
_VPBODY.fields_by_name['stCamera'].message_type = vp__camera__pb2._CAMERA_T
_VPBODY.fields_by_name['stGPS'].message_type = vp__sensors__pb2._GPS_T
_VPBODY.fields_by_name['stIMU'].message_type = vp__sensors__pb2._IMU_T
_VPBODY.fields_by_name['stBaroMeter'].message_type = vp__sensors__pb2._BAROMETER_T
_VPBODY.fields_by_name['stMagneticCompass'].message_type = vp__sensors__pb2._MCOMPASS_T
_VPBODY.fields_by_name['stGPSLocationInfo'].message_type = vp__sensors__pb2._GPSLOCATIONINFO_T
_VPBODY.fields_by_name['stAccelerometerInfo'].message_type = vp__sensors__pb2._ACCELEROMETERINFO_T
_VPBODY.fields_by_name['stGyroscopeInfo'].message_type = vp__sensors__pb2._GYROSCOPEINFO_T
_VPBODY.fields_by_name['stRotationVectorInfo'].message_type = vp__sensors__pb2._ROTATIONVECTORINFO_T
_VPBODY.fields_by_name['stStepCounterInfo'].message_type = vp__sensors__pb2._STEPCOUNTERINFO_T
_VPBODY.fields_by_name['stStepDetectorInfo'].message_type = vp__sensors__pb2._STEPDETECTORINFO_T
_VPBODY.fields_by_name['stMagneticFieldInfo'].message_type = vp__sensors__pb2._MAGNETICFIELDINFO_T
_VPBODY.fields_by_name['stPressureInfo'].message_type = vp__sensors__pb2._PRESSUREINFO_T
_VPBODY.fields_by_name['stSubCameras'].message_type = vp__camera__pb2._CAMERA_T
_VPDATA.fields_by_name['stVPHeader'].message_type = _VPHEADER
_VPDATA.fields_by_name['stVPBody'].message_type = _VPBODY
DESCRIPTOR.message_types_by_name['VPHeader'] = _VPHEADER
DESCRIPTOR.message_types_by_name['VPBody'] = _VPBODY
DESCRIPTOR.message_types_by_name['VPData'] = _VPDATA
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

VPHeader = _reflection.GeneratedProtocolMessageType('VPHeader', (_message.Message,), {
  'DESCRIPTOR' : _VPHEADER,
  '__module__' : 'vp_msg_pb2'
  # @@protoc_insertion_point(class_scope:vpdata.VPHeader)
  })
_sym_db.RegisterMessage(VPHeader)

VPBody = _reflection.GeneratedProtocolMessageType('VPBody', (_message.Message,), {
  'DESCRIPTOR' : _VPBODY,
  '__module__' : 'vp_msg_pb2'
  # @@protoc_insertion_point(class_scope:vpdata.VPBody)
  })
_sym_db.RegisterMessage(VPBody)

VPData = _reflection.GeneratedProtocolMessageType('VPData', (_message.Message,), {
  'DESCRIPTOR' : _VPDATA,
  '__module__' : 'vp_msg_pb2'
  # @@protoc_insertion_point(class_scope:vpdata.VPData)
  })
_sym_db.RegisterMessage(VPData)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
