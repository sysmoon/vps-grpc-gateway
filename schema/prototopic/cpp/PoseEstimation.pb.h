// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PoseEstimation.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PoseEstimation_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PoseEstimation_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "placevector.pb.h"
#include "localfeature.pb.h"
#include "vp_msg.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PoseEstimation_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PoseEstimation_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PoseEstimation_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_PoseEstimation_2eproto_metadata_getter(int index);
namespace vlam {
namespace pe {
class PoseEstimationIn;
struct PoseEstimationInDefaultTypeInternal;
extern PoseEstimationInDefaultTypeInternal _PoseEstimationIn_default_instance_;
}  // namespace pe
}  // namespace vlam
PROTOBUF_NAMESPACE_OPEN
template<> ::vlam::pe::PoseEstimationIn* Arena::CreateMaybeMessage<::vlam::pe::PoseEstimationIn>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace vlam {
namespace pe {

// ===================================================================

class PoseEstimationIn PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:vlam.pe.PoseEstimationIn) */ {
 public:
  inline PoseEstimationIn() : PoseEstimationIn(nullptr) {}
  virtual ~PoseEstimationIn();
  explicit constexpr PoseEstimationIn(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PoseEstimationIn(const PoseEstimationIn& from);
  PoseEstimationIn(PoseEstimationIn&& from) noexcept
    : PoseEstimationIn() {
    *this = ::std::move(from);
  }

  inline PoseEstimationIn& operator=(const PoseEstimationIn& from) {
    CopyFrom(from);
    return *this;
  }
  inline PoseEstimationIn& operator=(PoseEstimationIn&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PoseEstimationIn& default_instance() {
    return *internal_default_instance();
  }
  static inline const PoseEstimationIn* internal_default_instance() {
    return reinterpret_cast<const PoseEstimationIn*>(
               &_PoseEstimationIn_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PoseEstimationIn& a, PoseEstimationIn& b) {
    a.Swap(&b);
  }
  inline void Swap(PoseEstimationIn* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PoseEstimationIn* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PoseEstimationIn* New() const final {
    return CreateMaybeMessage<PoseEstimationIn>(nullptr);
  }

  PoseEstimationIn* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PoseEstimationIn>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PoseEstimationIn& from);
  void MergeFrom(const PoseEstimationIn& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PoseEstimationIn* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "vlam.pe.PoseEstimationIn";
  }
  protected:
  explicit PoseEstimationIn(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_PoseEstimation_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStVPSensorDataFieldNumber = 1,
    kArstPlaceVectorListFieldNumber = 11,
    kArstLocalFeatureListFieldNumber = 12,
  };
  // .vpdata.VPData stVPSensorData = 1;
  bool has_stvpsensordata() const;
  private:
  bool _internal_has_stvpsensordata() const;
  public:
  void clear_stvpsensordata();
  const ::vpdata::VPData& stvpsensordata() const;
  ::vpdata::VPData* release_stvpsensordata();
  ::vpdata::VPData* mutable_stvpsensordata();
  void set_allocated_stvpsensordata(::vpdata::VPData* stvpsensordata);
  private:
  const ::vpdata::VPData& _internal_stvpsensordata() const;
  ::vpdata::VPData* _internal_mutable_stvpsensordata();
  public:
  void unsafe_arena_set_allocated_stvpsensordata(
      ::vpdata::VPData* stvpsensordata);
  ::vpdata::VPData* unsafe_arena_release_stvpsensordata();

  // .VgeoDB.PlaceVectorSet arstPlaceVectorList = 11;
  bool has_arstplacevectorlist() const;
  private:
  bool _internal_has_arstplacevectorlist() const;
  public:
  void clear_arstplacevectorlist();
  const ::VgeoDB::PlaceVectorSet& arstplacevectorlist() const;
  ::VgeoDB::PlaceVectorSet* release_arstplacevectorlist();
  ::VgeoDB::PlaceVectorSet* mutable_arstplacevectorlist();
  void set_allocated_arstplacevectorlist(::VgeoDB::PlaceVectorSet* arstplacevectorlist);
  private:
  const ::VgeoDB::PlaceVectorSet& _internal_arstplacevectorlist() const;
  ::VgeoDB::PlaceVectorSet* _internal_mutable_arstplacevectorlist();
  public:
  void unsafe_arena_set_allocated_arstplacevectorlist(
      ::VgeoDB::PlaceVectorSet* arstplacevectorlist);
  ::VgeoDB::PlaceVectorSet* unsafe_arena_release_arstplacevectorlist();

  // .VgeoDB.LocalFeatureSet arstLocalFeatureList = 12;
  bool has_arstlocalfeaturelist() const;
  private:
  bool _internal_has_arstlocalfeaturelist() const;
  public:
  void clear_arstlocalfeaturelist();
  const ::VgeoDB::LocalFeatureSet& arstlocalfeaturelist() const;
  ::VgeoDB::LocalFeatureSet* release_arstlocalfeaturelist();
  ::VgeoDB::LocalFeatureSet* mutable_arstlocalfeaturelist();
  void set_allocated_arstlocalfeaturelist(::VgeoDB::LocalFeatureSet* arstlocalfeaturelist);
  private:
  const ::VgeoDB::LocalFeatureSet& _internal_arstlocalfeaturelist() const;
  ::VgeoDB::LocalFeatureSet* _internal_mutable_arstlocalfeaturelist();
  public:
  void unsafe_arena_set_allocated_arstlocalfeaturelist(
      ::VgeoDB::LocalFeatureSet* arstlocalfeaturelist);
  ::VgeoDB::LocalFeatureSet* unsafe_arena_release_arstlocalfeaturelist();

  // @@protoc_insertion_point(class_scope:vlam.pe.PoseEstimationIn)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::vpdata::VPData* stvpsensordata_;
  ::VgeoDB::PlaceVectorSet* arstplacevectorlist_;
  ::VgeoDB::LocalFeatureSet* arstlocalfeaturelist_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PoseEstimation_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PoseEstimationIn

// .vpdata.VPData stVPSensorData = 1;
inline bool PoseEstimationIn::_internal_has_stvpsensordata() const {
  return this != internal_default_instance() && stvpsensordata_ != nullptr;
}
inline bool PoseEstimationIn::has_stvpsensordata() const {
  return _internal_has_stvpsensordata();
}
inline const ::vpdata::VPData& PoseEstimationIn::_internal_stvpsensordata() const {
  const ::vpdata::VPData* p = stvpsensordata_;
  return p != nullptr ? *p : reinterpret_cast<const ::vpdata::VPData&>(
      ::vpdata::_VPData_default_instance_);
}
inline const ::vpdata::VPData& PoseEstimationIn::stvpsensordata() const {
  // @@protoc_insertion_point(field_get:vlam.pe.PoseEstimationIn.stVPSensorData)
  return _internal_stvpsensordata();
}
inline void PoseEstimationIn::unsafe_arena_set_allocated_stvpsensordata(
    ::vpdata::VPData* stvpsensordata) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stvpsensordata_);
  }
  stvpsensordata_ = stvpsensordata;
  if (stvpsensordata) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:vlam.pe.PoseEstimationIn.stVPSensorData)
}
inline ::vpdata::VPData* PoseEstimationIn::release_stvpsensordata() {
  
  ::vpdata::VPData* temp = stvpsensordata_;
  stvpsensordata_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::vpdata::VPData* PoseEstimationIn::unsafe_arena_release_stvpsensordata() {
  // @@protoc_insertion_point(field_release:vlam.pe.PoseEstimationIn.stVPSensorData)
  
  ::vpdata::VPData* temp = stvpsensordata_;
  stvpsensordata_ = nullptr;
  return temp;
}
inline ::vpdata::VPData* PoseEstimationIn::_internal_mutable_stvpsensordata() {
  
  if (stvpsensordata_ == nullptr) {
    auto* p = CreateMaybeMessage<::vpdata::VPData>(GetArena());
    stvpsensordata_ = p;
  }
  return stvpsensordata_;
}
inline ::vpdata::VPData* PoseEstimationIn::mutable_stvpsensordata() {
  // @@protoc_insertion_point(field_mutable:vlam.pe.PoseEstimationIn.stVPSensorData)
  return _internal_mutable_stvpsensordata();
}
inline void PoseEstimationIn::set_allocated_stvpsensordata(::vpdata::VPData* stvpsensordata) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(stvpsensordata_);
  }
  if (stvpsensordata) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stvpsensordata)->GetArena();
    if (message_arena != submessage_arena) {
      stvpsensordata = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, stvpsensordata, submessage_arena);
    }
    
  } else {
    
  }
  stvpsensordata_ = stvpsensordata;
  // @@protoc_insertion_point(field_set_allocated:vlam.pe.PoseEstimationIn.stVPSensorData)
}

