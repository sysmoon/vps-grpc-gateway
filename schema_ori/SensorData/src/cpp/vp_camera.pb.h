// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vp_camera.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_vp_5fcamera_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_vp_5fcamera_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "vgeodb_common.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_vp_5fcamera_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_vp_5fcamera_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_vp_5fcamera_2eproto;
namespace vpdata {
namespace camera {
class Camera_t;
struct Camera_tDefaultTypeInternal;
extern Camera_tDefaultTypeInternal _Camera_t_default_instance_;
}  // namespace camera
}  // namespace vpdata
PROTOBUF_NAMESPACE_OPEN
template<> ::vpdata::camera::Camera_t* Arena::CreateMaybeMessage<::vpdata::camera::Camera_t>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace vpdata {
namespace camera {

enum Camera_t_CameraType : int {
  Camera_t_CameraType_eCameraStart = 0,
  Camera_t_CameraType_eFront_1 = 1,
  Camera_t_CameraType_eFront_2 = 2,
  Camera_t_CameraType_eFront_End = 4,
  Camera_t_CameraType_eBack_1 = 8,
  Camera_t_CameraType_eBack_2 = 16,
  Camera_t_CameraType_eBack_3 = 32,
  Camera_t_CameraType_eBack_4 = 64,
  Camera_t_CameraType_eBack_5 = 128,
  Camera_t_CameraType_eBack_6 = 256,
  Camera_t_CameraType_eBack_End = 512,
  Camera_t_CameraType_Camera_t_CameraType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Camera_t_CameraType_Camera_t_CameraType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Camera_t_CameraType_IsValid(int value);
constexpr Camera_t_CameraType Camera_t_CameraType_CameraType_MIN = Camera_t_CameraType_eCameraStart;
constexpr Camera_t_CameraType Camera_t_CameraType_CameraType_MAX = Camera_t_CameraType_eBack_End;
constexpr int Camera_t_CameraType_CameraType_ARRAYSIZE = Camera_t_CameraType_CameraType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Camera_t_CameraType_descriptor();
template<typename T>
inline const std::string& Camera_t_CameraType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Camera_t_CameraType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Camera_t_CameraType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Camera_t_CameraType_descriptor(), enum_t_value);
}
inline bool Camera_t_CameraType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Camera_t_CameraType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Camera_t_CameraType>(
    Camera_t_CameraType_descriptor(), name, value);
}
enum Camera_t_Codec : int {
  Camera_t_Codec_eUNKNOWN_CODEC = 0,
  Camera_t_Codec_eUNCOMPRESSED = 1,
  Camera_t_Codec_eJPG = 2,
  Camera_t_Codec_ePNG = 3,
  Camera_t_Codec_Camera_t_Codec_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Camera_t_Codec_Camera_t_Codec_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Camera_t_Codec_IsValid(int value);
constexpr Camera_t_Codec Camera_t_Codec_Codec_MIN = Camera_t_Codec_eUNKNOWN_CODEC;
constexpr Camera_t_Codec Camera_t_Codec_Codec_MAX = Camera_t_Codec_ePNG;
constexpr int Camera_t_Codec_Codec_ARRAYSIZE = Camera_t_Codec_Codec_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Camera_t_Codec_descriptor();
template<typename T>
inline const std::string& Camera_t_Codec_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Camera_t_Codec>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Camera_t_Codec_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Camera_t_Codec_descriptor(), enum_t_value);
}
inline bool Camera_t_Codec_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Camera_t_Codec* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Camera_t_Codec>(
    Camera_t_Codec_descriptor(), name, value);
}
enum Camera_t_PixelFormat : int {
  Camera_t_PixelFormat_eUNKNOWN_FORMAT = 0,
  Camera_t_PixelFormat_e8BIT = 10,
  Camera_t_PixelFormat_eGRAY8 = 11,
  Camera_t_PixelFormat_eRGB8 = 12,
  Camera_t_PixelFormat_eBGR8 = 13,
  Camera_t_PixelFormat_e16BIT = 20,
  Camera_t_PixelFormat_eGRAY12 = 21,
  Camera_t_PixelFormat_eGRAY14 = 22,
  Camera_t_PixelFormat_eGRAY16 = 23,
  Camera_t_PixelFormat_eRGB12 = 24,
  Camera_t_PixelFormat_eBGR12 = 25,
  Camera_t_PixelFormat_eRGB14 = 26,
  Camera_t_PixelFormat_eBGR14 = 27,
  Camera_t_PixelFormat_eRGB16 = 28,
  Camera_t_PixelFormat_eBGR16 = 29,
  Camera_t_PixelFormat_e32BIT = 30,
  Camera_t_PixelFormat_eGRAY32U = 31,
  Camera_t_PixelFormat_eRGB32U = 32,
  Camera_t_PixelFormat_eBGR32U = 33,
  Camera_t_PixelFormat_eGRAY32F = 34,
  Camera_t_PixelFormat_eRGB32F = 35,
  Camera_t_PixelFormat_eBGR32F = 36,
  Camera_t_PixelFormat_eCOMPRESSED = 50,
  Camera_t_PixelFormat_eYUV420P8 = 51,
  Camera_t_PixelFormat_eYUYV422I8 = 52,
  Camera_t_PixelFormat_eUYVY422I8 = 53,
  Camera_t_PixelFormat_Camera_t_PixelFormat_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Camera_t_PixelFormat_Camera_t_PixelFormat_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Camera_t_PixelFormat_IsValid(int value);
constexpr Camera_t_PixelFormat Camera_t_PixelFormat_PixelFormat_MIN = Camera_t_PixelFormat_eUNKNOWN_FORMAT;
constexpr Camera_t_PixelFormat Camera_t_PixelFormat_PixelFormat_MAX = Camera_t_PixelFormat_eUYVY422I8;
constexpr int Camera_t_PixelFormat_PixelFormat_ARRAYSIZE = Camera_t_PixelFormat_PixelFormat_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Camera_t_PixelFormat_descriptor();
template<typename T>
inline const std::string& Camera_t_PixelFormat_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Camera_t_PixelFormat>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Camera_t_PixelFormat_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Camera_t_PixelFormat_descriptor(), enum_t_value);
}
inline bool Camera_t_PixelFormat_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Camera_t_PixelFormat* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Camera_t_PixelFormat>(
    Camera_t_PixelFormat_descriptor(), name, value);
}
// ===================================================================

