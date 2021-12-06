// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: prdb.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_prdb_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_prdb_2eproto

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
#include "prdb_meta.pb.h"
#include "prdb_netvlad.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_prdb_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_prdb_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_prdb_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_prdb_2eproto_metadata_getter(int index);
namespace prdb {
class PRDBSet_t;
struct PRDBSet_tDefaultTypeInternal;
extern PRDBSet_tDefaultTypeInternal _PRDBSet_t_default_instance_;
class PRDBUnit_t;
struct PRDBUnit_tDefaultTypeInternal;
extern PRDBUnit_tDefaultTypeInternal _PRDBUnit_t_default_instance_;
}  // namespace prdb
PROTOBUF_NAMESPACE_OPEN
template<> ::prdb::PRDBSet_t* Arena::CreateMaybeMessage<::prdb::PRDBSet_t>(Arena*);
template<> ::prdb::PRDBUnit_t* Arena::CreateMaybeMessage<::prdb::PRDBUnit_t>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace prdb {

// ===================================================================

class PRDBUnit_t PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:prdb.PRDBUnit_t) */ {
 public:
  inline PRDBUnit_t() : PRDBUnit_t(nullptr) {}
  virtual ~PRDBUnit_t();
  explicit constexpr PRDBUnit_t(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PRDBUnit_t(const PRDBUnit_t& from);
  PRDBUnit_t(PRDBUnit_t&& from) noexcept
    : PRDBUnit_t() {
    *this = ::std::move(from);
  }

  inline PRDBUnit_t& operator=(const PRDBUnit_t& from) {
    CopyFrom(from);
    return *this;
  }
  inline PRDBUnit_t& operator=(PRDBUnit_t&& from) noexcept {
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
  static const PRDBUnit_t& default_instance() {
    return *internal_default_instance();
  }
  static inline const PRDBUnit_t* internal_default_instance() {
    return reinterpret_cast<const PRDBUnit_t*>(
               &_PRDBUnit_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PRDBUnit_t& a, PRDBUnit_t& b) {
    a.Swap(&b);
  }
  inline void Swap(PRDBUnit_t* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PRDBUnit_t* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PRDBUnit_t* New() const final {
    return CreateMaybeMessage<PRDBUnit_t>(nullptr);
  }

  PRDBUnit_t* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PRDBUnit_t>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PRDBUnit_t& from);
  void MergeFrom(const PRDBUnit_t& from);
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
  void InternalSwap(PRDBUnit_t* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "prdb.PRDBUnit_t";
  }
  protected:
  explicit PRDBUnit_t(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_prdb_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStMetaFieldNumber = 1,
    kStNetVLADVectorFieldNumber = 2,
  };
  // .prdb.meta.Meta_t stMeta = 1;
  bool has_stmeta() const;
  private:
  bool _internal_has_stmeta() const;
  public:
  void clear_stmeta();
  const ::prdb::meta::Meta_t& stmeta() const;
  ::prdb::meta::Meta_t* release_stmeta();
  ::prdb::meta::Meta_t* mutable_stmeta();
  void set_allocated_stmeta(::prdb::meta::Meta_t* stmeta);
  private:
  const ::prdb::meta::Meta_t& _internal_stmeta() const;
  ::prdb::meta::Meta_t* _internal_mutable_stmeta();
  public:
  void unsafe_arena_set_allocated_stmeta(
      ::prdb::meta::Meta_t* stmeta);
  ::prdb::meta::Meta_t* unsafe_arena_release_stmeta();

  // .prdb.netvlad.NetVLAD_t stNetVLADVector = 2;
  bool has_stnetvladvector() const;
  private:
  bool _internal_has_stnetvladvector() const;
  public:
  void clear_stnetvladvector();
  const ::prdb::netvlad::NetVLAD_t& stnetvladvector() const;
  ::prdb::netvlad::NetVLAD_t* release_stnetvladvector();
  ::prdb::netvlad::NetVLAD_t* mutable_stnetvladvector();
  void set_allocated_stnetvladvector(::prdb::netvlad::NetVLAD_t* stnetvladvector);
  private:
  const ::prdb::netvlad::NetVLAD_t& _internal_stnetvladvector() const;
  ::prdb::netvlad::NetVLAD_t* _internal_mutable_stnetvladvector();
  public:
  void unsafe_arena_set_allocated_stnetvladvector(
      ::prdb::netvlad::NetVLAD_t* stnetvladvector);
  ::prdb::netvlad::NetVLAD_t* unsafe_arena_release_stnetvladvector();

  // @@protoc_insertion_point(class_scope:prdb.PRDBUnit_t)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::prdb::meta::Meta_t* stmeta_;
  ::prdb::netvlad::NetVLAD_t* stnetvladvector_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_prdb_2eproto;
};
// -------------------------------------------------------------------

class PRDBSet_t PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:prdb.PRDBSet_t) */ {
 public:
  inline PRDBSet_t() : PRDBSet_t(nullptr) {}
  virtual ~PRDBSet_t();
  explicit constexpr PRDBSet_t(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PRDBSet_t(const PRDBSet_t& from);
  PRDBSet_t(PRDBSet_t&& from) noexcept
    : PRDBSet_t() {
    *this = ::std::move(from);
  }

  inline PRDBSet_t& operator=(const PRDBSet_t& from) {
    CopyFrom(from);
    return *this;
  }
  inline PRDBSet_t& operator=(PRDBSet_t&& from) noexcept {
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
  static const PRDBSet_t& default_instance() {
    return *internal_default_instance();
  }
  static inline const PRDBSet_t* internal_default_instance() {
    return reinterpret_cast<const PRDBSet_t*>(
               &_PRDBSet_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PRDBSet_t& a, PRDBSet_t& b) {
    a.Swap(&b);
  }
  inline void Swap(PRDBSet_t* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PRDBSet_t* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PRDBSet_t* New() const final {
    return CreateMaybeMessage<PRDBSet_t>(nullptr);
  }

  PRDBSet_t* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PRDBSet_t>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PRDBSet_t& from);
  void MergeFrom(const PRDBSet_t& from);
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
  void InternalSwap(PRDBSet_t* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "prdb.PRDBSet_t";
  }
  protected:
  explicit PRDBSet_t(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_prdb_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kArstPRDBSetFieldNumber = 1,
  };
  // repeated .prdb.PRDBUnit_t arstPRDBSet = 1;
  int arstprdbset_size() const;
  private:
  int _internal_arstprdbset_size() const;
  public:
  void clear_arstprdbset();
  ::prdb::PRDBUnit_t* mutable_arstprdbset(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::prdb::PRDBUnit_t >*
      mutable_arstprdbset();
  private:
  const ::prdb::PRDBUnit_t& _internal_arstprdbset(int index) const;
  ::prdb::PRDBUnit_t* _internal_add_arstprdbset();
  public:
  const ::prdb::PRDBUnit_t& arstprdbset(int index) const;
  ::prdb::PRDBUnit_t* add_arstprdbset();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::prdb::PRDBUnit_t >&
      arstprdbset() const;

  // @@protoc_insertion_point(class_scope:prdb.PRDBSet_t)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::prdb::PRDBUnit_t > arstprdbset_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_prdb_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PRDBUnit_t

// .prdb.meta.Meta_t stMeta = 1;
inline bool PRDBUnit_t::_internal_has_stmeta() const {
  return this != internal_default_instance() && stmeta_ != nullptr;
}
inline bool PRDBUnit_t::has_stmeta() const {
  return _internal_has_stmeta();
}
inline const ::prdb::meta::Meta_t& PRDBUnit_t::_internal_stmeta() const {
  const ::prdb::meta::Meta_t* p = stmeta_;
  return p != nullptr ? *p : reinterpret_cast<const ::prdb::meta::Meta_t&>(
      ::prdb::meta::_Meta_t_default_instance_);
}
inline const ::prdb::meta::Meta_t& PRDBUnit_t::stmeta() const {
  // @@protoc_insertion_point(field_get:prdb.PRDBUnit_t.stMeta)
  return _internal_stmeta();
}
inline void PRDBUnit_t::unsafe_arena_set_allocated_stmeta(
    ::prdb::meta::Meta_t* stmeta) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stmeta_);
  }
  stmeta_ = stmeta;
  if (stmeta) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:prdb.PRDBUnit_t.stMeta)
}
inline ::prdb::meta::Meta_t* PRDBUnit_t::release_stmeta() {
  
  ::prdb::meta::Meta_t* temp = stmeta_;
  stmeta_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::prdb::meta::Meta_t* PRDBUnit_t::unsafe_arena_release_stmeta() {
  // @@protoc_insertion_point(field_release:prdb.PRDBUnit_t.stMeta)
  
  ::prdb::meta::Meta_t* temp = stmeta_;
  stmeta_ = nullptr;
  return temp;
}
inline ::prdb::meta::Meta_t* PRDBUnit_t::_internal_mutable_stmeta() {
  
  if (stmeta_ == nullptr) {
    auto* p = CreateMaybeMessage<::prdb::meta::Meta_t>(GetArena());
    stmeta_ = p;
  }
  return stmeta_;
}
inline ::prdb::meta::Meta_t* PRDBUnit_t::mutable_stmeta() {
  // @@protoc_insertion_point(field_mutable:prdb.PRDBUnit_t.stMeta)
  return _internal_mutable_stmeta();
}
inline void PRDBUnit_t::set_allocated_stmeta(::prdb::meta::Meta_t* stmeta) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(stmeta_);
  }
  if (stmeta) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stmeta)->GetArena();
    if (message_arena != submessage_arena) {
      stmeta = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, stmeta, submessage_arena);
    }
    
  } else {
    
  }
  stmeta_ = stmeta;
  // @@protoc_insertion_point(field_set_allocated:prdb.PRDBUnit_t.stMeta)
}

