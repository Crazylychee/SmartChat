// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/group/member/create_group_members_request.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fmember_2fcreate_5fgroup_5fmembers_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fmember_2fcreate_5fgroup_5fmembers_5frequest_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "turms/client/model/proto/constant/group_member_role.pb.h"
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fgroup_2fmember_2fcreate_5fgroup_5fmembers_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fgroup_2fmember_2fcreate_5fgroup_5fmembers_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class CreateGroupMembersRequest;
struct CreateGroupMembersRequestDefaultTypeInternal;
extern CreateGroupMembersRequestDefaultTypeInternal _CreateGroupMembersRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================

// -------------------------------------------------------------------

class CreateGroupMembersRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.CreateGroupMembersRequest) */
{
   public:
    inline CreateGroupMembersRequest()
        : CreateGroupMembersRequest(nullptr) {
    }
    ~CreateGroupMembersRequest() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR CreateGroupMembersRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline CreateGroupMembersRequest(const CreateGroupMembersRequest& from)
        : CreateGroupMembersRequest(nullptr, from) {
    }
    inline CreateGroupMembersRequest(CreateGroupMembersRequest&& from) noexcept
        : CreateGroupMembersRequest(nullptr, std::move(from)) {
    }
    inline CreateGroupMembersRequest& operator=(const CreateGroupMembersRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline CreateGroupMembersRequest& operator=(CreateGroupMembersRequest&& from) noexcept {
        if (this == &from)
            return *this;
        if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
            && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
        ) {
            InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }

    inline const std::string& unknown_fields() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.unknown_fields<std::string>(
            ::google::protobuf::internal::GetEmptyString);
    }
    inline std::string* mutable_unknown_fields() ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.mutable_unknown_fields<std::string>();
    }

    static const CreateGroupMembersRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const CreateGroupMembersRequest* internal_default_instance() {
        return reinterpret_cast<const CreateGroupMembersRequest*>(
            &_CreateGroupMembersRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(CreateGroupMembersRequest& a, CreateGroupMembersRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(CreateGroupMembersRequest* other) {
        if (other == this)
            return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
        if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
        if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(CreateGroupMembersRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    CreateGroupMembersRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<CreateGroupMembersRequest>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const CreateGroupMembersRequest& from);
    void MergeFrom(const CreateGroupMembersRequest& from);
    bool IsInitialized() const {
        return true;
    }
    ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
    ::size_t ByteSizeLong() const final;
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
    int GetCachedSize() const {
        return _impl_._cached_size_.Get();
    }

   private:
    void SharedCtor(::google::protobuf::Arena* arena);
    void SharedDtor();
    void InternalSwap(CreateGroupMembersRequest* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.CreateGroupMembersRequest";
    }

   protected:
    explicit CreateGroupMembersRequest(::google::protobuf::Arena* arena);
    CreateGroupMembersRequest(::google::protobuf::Arena* arena,
                              const CreateGroupMembersRequest& from);
    CreateGroupMembersRequest(::google::protobuf::Arena* arena,
                              CreateGroupMembersRequest&& from) noexcept
        : CreateGroupMembersRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kUserIdsFieldNumber = 2,
        kCustomAttributesFieldNumber = 15,
        kNameFieldNumber = 3,
        kGroupIdFieldNumber = 1,
        kMuteEndDateFieldNumber = 5,
        kRoleFieldNumber = 4,
    };
    // repeated int64 user_ids = 2;
    int user_ids_size() const;

   private:
    int _internal_user_ids_size() const;

   public:
    void clear_user_ids();
    ::int64_t user_ids(int index) const;
    void set_user_ids(int index, ::int64_t value);
    void add_user_ids(::int64_t value);
    const ::google::protobuf::RepeatedField<::int64_t>& user_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* mutable_user_ids();

   private:
    const ::google::protobuf::RepeatedField<::int64_t>& _internal_user_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* _internal_mutable_user_ids();

   public:
    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    int custom_attributes_size() const;

   private:
    int _internal_custom_attributes_size() const;

   public:
    void clear_custom_attributes();
    ::turms::client::model::proto::Value* mutable_custom_attributes(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
    mutable_custom_attributes();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
    _internal_custom_attributes() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
    _internal_mutable_custom_attributes();

   public:
    const ::turms::client::model::proto::Value& custom_attributes(int index) const;
    ::turms::client::model::proto::Value* add_custom_attributes();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
    custom_attributes() const;
    // optional string name = 3;
    bool has_name() const;
    void clear_name();
    const std::string& name() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_name(Arg_&& arg, Args_... args);
    std::string* mutable_name();
    PROTOBUF_NODISCARD std::string* release_name();
    void set_allocated_name(std::string* value);

   private:
    const std::string& _internal_name() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
    std::string* _internal_mutable_name();

   public:
    // int64 group_id = 1;
    void clear_group_id();
    ::int64_t group_id() const;
    void set_group_id(::int64_t value);

   private:
    ::int64_t _internal_group_id() const;
    void _internal_set_group_id(::int64_t value);

   public:
    // optional int64 mute_end_date = 5;
    bool has_mute_end_date() const;
    void clear_mute_end_date();
    ::int64_t mute_end_date() const;
    void set_mute_end_date(::int64_t value);

   private:
    ::int64_t _internal_mute_end_date() const;
    void _internal_set_mute_end_date(::int64_t value);

   public:
    // optional .turms.client.model.proto.GroupMemberRole role = 4;
    bool has_role() const;
    void clear_role();
    ::turms::client::model::proto::GroupMemberRole role() const;
    void set_role(::turms::client::model::proto::GroupMemberRole value);

   private:
    ::turms::client::model::proto::GroupMemberRole _internal_role() const;
    void _internal_set_role(::turms::client::model::proto::GroupMemberRole value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.CreateGroupMembersRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<3, 6, 1, 63, 2> _table_;

    static constexpr const void* _raw_default_instance_ =
        &_CreateGroupMembersRequest_default_instance_;

    friend class ::google::protobuf::MessageLite;
    friend class ::google::protobuf::Arena;
    template <typename T>
    friend class ::google::protobuf::Arena::InternalHelper;
    using InternalArenaConstructable_ = void;
    using DestructorSkippable_ = void;
    struct Impl_ {
        inline explicit constexpr Impl_(::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena,
                              const Impl_& from,
                              const CreateGroupMembersRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedField<::int64_t> user_ids_;
        mutable ::google::protobuf::internal::CachedSize _user_ids_cached_byte_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr name_;
        ::int64_t group_id_;
        ::int64_t mute_end_date_;
        int role_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::
        TableStruct_request_2fgroup_2fmember_2fcreate_5fgroup_5fmembers_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CreateGroupMembersRequest

// int64 group_id = 1;
inline void CreateGroupMembersRequest::clear_group_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_id_ = ::int64_t{0};
}
inline ::int64_t CreateGroupMembersRequest::group_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateGroupMembersRequest.group_id)
    return _internal_group_id();
}
inline void CreateGroupMembersRequest::set_group_id(::int64_t value) {
    _internal_set_group_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateGroupMembersRequest.group_id)
}
inline ::int64_t CreateGroupMembersRequest::_internal_group_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_id_;
}
inline void CreateGroupMembersRequest::_internal_set_group_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_id_ = value;
}

// repeated int64 user_ids = 2;
inline int CreateGroupMembersRequest::_internal_user_ids_size() const {
    return _internal_user_ids().size();
}
inline int CreateGroupMembersRequest::user_ids_size() const {
    return _internal_user_ids_size();
}
inline void CreateGroupMembersRequest::clear_user_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_ids_.Clear();
}
inline ::int64_t CreateGroupMembersRequest::user_ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateGroupMembersRequest.user_ids)
    return _internal_user_ids().Get(index);
}
inline void CreateGroupMembersRequest::set_user_ids(int index, ::int64_t value) {
    _internal_mutable_user_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateGroupMembersRequest.user_ids)
}
inline void CreateGroupMembersRequest::add_user_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_user_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.CreateGroupMembersRequest.user_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>& CreateGroupMembersRequest::user_ids()
    const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.CreateGroupMembersRequest.user_ids)
    return _internal_user_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>* CreateGroupMembersRequest::mutable_user_ids()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.CreateGroupMembersRequest.user_ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_user_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
