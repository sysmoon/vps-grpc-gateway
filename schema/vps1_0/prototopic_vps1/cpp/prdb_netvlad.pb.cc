// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: prdb_netvlad.proto

#include "prdb_netvlad.pb.h"

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
namespace prdb {
namespace netvlad {
constexpr NetVLAD_t::NetVLAD_t(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : arf32descriptor_()
  , _arf32descriptor_cached_byte_size_(){}
struct NetVLAD_tDefaultTypeInternal {
  constexpr NetVLAD_tDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NetVLAD_tDefaultTypeInternal() {}
  union {
    NetVLAD_t _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NetVLAD_tDefaultTypeInternal _NetVLAD_t_default_instance_;
constexpr NetvladDB_t::NetvladDB_t(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : stdescriptorvector_(){}
struct NetvladDB_tDefaultTypeInternal {
  constexpr NetvladDB_tDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NetvladDB_tDefaultTypeInternal() {}
  union {
    NetvladDB_t _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NetvladDB_tDefaultTypeInternal _NetvladDB_t_default_instance_;
}  // namespace netvlad
}  // namespace prdb
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_prdb_5fnetvlad_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_prdb_5fnetvlad_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_prdb_5fnetvlad_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_prdb_5fnetvlad_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::prdb::netvlad::NetVLAD_t, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::prdb::netvlad::NetVLAD_t, arf32descriptor_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::prdb::netvlad::NetvladDB_t, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::prdb::netvlad::NetvladDB_t, stdescriptorvector_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::prdb::netvlad::NetVLAD_t)},
  { 6, -1, sizeof(::prdb::netvlad::NetvladDB_t)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::prdb::netvlad::_NetVLAD_t_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::prdb::netvlad::_NetvladDB_t_default_instance_),
};

const char descriptor_table_protodef_prdb_5fnetvlad_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022prdb_netvlad.proto\022\014prdb.netvlad\"$\n\tNe"
  "tVLAD_t\022\027\n\017arf32Descriptor\030\001 \003(\002\"B\n\013Netv"
  "ladDB_t\0223\n\022stDescriptorVector\030\001 \003(\0132\027.pr"
  "db.netvlad.NetVLAD_tB\013\n\tdbms.prdbb\006proto"
  "3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_prdb_5fnetvlad_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_prdb_5fnetvlad_2eproto = {
  false, false, 161, descriptor_table_protodef_prdb_5fnetvlad_2eproto, "prdb_netvlad.proto", 
  &descriptor_table_prdb_5fnetvlad_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_prdb_5fnetvlad_2eproto::offsets,
  file_level_metadata_prdb_5fnetvlad_2eproto, file_level_enum_descriptors_prdb_5fnetvlad_2eproto, file_level_service_descriptors_prdb_5fnetvlad_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_prdb_5fnetvlad_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_prdb_5fnetvlad_2eproto);
  return descriptor_table_prdb_5fnetvlad_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_prdb_5fnetvlad_2eproto(&descriptor_table_prdb_5fnetvlad_2eproto);
namespace prdb {
namespace netvlad {

// ===================================================================

class NetVLAD_t::_Internal {
 public:
};

NetVLAD_t::NetVLAD_t(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  arf32descriptor_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:prdb.netvlad.NetVLAD_t)
}
NetVLAD_t::NetVLAD_t(const NetVLAD_t& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      arf32descriptor_(from.arf32descriptor_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:prdb.netvlad.NetVLAD_t)
}

void NetVLAD_t::SharedCtor() {
}

NetVLAD_t::~NetVLAD_t() {
  // @@protoc_insertion_point(destructor:prdb.netvlad.NetVLAD_t)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void NetVLAD_t::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void NetVLAD_t::ArenaDtor(void* object) {
  NetVLAD_t* _this = reinterpret_cast< NetVLAD_t* >(object);
  (void)_this;
}
void NetVLAD_t::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NetVLAD_t::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NetVLAD_t::Clear() {
// @@protoc_insertion_point(message_clear_start:prdb.netvlad.NetVLAD_t)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  arf32descriptor_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NetVLAD_t::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated float arf32Descriptor = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_arf32descriptor(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13) {
          _internal_add_arf32descriptor(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* NetVLAD_t::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:prdb.netvlad.NetVLAD_t)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float arf32Descriptor = 1;
  if (this->_internal_arf32descriptor_size() > 0) {
    target = stream->WriteFixedPacked(1, _internal_arf32descriptor(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:prdb.netvlad.NetVLAD_t)
  return target;
}

size_t NetVLAD_t::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:prdb.netvlad.NetVLAD_t)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float arf32Descriptor = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_arf32descriptor_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _arf32descriptor_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NetVLAD_t::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:prdb.netvlad.NetVLAD_t)
  GOOGLE_DCHECK_NE(&from, this);
  const NetVLAD_t* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NetVLAD_t>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:prdb.netvlad.NetVLAD_t)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:prdb.netvlad.NetVLAD_t)
    MergeFrom(*source);
  }
}