class Camera_t final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:vpdata.camera.Camera_t) */ {
 public:
  inline Camera_t() : Camera_t(nullptr) {}
  ~Camera_t() override;
  explicit constexpr Camera_t(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Camera_t(const Camera_t& from);
  Camera_t(Camera_t&& from) noexcept
    : Camera_t() {
    *this = ::std::move(from);
  }

  inline Camera_t& operator=(const Camera_t& from) {
    CopyFrom(from);
    return *this;
  }
  inline Camera_t& operator=(Camera_t&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Camera_t& default_instance() {
    return *internal_default_instance();
  }
  static inline const Camera_t* internal_default_instance() {
    return reinterpret_cast<const Camera_t*>(
               &_Camera_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Camera_t& a, Camera_t& b) {
    a.Swap(&b);
  }
  inline void Swap(Camera_t* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Camera_t* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Camera_t* New() const final {
    return new Camera_t();
  }

  Camera_t* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Camera_t>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Camera_t& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Camera_t& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Camera_t* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "vpdata.camera.Camera_t";
  }
  protected:
  explicit Camera_t(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Camera_t_CameraType CameraType;
  static constexpr CameraType eCameraStart =
    Camera_t_CameraType_eCameraStart;
  static constexpr CameraType eFront_1 =
    Camera_t_CameraType_eFront_1;
  static constexpr CameraType eFront_2 =
    Camera_t_CameraType_eFront_2;
  static constexpr CameraType eFront_End =
    Camera_t_CameraType_eFront_End;
  static constexpr CameraType eBack_1 =
    Camera_t_CameraType_eBack_1;
  static constexpr CameraType eBack_2 =
    Camera_t_CameraType_eBack_2;
  static constexpr CameraType eBack_3 =
    Camera_t_CameraType_eBack_3;
  static constexpr CameraType eBack_4 =
    Camera_t_CameraType_eBack_4;
  static constexpr CameraType eBack_5 =
    Camera_t_CameraType_eBack_5;
  static constexpr CameraType eBack_6 =
    Camera_t_CameraType_eBack_6;
  static constexpr CameraType eBack_End =
    Camera_t_CameraType_eBack_End;
  static inline bool CameraType_IsValid(int value) {
    return Camera_t_CameraType_IsValid(value);
  }
  static constexpr CameraType CameraType_MIN =
    Camera_t_CameraType_CameraType_MIN;
  static constexpr CameraType CameraType_MAX =
    Camera_t_CameraType_CameraType_MAX;
  static constexpr int CameraType_ARRAYSIZE =
    Camera_t_CameraType_CameraType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CameraType_descriptor() {
    return Camera_t_CameraType_descriptor();
  }
  template<typename T>
  static inline const std::string& CameraType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CameraType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CameraType_Name.");
    return Camera_t_CameraType_Name(enum_t_value);
  }
  static inline bool CameraType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CameraType* value) {
    return Camera_t_CameraType_Parse(name, value);
  }

  typedef Camera_t_Codec Codec;
  static constexpr Codec eUNKNOWN_CODEC =
    Camera_t_Codec_eUNKNOWN_CODEC;
  static constexpr Codec eUNCOMPRESSED =
    Camera_t_Codec_eUNCOMPRESSED;
  static constexpr Codec eJPG =
    Camera_t_Codec_eJPG;
  static constexpr Codec ePNG =
    Camera_t_Codec_ePNG;
  static inline bool Codec_IsValid(int value) {
    return Camera_t_Codec_IsValid(value);
  }
  static constexpr Codec Codec_MIN =
    Camera_t_Codec_Codec_MIN;
  static constexpr Codec Codec_MAX =
    Camera_t_Codec_Codec_MAX;
  static constexpr int Codec_ARRAYSIZE =
    Camera_t_Codec_Codec_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Codec_descriptor() {
    return Camera_t_Codec_descriptor();
  }
  template<typename T>
  static inline const std::string& Codec_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Codec>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Codec_Name.");
    return Camera_t_Codec_Name(enum_t_value);
  }
  static inline bool Codec_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Codec* value) {
    return Camera_t_Codec_Parse(name, value);
  }