CreateGroupMembersRequest::_internal_user_ids() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>*
CreateGroupMembersRequest::_internal_mutable_user_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.user_ids_;
}

// optional string name = 3;
inline bool CreateGroupMembersRequest::has_name() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void CreateGroupMembersRequest::clear_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CreateGroupMembersRequest::name() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateGroupMembersRequest.name)
    return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateGroupMembersRequest::set_name(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateGroupMembersRequest.name)
}
inline std::string* CreateGroupMembersRequest::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_name();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.CreateGroupMembersRequest.name)
    return _s;
}
inline const std::string& CreateGroupMembersRequest::_internal_name() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.name_.Get();
}
inline void CreateGroupMembersRequest::_internal_set_name(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.name_.Set(value, GetArena());
}
inline std::string* CreateGroupMembersRequest::_internal_mutable_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.name_.Mutable(GetArena());
}
inline std::string* CreateGroupMembersRequest::release_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.CreateGroupMembersRequest.name)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArena());
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    return released;
}
inline void CreateGroupMembersRequest::set_allocated_name(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.name_.SetAllocated(value, GetArena());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    if (_impl_.name_.IsDefault()) {
        _impl_.name_.Set("", GetArena());
    }
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.CreateGroupMembersRequest.name)
}

// optional .turms.client.model.proto.GroupMemberRole role = 4;
inline bool CreateGroupMembersRequest::has_role() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void CreateGroupMembersRequest::clear_role() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.role_ = 0;
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::turms::client::model::proto::GroupMemberRole CreateGroupMembersRequest::role() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateGroupMembersRequest.role)
    return _internal_role();
}
inline void CreateGroupMembersRequest::set_role(
    ::turms::client::model::proto::GroupMemberRole value) {
    _internal_set_role(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateGroupMembersRequest.role)
}
inline ::turms::client::model::proto::GroupMemberRole CreateGroupMembersRequest::_internal_role()
    const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return static_cast<::turms::client::model::proto::GroupMemberRole>(_impl_.role_);
}
inline void CreateGroupMembersRequest::_internal_set_role(
    ::turms::client::model::proto::GroupMemberRole value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.role_ = value;
}

