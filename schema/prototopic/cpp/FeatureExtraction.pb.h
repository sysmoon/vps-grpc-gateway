// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FeatureExtraction.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_FeatureExtraction_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_FeatureExtraction_2eproto

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
#include "vp_camera.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_FeatureExtraction_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_FeatureExtraction_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_FeatureExtraction_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_FeatureExtraction_2eproto_metadata_getter(int index);
namespace vlam {
namespace sa {
class FeatureExtractionIn;
struct FeatureExtractionInDefaultTypeInternal;
extern FeatureExtractionInDefaultTypeInternal _FeatureExtractionIn_default_instance_;
class FeatureExtractionOut;
struct FeatureExtractionOutDefaultTypeInternal;
extern FeatureExtractionOutDefaultTypeInternal _FeatureExtractionOut_default_instance_;
}  // namespace sa
}  // namespace vlam
PROTOBUF_NAMESPACE_OPEN
template<> ::vlam::sa::FeatureExtractionIn* Arena::CreateMaybeMessage<::vlam::sa::FeatureExtractionIn>(Arena*);
template<> ::vlam::sa::FeatureExtractionOut* Arena::CreateMaybeMessage<::vlam::sa::FeatureExtractionOut>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace vlam {
namespace sa {

// ===================================================================

class FeatureExtractionIn PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:vlam.sa.FeatureExtractionIn) */ {
 public:
  inline FeatureExtractionIn() : FeatureExtractionIn(nullptr) {}
  virtual ~FeatureExtractionIn();
  explicit constexpr FeatureExtractionIn(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FeatureExtractionIn(const FeatureExtractionIn& from);
  FeatureExtractionIn(FeatureExtractionIn&& from) noexcept
    : FeatureExtractionIn() {
    *this = ::std::move(from);
  }

  inline FeatureExtractionIn& operator=(const FeatureExtractionIn& from) {
    CopyFrom(from);
    return *this;
  }
  inline FeatureExtractionIn& operator=(FeatureExtractionIn&& from) noexcept {
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
  static const FeatureExtractionIn& default_instance() {
    return *internal_default_instance();
  }
  static inline const FeatureExtractionIn* internal_default_instance() {
    return reinterpret_cast<const FeatureExtractionIn*>(
               &_FeatureExtractionIn_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FeatureExtractionIn& a, FeatureExtractionIn& b) {
    a.Swap(&b);
  }
  inline void Swap(FeatureExtractionIn* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FeatureExtractionIn* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FeatureExtractionIn* New() const final {
    return CreateMaybeMessage<FeatureExtractionIn>(nullptr);
  }

  FeatureExtractionIn* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FeatureExtractionIn>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FeatureExtractionIn& from);
  void MergeFrom(const FeatureExtractionIn& from);
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
  void InternalSwap(FeatureExtractionIn* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "vlam.sa.FeatureExtractionIn";
  }
  protected:
  explicit FeatureExtractionIn(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_FeatureExtraction_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStVPSensorDataFieldNumber = 1,
    kStEnhancedImageFieldNumber = 2,
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

  // .vpdata.camera.Camera_t stEnhancedImage = 2;
  bool has_stenhancedimage() const;
  private:
  bool _internal_has_stenhancedimage() const;
  public:
  void clear_stenhancedimage();
  const ::vpdata::camera::Camera_t& stenhancedimage() const;
  ::vpdata::camera::Camera_t* release_stenhancedimage();
  ::vpdata::camera::Camera_t* mutable_stenhancedimage();
  void set_allocated_stenhancedimage(::vpdata::camera::Camera_t* stenhancedimage);
  private:
  const ::vpdata::camera::Camera_t& _internal_stenhancedimage() const;
  ::vpdata::camera::Camera_t* _internal_mutable_stenhancedimage();
  public:
  void unsafe_arena_set_allocated_stenhancedimage(
      ::vpdata::camera::Camera_t* stenhancedimage);
  ::vpdata::camera::Camera_t* unsafe_arena_release_stenhancedimage();

  // @@protoc_insertion_point(class_scope:vlam.sa.FeatureExtractionIn)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::vpdata::VPData* stvpsensordata_;
  ::vpdata::camera::Camera_t* stenhancedimage_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_FeatureExtraction_2eproto;
};
// -------------------------------------------------------------------

class FeatureExtractionOut PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:vlam.sa.FeatureExtractionOut) */ {
 public:
  inline FeatureExtractionOut() : FeatureExtractionOut(nullptr) {}
  virtual ~FeatureExtractionOut();
  explicit constexpr FeatureExtractionOut(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FeatureExtractionOut(const FeatureExtractionOut& from);
  FeatureExtractionOut(FeatureExtractionOut&& from) noexcept
    : FeatureExtractionOut() {
    *this = ::std::move(from);
  }

  inline FeatureExtractionOut& operator=(const FeatureExtractionOut& from) {
    CopyFrom(from);
    return *this;
  }
  inline FeatureExtractionOut& operator=(FeatureExtractionOut&& from) noexcept {
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
  static const FeatureExtractionOut& default_instance() {
    return *internal_default_instance();
  }
  static inline const FeatureExtractionOut* internal_default_instance() {
    return reinterpret_cast<const FeatureExtractionOut*>(
               &_FeatureExtractionOut_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FeatureExtractionOut& a, FeatureExtractionOut& b) {
    a.Swap(&b);
  }
  inline void Swap(FeatureExtractionOut* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FeatureExtractionOut* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FeatureExtractionOut* New() const final {
    return CreateMaybeMessage<FeatureExtractionOut>(nullptr);
  }

  FeatureExtractionOut* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FeatureExtractionOut>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FeatureExtractionOut& from);
  void MergeFrom(const FeatureExtractionOut& from);
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
  void InternalSwap(FeatureExtractionOut* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "vlam.sa.FeatureExtractionOut";
  }
  protected:
  explicit FeatureExtractionOut(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_FeatureExtraction_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kArstPlaceVectorListFieldNumber = 11,
    kArstLocalFeatureListFieldNumber = 12,
  };
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

  // @@protoc_insertion_point(class_scope:vlam.sa.FeatureExtractionOut)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::VgeoDB::PlaceVectorSet* arstplacevectorlist_;
  ::VgeoDB::LocalFeatureSet* arstlocalfeaturelist_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_FeatureExtraction_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FeatureExtractionIn

// .vpdata.VPData stVPSensorData = 1;
inline bool FeatureExtractionIn::_internal_has_stvpsensordata() const {
  return this != internal_default_instance() && stvpsensordata_ != nullptr;
}
inline bool FeatureExtractionIn::has_stvpsensordata() const {
  return _internal_has_stvpsensordata();
}
inline const ::vpdata::VPData& FeatureExtractionIn::_internal_stvpsensordata() const {
  const ::vpdata::VPData* p = stvpsensordata_;
  return p != nullptr ? *p : reinterpret_cast<const ::vpdata::VPData&>(
      ::vpdata::_VPData_default_instance_);
}
inline const ::vpdata::VPData& FeatureExtractionIn::stvpsensordata() const {
  // @@protoc_insertion_point(field_get:vlam.sa.FeatureExtractionIn.stVPSensorData)
  return _internal_stvpsensordata();
}
inline void FeatureExtractionIn::unsafe_arena_set_allocated_stvpsensordata(
    ::vpdata::VPData* stvpsensordata) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stvpsensordata_);
  }
  stvpsensordata_ = stvpsensordata;
  if (stvpsensordata) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:vlam.sa.FeatureExtractionIn.stVPSensorData)
}
inline ::vpdata::VPData* FeatureExtractionIn::release_stvpsensordata() {
  
  ::vpdata::VPData* temp = stvpsensordata_;
  stvpsensordata_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::vpdata::VPData* FeatureExtractionIn::unsafe_arena_release_stvpsensordata() {
  // @@protoc_insertion_point(field_release:vlam.sa.FeatureExtractionIn.stVPSensorData)
  
  ::vpdata::VPData* temp = stvpsensordata_;
  stvpsensordata_ = nullptr;
  return temp;
}
inline ::vpdata::VPData* FeatureExtractionIn::_internal_mutable_stvpsensordata() {
  
  if (stvpsensordata_ == nullptr) {
    auto* p = CreateMaybeMessage<::vpdata::VPData>(GetArena());
    stvpsensordata_ = p;
  }
  return stvpsensordata_;
}
inline ::vpdata::VPData* FeatureExtractionIn::mutable_stvpsensordata() {
  // @@protoc_insertion_point(field_mutable:vlam.sa.FeatureExtractionIn.stVPSensorData)
  return _internal_mutable_stvpsensordata();
}
inline void FeatureExtractionIn::set_allocated_stvpsensordata(::vpdata::VPData* stvpsensordata) {
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
  // @@protoc_insertion_point(field_set_allocated:vlam.sa.FeatureExtractionIn.stVPSensorData)
}

// .vpdata.camera.Camera_t stEnhancedImage = 2;
inline bool FeatureExtractionIn::_internal_has_stenhancedimage() const {
  return this != internal_default_instance() && stenhancedimage_ != nullptr;
}
inline bool FeatureExtractionIn::has_stenhancedimage() const {
  return _internal_has_stenhancedimage();
}
inline const ::vpdata::camera::Camera_t& FeatureExtractionIn::_internal_stenhancedimage() const {
  const ::vpdata::camera::Camera_t* p = stenhancedimage_;
  return p != nullptr ? *p : reinterpret_cast<const ::vpdata::camera::Camera_t&>(
      ::vpdata::camera::_Camera_t_default_instance_);
}
inline const ::vpdata::camera::Camera_t& FeatureExtractionIn::stenhancedimage() const {
  // @@protoc_insertion_point(field_get:vlam.sa.FeatureExtractionIn.stEnhancedImage)
  return _internal_stenhancedimage();
}
inline void FeatureExtractionIn::unsafe_arena_set_allocated_stenhancedimage(
    ::vpdata::camera::Camera_t* stenhancedimage) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stenhancedimage_);
  }
  stenhancedimage_ = stenhancedimage;
  if (stenhancedimage) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:vlam.sa.FeatureExtractionIn.stEnhancedImage)
}
inline ::vpdata::camera::Camera_t* FeatureExtractionIn::release_stenhancedimage() {
  
  ::vpdata::camera::Camera_t* temp = stenhancedimage_;
  stenhancedimage_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::vpdata::camera::Camera_t* FeatureExtractionIn::unsafe_arena_release_stenhancedimage() {
  // @@protoc_insertion_point(field_release:vlam.sa.FeatureExtractionIn.stEnhancedImage)
  
  ::vpdata::camera::Camera_t* temp = stenhancedimage_;
  stenhancedimage_ = nullptr;
  return temp;
}
inline ::vpdata::camera::Camera_t* FeatureExtractionIn::_internal_mutable_stenhancedimage() {
  
  if (stenhancedimage_ == nullptr) {
    auto* p = CreateMaybeMessage<::vpdata::camera::Camera_t>(GetArena());
    stenhancedimage_ = p;
  }
  return stenhancedimage_;
}
inline ::vpdata::camera::Camera_t* FeatureExtractionIn::mutable_stenhancedimage() {
  // @@protoc_insertion_point(field_mutable:vlam.sa.FeatureExtractionIn.stEnhancedImage)
  return _internal_mutable_stenhancedimage();
}
inline void FeatureExtractionIn::set_allocated_stenhancedimage(::vpdata::camera::Camera_t* stenhancedimage) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(stenhancedimage_);
  }
  if (stenhancedimage) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stenhancedimage)->GetArena();
    if (message_arena != submessage_arena) {
      stenhancedimage = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, stenhancedimage, submessage_arena);
    }
    
  } else {
    
  }
  stenhancedimage_ = stenhancedimage;
  // @@protoc_insertion_point(field_set_allocated:vlam.sa.FeatureExtractionIn.stEnhancedImage)
}

