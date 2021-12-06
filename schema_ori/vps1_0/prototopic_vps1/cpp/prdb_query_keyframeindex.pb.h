// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: prdb_query_keyframeindex.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_prdb_5fquery_5fkeyframeindex_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_prdb_5fquery_5fkeyframeindex_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_prdb_5fquery_5fkeyframeindex_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_prdb_5fquery_5fkeyframeindex_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_prdb_5fquery_5fkeyframeindex_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_prdb_5fquery_5fkeyframeindex_2eproto_metadata_getter(int index);
namespace prdb {
namespace keyframeindex {
class KeyFrameIndexQ;
struct KeyFrameIndexQDefaultTypeInternal;
extern KeyFrameIndexQDefaultTypeInternal _KeyFrameIndexQ_default_instance_;
}  // namespace keyframeindex
}  // namespace prdb
PROTOBUF_NAMESPACE_OPEN
template<> ::prdb::keyframeindex::KeyFrameIndexQ* Arena::CreateMaybeMessage<::prdb::keyframeindex::KeyFrameIndexQ>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace prdb {
namespace keyframeindex {

// ===================================================================

class KeyFrameIndexQ PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:prdb.keyframeindex.KeyFrameIndexQ) */ {
 public:
  inline KeyFrameIndexQ() : KeyFrameIndexQ(nullptr) {}
  virtual ~KeyFrameIndexQ();
  explicit constexpr KeyFrameIndexQ(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  KeyFrameIndexQ(const KeyFrameIndexQ& from);
  KeyFrameIndexQ(KeyFrameIndexQ&& from) noexcept
    : KeyFrameIndexQ() {
    *this = ::std::move(from);
  }

  inline KeyFrameIndexQ& operator=(const KeyFrameIndexQ& from) {
    CopyFrom(from);
    return *this;
  }
  inline KeyFrameIndexQ& operator=(KeyFrameIndexQ&& from) noexcept {
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
  static const KeyFrameIndexQ& default_instance() {
    return *internal_default_instance();
  }
  static inline const KeyFrameIndexQ* internal_default_instance() {
    return reinterpret_cast<const KeyFrameIndexQ*>(
               &_KeyFrameIndexQ_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KeyFrameIndexQ& a, KeyFrameIndexQ& b) {
    a.Swap(&b);
  }
  inline void Swap(KeyFrameIndexQ* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(KeyFrameIndexQ* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline KeyFrameIndexQ* New() const final {
    return CreateMaybeMessage<KeyFrameIndexQ>(nullptr);
  }

  KeyFrameIndexQ* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<KeyFrameIndexQ>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const KeyFrameIndexQ& from);
  void MergeFrom(const KeyFrameIndexQ& from);
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
  void InternalSwap(KeyFrameIndexQ* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "prdb.keyframeindex.KeyFrameIndexQ";
  }
  protected:
  explicit KeyFrameIndexQ(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_prdb_5fquery_5fkeyframeindex_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kU64KeyFrameIndexFieldNumber = 1,
    kU8LocalFeatureFlagFieldNumber = 2,
  };
  // repeated uint64 u64KeyFrameIndex = 1;
  int u64keyframeindex_size() const;
  private:
  int _internal_u64keyframeindex_size() const;
  public:
  void clear_u64keyframeindex();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_u64keyframeindex(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >&
      _internal_u64keyframeindex() const;
  void _internal_add_u64keyframeindex(::PROTOBUF_NAMESPACE_ID::uint64 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >*
      _internal_mutable_u64keyframeindex();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint64 u64keyframeindex(int index) const;
  void set_u64keyframeindex(int index, ::PROTOBUF_NAMESPACE_ID::uint64 value);
  void add_u64keyframeindex(::PROTOBUF_NAMESPACE_ID::uint64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >&
      u64keyframeindex() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >*
      mutable_u64keyframeindex();

  // uint32 u8LocalFeatureFlag = 2;
  void clear_u8localfeatureflag();
  ::PROTOBUF_NAMESPACE_ID::uint32 u8localfeatureflag() const;
  void set_u8localfeatureflag(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_u8localfeatureflag() const;
  void _internal_set_u8localfeatureflag(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:prdb.keyframeindex.KeyFrameIndexQ)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 > u64keyframeindex_;
  mutable std::atomic<int> _u64keyframeindex_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 u8localfeatureflag_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_prdb_5fquery_5fkeyframeindex_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KeyFrameIndexQ

// repeated uint64 u64KeyFrameIndex = 1;
inline int KeyFrameIndexQ::_internal_u64keyframeindex_size() const {
  return u64keyframeindex_.size();
}
inline int KeyFrameIndexQ::u64keyframeindex_size() const {
  return _internal_u64keyframeindex_size();
}
inline void KeyFrameIndexQ::clear_u64keyframeindex() {
  u64keyframeindex_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 KeyFrameIndexQ::_internal_u64keyframeindex(int index) const {
  return u64keyframeindex_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 KeyFrameIndexQ::u64keyframeindex(int index) const {
  // @@protoc_insertion_point(field_get:prdb.keyframeindex.KeyFrameIndexQ.u64KeyFrameIndex)
  return _internal_u64keyframeindex(index);
}
inline void KeyFrameIndexQ::set_u64keyframeindex(int index, ::PROTOBUF_NAMESPACE_ID::uint64 value) {
  u64keyframeindex_.Set(index, value);
  // @@protoc_insertion_point(field_set:prdb.keyframeindex.KeyFrameIndexQ.u64KeyFrameIndex)
}
inline void KeyFrameIndexQ::_internal_add_u64keyframeindex(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  u64keyframeindex_.Add(value);
}
inline void KeyFrameIndexQ::add_u64keyframeindex(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_add_u64keyframeindex(value);
  // @@protoc_insertion_point(field_add:prdb.keyframeindex.KeyFrameIndexQ.u64KeyFrameIndex)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >&
KeyFrameIndexQ::_internal_u64keyframeindex() const {
  return u64keyframeindex_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >&
KeyFrameIndexQ::u64keyframeindex() const {
  // @@protoc_insertion_point(field_list:prdb.keyframeindex.KeyFrameIndexQ.u64KeyFrameIndex)
  return _internal_u64keyframeindex();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >*
KeyFrameIndexQ::_internal_mutable_u64keyframeindex() {
  return &u64keyframeindex_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint64 >*
KeyFrameIndexQ::mutable_u64keyframeindex() {
  // @@protoc_insertion_point(field_mutable_list:prdb.keyframeindex.KeyFrameIndexQ.u64KeyFrameIndex)
  return _internal_mutable_u64keyframeindex();
}

// uint32 u8LocalFeatureFlag = 2;
inline void KeyFrameIndexQ::clear_u8localfeatureflag() {
  u8localfeatureflag_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 KeyFrameIndexQ::_internal_u8localfeatureflag() const {
  return u8localfeatureflag_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 KeyFrameIndexQ::u8localfeatureflag() const {
  // @@protoc_insertion_point(field_get:prdb.keyframeindex.KeyFrameIndexQ.u8LocalFeatureFlag)
  return _internal_u8localfeatureflag();
}
inline void KeyFrameIndexQ::_internal_set_u8localfeatureflag(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  u8localfeatureflag_ = value;
}
inline void KeyFrameIndexQ::set_u8localfeatureflag(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_u8localfeatureflag(value);
  // @@protoc_insertion_point(field_set:prdb.keyframeindex.KeyFrameIndexQ.u8LocalFeatureFlag)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace keyframeindex
}  // namespace prdb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_prdb_5fquery_5fkeyframeindex_2eproto
