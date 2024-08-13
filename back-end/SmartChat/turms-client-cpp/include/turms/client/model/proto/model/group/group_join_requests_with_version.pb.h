// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/group/group_join_requests_with_version.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fjoin_5frequests_5fwith_5fversion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fjoin_5frequests_5fwith_5fversion_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/group/group_join_request.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fgroup_2fgroup_5fjoin_5frequests_5fwith_5fversion_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fgroup_2fgroup_5fjoin_5frequests_5fwith_5fversion_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class GroupJoinRequestsWithVersion;
struct GroupJoinRequestsWithVersionDefaultTypeInternal;
extern GroupJoinRequestsWithVersionDefaultTypeInternal
    _GroupJoinRequestsWithVersion_default_instance_;
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

class GroupJoinRequestsWithVersion final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.GroupJoinRequestsWithVersion)
 */
{
   public:
    inline GroupJoinRequestsWithVersion()
        : GroupJoinRequestsWithVersion(nullptr) {
    }
    ~GroupJoinRequestsWithVersion() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR GroupJoinRequestsWithVersion(
        ::google::protobuf::internal::ConstantInitialized);

    inline GroupJoinRequestsWithVersion(const GroupJoinRequestsWithVersion& from)
        : GroupJoinRequestsWithVersion(nullptr, from) {
    }
    inline GroupJoinRequestsWithVersion(GroupJoinRequestsWithVersion&& from) noexcept
        : GroupJoinRequestsWithVersion(nullptr, std::move(from)) {
    }
    inline GroupJoinRequestsWithVersion& operator=(const GroupJoinRequestsWithVersion& from) {
        CopyFrom(from);
        return *this;
    }
    inline GroupJoinRequestsWithVersion& operator=(GroupJoinRequestsWithVersion&& from) noexcept {
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

    static const GroupJoinRequestsWithVersion& default_instance() {
        return *internal_default_instance();
    }
    static inline const GroupJoinRequestsWithVersion* internal_default_instance() {
        return reinterpret_cast<const GroupJoinRequestsWithVersion*>(
            &_GroupJoinRequestsWithVersion_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(GroupJoinRequestsWithVersion& a, GroupJoinRequestsWithVersion& b) {
        a.Swap(&b);
    }
    inline void Swap(GroupJoinRequestsWithVersion* other) {
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
    void UnsafeArenaSwap(GroupJoinRequestsWithVersion* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    GroupJoinRequestsWithVersion* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<GroupJoinRequestsWithVersion>(
            arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const GroupJoinRequestsWithVersion& from);
    void MergeFrom(const GroupJoinRequestsWithVersion& from);
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
    void InternalSwap(GroupJoinRequestsWithVersion* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.GroupJoinRequestsWithVersion";
    }

   protected:
    explicit GroupJoinRequestsWithVersion(::google::protobuf::Arena* arena);
    GroupJoinRequestsWithVersion(::google::protobuf::Arena* arena,
                                 const GroupJoinRequestsWithVersion& from);
    GroupJoinRequestsWithVersion(::google::protobuf::Arena* arena,
                                 GroupJoinRequestsWithVersion&& from) noexcept
        : GroupJoinRequestsWithVersion(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kGroupJoinRequestsFieldNumber = 1,
        kLastUpdatedDateFieldNumber = 2,
    };
    // repeated .turms.client.model.proto.GroupJoinRequest group_join_requests = 1;
    int group_join_requests_size() const;

   private:
    int _internal_group_join_requests_size() const;

   public:
    void clear_group_join_requests();
    ::turms::client::model::proto::GroupJoinRequest* mutable_group_join_requests(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>*
    mutable_group_join_requests();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>&
    _internal_group_join_requests() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>*
    _internal_mutable_group_join_requests();

   public:
    const ::turms::client::model::proto::GroupJoinRequest& group_join_requests(int index) const;
    ::turms::client::model::proto::GroupJoinRequest* add_group_join_requests();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>&
    group_join_requests() const;
    // optional int64 last_updated_date = 2;
    bool has_last_updated_date() const;
    void clear_last_updated_date();
    ::int64_t last_updated_date() const;
    void set_last_updated_date(::int64_t value);

   private:
    ::int64_t _internal_last_updated_date() const;
    void _internal_set_last_updated_date(::int64_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.GroupJoinRequestsWithVersion)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<1, 2, 1, 0, 2> _table_;

    static constexpr const void* _raw_default_instance_ =
        &_GroupJoinRequestsWithVersion_default_instance_;

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
                              const GroupJoinRequestsWithVersion& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>
            group_join_requests_;
        ::int64_t last_updated_date_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fgroup_2fgroup_5fjoin_5frequests_5fwith_5fversion_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GroupJoinRequestsWithVersion

// repeated .turms.client.model.proto.GroupJoinRequest group_join_requests = 1;
inline int GroupJoinRequestsWithVersion::_internal_group_join_requests_size() const {
    return _internal_group_join_requests().size();
}
inline int GroupJoinRequestsWithVersion::group_join_requests_size() const {
    return _internal_group_join_requests_size();
}
inline ::turms::client::model::proto::GroupJoinRequest*
GroupJoinRequestsWithVersion::mutable_group_join_requests(int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.GroupJoinRequestsWithVersion.group_join_requests)
    return _internal_mutable_group_join_requests()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>*
GroupJoinRequestsWithVersion::mutable_group_join_requests() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.GroupJoinRequestsWithVersion.group_join_requests)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_group_join_requests();
}
inline const ::turms::client::model::proto::GroupJoinRequest&
GroupJoinRequestsWithVersion::group_join_requests(int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupJoinRequestsWithVersion.group_join_requests)
    return _internal_group_join_requests().Get(index);
}
inline ::turms::client::model::proto::GroupJoinRequest*
GroupJoinRequestsWithVersion::add_group_join_requests() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::GroupJoinRequest* _add =
        _internal_mutable_group_join_requests()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.GroupJoinRequestsWithVersion.group_join_requests)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>&
GroupJoinRequestsWithVersion::group_join_requests() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.GroupJoinRequestsWithVersion.group_join_requests)
    return _internal_group_join_requests();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>&
GroupJoinRequestsWithVersion::_internal_group_join_requests() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_join_requests_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupJoinRequest>*
GroupJoinRequestsWithVersion::_internal_mutable_group_join_requests() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.group_join_requests_;
}

// optional int64 last_updated_date = 2;
inline bool GroupJoinRequestsWithVersion::has_last_updated_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void GroupJoinRequestsWithVersion::clear_last_updated_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t GroupJoinRequestsWithVersion::last_updated_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupJoinRequestsWithVersion.last_updated_date)
    return _internal_last_updated_date();
}
inline void GroupJoinRequestsWithVersion::set_last_updated_date(::int64_t value) {
    _internal_set_last_updated_date(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupJoinRequestsWithVersion.last_updated_date)
}
inline ::int64_t GroupJoinRequestsWithVersion::_internal_last_updated_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.last_updated_date_;
}
inline void GroupJoinRequestsWithVersion::_internal_set_last_updated_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = value;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fjoin_5frequests_5fwith_5fversion_2eproto_2epb_2eh
