// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.27.1
// 	protoc        v3.17.3
// source: vp_tracking.proto

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

type VPStatusTrackingMode int32

const (
	VPStatusTrackingMode_eLOST        VPStatusTrackingMode = 0
	VPStatusTrackingMode_eINITIALIZED VPStatusTrackingMode = 1
	VPStatusTrackingMode_eLOCALIZED   VPStatusTrackingMode = 2
	VPStatusTrackingMode_eTRACKED     VPStatusTrackingMode = 3
	VPStatusTrackingMode_eCOSTING     VPStatusTrackingMode = 4
	VPStatusTrackingMode_eTRANSITION  VPStatusTrackingMode = 5
)

// Enum value maps for VPStatusTrackingMode.
var (
	VPStatusTrackingMode_name = map[int32]string{
		0: "eLOST",
		1: "eINITIALIZED",
		2: "eLOCALIZED",
		3: "eTRACKED",
		4: "eCOSTING",
		5: "eTRANSITION",
	}
	VPStatusTrackingMode_value = map[string]int32{
		"eLOST":        0,
		"eINITIALIZED": 1,
		"eLOCALIZED":   2,
		"eTRACKED":     3,
		"eCOSTING":     4,
		"eTRANSITION":  5,
	}
)

func (x VPStatusTrackingMode) Enum() *VPStatusTrackingMode {
	p := new(VPStatusTrackingMode)
	*p = x
	return p
}

func (x VPStatusTrackingMode) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (VPStatusTrackingMode) Descriptor() protoreflect.EnumDescriptor {
	return file_vp_tracking_proto_enumTypes[0].Descriptor()
}

func (VPStatusTrackingMode) Type() protoreflect.EnumType {
	return &file_vp_tracking_proto_enumTypes[0]
}

func (x VPStatusTrackingMode) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use VPStatusTrackingMode.Descriptor instead.
func (VPStatusTrackingMode) EnumDescriptor() ([]byte, []int) {
	return file_vp_tracking_proto_rawDescGZIP(), []int{0}
}

type PoseT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	F64X  float64 `protobuf:"fixed64,1,opt,name=f64X,proto3" json:"f64X,omitempty"`
	F64Y  float64 `protobuf:"fixed64,2,opt,name=f64Y,proto3" json:"f64Y,omitempty"`
	F64Z  float64 `protobuf:"fixed64,3,opt,name=f64Z,proto3" json:"f64Z,omitempty"`
	F32QX float32 `protobuf:"fixed32,4,opt,name=f32qX,proto3" json:"f32qX,omitempty"`
	F32QY float32 `protobuf:"fixed32,5,opt,name=f32qY,proto3" json:"f32qY,omitempty"`
	F32QZ float32 `protobuf:"fixed32,6,opt,name=f32qZ,proto3" json:"f32qZ,omitempty"`
	F32QW float32 `protobuf:"fixed32,7,opt,name=f32qW,proto3" json:"f32qW,omitempty"`
}

func (x *PoseT) Reset() {
	*x = PoseT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_tracking_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *PoseT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*PoseT) ProtoMessage() {}

func (x *PoseT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_tracking_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use PoseT.ProtoReflect.Descriptor instead.
func (*PoseT) Descriptor() ([]byte, []int) {
	return file_vp_tracking_proto_rawDescGZIP(), []int{0}
}

func (x *PoseT) GetF64X() float64 {
	if x != nil {
		return x.F64X
	}
	return 0
}

func (x *PoseT) GetF64Y() float64 {
	if x != nil {
		return x.F64Y
	}
	return 0
}

func (x *PoseT) GetF64Z() float64 {
	if x != nil {
		return x.F64Z
	}
	return 0
}

func (x *PoseT) GetF32QX() float32 {
	if x != nil {
		return x.F32QX
	}
	return 0
}

func (x *PoseT) GetF32QY() float32 {
	if x != nil {
		return x.F32QY
	}
	return 0
}

func (x *PoseT) GetF32QZ() float32 {
	if x != nil {
		return x.F32QZ
	}
	return 0
}

func (x *PoseT) GetF32QW() float32 {
	if x != nil {
		return x.F32QW
	}
	return 0
}

type PoseInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	U64Timestamp      uint64  `protobuf:"varint,1,opt,name=u64Timestamp,proto3" json:"u64Timestamp,omitempty"`
	BPoseFlag         bool    `protobuf:"varint,2,opt,name=bPoseFlag,proto3" json:"bPoseFlag,omitempty"`
	F32PoseConfidence float32 `protobuf:"fixed32,3,opt,name=f32PoseConfidence,proto3" json:"f32PoseConfidence,omitempty"`
	StPose            *PoseT  `protobuf:"bytes,4,opt,name=stPose,proto3" json:"stPose,omitempty"`
}

