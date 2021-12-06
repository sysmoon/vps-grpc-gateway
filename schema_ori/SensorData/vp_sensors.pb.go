// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.27.1
// 	protoc        v3.17.3
// source: vp_sensors.proto

package SensorData

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type GPST struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64    `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	Arf32Pose    []float32 `protobuf:"fixed32,2,rep,packed,name=arf32Pose,proto3" json:"arf32Pose,omitempty"`
}

func (x *GPST) Reset() {
	*x = GPST{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GPST) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GPST) ProtoMessage() {}

func (x *GPST) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GPST.ProtoReflect.Descriptor instead.
func (*GPST) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{0}
}

func (x *GPST) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *GPST) GetArf32Pose() []float32 {
	if x != nil {
		return x.Arf32Pose
	}
	return nil
}

type IMUT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64    `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	Arf32Data    []float32 `protobuf:"fixed32,2,rep,packed,name=arf32Data,proto3" json:"arf32Data,omitempty"`
}

func (x *IMUT) Reset() {
	*x = IMUT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *IMUT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*IMUT) ProtoMessage() {}

func (x *IMUT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use IMUT.ProtoReflect.Descriptor instead.
func (*IMUT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{1}
}

func (x *IMUT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *IMUT) GetArf32Data() []float32 {
	if x != nil {
		return x.Arf32Data
	}
	return nil
}

type BarometerT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64    `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	Arf32Data    []float32 `protobuf:"fixed32,2,rep,packed,name=arf32Data,proto3" json:"arf32Data,omitempty"`
}

func (x *BarometerT) Reset() {
	*x = BarometerT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *BarometerT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*BarometerT) ProtoMessage() {}

func (x *BarometerT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use BarometerT.ProtoReflect.Descriptor instead.
func (*BarometerT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{2}
}

func (x *BarometerT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *BarometerT) GetArf32Data() []float32 {
	if x != nil {
		return x.Arf32Data
	}
	return nil
}

type MCompassT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64    `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	Arf32Data    []float32 `protobuf:"fixed32,2,rep,packed,name=arf32Data,proto3" json:"arf32Data,omitempty"`
}

func (x *MCompassT) Reset() {
	*x = MCompassT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *MCompassT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*MCompassT) ProtoMessage() {}

func (x *MCompassT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use MCompassT.ProtoReflect.Descriptor instead.
func (*MCompassT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{3}
}

func (x *MCompassT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *MCompassT) GetArf32Data() []float32 {
	if x != nil {
		return x.Arf32Data
	}
	return nil
}

type GPSLocationInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64  `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	F64Longitude float64 `protobuf:"fixed64,2,opt,name=f64Longitude,proto3" json:"f64Longitude,omitempty"`
	F64Latitude  float64 `protobuf:"fixed64,3,opt,name=f64Latitude,proto3" json:"f64Latitude,omitempty"`
	F64Altitude  float64 `protobuf:"fixed64,4,opt,name=f64Altitude,proto3" json:"f64Altitude,omitempty"`
}

func (x *GPSLocationInfoT) Reset() {
	*x = GPSLocationInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GPSLocationInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GPSLocationInfoT) ProtoMessage() {}

func (x *GPSLocationInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GPSLocationInfoT.ProtoReflect.Descriptor instead.
func (*GPSLocationInfoT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{4}
}

func (x *GPSLocationInfoT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *GPSLocationInfoT) GetF64Longitude() float64 {
	if x != nil {
		return x.F64Longitude
	}
	return 0
}

func (x *GPSLocationInfoT) GetF64Latitude() float64 {
	if x != nil {
		return x.F64Latitude
	}
	return 0
}

func (x *GPSLocationInfoT) GetF64Altitude() float64 {
	if x != nil {
		return x.F64Altitude
	}
	return 0
}

type AccelerometerInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64  `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	F32Ax        float32 `protobuf:"fixed32,2,opt,name=f32ax,proto3" json:"f32ax,omitempty"`
	F32Ay        float32 `protobuf:"fixed32,3,opt,name=f32ay,proto3" json:"f32ay,omitempty"`
	F32Az        float32 `protobuf:"fixed32,4,opt,name=f32az,proto3" json:"f32az,omitempty"`
}