// .VgeoDB.PlaceVectorSet arstPlaceVectorList = 11;
inline bool PoseEstimationIn::_internal_has_arstplacevectorlist() const {
  return this != internal_default_instance() && arstplacevectorlist_ != nullptr;
}
inline bool PoseEstimationIn::has_arstplacevectorlist() const {
  return _internal_has_arstplacevectorlist();
}
inline const ::VgeoDB::PlaceVectorSet& PoseEstimationIn::_internal_arstplacevectorlist() const {
  const ::VgeoDB::PlaceVectorSet* p = arstplacevectorlist_;
  return p != nullptr ? *p : reinterpret_cast<const ::VgeoDB::PlaceVectorSet&>(
      ::VgeoDB::_PlaceVectorSet_default_instance_);
}
inline const ::VgeoDB::PlaceVectorSet& PoseEstimationIn::arstplacevectorlist() const {
  // @@protoc_insertion_point(field_get:vlam.pe.PoseEstimationIn.arstPlaceVectorList)
  return _internal_arstplacevectorlist();
}
inline void PoseEstimationIn::unsafe_arena_set_allocated_arstplacevectorlist(
    ::VgeoDB::PlaceVectorSet* arstplacevectorlist) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(arstplacevectorlist_);
  }
  arstplacevectorlist_ = arstplacevectorlist;
  if (arstplacevectorlist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:vlam.pe.PoseEstimationIn.arstPlaceVectorList)
}
inline ::VgeoDB::PlaceVectorSet* PoseEstimationIn::release_arstplacevectorlist() {
  
  ::VgeoDB::PlaceVectorSet* temp = arstplacevectorlist_;
  arstplacevectorlist_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::VgeoDB::PlaceVectorSet* PoseEstimationIn::unsafe_arena_release_arstplacevectorlist() {
  // @@protoc_insertion_point(field_release:vlam.pe.PoseEstimationIn.arstPlaceVectorList)
  
  ::VgeoDB::PlaceVectorSet* temp = arstplacevectorlist_;
  arstplacevectorlist_ = nullptr;
  return temp;
}
inline ::VgeoDB::PlaceVectorSet* PoseEstimationIn::_internal_mutable_arstplacevectorlist() {
  
  if (arstplacevectorlist_ == nullptr) {
    auto* p = CreateMaybeMessage<::VgeoDB::PlaceVectorSet>(GetArena());
    arstplacevectorlist_ = p;
  }
  return arstplacevectorlist_;
}
inline ::VgeoDB::PlaceVectorSet* PoseEstimationIn::mutable_arstplacevectorlist() {
  // @@protoc_insertion_point(field_mutable:vlam.pe.PoseEstimationIn.arstPlaceVectorList)
  return _internal_mutable_arstplacevectorlist();
}
inline void PoseEstimationIn::set_allocated_arstplacevectorlist(::VgeoDB::PlaceVectorSet* arstplacevectorlist) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(arstplacevectorlist_);
  }
  if (arstplacevectorlist) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(arstplacevectorlist)->GetArena();
    if (message_arena != submessage_arena) {
      arstplacevectorlist = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, arstplacevectorlist, submessage_arena);
    }
    
  } else {
    
  }
  arstplacevectorlist_ = arstplacevectorlist;
  // @@protoc_insertion_point(field_set_allocated:vlam.pe.PoseEstimationIn.arstPlaceVectorList)
}