// .prdb.netvlad.NetVLAD_t stNetVLADVector = 2;
inline bool PRDBUnit_t::_internal_has_stnetvladvector() const {
  return this != internal_default_instance() && stnetvladvector_ != nullptr;
}
inline bool PRDBUnit_t::has_stnetvladvector() const {
  return _internal_has_stnetvladvector();
}
inline const ::prdb::netvlad::NetVLAD_t& PRDBUnit_t::_internal_stnetvladvector() const {
  const ::prdb::netvlad::NetVLAD_t* p = stnetvladvector_;
  return p != nullptr ? *p : reinterpret_cast<const ::prdb::netvlad::NetVLAD_t&>(
      ::prdb::netvlad::_NetVLAD_t_default_instance_);
}
inline const ::prdb::netvlad::NetVLAD_t& PRDBUnit_t::stnetvladvector() const {
  // @@protoc_insertion_point(field_get:prdb.PRDBUnit_t.stNetVLADVector)
  return _internal_stnetvladvector();
}
inline void PRDBUnit_t::unsafe_arena_set_allocated_stnetvladvector(
    ::prdb::netvlad::NetVLAD_t* stnetvladvector) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stnetvladvector_);
  }
  stnetvladvector_ = stnetvladvector;
  if (stnetvladvector) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:prdb.PRDBUnit_t.stNetVLADVector)
}
inline ::prdb::netvlad::NetVLAD_t* PRDBUnit_t::release_stnetvladvector() {
  
  ::prdb::netvlad::NetVLAD_t* temp = stnetvladvector_;
  stnetvladvector_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::prdb::netvlad::NetVLAD_t* PRDBUnit_t::unsafe_arena_release_stnetvladvector() {
  // @@protoc_insertion_point(field_release:prdb.PRDBUnit_t.stNetVLADVector)
  
  ::prdb::netvlad::NetVLAD_t* temp = stnetvladvector_;
  stnetvladvector_ = nullptr;
  return temp;
}
inline ::prdb::netvlad::NetVLAD_t* PRDBUnit_t::_internal_mutable_stnetvladvector() {
  
  if (stnetvladvector_ == nullptr) {
    auto* p = CreateMaybeMessage<::prdb::netvlad::NetVLAD_t>(GetArena());
    stnetvladvector_ = p;
  }
  return stnetvladvector_;
}
inline ::prdb::netvlad::NetVLAD_t* PRDBUnit_t::mutable_stnetvladvector() {
  // @@protoc_insertion_point(field_mutable:prdb.PRDBUnit_t.stNetVLADVector)
  return _internal_mutable_stnetvladvector();
}
inline void PRDBUnit_t::set_allocated_stnetvladvector(::prdb::netvlad::NetVLAD_t* stnetvladvector) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(stnetvladvector_);
  }
  if (stnetvladvector) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stnetvladvector)->GetArena();
    if (message_arena != submessage_arena) {
      stnetvladvector = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, stnetvladvector, submessage_arena);
    }
    
  } else {
    
  }
  stnetvladvector_ = stnetvladvector;
  // @@protoc_insertion_point(field_set_allocated:prdb.PRDBUnit_t.stNetVLADVector)
}