func (x *AccelerometerInfoT) Reset() {
	*x = AccelerometerInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[5]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *AccelerometerInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*AccelerometerInfoT) ProtoMessage() {}

func (x *AccelerometerInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[5]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use AccelerometerInfoT.ProtoReflect.Descriptor instead.
func (*AccelerometerInfoT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{5}
}

func (x *AccelerometerInfoT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *AccelerometerInfoT) GetF32Ax() float32 {
	if x != nil {
		return x.F32Ax
	}
	return 0
}

func (x *AccelerometerInfoT) GetF32Ay() float32 {
	if x != nil {
		return x.F32Ay
	}
	return 0
}

func (x *AccelerometerInfoT) GetF32Az() float32 {
	if x != nil {
		return x.F32Az
	}
	return 0
}

type GyroscopeInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64  `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	F32Gx        float32 `protobuf:"fixed32,2,opt,name=f32gx,proto3" json:"f32gx,omitempty"`
	F32Gy        float32 `protobuf:"fixed32,3,opt,name=f32gy,proto3" json:"f32gy,omitempty"`
	F32Gz        float32 `protobuf:"fixed32,4,opt,name=f32gz,proto3" json:"f32gz,omitempty"`
}

func (x *GyroscopeInfoT) Reset() {
	*x = GyroscopeInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[6]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GyroscopeInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GyroscopeInfoT) ProtoMessage() {}

func (x *GyroscopeInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[6]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GyroscopeInfoT.ProtoReflect.Descriptor instead.
func (*GyroscopeInfoT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{6}
}

func (x *GyroscopeInfoT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *GyroscopeInfoT) GetF32Gx() float32 {
	if x != nil {
		return x.F32Gx
	}
	return 0
}

func (x *GyroscopeInfoT) GetF32Gy() float32 {
	if x != nil {
		return x.F32Gy
	}
	return 0
}

func (x *GyroscopeInfoT) GetF32Gz() float32 {
	if x != nil {
		return x.F32Gz
	}
	return 0
}

type RotationVectorInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64  `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	F32Qx        float32 `protobuf:"fixed32,2,opt,name=f32qx,proto3" json:"f32qx,omitempty"`
	F32Qy        float32 `protobuf:"fixed32,3,opt,name=f32qy,proto3" json:"f32qy,omitempty"`
	F32Qz        float32 `protobuf:"fixed32,4,opt,name=f32qz,proto3" json:"f32qz,omitempty"`
	F32Qw        float32 `protobuf:"fixed32,5,opt,name=f32qw,proto3" json:"f32qw,omitempty"`
}

func (x *RotationVectorInfoT) Reset() {
	*x = RotationVectorInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[7]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *RotationVectorInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*RotationVectorInfoT) ProtoMessage() {}

func (x *RotationVectorInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[7]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use RotationVectorInfoT.ProtoReflect.Descriptor instead.
func (*RotationVectorInfoT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{7}
}

func (x *RotationVectorInfoT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *RotationVectorInfoT) GetF32Qx() float32 {
	if x != nil {
		return x.F32Qx
	}
	return 0
}

func (x *RotationVectorInfoT) GetF32Qy() float32 {
	if x != nil {
		return x.F32Qy
	}
	return 0
}

func (x *RotationVectorInfoT) GetF32Qz() float32 {
	if x != nil {
		return x.F32Qz
	}
	return 0
}

func (x *RotationVectorInfoT) GetF32Qw() float32 {
	if x != nil {
		return x.F32Qw
	}
	return 0
}

type StepCounterInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture   uint64 `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	U32StepCounter uint32 `protobuf:"varint,2,opt,name=u32StepCounter,proto3" json:"u32StepCounter,omitempty"`
}

func (x *StepCounterInfoT) Reset() {
	*x = StepCounterInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[8]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *StepCounterInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*StepCounterInfoT) ProtoMessage() {}

func (x *StepCounterInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[8]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use StepCounterInfoT.ProtoReflect.Descriptor instead.
func (*StepCounterInfoT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{8}
}

func (x *StepCounterInfoT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *StepCounterInfoT) GetU32StepCounter() uint32 {
	if x != nil {
		return x.U32StepCounter
	}
	return 0
}

type StepDetectorInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture    uint64 `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	U32StepDetector bool   `protobuf:"varint,2,opt,name=u32StepDetector,proto3" json:"u32StepDetector,omitempty"`
}