func (x *PoseInfoT) Reset() {
	*x = PoseInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_tracking_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *PoseInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*PoseInfoT) ProtoMessage() {}

func (x *PoseInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_tracking_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use PoseInfoT.ProtoReflect.Descriptor instead.
func (*PoseInfoT) Descriptor() ([]byte, []int) {
	return file_vp_tracking_proto_rawDescGZIP(), []int{1}
}

func (x *PoseInfoT) GetU64Timestamp() uint64 {
	if x != nil {
		return x.U64Timestamp
	}
	return 0
}

func (x *PoseInfoT) GetBPoseFlag() bool {
	if x != nil {
		return x.BPoseFlag
	}
	return false
}

func (x *PoseInfoT) GetF32PoseConfidence() float32 {
	if x != nil {
		return x.F32PoseConfidence
	}
	return 0
}

func (x *PoseInfoT) GetStPose() *PoseT {
	if x != nil {
		return x.StPose
	}
	return nil
}

type FramePoseInfoT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	StVPSPoseInfo         *PoseInfoT   `protobuf:"bytes,1,opt,name=stVPSPoseInfo,proto3" json:"stVPSPoseInfo,omitempty"`
	StLastDRPoseInfoArray []*PoseInfoT `protobuf:"bytes,2,rep,name=stLastDRPoseInfoArray,proto3" json:"stLastDRPoseInfoArray,omitempty"`
	StLastEGPoseInfoArray []*PoseInfoT `protobuf:"bytes,3,rep,name=stLastEGPoseInfoArray,proto3" json:"stLastEGPoseInfoArray,omitempty"`
}

func (x *FramePoseInfoT) Reset() {
	*x = FramePoseInfoT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_tracking_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FramePoseInfoT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FramePoseInfoT) ProtoMessage() {}

func (x *FramePoseInfoT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_tracking_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FramePoseInfoT.ProtoReflect.Descriptor instead.
func (*FramePoseInfoT) Descriptor() ([]byte, []int) {
	return file_vp_tracking_proto_rawDescGZIP(), []int{2}
}

func (x *FramePoseInfoT) GetStVPSPoseInfo() *PoseInfoT {
	if x != nil {
		return x.StVPSPoseInfo
	}
	return nil
}

func (x *FramePoseInfoT) GetStLastDRPoseInfoArray() []*PoseInfoT {
	if x != nil {
		return x.StLastDRPoseInfoArray
	}
	return nil
}

func (x *FramePoseInfoT) GetStLastEGPoseInfoArray() []*PoseInfoT {
	if x != nil {
		return x.StLastEGPoseInfoArray
	}
	return nil
}

type KalmanFilterT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	F64State      []float64 `protobuf:"fixed64,1,rep,packed,name=f64State,proto3" json:"f64State,omitempty"`
	F32Covariance []float32 `protobuf:"fixed32,2,rep,packed,name=f32Covariance,proto3" json:"f32Covariance,omitempty"`
}

func (x *KalmanFilterT) Reset() {
	*x = KalmanFilterT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_tracking_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *KalmanFilterT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*KalmanFilterT) ProtoMessage() {}

