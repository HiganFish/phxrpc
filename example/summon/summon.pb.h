// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: summon.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_summon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_summon_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015006 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/wrappers.pb.h>
#include "phxrpc.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_summon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_summon_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_summon_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_summon_2eproto_metadata_getter(int index);
namespace summon {
class SummonRequest;
struct SummonRequestDefaultTypeInternal;
extern SummonRequestDefaultTypeInternal _SummonRequest_default_instance_;
class SummonResult;
struct SummonResultDefaultTypeInternal;
extern SummonResultDefaultTypeInternal _SummonResult_default_instance_;
}  // namespace summon
PROTOBUF_NAMESPACE_OPEN
template<> ::summon::SummonRequest* Arena::CreateMaybeMessage<::summon::SummonRequest>(Arena*);
template<> ::summon::SummonResult* Arena::CreateMaybeMessage<::summon::SummonResult>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace summon {

enum RoleType : int {
  SSR = 0,
  SR = 1,
  R = 2,
  RoleType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  RoleType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool RoleType_IsValid(int value);
constexpr RoleType RoleType_MIN = SSR;
constexpr RoleType RoleType_MAX = R;
constexpr int RoleType_ARRAYSIZE = RoleType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RoleType_descriptor();
template<typename T>
inline const std::string& RoleType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RoleType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RoleType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RoleType_descriptor(), enum_t_value);
}
inline bool RoleType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, RoleType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RoleType>(
    RoleType_descriptor(), name, value);
}
// ===================================================================

class SummonRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:summon.SummonRequest) */ {
 public:
  inline SummonRequest() : SummonRequest(nullptr) {}
  virtual ~SummonRequest();
  explicit constexpr SummonRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SummonRequest(const SummonRequest& from);
  SummonRequest(SummonRequest&& from) noexcept
    : SummonRequest() {
    *this = ::std::move(from);
  }