func (x *StepDetectorInfoT) Reset() {
	*x = StepDetectorInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[9]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *StepDetectorInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*StepDetectorInfoT) ProtoMessage() {}

func (x *StepDetectorInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[9]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use StepDetectorInfoT.ProtoReflect.Descriptor instead.
func (*StepDetectorInfoT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{9}
}

func (x *StepDetectorInfoT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *StepDetectorInfoT) GetU32StepDetector() bool {
	if x != nil {
		return x.U32StepDetector
	}
	return false
}

type MagneticFieldInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64  `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	F32Mx        float32 `protobuf:"fixed32,2,opt,name=f32mx,proto3" json:"f32mx,omitempty"`
	F32My        float32 `protobuf:"fixed32,3,opt,name=f32my,proto3" json:"f32my,omitempty"`
	F32Mz        float32 `protobuf:"fixed32,4,opt,name=f32mz,proto3" json:"f32mz,omitempty"`
}

func (x *MagneticFieldInfoT) Reset() {
	*x = MagneticFieldInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[10]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *MagneticFieldInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*MagneticFieldInfoT) ProtoMessage() {}

func (x *MagneticFieldInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[10]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use MagneticFieldInfoT.ProtoReflect.Descriptor instead.
func (*MagneticFieldInfoT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{10}
}

func (x *MagneticFieldInfoT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *MagneticFieldInfoT) GetF32Mx() float32 {
	if x != nil {
		return x.F32Mx
	}
	return 0
}

func (x *MagneticFieldInfoT) GetF32My() float32 {
	if x != nil {
		return x.F32My
	}
	return 0
}

func (x *MagneticFieldInfoT) GetF32Mz() float32 {
	if x != nil {
		return x.F32Mz
	}
	return 0
}

type PressureInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64TSCapture uint64  `protobuf:"varint,1,opt,name=u64TSCapture,proto3" json:"u64TSCapture,omitempty"`
	F32Pressure  float32 `protobuf:"fixed32,2,opt,name=f32Pressure,proto3" json:"f32Pressure,omitempty"`
}

func (x *PressureInfoT) Reset() {
	*x = PressureInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_sensors_proto_msgTypes[11]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *PressureInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*PressureInfoT) ProtoMessage() {}

func (x *PressureInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_sensors_proto_msgTypes[11]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use PressureInfoT.ProtoReflect.Descriptor instead.
func (*PressureInfoT) Descriptor() ([]byte, []int) {
	return file_vp_sensors_proto_rawDescGZIP(), []int{11}
}

func (x *PressureInfoT) GetU64TSCapture() uint64 {
	if x != nil {
		return x.U64TSCapture
	}
	return 0
}

func (x *PressureInfoT) GetF32Pressure() float32 {
	if x != nil {
		return x.F32Pressure
	}
	return 0
}

var File_vp_sensors_proto protoreflect.FileDescriptor

var file_vp_sensors_proto_rawDesc = []byte{
	0x0a, 0x10, 0x76, 0x70, 0x5f, 0x73, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x73, 0x2e, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x12, 0x0e, 0x76, 0x70, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x73, 0x65, 0x6e, 0x73, 0x6f,
	0x72, 0x73, 0x22, 0x49, 0x0a, 0x05, 0x47, 0x50, 0x53, 0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75,
	0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28,
	0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12,
	0x1c, 0x0a, 0x09, 0x61, 0x72, 0x66, 0x33, 0x32, 0x50, 0x6f, 0x73, 0x65, 0x18, 0x02, 0x20, 0x03,
	0x28, 0x02, 0x52, 0x09, 0x61, 0x72, 0x66, 0x33, 0x32, 0x50, 0x6f, 0x73, 0x65, 0x22, 0x49, 0x0a,
	0x05, 0x49, 0x4d, 0x55, 0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43,
	0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x04, 0x52, 0x0c, 0x75, 0x36,
	0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12, 0x1c, 0x0a, 0x09, 0x61, 0x72,
	0x66, 0x33, 0x32, 0x44, 0x61, 0x74, 0x61, 0x18, 0x02, 0x20, 0x03, 0x28, 0x02, 0x52, 0x09, 0x61,
	0x72, 0x66, 0x33, 0x32, 0x44, 0x61, 0x74, 0x61, 0x22, 0x4f, 0x0a, 0x0b, 0x42, 0x61, 0x72, 0x6f,
	0x6d, 0x65, 0x74, 0x65, 0x72, 0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53,
	0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x04, 0x52, 0x0c, 0x75,
	0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12, 0x1c, 0x0a, 0x09, 0x61,
	0x72, 0x66, 0x33, 0x32, 0x44, 0x61, 0x74, 0x61, 0x18, 0x02, 0x20, 0x03, 0x28, 0x02, 0x52, 0x09,
	0x61, 0x72, 0x66, 0x33, 0x32, 0x44, 0x61, 0x74, 0x61, 0x22, 0x4e, 0x0a, 0x0a, 0x4d, 0x43, 0x6f,
	0x6d, 0x70, 0x61, 0x73, 0x73, 0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53,
	0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x04, 0x52, 0x0c, 0x75,
	0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12, 0x1c, 0x0a, 0x09, 0x61,
	0x72, 0x66, 0x33, 0x32, 0x44, 0x61, 0x74, 0x61, 0x18, 0x02, 0x20, 0x03, 0x28, 0x02, 0x52, 0x09,
	0x61, 0x72, 0x66, 0x33, 0x32, 0x44, 0x61, 0x74, 0x61, 0x22, 0x9f, 0x01, 0x0a, 0x11, 0x47, 0x50,
	0x53, 0x4c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x12,
	0x22, 0x0a, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18,
	0x01, 0x20, 0x01, 0x28, 0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74,
	0x75, 0x72, 0x65, 0x12, 0x22, 0x0a, 0x0c, 0x66, 0x36, 0x34, 0x4c, 0x6f, 0x6e, 0x67, 0x69, 0x74,
	0x75, 0x64, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x01, 0x52, 0x0c, 0x66, 0x36, 0x34, 0x4c, 0x6f,
	0x6e, 0x67, 0x69, 0x74, 0x75, 0x64, 0x65, 0x12, 0x20, 0x0a, 0x0b, 0x66, 0x36, 0x34, 0x4c, 0x61,
	0x74, 0x69, 0x74, 0x75, 0x64, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x01, 0x52, 0x0b, 0x66, 0x36,
	0x34, 0x4c, 0x61, 0x74, 0x69, 0x74, 0x75, 0x64, 0x65, 0x12, 0x20, 0x0a, 0x0b, 0x66, 0x36, 0x34,
	0x41, 0x6c, 0x74, 0x69, 0x74, 0x75, 0x64, 0x65, 0x18, 0x04, 0x20, 0x01, 0x28, 0x01, 0x52, 0x0b,
	0x66, 0x36, 0x34, 0x41, 0x6c, 0x74, 0x69, 0x74, 0x75, 0x64, 0x65, 0x22, 0x7b, 0x0a, 0x13, 0x41,
	0x63, 0x63, 0x65, 0x6c, 0x65, 0x72, 0x6f, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x49, 0x6e, 0x66, 0x6f,
	0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75,
	0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43,
	0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x61, 0x78, 0x18,
	0x02, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x61, 0x78, 0x12, 0x14, 0x0a, 0x05,
	0x66, 0x33, 0x32, 0x61, 0x79, 0x18, 0x03, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32,
	0x61, 0x79, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x61, 0x7a, 0x18, 0x04, 0x20, 0x01, 0x28,
	0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x61, 0x7a, 0x22, 0x77, 0x0a, 0x0f, 0x47, 0x79, 0x72, 0x6f,
	0x73, 0x63, 0x6f, 0x70, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75,
	0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28,
	0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12,
	0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x67, 0x78, 0x18, 0x02, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05,
	0x66, 0x33, 0x32, 0x67, 0x78, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x67, 0x79, 0x18, 0x03,
	0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x67, 0x79, 0x12, 0x14, 0x0a, 0x05, 0x66,
	0x33, 0x32, 0x67, 0x7a, 0x18, 0x04, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x67,
	0x7a, 0x22, 0x92, 0x01, 0x0a, 0x14, 0x52, 0x6f, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x56, 0x65,
	0x63, 0x74, 0x6f, 0x72, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75, 0x36,
	0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x04,
	0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12, 0x14,
	0x0a, 0x05, 0x66, 0x33, 0x32, 0x71, 0x78, 0x18, 0x02, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66,
	0x33, 0x32, 0x71, 0x78, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x71, 0x79, 0x18, 0x03, 0x20,
	0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x71, 0x79, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33,
	0x32, 0x71, 0x7a, 0x18, 0x04, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x71, 0x7a,
	0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x71, 0x77, 0x18, 0x05, 0x20, 0x01, 0x28, 0x02, 0x52,
	0x05, 0x66, 0x33, 0x32, 0x71, 0x77, 0x22, 0x5f, 0x0a, 0x11, 0x53, 0x74, 0x65, 0x70, 0x43, 0x6f,
	0x75, 0x6e, 0x74, 0x65, 0x72, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75,
	0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28,
	0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12,
	0x26, 0x0a, 0x0e, 0x75, 0x33, 0x32, 0x53, 0x74, 0x65, 0x70, 0x43, 0x6f, 0x75, 0x6e, 0x74, 0x65,
	0x72, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0d, 0x52, 0x0e, 0x75, 0x33, 0x32, 0x53, 0x74, 0x65, 0x70,
	0x43, 0x6f, 0x75, 0x6e, 0x74, 0x65, 0x72, 0x22, 0x62, 0x0a, 0x12, 0x53, 0x74, 0x65, 0x70, 0x44,
	0x65, 0x74, 0x65, 0x63, 0x74, 0x6f, 0x72, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x12, 0x22, 0x0a,
	0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20,
	0x01, 0x28, 0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72,
	0x65, 0x12, 0x28, 0x0a, 0x0f, 0x75, 0x33, 0x32, 0x53, 0x74, 0x65, 0x70, 0x44, 0x65, 0x74, 0x65,
	0x63, 0x74, 0x6f, 0x72, 0x18, 0x02, 0x20, 0x01, 0x28, 0x08, 0x52, 0x0f, 0x75, 0x33, 0x32, 0x53,
	0x74, 0x65, 0x70, 0x44, 0x65, 0x74, 0x65, 0x63, 0x74, 0x6f, 0x72, 0x22, 0x7b, 0x0a, 0x13, 0x4d,
	0x61, 0x67, 0x6e, 0x65, 0x74, 0x69, 0x63, 0x46, 0x69, 0x65, 0x6c, 0x64, 0x49, 0x6e, 0x66, 0x6f,
	0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75,
	0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43,
	0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x6d, 0x78, 0x18,
	0x02, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x6d, 0x78, 0x12, 0x14, 0x0a, 0x05,
	0x66, 0x33, 0x32, 0x6d, 0x79, 0x18, 0x03, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32,
	0x6d, 0x79, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x6d, 0x7a, 0x18, 0x04, 0x20, 0x01, 0x28,
	0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x6d, 0x7a, 0x22, 0x56, 0x0a, 0x0e, 0x50, 0x72, 0x65, 0x73,
	0x73, 0x75, 0x72, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x12, 0x22, 0x0a, 0x0c, 0x75, 0x36,
	0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x04,
	0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x43, 0x61, 0x70, 0x74, 0x75, 0x72, 0x65, 0x12, 0x20,
	0x0a, 0x0b, 0x66, 0x33, 0x32, 0x50, 0x72, 0x65, 0x73, 0x73, 0x75, 0x72, 0x65, 0x18, 0x02, 0x20,
	0x01, 0x28, 0x02, 0x52, 0x0b, 0x66, 0x33, 0x32, 0x50, 0x72, 0x65, 0x73, 0x73, 0x75, 0x72, 0x65,
	0x42, 0x4c, 0x0a, 0x13, 0x6d, 0x73, 0x67, 0x6d, 0x61, 0x6e, 0x61, 0x67, 0x65, 0x72, 0x2e, 0x70,
	0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x5a, 0x35, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e,
	0x63, 0x6f, 0x6d, 0x2f, 0x73, 0x79, 0x73, 0x6d, 0x6f, 0x6f, 0x6e, 0x2f, 0x76, 0x70, 0x73, 0x2d,
	0x67, 0x72, 0x70, 0x63, 0x2d, 0x67, 0x61, 0x74, 0x65, 0x77, 0x61, 0x79, 0x2f, 0x73, 0x63, 0x68,
	0x65, 0x6d, 0x61, 0x2f, 0x53, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x44, 0x61, 0x74, 0x61, 0x62, 0x06,
	0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_vp_sensors_proto_rawDescOnce sync.Once
	file_vp_sensors_proto_rawDescData = file_vp_sensors_proto_rawDesc
)

func file_vp_sensors_proto_rawDescGZIP() []byte {
	file_vp_sensors_proto_rawDescOnce.Do(func() {
		file_vp_sensors_proto_rawDescData = protoimpl.X.CompressGZIP(file_vp_sensors_proto_rawDescData)
	})
	return file_vp_sensors_proto_rawDescData
}

var file_vp_sensors_proto_msgTypes = make([]protoimpl.MessageInfo, 12)
var file_vp_sensors_proto_goTypes = []interface{}{
	(*GPST)(nil),                // 0: vpdata.sensors.GPS_t
	(*IMUT)(nil),                // 1: vpdata.sensors.IMU_t
	(*BarometerT)(nil),          // 2: vpdata.sensors.Barometer_t
	(*MCompassT)(nil),           // 3: vpdata.sensors.MCompass_t
	(*GPSLocationInfoT)(nil),    // 4: vpdata.sensors.GPSLocationInfo_t
	(*AccelerometerInfoT)(nil),  // 5: vpdata.sensors.AccelerometerInfo_t
	(*GyroscopeInfoT)(nil),      // 6: vpdata.sensors.GyroscopeInfo_t
	(*RotationVectorInfoT)(nil), // 7: vpdata.sensors.RotationVectorInfo_t
	(*StepCounterInfoT)(nil),    // 8: vpdata.sensors.StepCounterInfo_t
	(*StepDetectorInfoT)(nil),   // 9: vpdata.sensors.StepDetectorInfo_t
	(*MagneticFieldInfoT)(nil),  // 10: vpdata.sensors.MagneticFieldInfo_t
	(*PressureInfoT)(nil),       // 11: vpdata.sensors.PressureInfo_t
}
var file_vp_sensors_proto_depIdxs = []int32{
	0, // [0:0] is the sub-list for method output_type
	0, // [0:0] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_vp_sensors_proto_init() }
func file_vp_sensors_proto_init() {
	if File_vp_sensors_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_vp_sensors_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GPST); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*IMUT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*BarometerT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*MCompassT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GPSLocationInfoT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[5].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*AccelerometerInfoT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[6].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GyroscopeInfoT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[7].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*RotationVectorInfoT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[8].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*StepCounterInfoT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[9].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*StepDetectorInfoT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[10].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*MagneticFieldInfoT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vp_sensors_proto_msgTypes[11].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*PressureInfoT); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_vp_sensors_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   12,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_vp_sensors_proto_goTypes,
		DependencyIndexes: file_vp_sensors_proto_depIdxs,
		MessageInfos:      file_vp_sensors_proto_msgTypes,
	}.Build()
	File_vp_sensors_proto = out.File
	file_vp_sensors_proto_rawDesc = nil
	file_vp_sensors_proto_goTypes = nil
	file_vp_sensors_proto_depIdxs = nil
}