// -------------------------------------------------------------------

// FeatureExtractionOut

// .VgeoDB.PlaceVectorSet arstPlaceVectorList = 11;
inline bool FeatureExtractionOut::_internal_has_arstplacevectorlist() const {
  return this != internal_default_instance() && arstplacevectorlist_ != nullptr;
}
inline bool FeatureExtractionOut::has_arstplacevectorlist() const {
  return _internal_has_arstplacevectorlist();
}
inline const ::VgeoDB::PlaceVectorSet& FeatureExtractionOut::_internal_arstplacevectorlist() const {
  const ::VgeoDB::PlaceVectorSet* p = arstplacevectorlist_;
  return p != nullptr ? *p : reinterpret_cast<const ::VgeoDB::PlaceVectorSet&>(
      ::VgeoDB::_PlaceVectorSet_default_instance_);
}
inline const ::VgeoDB::PlaceVectorSet& FeatureExtractionOut::arstplacevectorlist() const {
  // @@protoc_insertion_point(field_get:vlam.sa.FeatureExtractionOut.arstPlaceVectorList)
  return _internal_arstplacevectorlist();
}
inline void FeatureExtractionOut::unsafe_arena_set_allocated_arstplacevectorlist(
    ::VgeoDB::PlaceVectorSet* arstplacevectorlist) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(arstplacevectorlist_);
  }
  arstplacevectorlist_ = arstplacevectorlist;
  if (arstplacevectorlist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:vlam.sa.FeatureExtractionOut.arstPlaceVectorList)
}
inline ::VgeoDB::PlaceVectorSet* FeatureExtractionOut::release_arstplacevectorlist() {
  
  ::VgeoDB::PlaceVectorSet* temp = arstplacevectorlist_;
  arstplacevectorlist_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::VgeoDB::PlaceVectorSet* FeatureExtractionOut::unsafe_arena_release_arstplacevectorlist() {
  // @@protoc_insertion_point(field_release:vlam.sa.FeatureExtractionOut.arstPlaceVectorList)
  
  ::VgeoDB::PlaceVectorSet* temp = arstplacevectorlist_;
  arstplacevectorlist_ = nullptr;
  return temp;
}
inline ::VgeoDB::PlaceVectorSet* FeatureExtractionOut::_internal_mutable_arstplacevectorlist() {
  
  if (arstplacevectorlist_ == nullptr) {
    auto* p = CreateMaybeMessage<::VgeoDB::PlaceVectorSet>(GetArena());
    arstplacevectorlist_ = p;
  }
  return arstplacevectorlist_;
}
inline ::VgeoDB::PlaceVectorSet* FeatureExtractionOut::mutable_arstplacevectorlist() {
  // @@protoc_insertion_point(field_mutable:vlam.sa.FeatureExtractionOut.arstPlaceVectorList)
  return _internal_mutable_arstplacevectorlist();
}
inline void FeatureExtractionOut::set_allocated_arstplacevectorlist(::VgeoDB::PlaceVectorSet* arstplacevectorlist) {
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
  // @@protoc_insertion_point(field_set_allocated:vlam.sa.FeatureExtractionOut.arstPlaceVectorList)
}

// .VgeoDB.LocalFeatureSet arstLocalFeatureList = 12;
inline bool FeatureExtractionOut::_internal_has_arstlocalfeaturelist() const {
  return this != internal_default_instance() && arstlocalfeaturelist_ != nullptr;
}
inline bool FeatureExtractionOut::has_arstlocalfeaturelist() const {
  return _internal_has_arstlocalfeaturelist();
}
inline const ::VgeoDB::LocalFeatureSet& FeatureExtractionOut::_internal_arstlocalfeaturelist() const {
  const ::VgeoDB::LocalFeatureSet* p = arstlocalfeaturelist_;
  return p != nullptr ? *p : reinterpret_cast<const ::VgeoDB::LocalFeatureSet&>(
      ::VgeoDB::_LocalFeatureSet_default_instance_);
}
inline const ::VgeoDB::LocalFeatureSet& FeatureExtractionOut::arstlocalfeaturelist() const {
  // @@protoc_insertion_point(field_get:vlam.sa.FeatureExtractionOut.arstLocalFeatureList)
  return _internal_arstlocalfeaturelist();
}
inline void FeatureExtractionOut::unsafe_arena_set_allocated_arstlocalfeaturelist(
    ::VgeoDB::LocalFeatureSet* arstlocalfeaturelist) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(arstlocalfeaturelist_);
  }
  arstlocalfeaturelist_ = arstlocalfeaturelist;
  if (arstlocalfeaturelist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:vlam.sa.FeatureExtractionOut.arstLocalFeatureList)
}
inline ::VgeoDB::LocalFeatureSet* FeatureExtractionOut::release_arstlocalfeaturelist() {
  
  ::VgeoDB::LocalFeatureSet* temp = arstlocalfeaturelist_;
  arstlocalfeaturelist_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::VgeoDB::LocalFeatureSet* FeatureExtractionOut::unsafe_arena_release_arstlocalfeaturelist() {
  // @@protoc_insertion_point(field_release:vlam.sa.FeatureExtractionOut.arstLocalFeatureList)
  
  ::VgeoDB::LocalFeatureSet* temp = arstlocalfeaturelist_;
  arstlocalfeaturelist_ = nullptr;
  return temp;
}
inline ::VgeoDB::LocalFeatureSet* FeatureExtractionOut::_internal_mutable_arstlocalfeaturelist() {
  
  if (arstlocalfeaturelist_ == nullptr) {
    auto* p = CreateMaybeMessage<::VgeoDB::LocalFeatureSet>(GetArena());
    arstlocalfeaturelist_ = p;
  }
  return arstlocalfeaturelist_;
}
inline ::VgeoDB::LocalFeatureSet* FeatureExtractionOut::mutable_arstlocalfeaturelist() {
  // @@protoc_insertion_point(field_mutable:vlam.sa.FeatureExtractionOut.arstLocalFeatureList)
  return _internal_mutable_arstlocalfeaturelist();
}
inline void FeatureExtractionOut::set_allocated_arstlocalfeaturelist(::VgeoDB::LocalFeatureSet* arstlocalfeaturelist) {
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
  // @@protoc_insertion_point(field_set_allocated:vlam.sa.FeatureExtractionOut.arstLocalFeatureList)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sa
}  // namespace vlam

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_FeatureExtraction_2eproto