// optional int64 mute_end_date = 5;
inline bool CreateGroupMembersRequest::has_mute_end_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void CreateGroupMembersRequest::clear_mute_end_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.mute_end_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t CreateGroupMembersRequest::mute_end_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateGroupMembersRequest.mute_end_date)
    return _internal_mute_end_date();
}
inline void CreateGroupMembersRequest::set_mute_end_date(::int64_t value) {
    _internal_set_mute_end_date(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateGroupMembersRequest.mute_end_date)
}
inline ::int64_t CreateGroupMembersRequest::_internal_mute_end_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.mute_end_date_;
}
inline void CreateGroupMembersRequest::_internal_set_mute_end_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.mute_end_date_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int CreateGroupMembersRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int CreateGroupMembersRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* CreateGroupMembersRequest::mutable_custom_attributes(
    int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.CreateGroupMembersRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
CreateGroupMembersRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.CreateGroupMembersRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& CreateGroupMembersRequest::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateGroupMembersRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* CreateGroupMembersRequest::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.CreateGroupMembersRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
CreateGroupMembersRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.CreateGroupMembersRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
CreateGroupMembersRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
CreateGroupMembersRequest::_internal_mutable_custom_attributes() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.custom_attributes_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fmember_2fcreate_5fgroup_5fmembers_5frequest_2eproto_2epb_2eh
