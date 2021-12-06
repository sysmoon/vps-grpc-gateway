// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.27.1
// 	protoc        v3.17.3
// source: vp_state.proto

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

type VPStateT_VPStatus int32

const (
	VPStateT_eUNKNOWN_STATUS VPStateT_VPStatus = 0
	VPStateT_eINIT           VPStateT_VPStatus = 1
	VPStateT_eTRACK          VPStateT_VPStatus = 2
	VPStateT_eCOSTING        VPStateT_VPStatus = 3
	VPStateT_eFAIL           VPStateT_VPStatus = 4
)

// Enum value maps for VPStateT_VPStatus.
var (
	VPStateT_VPStatus_name = map[int32]string{
		0: "eUNKNOWN_STATUS",
		1: "eINIT",
		2: "eTRACK",
		3: "eCOSTING",
		4: "eFAIL",
	}
	VPStateT_VPStatus_value = map[string]int32{
		"eUNKNOWN_STATUS": 0,
		"eINIT":           1,
		"eTRACK":          2,
		"eCOSTING":        3,
		"eFAIL":           4,
	}
)

func (x VPStateT_VPStatus) Enum() *VPStateT_VPStatus {
	p := new(VPStateT_VPStatus)
	*p = x
	return p
}

func (x VPStateT_VPStatus) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (VPStateT_VPStatus) Descriptor() protoreflect.EnumDescriptor {
	return file_vp_state_proto_enumTypes[0].Descriptor()
}

func (VPStateT_VPStatus) Type() protoreflect.EnumType {
	return &file_vp_state_proto_enumTypes[0]
}

func (x VPStateT_VPStatus) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use VPStateT_VPStatus.Descriptor instead.
func (VPStateT_VPStatus) EnumDescriptor() ([]byte, []int) {
	return file_vp_state_proto_rawDescGZIP(), []int{0, 0}
}

type VPStateT struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	EVPStatus             VPStateT_VPStatus    `protobuf:"varint,1,opt,name=eVPStatus,proto3,enum=vpdata.state.VPStateT_VPStatus" json:"eVPStatus,omitempty"`
	U64TSLastLoc          uint64               `protobuf:"varint,2,opt,name=u64TSLastLoc,proto3" json:"u64TSLastLoc,omitempty"`
	Arf64LastLocation     []float64            `protobuf:"fixed64,3,rep,packed,name=arf64LastLocation,proto3" json:"arf64LastLocation,omitempty"`
	Arf32LastOrientation  []float32            `protobuf:"fixed32,4,rep,packed,name=arf32LastOrientation,proto3" json:"arf32LastOrientation,omitempty"`
	Arf32LastDRPose       []float32            `protobuf:"fixed32,5,rep,packed,name=arf32LastDRPose,proto3" json:"arf32LastDRPose,omitempty"`
	Arf32CurDRPose        []float32            `protobuf:"fixed32,6,rep,packed,name=arf32CurDRPose,proto3" json:"arf32CurDRPose,omitempty"`
	EVPStatusTrackingMode VPStatusTrackingMode `protobuf:"varint,7,opt,name=eVPStatusTrackingMode,proto3,enum=vp.tracking.VPStatusTrackingMode" json:"eVPStatusTrackingMode,omitempty"`
	StFramePoseInfoSet    []*FramePoseInfoT    `protobuf:"bytes,8,rep,name=stFramePoseInfoSet,proto3" json:"stFramePoseInfoSet,omitempty"`
	StLinearVelocityKF    *KalmanFilterT       `protobuf:"bytes,9,opt,name=stLinearVelocityKF,proto3" json:"stLinearVelocityKF,omitempty"`
	StVPSPoseKF           *KalmanFilterT       `protobuf:"bytes,10,opt,name=stVPSPoseKF,proto3" json:"stVPSPoseKF,omitempty"`
	StParamSet            []*ParamT            `protobuf:"bytes,11,rep,name=stParamSet,proto3" json:"stParamSet,omitempty"`
}

func (x *VPStateT) Reset() {
	*x = VPStateT{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vp_state_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *VPStateT) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*VPStateT) ProtoMessage() {}

