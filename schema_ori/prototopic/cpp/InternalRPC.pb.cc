// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InternalRPC.proto

#include "InternalRPC.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace vlam {
namespace internal {
}  // namespace internal
}  // namespace vlam
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_InternalRPC_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_InternalRPC_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_InternalRPC_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_InternalRPC_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_InternalRPC_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021InternalRPC.proto\022\rvlam.internal\032\016vpre"
  "sult.proto\032\026ImageEnhancement.proto\032\027Feat"
  "ureExtraction.proto\032\024PoseEstimation.prot"
  "o2\361\001\n\013Positioning\022K\n\023doVisualPositioning"
  "\022\033.vlam.sa.ImageEnhancementIn\032\025.vpresult"
  ".VPService_t\"\000\022F\n\020doPoseEstimation\022\031.vla"
  "m.pe.PoseEstimationIn\032\025.vpresult.VPServi"
  "ce_t\"\000\022M\n\021unitTest_SAModule\022\033.vlam.sa.Im"
  "ageEnhancementIn\032\031.vlam.pe.PoseEstimatio"
  "nIn\"\0002`\n\nDBPlatform\022R\n\021getVisualFeatures"
  "\022\034.vlam.sa.FeatureExtractionIn\032\035.vlam.sa"
  ".FeatureExtractionOut\"\000B\017\n\rvlam.internal"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_InternalRPC_2eproto_deps[4] = {
  &::descriptor_table_FeatureExtraction_2eproto,
  &::descriptor_table_ImageEnhancement_2eproto,
  &::descriptor_table_PoseEstimation_2eproto,
  &::descriptor_table_vpresult_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_InternalRPC_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_InternalRPC_2eproto = {
  false, false, 488, descriptor_table_protodef_InternalRPC_2eproto, "InternalRPC.proto", 
  &descriptor_table_InternalRPC_2eproto_once, descriptor_table_InternalRPC_2eproto_deps, 4, 0,
  schemas, file_default_instances, TableStruct_InternalRPC_2eproto::offsets,
  file_level_metadata_InternalRPC_2eproto, file_level_enum_descriptors_InternalRPC_2eproto, file_level_service_descriptors_InternalRPC_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_InternalRPC_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_InternalRPC_2eproto);
  return descriptor_table_InternalRPC_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_InternalRPC_2eproto(&descriptor_table_InternalRPC_2eproto);
namespace vlam {
namespace internal {

// @@protoc_insertion_point(namespace_scope)
}  // namespace internal
}  // namespace vlam
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>