func (x *KalmanFilterT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_tracking_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use KalmanFilterT.ProtoReflect.Descriptor instead.
func (*KalmanFilterT) Descriptor() ([]byte, []int) {
	return file_vp_tracking_proto_rawDescGZIP(), []int{3}
}

func (x *KalmanFilterT) GetF64State() []float64 {
	if x != nil {
		return x.F64State
	}
	return nil
}

func (x *KalmanFilterT) GetF32Covariance() []float32 {
	if x != nil {
		return x.F32Covariance
	}
	return nil
}

type ParamT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	StrName string  `protobuf:"bytes,1,opt,name=strName,proto3" json:"strName,omitempty"`
	S32Val  int32   `protobuf:"varint,2,opt,name=s32Val,proto3" json:"s32Val,omitempty"`
	F32Val  float32 `protobuf:"fixed32,3,opt,name=f32Val,proto3" json:"f32Val,omitempty"`
	F64Val  float64 `protobuf:"fixed64,4,opt,name=f64Val,proto3" json:"f64Val,omitempty"`
	StrVal  string  `protobuf:"bytes,5,opt,name=strVal,proto3" json:"strVal,omitempty"`
	BVal    bool    `protobuf:"varint,6,opt,name=bVal,proto3" json:"bVal,omitempty"`
}

func (x *ParamT) Reset() {
	*x = ParamT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_tracking_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ParamT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ParamT) ProtoMessage() {}

func (x *ParamT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_tracking_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ParamT.ProtoReflect.Descriptor instead.
func (*ParamT) Descriptor() ([]byte, []int) {
	return file_vp_tracking_proto_rawDescGZIP(), []int{4}
}

func (x *ParamT) GetStrName() string {
	if x != nil {
		return x.StrName
	}
	return ""
}

func (x *ParamT) GetS32Val() int32 {
	if x != nil {
		return x.S32Val
	}
	return 0
}

func (x *ParamT) GetF32Val() float32 {
	if x != nil {
		return x.F32Val
	}
	return 0
}

func (x *ParamT) GetF64Val() float64 {
	if x != nil {
		return x.F64Val
	}
	return 0
}

func (x *ParamT) GetStrVal() string {
	if x != nil {
		return x.StrVal
	}
	return ""
}

func (x *ParamT) GetBVal() bool {
	if x != nil {
		return x.BVal
	}
	return false
}

type MetaTrackingModeT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	EVPStatusTrackingMode VPStatusTrackingMode `protobuf:"varint,1,opt,name=eVPStatusTrackingMode,proto3,enum=vp.tracking.VPStatusTrackingMode" json:"eVPStatusTrackingMode,omitempty"`
	StVPSPoseInfo         *PoseInfoT           `protobuf:"bytes,2,opt,name=stVPSPoseInfo,proto3" json:"stVPSPoseInfo,omitempty"`
	StCorrectingTr        *PoseT               `protobuf:"bytes,3,opt,name=stCorrectingTr,proto3" json:"stCorrectingTr,omitempty"`
	StLinearVelocityKF    *KalmanFilterT       `protobuf:"bytes,4,opt,name=stLinearVelocityKF,proto3" json:"stLinearVelocityKF,omitempty"`
	StVPSPoseKF           *KalmanFilterT       `protobuf:"bytes,5,opt,name=stVPSPoseKF,proto3" json:"stVPSPoseKF,omitempty"`
}

func (x *MetaTrackingModeT) Reset() {
	*x = MetaTrackingModeT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_tracking_proto_msgTypes[5]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *MetaTrackingModeT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*MetaTrackingModeT) ProtoMessage() {}