func (x *VPStateT) ProtoReflect() protoreflect.Message {
	mi := &file_vp_state_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use VPStateT.ProtoReflect.Descriptor instead.
func (*VPStateT) Descriptor() ([]byte, []int) {
	return file_vp_state_proto_rawDescGZIP(), []int{0}
}

func (x *VPStateT) GetEVPStatus() VPStateT_VPStatus {
	if x != nil {
		return x.EVPStatus
	}
	return VPStateT_eUNKNOWN_STATUS
}

func (x *VPStateT) GetU64TSLastLoc() uint64 {
	if x != nil {
		return x.U64TSLastLoc
	}
	return 0
}

func (x *VPStateT) GetArf64LastLocation() []float64 {
	if x != nil {
		return x.Arf64LastLocation
	}
	return nil
}

func (x *VPStateT) GetArf32LastOrientation() []float32 {
	if x != nil {
		return x.Arf32LastOrientation
	}
	return nil
}

func (x *VPStateT) GetArf32LastDRPose() []float32 {
	if x != nil {
		return x.Arf32LastDRPose
	}
	return nil
}

func (x *VPStateT) GetArf32CurDRPose() []float32 {
	if x != nil {
		return x.Arf32CurDRPose
	}
	return nil
}

func (x *VPStateT) GetEVPStatusTrackingMode() VPStatusTrackingMode {
	if x != nil {
		return x.EVPStatusTrackingMode
	}
	return VPStatusTrackingMode_eLOST
}

func (x *VPStateT) GetStFramePoseInfoSet() []*FramePoseInfoT {
	if x != nil {
		return x.StFramePoseInfoSet
	}
	return nil
}

func (x *VPStateT) GetStLinearVelocityKF() *KalmanFilterT {
	if x != nil {
		return x.StLinearVelocityKF
	}
	return nil
}

func (x *VPStateT) GetStVPSPoseKF() *KalmanFilterT {
	if x != nil {
		return x.StVPSPoseKF
	}
	return nil
}

func (x *VPStateT) GetStParamSet() []*ParamT {
	if x != nil {
		return x.StParamSet
	}
	return nil
}

var File_vp_state_proto protoreflect.FileDescriptor

var file_vp_state_proto_rawDesc = []byte{
	0x0a, 0x0e, 0x76, 0x70, 0x5f, 0x73, 0x74, 0x61, 0x74, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x12, 0x0c, 0x76, 0x70, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x73, 0x74, 0x61, 0x74, 0x65, 0x1a, 0x11,
	0x76, 0x70, 0x5f, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x22, 0xdd, 0x05, 0x0a, 0x09, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x65, 0x5f, 0x74, 0x12,
	0x3e, 0x0a, 0x09, 0x65, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x0e, 0x32, 0x20, 0x2e, 0x76, 0x70, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x73, 0x74, 0x61, 0x74,
	0x65, 0x2e, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x65, 0x5f, 0x74, 0x2e, 0x56, 0x50, 0x53, 0x74,
	0x61, 0x74, 0x75, 0x73, 0x52, 0x09, 0x65, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x12,
	0x22, 0x0a, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x4c, 0x61, 0x73, 0x74, 0x4c, 0x6f, 0x63, 0x18,
	0x02, 0x20, 0x01, 0x28, 0x04, 0x52, 0x0c, 0x75, 0x36, 0x34, 0x54, 0x53, 0x4c, 0x61, 0x73, 0x74,
	0x4c, 0x6f, 0x63, 0x12, 0x2c, 0x0a, 0x11, 0x61, 0x72, 0x66, 0x36, 0x34, 0x4c, 0x61, 0x73, 0x74,
	0x4c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x18, 0x03, 0x20, 0x03, 0x28, 0x01, 0x52, 0x11,
	0x61, 0x72, 0x66, 0x36, 0x34, 0x4c, 0x61, 0x73, 0x74, 0x4c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f,
	0x6e, 0x12, 0x32, 0x0a, 0x14, 0x61, 0x72, 0x66, 0x33, 0x32, 0x4c, 0x61, 0x73, 0x74, 0x4f, 0x72,
	0x69, 0x65, 0x6e, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x18, 0x04, 0x20, 0x03, 0x28, 0x02, 0x52,
	0x14, 0x61, 0x72, 0x66, 0x33, 0x32, 0x4c, 0x61, 0x73, 0x74, 0x4f, 0x72, 0x69, 0x65, 0x6e, 0x74,
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x12, 0x28, 0x0a, 0x0f, 0x61, 0x72, 0x66, 0x33, 0x32, 0x4c, 0x61,
	0x73, 0x74, 0x44, 0x52, 0x50, 0x6f, 0x73, 0x65, 0x18, 0x05, 0x20, 0x03, 0x28, 0x02, 0x52, 0x0f,
	0x61, 0x72, 0x66, 0x33, 0x32, 0x4c, 0x61, 0x73, 0x74, 0x44, 0x52, 0x50, 0x6f, 0x73, 0x65, 0x12,
	0x26, 0x0a, 0x0e, 0x61, 0x72, 0x66, 0x33, 0x32, 0x43, 0x75, 0x72, 0x44, 0x52, 0x50, 0x6f, 0x73,
	0x65, 0x18, 0x06, 0x20, 0x03, 0x28, 0x02, 0x52, 0x0e, 0x61, 0x72, 0x66, 0x33, 0x32, 0x43, 0x75,
	0x72, 0x44, 0x52, 0x50, 0x6f, 0x73, 0x65, 0x12, 0x57, 0x0a, 0x15, 0x65, 0x56, 0x50, 0x53, 0x74,
	0x61, 0x74, 0x75, 0x73, 0x54, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x4d, 0x6f, 0x64, 0x65,
	0x18, 0x07, 0x20, 0x01, 0x28, 0x0e, 0x32, 0x21, 0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63,
	0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x54, 0x72, 0x61,
	0x63, 0x6b, 0x69, 0x6e, 0x67, 0x4d, 0x6f, 0x64, 0x65, 0x52, 0x15, 0x65, 0x56, 0x50, 0x53, 0x74,
	0x61, 0x74, 0x75, 0x73, 0x54, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x4d, 0x6f, 0x64, 0x65,
	0x12, 0x4c, 0x0a, 0x12, 0x73, 0x74, 0x46, 0x72, 0x61, 0x6d, 0x65, 0x50, 0x6f, 0x73, 0x65, 0x49,
	0x6e, 0x66, 0x6f, 0x53, 0x65, 0x74, 0x18, 0x08, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x1c, 0x2e, 0x76,
	0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x46, 0x72, 0x61, 0x6d, 0x65,
	0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x5f, 0x74, 0x52, 0x12, 0x73, 0x74, 0x46, 0x72,
	0x61, 0x6d, 0x65, 0x50, 0x6f, 0x73, 0x65, 0x49, 0x6e, 0x66, 0x6f, 0x53, 0x65, 0x74, 0x12, 0x4b,
	0x0a, 0x12, 0x73, 0x74, 0x4c, 0x69, 0x6e, 0x65, 0x61, 0x72, 0x56, 0x65, 0x6c, 0x6f, 0x63, 0x69,
	0x74, 0x79, 0x4b, 0x46, 0x18, 0x09, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1b, 0x2e, 0x76, 0x70, 0x2e,
	0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x4b, 0x61, 0x6c, 0x6d, 0x61, 0x6e, 0x46,
	0x69, 0x6c, 0x74, 0x65, 0x72, 0x5f, 0x74, 0x52, 0x12, 0x73, 0x74, 0x4c, 0x69, 0x6e, 0x65, 0x61,
	0x72, 0x56, 0x65, 0x6c, 0x6f, 0x63, 0x69, 0x74, 0x79, 0x4b, 0x46, 0x12, 0x3d, 0x0a, 0x0b, 0x73,
	0x74, 0x56, 0x50, 0x53, 0x50, 0x6f, 0x73, 0x65, 0x4b, 0x46, 0x18, 0x0a, 0x20, 0x01, 0x28, 0x0b,
	0x32, 0x1b, 0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x4b,
	0x61, 0x6c, 0x6d, 0x61, 0x6e, 0x46, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x5f, 0x74, 0x52, 0x0b, 0x73,
	0x74, 0x56, 0x50, 0x53, 0x50, 0x6f, 0x73, 0x65, 0x4b, 0x46, 0x12, 0x34, 0x0a, 0x0a, 0x73, 0x74,
	0x50, 0x61, 0x72, 0x61, 0x6d, 0x53, 0x65, 0x74, 0x18, 0x0b, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x14,
	0x2e, 0x76, 0x70, 0x2e, 0x74, 0x72, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x50, 0x61, 0x72,
	0x61, 0x6d, 0x5f, 0x74, 0x52, 0x0a, 0x73, 0x74, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x53, 0x65, 0x74,
	0x22, 0x4f, 0x0a, 0x08, 0x56, 0x50, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x12, 0x13, 0x0a, 0x0f,
	0x65, 0x55, 0x4e, 0x4b, 0x4e, 0x4f, 0x57, 0x4e, 0x5f, 0x53, 0x54, 0x41, 0x54, 0x55, 0x53, 0x10,
	0x00, 0x12, 0x09, 0x0a, 0x05, 0x65, 0x49, 0x4e, 0x49, 0x54, 0x10, 0x01, 0x12, 0x0a, 0x0a, 0x06,
	0x65, 0x54, 0x52, 0x41, 0x43, 0x4b, 0x10, 0x02, 0x12, 0x0c, 0x0a, 0x08, 0x65, 0x43, 0x4f, 0x53,
	0x54, 0x49, 0x4e, 0x47, 0x10, 0x03, 0x12, 0x09, 0x0a, 0x05, 0x65, 0x46, 0x41, 0x49, 0x4c, 0x10,
	0x04, 0x42, 0x4c, 0x0a, 0x13, 0x6d, 0x73, 0x67, 0x6d, 0x61, 0x6e, 0x61, 0x67, 0x65, 0x72, 0x2e,
	0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x5a, 0x35, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62,
	0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x73, 0x79, 0x73, 0x6d, 0x6f, 0x6f, 0x6e, 0x2f, 0x76, 0x70, 0x73,
	0x2d, 0x67, 0x72, 0x70, 0x63, 0x2d, 0x67, 0x61, 0x74, 0x65, 0x77, 0x61, 0x79, 0x2f, 0x73, 0x63,
	0x68, 0x65, 0x6d, 0x61, 0x2f, 0x53, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x44, 0x61, 0x74, 0x61, 0x62,
	0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_vp_state_proto_rawDescOnce sync.Once
	file_vp_state_proto_rawDescData = file_vp_state_proto_rawDesc
)

func file_vp_state_proto_rawDescGZIP() []byte {
	file_vp_state_proto_rawDescOnce.Do(func() {
		file_vp_state_proto_rawDescData = protoimpl.X.CompressGZIP(file_vp_state_proto_rawDescData)
	})
	return file_vp_state_proto_rawDescData
}

var file_vp_state_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_vp_state_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_vp_state_proto_goTypes = []interface{}{
	(VPStateT_VPStatus)(0),    // 0: vpdata.state.VPState_t.VPStatus
	(*VPStateT)(nil),          // 1: vpdata.state.VPState_t
	(VPStatusTrackingMode)(0), // 2: vp.tracking.VPStatusTrackingMode
	(*FramePoseInfoT)(nil),    // 3: vp.tracking.FramePoseInfo_t
	(*KalmanFilterT)(nil),     // 4: vp.tracking.KalmanFilter_t
	(*ParamT)(nil),            // 5: vp.tracking.Param_t
}
var file_vp_state_proto_depIdxs = []int32{
	0, // 0: vpdata.state.VPState_t.eVPStatus:type_name -> vpdata.state.VPState_t.VPStatus
	2, // 1: vpdata.state.VPState_t.eVPStatusTrackingMode:type_name -> vp.tracking.VPStatusTrackingMode
	3, // 2: vpdata.state.VPState_t.stFramePoseInfoSet:type_name -> vp.tracking.FramePoseInfo_t
	4, // 3: vpdata.state.VPState_t.stLinearVelocityKF:type_name -> vp.tracking.KalmanFilter_t
	4, // 4: vpdata.state.VPState_t.stVPSPoseKF:type_name -> vp.tracking.KalmanFilter_t
	5, // 5: vpdata.state.VPState_t.stParamSet:type_name -> vp.tracking.Param_t
	6, // [6:6] is the sub-list for method output_type
	6, // [6:6] is the sub-list for method input_type
	6, // [6:6] is the sub-list for extension type_name
	6, // [6:6] is the sub-list for extension extendee
	0, // [0:6] is the sub-list for field type_name
}

func init() { file_vp_state_proto_init() }
func file_vp_state_proto_init() {
	if File_vp_state_proto != nil {
		return
	}
	file_vp_tracking_proto_init()
	if !protoimpl.UnsafeEnabled {
		file_vp_state_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*VPStateT); i {
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
			RawDescriptor: file_vp_state_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_vp_state_proto_goTypes,
		DependencyIndexes: file_vp_state_proto_depIdxs,
		EnumInfos:         file_vp_state_proto_enumTypes,
		MessageInfos:      file_vp_state_proto_msgTypes,
	}.Build()
	File_vp_state_proto = out.File
	file_vp_state_proto_rawDesc = nil
	file_vp_state_proto_goTypes = nil
	file_vp_state_proto_depIdxs = nil
}