// .VgeoDB.LocalFeatureSet arstLocalFeatureList = 12;
inline bool PoseEstimationIn::_internal_has_arstlocalfeaturelist() const {
  return this != internal_default_instance() && arstlocalfeaturelist_ != nullptr;
}
inline bool PoseEstimationIn::has_arstlocalfeaturelist() const {
  return _internal_has_arstlocalfeaturelist();
}
inline const ::VgeoDB::LocalFeatureSet& PoseEstimationIn::_internal_arstlocalfeaturelist() const {
  const ::VgeoDB::LocalFeatureSet* p = arstlocalfeaturelist_;
  return p != nullptr ? *p : reinterpret_cast<const ::VgeoDB::LocalFeatureSet&>(
      ::VgeoDB::_LocalFeatureSet_default_instance_);
}
inline const ::VgeoDB::LocalFeatureSet& PoseEstimationIn::arstlocalfeaturelist() const {
  // @@protoc_insertion_point(field_get:vlam.pe.PoseEstimationIn.arstLocalFeatureList)
  return _internal_arstlocalfeaturelist();
}
inline void PoseEstimationIn::unsafe_arena_set_allocated_arstlocalfeaturelist(
    ::VgeoDB::LocalFeatureSet* arstlocalfeaturelist) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(arstlocalfeaturelist_);
  }
  arstlocalfeaturelist_ = arstlocalfeaturelist;
  if (arstlocalfeaturelist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:vlam.pe.PoseEstimationIn.arstLocalFeatureList)
}
inline ::VgeoDB::LocalFeatureSet* PoseEstimationIn::release_arstlocalfeaturelist() {
  
  ::VgeoDB::LocalFeatureSet* temp = arstlocalfeaturelist_;
  arstlocalfeaturelist_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::VgeoDB::LocalFeatureSet* PoseEstimationIn::unsafe_arena_release_arstlocalfeaturelist() {
  // @@protoc_insertion_point(field_release:vlam.pe.PoseEstimationIn.arstLocalFeatureList)
  
  ::VgeoDB::LocalFeatureSet* temp = arstlocalfeaturelist_;
  arstlocalfeaturelist_ = nullptr;
  return temp;
}
inline ::VgeoDB::LocalFeatureSet* PoseEstimationIn::_internal_mutable_arstlocalfeaturelist() {
  
  if (arstlocalfeaturelist_ == nullptr) {
    auto* p = CreateMaybeMessage<::VgeoDB::LocalFeatureSet>(GetArena());
    arstlocalfeaturelist_ = p;
  }
  return arstlocalfeaturelist_;
}
inline ::VgeoDB::LocalFeatureSet* PoseEstimationIn::mutable_arstlocalfeaturelist() {
  // @@protoc_insertion_point(field_mutable:vlam.pe.PoseEstimationIn.arstLocalFeatureList)
  return _internal_mutable_arstlocalfeaturelist();
}
inline void PoseEstimationIn::set_allocated_arstlocalfeaturelist(::VgeoDB::LocalFeatureSet* arstlocalfeaturelist) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(arstlocalfeaturelist_);
  }
  if (arstlocalfeaturelist) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(arstlocalfeaturelist)->GetArena();
    if (message_arena != submessage_arena) {
      arstlocalfeaturelist = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, arstlocalfeaturelist, submessage_arena);
    }
    
  } else {
    
  }
  arstlocalfeaturelist_ = arstlocalfeaturelist;
  // @@protoc_insertion_point(field_set_allocated:vlam.pe.PoseEstimationIn.arstLocalFeatureList)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace pe
}  // namespace vlam

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PoseEstimation_2eproto