// -------------------------------------------------------------------

// PRDBSet_t

// repeated .prdb.PRDBUnit_t arstPRDBSet = 1;
inline int PRDBSet_t::_internal_arstprdbset_size() const {
  return arstprdbset_.size();
}
inline int PRDBSet_t::arstprdbset_size() const {
  return _internal_arstprdbset_size();
}
inline void PRDBSet_t::clear_arstprdbset() {
  arstprdbset_.Clear();
}
inline ::prdb::PRDBUnit_t* PRDBSet_t::mutable_arstprdbset(int index) {
  // @@protoc_insertion_point(field_mutable:prdb.PRDBSet_t.arstPRDBSet)
  return arstprdbset_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::prdb::PRDBUnit_t >*
PRDBSet_t::mutable_arstprdbset() {
  // @@protoc_insertion_point(field_mutable_list:prdb.PRDBSet_t.arstPRDBSet)
  return &arstprdbset_;
}
inline const ::prdb::PRDBUnit_t& PRDBSet_t::_internal_arstprdbset(int index) const {
  return arstprdbset_.Get(index);
}
inline const ::prdb::PRDBUnit_t& PRDBSet_t::arstprdbset(int index) const {
  // @@protoc_insertion_point(field_get:prdb.PRDBSet_t.arstPRDBSet)
  return _internal_arstprdbset(index);
}
inline ::prdb::PRDBUnit_t* PRDBSet_t::_internal_add_arstprdbset() {
  return arstprdbset_.Add();
}
inline ::prdb::PRDBUnit_t* PRDBSet_t::add_arstprdbset() {
  // @@protoc_insertion_point(field_add:prdb.PRDBSet_t.arstPRDBSet)
  return _internal_add_arstprdbset();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::prdb::PRDBUnit_t >&
PRDBSet_t::arstprdbset() const {
  // @@protoc_insertion_point(field_list:prdb.PRDBSet_t.arstPRDBSet)
  return arstprdbset_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace prdb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_prdb_2eproto