void NetVLAD_t::MergeFrom(const NetVLAD_t& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:prdb.netvlad.NetVLAD_t)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  arf32descriptor_.MergeFrom(from.arf32descriptor_);
}

void NetVLAD_t::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:prdb.netvlad.NetVLAD_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NetVLAD_t::CopyFrom(const NetVLAD_t& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:prdb.netvlad.NetVLAD_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetVLAD_t::IsInitialized() const {
  return true;
}

void NetVLAD_t::InternalSwap(NetVLAD_t* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  arf32descriptor_.InternalSwap(&other->arf32descriptor_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NetVLAD_t::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class NetvladDB_t::_Internal {
 public:
};

NetvladDB_t::NetvladDB_t(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  stdescriptorvector_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:prdb.netvlad.NetvladDB_t)
}
NetvladDB_t::NetvladDB_t(const NetvladDB_t& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      stdescriptorvector_(from.stdescriptorvector_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:prdb.netvlad.NetvladDB_t)
}

void NetvladDB_t::SharedCtor() {
}

NetvladDB_t::~NetvladDB_t() {
  // @@protoc_insertion_point(destructor:prdb.netvlad.NetvladDB_t)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void NetvladDB_t::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void NetvladDB_t::ArenaDtor(void* object) {
  NetvladDB_t* _this = reinterpret_cast< NetvladDB_t* >(object);
  (void)_this;
}
void NetvladDB_t::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NetvladDB_t::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NetvladDB_t::Clear() {
// @@protoc_insertion_point(message_clear_start:prdb.netvlad.NetvladDB_t)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  stdescriptorvector_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NetvladDB_t::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .prdb.netvlad.NetVLAD_t stDescriptorVector = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_stdescriptorvector(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* NetvladDB_t::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:prdb.netvlad.NetvladDB_t)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .prdb.netvlad.NetVLAD_t stDescriptorVector = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_stdescriptorvector_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_stdescriptorvector(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:prdb.netvlad.NetvladDB_t)
  return target;
}

size_t NetvladDB_t::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:prdb.netvlad.NetvladDB_t)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .prdb.netvlad.NetVLAD_t stDescriptorVector = 1;
  total_size += 1UL * this->_internal_stdescriptorvector_size();
  for (const auto& msg : this->stdescriptorvector_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NetvladDB_t::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:prdb.netvlad.NetvladDB_t)
  GOOGLE_DCHECK_NE(&from, this);
  const NetvladDB_t* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NetvladDB_t>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:prdb.netvlad.NetvladDB_t)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:prdb.netvlad.NetvladDB_t)
    MergeFrom(*source);
  }
}

void NetvladDB_t::MergeFrom(const NetvladDB_t& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:prdb.netvlad.NetvladDB_t)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  stdescriptorvector_.MergeFrom(from.stdescriptorvector_);
}

void NetvladDB_t::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:prdb.netvlad.NetvladDB_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NetvladDB_t::CopyFrom(const NetvladDB_t& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:prdb.netvlad.NetvladDB_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetvladDB_t::IsInitialized() const {
  return true;
}

void NetvladDB_t::InternalSwap(NetvladDB_t* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  stdescriptorvector_.InternalSwap(&other->stdescriptorvector_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NetvladDB_t::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace netvlad
}  // namespace prdb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::prdb::netvlad::NetVLAD_t* Arena::CreateMaybeMessage< ::prdb::netvlad::NetVLAD_t >(Arena* arena) {
  return Arena::CreateMessageInternal< ::prdb::netvlad::NetVLAD_t >(arena);
}
template<> PROTOBUF_NOINLINE ::prdb::netvlad::NetvladDB_t* Arena::CreateMaybeMessage< ::prdb::netvlad::NetvladDB_t >(Arena* arena) {
  return Arena::CreateMessageInternal< ::prdb::netvlad::NetvladDB_t >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>