func (x *MetaTrackingModeT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_tracking_proto_msgTypes[5]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use MetaTrackingModeT.ProtoReflect.Descriptor instead.
func (*MetaTrackingModeT) Descriptor() ([]byte, []int) {
	return file_vp_tracking_proto_rawDescGZIP(), []int{5}
}

func (x *MetaTrackingModeT) GetEVPStatusTrackingMode() VPStatusTrackingMode {
	if x != nil {
		return x.EVPStatusTrackingMode
	}
	return VPStatusTrackingMode_eLOST
}

func (x *MetaTrackingModeT) GetStVPSPoseInfo() *PoseInfoT {
	if x != nil {
		return x.StVPSPoseInfo
	}
	return nil
}

func (x *MetaTrackingModeT) GetStCorrectingTr() *PoseT {
	if x != nil {
		return x.StCorrectingTr
	}
	return nil
}

func (x *MetaTrackingModeT) GetStLinearVelocityKF() *KalmanFilterT {
	if x != nil {
		return x.StLinearVelocityKF
	}
	return nil
}

func (x *MetaTrackingModeT) GetStVPSPoseKF() *KalmanFilterT {
	if x != nil {
		return x.StVPSPoseKF
	}
	return nil
}

var File_vp_tracking_proto protoreflect.FileDescriptor

var file_vp_tracking_proto_rawDesc = []byte{
	0x0a, 0x11, 0x76, 0x70, 0x5f, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x70, 0x72,
	0x6f, 0x74, 0x6f, 0x12, 0x0b, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67,
	0x22, 0x9c, 0x01, 0x0a, 0x06, 0x50, 0x6f, 0x73, 0x65, 0x5f, 0x74, 0x12, 0x12, 0x0a, 0x04, 0x66,
	0x36, 0x34, 0x58, 0x18, 0x01, 0x20, 0x01, 0x28, 0x01, 0x52, 0x04, 0x66, 0x36, 0x34, 0x58, 0x12,
	0x12, 0x0a, 0x04, 0x66, 0x36, 0x34, 0x59, 0x18, 0x02, 0x20, 0x01, 0x28, 0x01, 0x52, 0x04, 0x66,
	0x36, 0x34, 0x59, 0x12, 0x12, 0x0a, 0x04, 0x66, 0x36, 0x34, 0x5a, 0x18, 0x03, 0x20, 0x01, 0x28,
	0x01, 0x52, 0x04, 0x66, 0x36, 0x34, 0x5a, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x71, 0x58,
	0x18, 0x04, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x71, 0x58, 0x12, 0x14, 0x0a,
	0x05, 0x66, 0x33, 0x32, 0x71, 0x59, 0x18, 0x05, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33,
	0x32, 0x71, 0x59, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32, 0x71, 0x5a, 0x18, 0x06, 0x20, 0x01,
	0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x71, 0x5a, 0x12, 0x14, 0x0a, 0x05, 0x66, 0x33, 0x32,
	0x71, 0x57, 0x18, 0x07, 0x20, 0x01, 0x28, 0x02, 0x52, 0x05, 0x66, 0x33, 0x32, 0x71, 0x57, 0x22,
	0xa9, 0x01, 0x0a, 0x0a, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x12, 0x22,
	0x0a, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61,
	0x6d, 0x70, 0x12, 0x1c, 0x0a, 0x09, 0x62, 0x50, 0x6f, 0x73, 0x65, 0x46, 0x6c, 0x61, 0x67, 0x18,
	0x02, 0x20, 0x01, 0x28, 0x08, 0x52, 0x09, 0x62, 0x50, 0x6f, 0x73, 0x65, 0x46, 0x6c, 0x61, 0x67,
	0x12, 0x2c, 0x0a, 0x11, 0x66, 0x33, 0x32, 0x50, 0x6f, 0x73, 0x65, 0x43, 0x6f, 0x6e, 0x66, 0x69,
	0x64, 0x65, 0x6e, 0x63, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x02, 0x52, 0x11, 0x66, 0x33, 0x32,
	0x50, 0x6f, 0x73, 0x65, 0x43, 0x6f, 0x6e, 0x66, 0x69, 0x64, 0x65, 0x6e, 0x63, 0x65, 0x12, 0x2b,
	0x0a, 0x06, 0x73, 0x74, 0x50, 0x6f, 0x73, 0x65, 0x18, 0x04, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x13,
	0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x50, 0x6f, 0x73,
	0x65, 0x5f, 0x74, 0x52, 0x06, 0x73, 0x74, 0x50, 0x6f, 0x73, 0x65, 0x22, 0xee, 0x01, 0x0a, 0x0f,
	0x46, 0x72, 0x61, 0x6d, 0x65, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x12,
	0x3d, 0x0a, 0x0d, 0x73, 0x74, 0x56, 0x50, 0x53, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f,
	0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x17, 0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63,
	0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x52,
	0x0d, 0x73, 0x74, 0x56, 0x50, 0x53, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x12, 0x4d,
	0x0a, 0x15, 0x73, 0x74, 0x4c, 0x61, 0x73, 0x74, 0x44, 0x52, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e,
	0x66, 0x6f, 0x41, 0x72, 0x72, 0x61, 0x79, 0x18, 0x02, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x17, 0x2e,
	0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x50, 0x6f, 0x73, 0x65,
	0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x52, 0x15, 0x73, 0x74, 0x4c, 0x61, 0x73, 0x74, 0x44, 0x52,
	0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x41, 0x72, 0x72, 0x61, 0x79, 0x12, 0x4d, 0x0a,
	0x15, 0x73, 0x74, 0x4c, 0x61, 0x73, 0x74, 0x45, 0x47, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66,
	0x6f, 0x41, 0x72, 0x72, 0x61, 0x79, 0x18, 0x03, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x17, 0x2e, 0x76,
	0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x50, 0x6f, 0x73, 0x65, 0x49,
	0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x52, 0x15, 0x73, 0x74, 0x4c, 0x61, 0x73, 0x74, 0x45, 0x47, 0x50,
	0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x41, 0x72, 0x72, 0x61, 0x79, 0x22, 0x52, 0x0a, 0x0e,
	0x4b, 0x61, 0x6c, 0x6d, 0x61, 0x6e, 0x46, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x5f, 0x74, 0x12, 0x1a,
	0x0a, 0x08, 0x66, 0x36, 0x34, 0x53, 0x74, 0x61, 0x74, 0x65, 0x18, 0x01, 0x20, 0x03, 0x28, 0x01,
	0x52, 0x08, 0x66, 0x36, 0x34, 0x53, 0x74, 0x61, 0x74, 0x65, 0x12, 0x24, 0x0a, 0x0d, 0x66, 0x33,
	0x32, 0x43, 0x6f, 0x76, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x18, 0x02, 0x20, 0x03, 0x28,
	0x02, 0x52, 0x0d, 0x66, 0x33, 0x32, 0x43, 0x6f, 0x76, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x63, 0x65,
	0x22, 0x97, 0x01, 0x0a, 0x07, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x5f, 0x74, 0x12, 0x18, 0x0a, 0x07,
	0x73, 0x74, 0x72, 0x4e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x07, 0x73,
	0x74, 0x72, 0x4e, 0x61, 0x6d, 0x65, 0x12, 0x16, 0x0a, 0x06, 0x73, 0x33, 0x32, 0x56, 0x61, 0x6c,
	0x18, 0x02, 0x20, 0x01, 0x28, 0x05, 0x52, 0x06, 0x73, 0x33, 0x32, 0x56, 0x61, 0x6c, 0x12, 0x16,
	0x0a, 0x06, 0x66, 0x33, 0x32, 0x56, 0x61, 0x6c, 0x18, 0x03, 0x20, 0x01, 0x28, 0x02, 0x52, 0x06,
	0x66, 0x33, 0x32, 0x56, 0x61, 0x6c, 0x12, 0x16, 0x0a, 0x06, 0x66, 0x36, 0x34, 0x56, 0x61, 0x6c,
	0x18, 0x04, 0x20, 0x01, 0x28, 0x01, 0x52, 0x06, 0x66, 0x36, 0x34, 0x56, 0x61, 0x6c, 0x12, 0x16,
	0x0a, 0x06, 0x73, 0x74, 0x72, 0x56, 0x61, 0x6c, 0x18, 0x05, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06,
	0x73, 0x74, 0x72, 0x56, 0x61, 0x6c, 0x12, 0x12, 0x0a, 0x04, 0x62, 0x56, 0x61, 0x6c, 0x18, 0x06,
	0x20, 0x01, 0x28, 0x08, 0x52, 0x04, 0x62, 0x56, 0x61, 0x6c, 0x22, 0xf5, 0x02, 0x0a, 0x12, 0x4d,
	0x65, 0x74, 0x61, 0x54, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x4d, 0x6f, 0x64, 0x65, 0x5f,
	0x74, 0x12, 0x57, 0x0a, 0x15, 0x65, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x54, 0x72,
	0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x4d, 0x6f, 0x64, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0e,
	0x32, 0x21, 0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x56,
	0x50, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x54, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x4d,
	0x6f, 0x64, 0x65, 0x52, 0x15, 0x65, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x54, 0x72,
	0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x4d, 0x6f, 0x64, 0x65, 0x12, 0x3d, 0x0a, 0x0d, 0x73, 0x74,
	0x56, 0x50, 0x53, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x18, 0x02, 0x20, 0x01, 0x28,
	0x0b, 0x32, 0x17, 0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e,
	0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x52, 0x0d, 0x73, 0x74, 0x56, 0x50,
	0x53, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x12, 0x3b, 0x0a, 0x0e, 0x73, 0x74, 0x43,
	0x6f, 0x72, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6e, 0x67, 0x54, 0x72, 0x18, 0x03, 0x20, 0x01, 0x28,
	0x0b, 0x32, 0x13, 0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e,
	0x50, 0x6f, 0x73, 0x65, 0x5f, 0x74, 0x52, 0x0e, 0x73, 0x74, 0x43, 0x6f, 0x72, 0x72, 0x65, 0x63,
	0x74, 0x69, 0x6e, 0x67, 0x54, 0x72, 0x12, 0x4b, 0x0a, 0x12, 0x73, 0x74, 0x4c, 0x69, 0x6e, 0x65,
	0x61, 0x72, 0x56, 0x65, 0x6c, 0x6f, 0x63, 0x69, 0x74, 0x79, 0x4b, 0x46, 0x18, 0x04, 0x20, 0x01,
	0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67,
	0x2e, 0x4b, 0x61, 0x6c, 0x6d, 0x61, 0x6e, 0x46, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x5f, 0x74, 0x52,
	0x12, 0x73, 0x74, 0x4c, 0x69, 0x6e, 0x65, 0x61, 0x72, 0x56, 0x65, 0x6c, 0x6f, 0x63, 0x69, 0x74,
	0x79, 0x4b, 0x46, 0x12, 0x3d, 0x0a, 0x0b, 0x73, 0x74, 0x56, 0x50, 0x53, 0x50, 0x6f, 0x73, 0x65,
	0x4b, 0x46, 0x18, 0x05, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72,
	0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x4b, 0x61, 0x6c, 0x6d, 0x61, 0x6e, 0x46, 0x69, 0x6c,
	0x74, 0x65, 0x72, 0x5f, 0x74, 0x52, 0x0b, 0x73, 0x74, 0x56, 0x50, 0x53, 0x50, 0x6f, 0x73, 0x65,
	0x4b, 0x46, 0x2a, 0x70, 0x0a, 0x14, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x54, 0x72,
	0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x4d, 0x6f, 0x64, 0x65, 0x12, 0x09, 0x0a, 0x05, 0x65, 0x4c,
	0x4f, 0x53, 0x54, 0x10, 0x00, 0x12, 0x10, 0x0a, 0x0c, 0x65, 0x49, 0x4e, 0x49, 0x54, 0x49, 0x41,
	0x4c, 0x49, 0x5a, 0x45, 0x44, 0x10, 0x01, 0x12, 0x0e, 0x0a, 0x0a, 0x65, 0x4c, 0x4f, 0x43, 0x41,
	0x4c, 0x49, 0x5a, 0x45, 0x44, 0x10, 0x02, 0x12, 0x0c, 0x0a, 0x08, 0x65, 0x54, 0x52, 0x41, 0x43,
	0x4b, 0x45, 0x44, 0x10, 0x03, 0x12, 0x0c, 0x0a, 0x08, 0x65, 0x43, 0x4f, 0x53, 0x54, 0x49, 0x4e,
	0x47, 0x10, 0x04, 0x12, 0x0f, 0x0a, 0x0b, 0x65, 0x54, 0x52, 0x41, 0x4e, 0x53, 0x49, 0x54, 0x49,
	0x4f, 0x4e, 0x10, 0x05, 0x42, 0x4c, 0x0a, 0x13, 0x6d, 0x73, 0x67, 0x6d, 0x61, 0x6e, 0x61, 0x67,
	0x65, 0x72, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x5a, 0x35, 0x67, 0x69, 0x74,
	0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x73, 0x79, 0x73, 0x6d, 0x6f, 0x6f, 0x6e, 0x2f,
	0x76, 0x70, 0x73, 0x2d, 0x67, 0x72, 0x70, 0x63, 0x2d, 0x67, 0x61, 0x74, 0x65, 0x77, 0x61, 0x79,
	0x2f, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x61, 0x2f, 0x53, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x44, 0x61,
	0x74, 0x61, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_vp_tracking_proto_rawDescOnce sync.Once
	file_vp_tracking_proto_rawDescData = file_vp_tracking_proto_rawDesc
)

func file_vp_tracking_proto_rawDescGZIP() []byte {
	file_vp_tracking_proto_rawDescOnce.Do(func() {
		file_vp_tracking_proto_rawDescData = protoimpl.X.CompressGZIP(file_vp_tracking_proto_rawDescData)
	})
	return file_vp_tracking_proto_rawDescData
}

var file_vp_tracking_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_vp_tracking_proto_msgTypes = make([]protoimpl.MessageInfo, 6)
var file_vp_tracking_proto_goTypes = []interface{}{
	(VPStatusTrackingMode)(0), // 0: vp.tracking.VPStatusTrackingMode
	(*PoseT)(nil),             // 1: vp.tracking.Pose_t
	(*PoseInfoT)(nil),         // 2: vp.tracking.PoseInfo_t
	(*FramePoseInfoT)(nil),    // 3: vp.tracking.FramePoseInfo_t
	(*KalmanFilterT)(nil),     // 4: vp.tracking.KalmanFilter_t
	(*ParamT)(nil),            // 5: vp.tracking.Param_t
	(*MetaTrackingModeT)(nil), // 6: vp.tracking.MetaTrackingMode_t
}
var file_vp_tracking_proto_depIdxs = []int32{
	1, // 0: vp.tracking.PoseInfo_t.stPose:type_name -> vp.tracking.Pose_t
	2, // 1: vp.tracking.FramePoseInfo_t.stVPSPoseInfo:type_name -> vp.tracking.PoseInfo_t
	2, // 2: vp.tracking.FramePoseInfo_t.stLastDRPoseInfoArray:type_name -> vp.tracking.PoseInfo_t
	2, // 3: vp.tracking.FramePoseInfo_t.stLastEGPoseInfoArray:type_name -> vp.tracking.PoseInfo_t
	0, // 4: vp.tracking.MetaTrackingMode_t.eVPStatusTrackingMode:type_name -> vp.tracking.VPStatusTrackingMode
	2, // 5: vp.tracking.MetaTrackingMode_t.stVPSPoseInfo:type_name -> vp.tracking.PoseInfo_t
	1, // 6: vp.tracking.MetaTrackingMode_t.stCorrectingTr:type_name -> vp.tracking.Pose_t
	4, // 7: vp.tracking.MetaTrackingMode_t.stLinearVelocityKF:type_name -> vp.tracking.KalmanFilter_t
	4, // 8: vp.tracking.MetaTrackingMode_t.stVPSPoseKF:type_name -> vp.tracking.KalmanFilter_t
	9, // [9:9] is the sub-list for method output_type
	9, // [9:9] is the sub-list for method input_type
	9, // [9:9] is the sub-list for extension type_name
	9, // [9:9] is the sub-list for extension extendee
	0, // [0:9] is the sub-list for field type_name
}

func init() { file_vp_tracking_proto_init() }
func file_vp_tracking_proto_init() {
	if File_vp_tracking_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_vp_tracking_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*PoseT); i {
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
		file_vp_tracking_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*PoseInfoT); i {
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
		file_vp_tracking_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FramePoseInfoT); i {
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
		file_vp_tracking_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*KalmanFilterT); i {
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
		file_vp_tracking_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ParamT); i {
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
		file_vp_tracking_proto_msgTypes[5].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*MetaTrackingModeT); i {
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
			RawDescriptor: file_vp_tracking_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   6,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_vp_tracking_proto_goTypes,
		DependencyIndexes: file_vp_tracking_proto_depIdxs,
		EnumInfos:         file_vp_tracking_proto_enumTypes,
		MessageInfos:      file_vp_tracking_proto_msgTypes,
	}.Build()
	File_vp_tracking_proto = out.File
	file_vp_tracking_proto_rawDesc = nil
	file_vp_tracking_proto_goTypes = nil
	file_vp_tracking_proto_depIdxs = nil
}