  inline SummonRequest& operator=(const SummonRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SummonRequest& operator=(SummonRequest&& from) noexcept {
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
  static const SummonRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SummonRequest* internal_default_instance() {
    return reinterpret_cast<const SummonRequest*>(
               &_SummonRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SummonRequest& a, SummonRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SummonRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SummonRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SummonRequest* New() const final {
    return CreateMaybeMessage<SummonRequest>(nullptr);
  }

  SummonRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SummonRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SummonRequest& from);
  void MergeFrom(const SummonRequest& from);
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
  void InternalSwap(SummonRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "summon.SummonRequest";
  }
  protected:
  explicit SummonRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_summon_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kNumberFieldNumber = 2,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // uint32 number = 2;
  void clear_number();
  ::PROTOBUF_NAMESPACE_ID::uint32 number() const;
  void set_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_number() const;
  void _internal_set_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:summon.SummonRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 number_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_summon_2eproto;
};
// -------------------------------------------------------------------

class SummonResult PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:summon.SummonResult) */ {
 public:
  inline SummonResult() : SummonResult(nullptr) {}
  virtual ~SummonResult();
  explicit constexpr SummonResult(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SummonResult(const SummonResult& from);
  SummonResult(SummonResult&& from) noexcept
    : SummonResult() {
    *this = ::std::move(from);
  }

  inline SummonResult& operator=(const SummonResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline SummonResult& operator=(SummonResult&& from) noexcept {
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
  static const SummonResult& default_instance() {
    return *internal_default_instance();
  }
  static inline const SummonResult* internal_default_instance() {
    return reinterpret_cast<const SummonResult*>(
               &_SummonResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SummonResult& a, SummonResult& b) {
    a.Swap(&b);
  }
  inline void Swap(SummonResult* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SummonResult* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SummonResult* New() const final {
    return CreateMaybeMessage<SummonResult>(nullptr);
  }

  SummonResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SummonResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SummonResult& from);
  void MergeFrom(const SummonResult& from);
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
  void InternalSwap(SummonResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "summon.SummonResult";
  }
  protected:
  explicit SummonResult(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_summon_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRoleTypeFieldNumber = 2,
    kIdFieldNumber = 1,
  };
  // repeated .summon.RoleType role_type = 2;
  int role_type_size() const;
  private:
  int _internal_role_type_size() const;
  public:
  void clear_role_type();
  private:
  ::summon::RoleType _internal_role_type(int index) const;
  void _internal_add_role_type(::summon::RoleType value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_role_type();
  public:
  ::summon::RoleType role_type(int index) const;
  void set_role_type(int index, ::summon::RoleType value);
  void add_role_type(::summon::RoleType value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& role_type() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_role_type();

  // string id = 1;
  void clear_id();
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // @@protoc_insertion_point(class_scope:summon.SummonResult)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> role_type_;
  mutable std::atomic<int> _role_type_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_summon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SummonRequest

// string id = 1;
inline void SummonRequest::clear_id() {
  id_.ClearToEmpty();
}
inline const std::string& SummonRequest::id() const {
  // @@protoc_insertion_point(field_get:summon.SummonRequest.id)
  return _internal_id();
}
inline void SummonRequest::set_id(const std::string& value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:summon.SummonRequest.id)
}
inline std::string* SummonRequest::mutable_id() {
  // @@protoc_insertion_point(field_mutable:summon.SummonRequest.id)
  return _internal_mutable_id();
}
inline const std::string& SummonRequest::_internal_id() const {
  return id_.Get();
}
inline void SummonRequest::_internal_set_id(const std::string& value) {
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void SummonRequest::set_id(std::string&& value) {
  
  id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:summon.SummonRequest.id)
}
inline void SummonRequest::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:summon.SummonRequest.id)
}
inline void SummonRequest::set_id(const char* value,
    size_t size) {
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:summon.SummonRequest.id)
}
inline std::string* SummonRequest::_internal_mutable_id() {
  
  return id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* SummonRequest::release_id() {
  // @@protoc_insertion_point(field_release:summon.SummonRequest.id)
  return id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SummonRequest::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:summon.SummonRequest.id)
}

// uint32 number = 2;
inline void SummonRequest::clear_number() {
  number_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SummonRequest::_internal_number() const {
  return number_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SummonRequest::number() const {
  // @@protoc_insertion_point(field_get:summon.SummonRequest.number)
  return _internal_number();
}
inline void SummonRequest::_internal_set_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  number_ = value;
}
inline void SummonRequest::set_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_number(value);
  // @@protoc_insertion_point(field_set:summon.SummonRequest.number)
}

// -------------------------------------------------------------------

// SummonResult

// string id = 1;
inline void SummonResult::clear_id() {
  id_.ClearToEmpty();
}
inline const std::string& SummonResult::id() const {
  // @@protoc_insertion_point(field_get:summon.SummonResult.id)
  return _internal_id();
}
inline void SummonResult::set_id(const std::string& value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:summon.SummonResult.id)
}
inline std::string* SummonResult::mutable_id() {
  // @@protoc_insertion_point(field_mutable:summon.SummonResult.id)
  return _internal_mutable_id();
}
inline const std::string& SummonResult::_internal_id() const {
  return id_.Get();
}
inline void SummonResult::_internal_set_id(const std::string& value) {
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void SummonResult::set_id(std::string&& value) {
  
  id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:summon.SummonResult.id)
}
inline void SummonResult::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:summon.SummonResult.id)
}
inline void SummonResult::set_id(const char* value,
    size_t size) {
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:summon.SummonResult.id)
}
inline std::string* SummonResult::_internal_mutable_id() {
  
  return id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* SummonResult::release_id() {
  // @@protoc_insertion_point(field_release:summon.SummonResult.id)
  return id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SummonResult::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:summon.SummonResult.id)
}

// repeated .summon.RoleType role_type = 2;
inline int SummonResult::_internal_role_type_size() const {
  return role_type_.size();
}
inline int SummonResult::role_type_size() const {
  return _internal_role_type_size();
}
inline void SummonResult::clear_role_type() {
  role_type_.Clear();
}
inline ::summon::RoleType SummonResult::_internal_role_type(int index) const {
  return static_cast< ::summon::RoleType >(role_type_.Get(index));
}
inline ::summon::RoleType SummonResult::role_type(int index) const {
  // @@protoc_insertion_point(field_get:summon.SummonResult.role_type)
  return _internal_role_type(index);
}
inline void SummonResult::set_role_type(int index, ::summon::RoleType value) {
  role_type_.Set(index, value);
  // @@protoc_insertion_point(field_set:summon.SummonResult.role_type)
}
inline void SummonResult::_internal_add_role_type(::summon::RoleType value) {
  role_type_.Add(value);
}
inline void SummonResult::add_role_type(::summon::RoleType value) {
  // @@protoc_insertion_point(field_add:summon.SummonResult.role_type)
  _internal_add_role_type(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
SummonResult::role_type() const {
  // @@protoc_insertion_point(field_list:summon.SummonResult.role_type)
  return role_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
SummonResult::_internal_mutable_role_type() {
  return &role_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
SummonResult::mutable_role_type() {
  // @@protoc_insertion_point(field_mutable_list:summon.SummonResult.role_type)
  return _internal_mutable_role_type();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace summon

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::summon::RoleType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::summon::RoleType>() {
  return ::summon::RoleType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_summon_2eproto