  typedef Camera_t_PixelFormat PixelFormat;
  static constexpr PixelFormat eUNKNOWN_FORMAT =
    Camera_t_PixelFormat_eUNKNOWN_FORMAT;
  static constexpr PixelFormat e8BIT =
    Camera_t_PixelFormat_e8BIT;
  static constexpr PixelFormat eGRAY8 =
    Camera_t_PixelFormat_eGRAY8;
  static constexpr PixelFormat eRGB8 =
    Camera_t_PixelFormat_eRGB8;
  static constexpr PixelFormat eBGR8 =
    Camera_t_PixelFormat_eBGR8;
  static constexpr PixelFormat e16BIT =
    Camera_t_PixelFormat_e16BIT;
  static constexpr PixelFormat eGRAY12 =
    Camera_t_PixelFormat_eGRAY12;
  static constexpr PixelFormat eGRAY14 =
    Camera_t_PixelFormat_eGRAY14;
  static constexpr PixelFormat eGRAY16 =
    Camera_t_PixelFormat_eGRAY16;
  static constexpr PixelFormat eRGB12 =
    Camera_t_PixelFormat_eRGB12;
  static constexpr PixelFormat eBGR12 =
    Camera_t_PixelFormat_eBGR12;
  static constexpr PixelFormat eRGB14 =
    Camera_t_PixelFormat_eRGB14;
  static constexpr PixelFormat eBGR14 =
    Camera_t_PixelFormat_eBGR14;
  static constexpr PixelFormat eRGB16 =
    Camera_t_PixelFormat_eRGB16;
  static constexpr PixelFormat eBGR16 =
    Camera_t_PixelFormat_eBGR16;
  static constexpr PixelFormat e32BIT =
    Camera_t_PixelFormat_e32BIT;
  static constexpr PixelFormat eGRAY32U =
    Camera_t_PixelFormat_eGRAY32U;
  static constexpr PixelFormat eRGB32U =
    Camera_t_PixelFormat_eRGB32U;
  static constexpr PixelFormat eBGR32U =
    Camera_t_PixelFormat_eBGR32U;
  static constexpr PixelFormat eGRAY32F =
    Camera_t_PixelFormat_eGRAY32F;
  static constexpr PixelFormat eRGB32F =
    Camera_t_PixelFormat_eRGB32F;
  static constexpr PixelFormat eBGR32F =
    Camera_t_PixelFormat_eBGR32F;
  static constexpr PixelFormat eCOMPRESSED =
    Camera_t_PixelFormat_eCOMPRESSED;
  static constexpr PixelFormat eYUV420P8 =
    Camera_t_PixelFormat_eYUV420P8;
  static constexpr PixelFormat eYUYV422I8 =
    Camera_t_PixelFormat_eYUYV422I8;
  static constexpr PixelFormat eUYVY422I8 =
    Camera_t_PixelFormat_eUYVY422I8;
  static inline bool PixelFormat_IsValid(int value) {
    return Camera_t_PixelFormat_IsValid(value);
  }
  static constexpr PixelFormat PixelFormat_MIN =
    Camera_t_PixelFormat_PixelFormat_MIN;
  static constexpr PixelFormat PixelFormat_MAX =
    Camera_t_PixelFormat_PixelFormat_MAX;
  static constexpr int PixelFormat_ARRAYSIZE =
    Camera_t_PixelFormat_PixelFormat_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PixelFormat_descriptor() {
    return Camera_t_PixelFormat_descriptor();
  }
  template<typename T>
  static inline const std::string& PixelFormat_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PixelFormat>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PixelFormat_Name.");
    return Camera_t_PixelFormat_Name(enum_t_value);
  }
  static inline bool PixelFormat_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PixelFormat* value) {
    return Camera_t_PixelFormat_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kImgDataFieldNumber = 7,
    kStExtrinsicFieldNumber = 11,
    kU64TSCaptureFieldNumber = 1,
    kECameraTypeFieldNumber = 2,
    kECodecFieldNumber = 3,
    kU16WidthFieldNumber = 4,
    kU16HeightFieldNumber = 5,
    kEPixelFormatFieldNumber = 6,
  };
  // bytes imgData = 7;
  void clear_imgdata();
  const std::string& imgdata() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_imgdata(ArgT0&& arg0, ArgT... args);
  std::string* mutable_imgdata();
  PROTOBUF_MUST_USE_RESULT std::string* release_imgdata();
  void set_allocated_imgdata(std::string* imgdata);
  private:
  const std::string& _internal_imgdata() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_imgdata(const std::string& value);
  std::string* _internal_mutable_imgdata();
  public:

  // .VgeoDB.common.Extrinsic_t stExtrinsic = 11;
  bool has_stextrinsic() const;
  private:
  bool _internal_has_stextrinsic() const;
  public:
  void clear_stextrinsic();
  const ::VgeoDB::common::Extrinsic_t& stextrinsic() const;
  PROTOBUF_MUST_USE_RESULT ::VgeoDB::common::Extrinsic_t* release_stextrinsic();
  ::VgeoDB::common::Extrinsic_t* mutable_stextrinsic();
  void set_allocated_stextrinsic(::VgeoDB::common::Extrinsic_t* stextrinsic);
  private:
  const ::VgeoDB::common::Extrinsic_t& _internal_stextrinsic() const;
  ::VgeoDB::common::Extrinsic_t* _internal_mutable_stextrinsic();
  public:
  void unsafe_arena_set_allocated_stextrinsic(
      ::VgeoDB::common::Extrinsic_t* stextrinsic);
  ::VgeoDB::common::Extrinsic_t* unsafe_arena_release_stextrinsic();

  // uint64 u64TSCapture = 1;
  void clear_u64tscapture();
  ::PROTOBUF_NAMESPACE_ID::uint64 u64tscapture() const;
  void set_u64tscapture(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_u64tscapture() const;
  void _internal_set_u64tscapture(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // .vpdata.camera.Camera_t.CameraType eCameraType = 2;
  void clear_ecameratype();
  ::vpdata::camera::Camera_t_CameraType ecameratype() const;
  void set_ecameratype(::vpdata::camera::Camera_t_CameraType value);
  private:
  ::vpdata::camera::Camera_t_CameraType _internal_ecameratype() const;
  void _internal_set_ecameratype(::vpdata::camera::Camera_t_CameraType value);
  public:

  // .vpdata.camera.Camera_t.Codec eCodec = 3;
  void clear_ecodec();
  ::vpdata::camera::Camera_t_Codec ecodec() const;
  void set_ecodec(::vpdata::camera::Camera_t_Codec value);
  private:
  ::vpdata::camera::Camera_t_Codec _internal_ecodec() const;
  void _internal_set_ecodec(::vpdata::camera::Camera_t_Codec value);
  public:

  // uint32 u16Width = 4;
  void clear_u16width();
  ::PROTOBUF_NAMESPACE_ID::uint32 u16width() const;
  void set_u16width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_u16width() const;
  void _internal_set_u16width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 u16Height = 5;
  void clear_u16height();
  ::PROTOBUF_NAMESPACE_ID::uint32 u16height() const;
  void set_u16height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_u16height() const;
  void _internal_set_u16height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // .vpdata.camera.Camera_t.PixelFormat ePixelFormat = 6;
  void clear_epixelformat();
  ::vpdata::camera::Camera_t_PixelFormat epixelformat() const;
  void set_epixelformat(::vpdata::camera::Camera_t_PixelFormat value);
  private:
  ::vpdata::camera::Camera_t_PixelFormat _internal_epixelformat() const;
  void _internal_set_epixelformat(::vpdata::camera::Camera_t_PixelFormat value);
  public:

  // @@protoc_insertion_point(class_scope:vpdata.camera.Camera_t)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr imgdata_;
  ::VgeoDB::common::Extrinsic_t* stextrinsic_;
  ::PROTOBUF_NAMESPACE_ID::uint64 u64tscapture_;
  int ecameratype_;
  int ecodec_;
  ::PROTOBUF_NAMESPACE_ID::uint32 u16width_;
  ::PROTOBUF_NAMESPACE_ID::uint32 u16height_;
  int epixelformat_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_vp_5fcamera_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Camera_t

// uint64 u64TSCapture = 1;
inline void Camera_t::clear_u64tscapture() {
  u64tscapture_ = uint64_t{0u};
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Camera_t::_internal_u64tscapture() const {
  return u64tscapture_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Camera_t::u64tscapture() const {
  // @@protoc_insertion_point(field_get:vpdata.camera.Camera_t.u64TSCapture)
  return _internal_u64tscapture();
}
inline void Camera_t::_internal_set_u64tscapture(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  u64tscapture_ = value;
}
inline void Camera_t::set_u64tscapture(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_u64tscapture(value);
  // @@protoc_insertion_point(field_set:vpdata.camera.Camera_t.u64TSCapture)
}

// .vpdata.camera.Camera_t.CameraType eCameraType = 2;
inline void Camera_t::clear_ecameratype() {
  ecameratype_ = 0;
}
inline ::vpdata::camera::Camera_t_CameraType Camera_t::_internal_ecameratype() const {
  return static_cast< ::vpdata::camera::Camera_t_CameraType >(ecameratype_);
}
inline ::vpdata::camera::Camera_t_CameraType Camera_t::ecameratype() const {
  // @@protoc_insertion_point(field_get:vpdata.camera.Camera_t.eCameraType)
  return _internal_ecameratype();
}
inline void Camera_t::_internal_set_ecameratype(::vpdata::camera::Camera_t_CameraType value) {
  
  ecameratype_ = value;
}
inline void Camera_t::set_ecameratype(::vpdata::camera::Camera_t_CameraType value) {
  _internal_set_ecameratype(value);
  // @@protoc_insertion_point(field_set:vpdata.camera.Camera_t.eCameraType)
}

// .vpdata.camera.Camera_t.Codec eCodec = 3;
inline void Camera_t::clear_ecodec() {
  ecodec_ = 0;
}
inline ::vpdata::camera::Camera_t_Codec Camera_t::_internal_ecodec() const {
  return static_cast< ::vpdata::camera::Camera_t_Codec >(ecodec_);
}
inline ::vpdata::camera::Camera_t_Codec Camera_t::ecodec() const {
  // @@protoc_insertion_point(field_get:vpdata.camera.Camera_t.eCodec)
  return _internal_ecodec();
}
inline void Camera_t::_internal_set_ecodec(::vpdata::camera::Camera_t_Codec value) {
  
  ecodec_ = value;
}
inline void Camera_t::set_ecodec(::vpdata::camera::Camera_t_Codec value) {
  _internal_set_ecodec(value);
  // @@protoc_insertion_point(field_set:vpdata.camera.Camera_t.eCodec)
}

// uint32 u16Width = 4;
inline void Camera_t::clear_u16width() {
  u16width_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Camera_t::_internal_u16width() const {
  return u16width_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Camera_t::u16width() const {
  // @@protoc_insertion_point(field_get:vpdata.camera.Camera_t.u16Width)
  return _internal_u16width();
}
inline void Camera_t::_internal_set_u16width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  u16width_ = value;
}
inline void Camera_t::set_u16width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_u16width(value);
  // @@protoc_insertion_point(field_set:vpdata.camera.Camera_t.u16Width)
}

// uint32 u16Height = 5;
inline void Camera_t::clear_u16height() {
  u16height_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Camera_t::_internal_u16height() const {
  return u16height_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Camera_t::u16height() const {
  // @@protoc_insertion_point(field_get:vpdata.camera.Camera_t.u16Height)
  return _internal_u16height();
}
inline void Camera_t::_internal_set_u16height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  u16height_ = value;
}
inline void Camera_t::set_u16height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_u16height(value);
  // @@protoc_insertion_point(field_set:vpdata.camera.Camera_t.u16Height)
}

// .vpdata.camera.Camera_t.PixelFormat ePixelFormat = 6;
inline void Camera_t::clear_epixelformat() {
  epixelformat_ = 0;
}
inline ::vpdata::camera::Camera_t_PixelFormat Camera_t::_internal_epixelformat() const {
  return static_cast< ::vpdata::camera::Camera_t_PixelFormat >(epixelformat_);
}
inline ::vpdata::camera::Camera_t_PixelFormat Camera_t::epixelformat() const {
  // @@protoc_insertion_point(field_get:vpdata.camera.Camera_t.ePixelFormat)
  return _internal_epixelformat();
}
inline void Camera_t::_internal_set_epixelformat(::vpdata::camera::Camera_t_PixelFormat value) {
  
  epixelformat_ = value;
}
inline void Camera_t::set_epixelformat(::vpdata::camera::Camera_t_PixelFormat value) {
  _internal_set_epixelformat(value);
  // @@protoc_insertion_point(field_set:vpdata.camera.Camera_t.ePixelFormat)
}

// bytes imgData = 7;
inline void Camera_t::clear_imgdata() {
  imgdata_.ClearToEmpty();
}
inline const std::string& Camera_t::imgdata() const {
  // @@protoc_insertion_point(field_get:vpdata.camera.Camera_t.imgData)
  return _internal_imgdata();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Camera_t::set_imgdata(ArgT0&& arg0, ArgT... args) {
 
 imgdata_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:vpdata.camera.Camera_t.imgData)
}
inline std::string* Camera_t::mutable_imgdata() {
  std::string* _s = _internal_mutable_imgdata();
  // @@protoc_insertion_point(field_mutable:vpdata.camera.Camera_t.imgData)
  return _s;
}
inline const std::string& Camera_t::_internal_imgdata() const {
  return imgdata_.Get();
}
inline void Camera_t::_internal_set_imgdata(const std::string& value) {
  
  imgdata_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Camera_t::_internal_mutable_imgdata() {
  
  return imgdata_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Camera_t::release_imgdata() {
  // @@protoc_insertion_point(field_release:vpdata.camera.Camera_t.imgData)
  return imgdata_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Camera_t::set_allocated_imgdata(std::string* imgdata) {
  if (imgdata != nullptr) {
    
  } else {
    
  }
  imgdata_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), imgdata,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:vpdata.camera.Camera_t.imgData)
}

// .VgeoDB.common.Extrinsic_t stExtrinsic = 11;
inline bool Camera_t::_internal_has_stextrinsic() const {
  return this != internal_default_instance() && stextrinsic_ != nullptr;
}
inline bool Camera_t::has_stextrinsic() const {
  return _internal_has_stextrinsic();
}
inline const ::VgeoDB::common::Extrinsic_t& Camera_t::_internal_stextrinsic() const {
  const ::VgeoDB::common::Extrinsic_t* p = stextrinsic_;
  return p != nullptr ? *p : reinterpret_cast<const ::VgeoDB::common::Extrinsic_t&>(
      ::VgeoDB::common::_Extrinsic_t_default_instance_);
}
inline const ::VgeoDB::common::Extrinsic_t& Camera_t::stextrinsic() const {
  // @@protoc_insertion_point(field_get:vpdata.camera.Camera_t.stExtrinsic)
  return _internal_stextrinsic();
}
inline void Camera_t::unsafe_arena_set_allocated_stextrinsic(
    ::VgeoDB::common::Extrinsic_t* stextrinsic) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stextrinsic_);
  }
  stextrinsic_ = stextrinsic;
  if (stextrinsic) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:vpdata.camera.Camera_t.stExtrinsic)
}
inline ::VgeoDB::common::Extrinsic_t* Camera_t::release_stextrinsic() {
  
  ::VgeoDB::common::Extrinsic_t* temp = stextrinsic_;
  stextrinsic_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::VgeoDB::common::Extrinsic_t* Camera_t::unsafe_arena_release_stextrinsic() {
  // @@protoc_insertion_point(field_release:vpdata.camera.Camera_t.stExtrinsic)
  
  ::VgeoDB::common::Extrinsic_t* temp = stextrinsic_;
  stextrinsic_ = nullptr;
  return temp;
}
inline ::VgeoDB::common::Extrinsic_t* Camera_t::_internal_mutable_stextrinsic() {
  
  if (stextrinsic_ == nullptr) {
    auto* p = CreateMaybeMessage<::VgeoDB::common::Extrinsic_t>(GetArenaForAllocation());
    stextrinsic_ = p;
  }
  return stextrinsic_;
}
inline ::VgeoDB::common::Extrinsic_t* Camera_t::mutable_stextrinsic() {
  ::VgeoDB::common::Extrinsic_t* _msg = _internal_mutable_stextrinsic();
  // @@protoc_insertion_point(field_mutable:vpdata.camera.Camera_t.stExtrinsic)
  return _msg;
}
inline void Camera_t::set_allocated_stextrinsic(::VgeoDB::common::Extrinsic_t* stextrinsic) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(stextrinsic_);
  }
  if (stextrinsic) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(stextrinsic));
    if (message_arena != submessage_arena) {
      stextrinsic = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, stextrinsic, submessage_arena);
    }
    
  } else {
    
  }
  stextrinsic_ = stextrinsic;
  // @@protoc_insertion_point(field_set_allocated:vpdata.camera.Camera_t.stExtrinsic)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace camera
}  // namespace vpdata

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::vpdata::camera::Camera_t_CameraType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::vpdata::camera::Camera_t_CameraType>() {
  return ::vpdata::camera::Camera_t_CameraType_descriptor();
}
template <> struct is_proto_enum< ::vpdata::camera::Camera_t_Codec> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::vpdata::camera::Camera_t_Codec>() {
  return ::vpdata::camera::Camera_t_Codec_descriptor();
}
template <> struct is_proto_enum< ::vpdata::camera::Camera_t_PixelFormat> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::vpdata::camera::Camera_t_PixelFormat>() {
  return ::vpdata::camera::Camera_t_PixelFormat_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_vp_5fcamera_2eproto
