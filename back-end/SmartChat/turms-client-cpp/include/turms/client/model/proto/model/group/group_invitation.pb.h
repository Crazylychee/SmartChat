// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/group/group_invitation.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5finvitation_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5finvitation_2eproto_2epb_2eh

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
#include "turms/client/model/proto/constant/request_status.pb.h"
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fgroup_2fgroup_5finvitation_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fgroup_2fgroup_5finvitation_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class GroupInvitation;
struct GroupInvitationDefaultTypeInternal;
extern GroupInvitationDefaultTypeInternal _GroupInvitation_default_instance_;
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

class GroupInvitation final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.GroupInvitation) */ {
   public:
    inline GroupInvitation()
        : GroupInvitation(nullptr) {
    }
    ~GroupInvitation() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR GroupInvitation(::google::protobuf::internal::ConstantInitialized);

    inline GroupInvitation(const GroupInvitation& from)
        : GroupInvitation(nullptr, from) {
    }
    inline GroupInvitation(GroupInvitation&& from) noexcept
        : GroupInvitation(nullptr, std::move(from)) {
    }
    inline GroupInvitation& operator=(const GroupInvitation& from) {
        CopyFrom(from);
        return *this;
    }
    inline GroupInvitation& operator=(GroupInvitation&& from) noexcept {
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

    static const GroupInvitation& default_instance() {
        return *internal_default_instance();
    }
    static inline const GroupInvitation* internal_default_instance() {
        return reinterpret_cast<const GroupInvitation*>(&_GroupInvitation_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(GroupInvitation& a, GroupInvitation& b) {
        a.Swap(&b);
    }
    inline void Swap(GroupInvitation* other) {
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
    void UnsafeArenaSwap(GroupInvitation* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    GroupInvitation* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<GroupInvitation>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const GroupInvitation& from);
    void MergeFrom(const GroupInvitation& from);
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
    void InternalSwap(GroupInvitation* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.GroupInvitation";
    }

   protected:
    explicit GroupInvitation(::google::protobuf::Arena* arena);
    GroupInvitation(::google::protobuf::Arena* arena, const GroupInvitation& from);
    GroupInvitation(::google::protobuf::Arena* arena, GroupInvitation&& from) noexcept
        : GroupInvitation(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kContentFieldNumber = 3,
        kIdFieldNumber = 1,
        kCreationDateFieldNumber = 2,
        kExpirationDateFieldNumber = 5,
        kGroupIdFieldNumber = 6,
        kInviterIdFieldNumber = 7,
        kInviteeIdFieldNumber = 8,
        kStatusFieldNumber = 4,
    };
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
    // optional string content = 3;
    bool has_content() const;
    void clear_content();
    const std::string& content() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_content(Arg_&& arg, Args_... args);
    std::string* mutable_content();
    PROTOBUF_NODISCARD std::string* release_content();
    void set_allocated_content(std::string* value);

   private:
    const std::string& _internal_content() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
    std::string* _internal_mutable_content();

   public:
    // optional int64 id = 1;
    bool has_id() const;
    void clear_id();
    ::int64_t id() const;
    void set_id(::int64_t value);

   private:
    ::int64_t _internal_id() const;
    void _internal_set_id(::int64_t value);

   public:
    // optional int64 creation_date = 2;
    bool has_creation_date() const;
    void clear_creation_date();
    ::int64_t creation_date() const;
    void set_creation_date(::int64_t value);

   private:
    ::int64_t _internal_creation_date() const;
    void _internal_set_creation_date(::int64_t value);

   public:
    // optional int64 expiration_date = 5;
    bool has_expiration_date() const;
    void clear_expiration_date();
    ::int64_t expiration_date() const;
    void set_expiration_date(::int64_t value);

   private:
    ::int64_t _internal_expiration_date() const;
    void _internal_set_expiration_date(::int64_t value);

   public:
    // optional int64 group_id = 6;
    bool has_group_id() const;
    void clear_group_id();
    ::int64_t group_id() const;
    void set_group_id(::int64_t value);

   private:
    ::int64_t _internal_group_id() const;
    void _internal_set_group_id(::int64_t value);

   public:
    // optional int64 inviter_id = 7;
    bool has_inviter_id() const;
    void clear_inviter_id();
    ::int64_t inviter_id() const;
    void set_inviter_id(::int64_t value);

   private:
    ::int64_t _internal_inviter_id() const;
    void _internal_set_inviter_id(::int64_t value);

   public:
    // optional int64 invitee_id = 8;
    bool has_invitee_id() const;
    void clear_invitee_id();
    ::int64_t invitee_id() const;
    void set_invitee_id(::int64_t value);

   private:
    ::int64_t _internal_invitee_id() const;
    void _internal_set_invitee_id(::int64_t value);

   public:
    // optional .turms.client.model.proto.RequestStatus status = 4;
    bool has_status() const;
    void clear_status();
    ::turms::client::model::proto::RequestStatus status() const;
    void set_status(::turms::client::model::proto::RequestStatus value);

   private:
    ::turms::client::model::proto::RequestStatus _internal_status() const;
    void _internal_set_status(::turms::client::model::proto::RequestStatus value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.GroupInvitation)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<4, 9, 1, 64, 2> _table_;

    static constexpr const void* _raw_default_instance_ = &_GroupInvitation_default_instance_;

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
                              const GroupInvitation& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr content_;
        ::int64_t id_;
        ::int64_t creation_date_;
        ::int64_t expiration_date_;
        ::int64_t group_id_;
        ::int64_t inviter_id_;
        ::int64_t invitee_id_;
        int status_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fgroup_2fgroup_5finvitation_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GroupInvitation

// optional int64 id = 1;
inline bool GroupInvitation::has_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void GroupInvitation::clear_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t GroupInvitation::id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.id)
    return _internal_id();
}
inline void GroupInvitation::set_id(::int64_t value) {
    _internal_set_id(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitation.id)
}
inline ::int64_t GroupInvitation::_internal_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.id_;
}
inline void GroupInvitation::_internal_set_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_ = value;
}

// optional int64 creation_date = 2;
inline bool GroupInvitation::has_creation_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void GroupInvitation::clear_creation_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int64_t GroupInvitation::creation_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.creation_date)
    return _internal_creation_date();
}
inline void GroupInvitation::set_creation_date(::int64_t value) {
    _internal_set_creation_date(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitation.creation_date)
}
inline ::int64_t GroupInvitation::_internal_creation_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creation_date_;
}
inline void GroupInvitation::_internal_set_creation_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_ = value;
}

// optional string content = 3;
inline bool GroupInvitation::has_content() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void GroupInvitation::clear_content() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.content_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& GroupInvitation::content() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.content)
    return _internal_content();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void GroupInvitation::set_content(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.content_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitation.content)
}
inline std::string* GroupInvitation::mutable_content() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_content();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.GroupInvitation.content)
    return _s;
}
inline const std::string& GroupInvitation::_internal_content() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.content_.Get();
}
inline void GroupInvitation::_internal_set_content(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.content_.Set(value, GetArena());
}
inline std::string* GroupInvitation::_internal_mutable_content() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.content_.Mutable(GetArena());
}
inline std::string* GroupInvitation::release_content() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.GroupInvitation.content)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.content_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.content_.Set("", GetArena());
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    return released;
}
inline void GroupInvitation::set_allocated_content(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.content_.SetAllocated(value, GetArena());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    if (_impl_.content_.IsDefault()) {
        _impl_.content_.Set("", GetArena());
    }
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.GroupInvitation.content)
}

// optional .turms.client.model.proto.RequestStatus status = 4;
inline bool GroupInvitation::has_status() const {
    bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
    return value;
}
inline void GroupInvitation::clear_status() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.status_ = 0;
    _impl_._has_bits_[0] &= ~0x00000080u;
}
inline ::turms::client::model::proto::RequestStatus GroupInvitation::status() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.status)
    return _internal_status();
}
inline void GroupInvitation::set_status(::turms::client::model::proto::RequestStatus value) {
    _internal_set_status(value);
    _impl_._has_bits_[0] |= 0x00000080u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitation.status)
}
inline ::turms::client::model::proto::RequestStatus GroupInvitation::_internal_status() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return static_cast<::turms::client::model::proto::RequestStatus>(_impl_.status_);
}
inline void GroupInvitation::_internal_set_status(
    ::turms::client::model::proto::RequestStatus value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.status_ = value;
}

// optional int64 expiration_date = 5;
inline bool GroupInvitation::has_expiration_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void GroupInvitation::clear_expiration_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.expiration_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int64_t GroupInvitation::expiration_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.expiration_date)
    return _internal_expiration_date();
}
inline void GroupInvitation::set_expiration_date(::int64_t value) {
    _internal_set_expiration_date(value);
    _impl_._has_bits_[0] |= 0x00000008u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitation.expiration_date)
}
inline ::int64_t GroupInvitation::_internal_expiration_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.expiration_date_;
}
inline void GroupInvitation::_internal_set_expiration_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.expiration_date_ = value;
}

// optional int64 group_id = 6;
inline bool GroupInvitation::has_group_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
    return value;
}
inline void GroupInvitation::clear_group_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int64_t GroupInvitation::group_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.group_id)
    return _internal_group_id();
}
inline void GroupInvitation::set_group_id(::int64_t value) {
    _internal_set_group_id(value);
    _impl_._has_bits_[0] |= 0x00000010u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitation.group_id)
}
inline ::int64_t GroupInvitation::_internal_group_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_id_;
}
inline void GroupInvitation::_internal_set_group_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_id_ = value;
}

// optional int64 inviter_id = 7;
inline bool GroupInvitation::has_inviter_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
    return value;
}
inline void GroupInvitation::clear_inviter_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.inviter_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::int64_t GroupInvitation::inviter_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.inviter_id)
    return _internal_inviter_id();
}
inline void GroupInvitation::set_inviter_id(::int64_t value) {
    _internal_set_inviter_id(value);
    _impl_._has_bits_[0] |= 0x00000020u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitation.inviter_id)
}
inline ::int64_t GroupInvitation::_internal_inviter_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.inviter_id_;
}
inline void GroupInvitation::_internal_set_inviter_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.inviter_id_ = value;
}

// optional int64 invitee_id = 8;
inline bool GroupInvitation::has_invitee_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
    return value;
}
inline void GroupInvitation::clear_invitee_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.invitee_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000040u;
}
inline ::int64_t GroupInvitation::invitee_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.invitee_id)
    return _internal_invitee_id();
}
inline void GroupInvitation::set_invitee_id(::int64_t value) {
    _internal_set_invitee_id(value);
    _impl_._has_bits_[0] |= 0x00000040u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitation.invitee_id)
}
inline ::int64_t GroupInvitation::_internal_invitee_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.invitee_id_;
}
inline void GroupInvitation::_internal_set_invitee_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.invitee_id_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int GroupInvitation::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int GroupInvitation::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* GroupInvitation::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.GroupInvitation.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
GroupInvitation::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.GroupInvitation.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& GroupInvitation::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitation.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* GroupInvitation::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.GroupInvitation.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
GroupInvitation::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.GroupInvitation.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
GroupInvitation::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
GroupInvitation::_internal_mutable_custom_attributes() {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5finvitation_2eproto_2epb_2eh