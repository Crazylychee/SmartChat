// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/user/relationship/query_related_user_ids_request.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2frelationship_2fquery_5frelated_5fuser_5fids_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2frelationship_2fquery_5frelated_5fuser_5fids_5frequest_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fuser_2frelationship_2fquery_5frelated_5fuser_5fids_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fuser_2frelationship_2fquery_5frelated_5fuser_5fids_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class QueryRelatedUserIdsRequest;
struct QueryRelatedUserIdsRequestDefaultTypeInternal;
extern QueryRelatedUserIdsRequestDefaultTypeInternal _QueryRelatedUserIdsRequest_default_instance_;
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

class QueryRelatedUserIdsRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.QueryRelatedUserIdsRequest) */
{
   public:
    inline QueryRelatedUserIdsRequest()
        : QueryRelatedUserIdsRequest(nullptr) {
    }
    ~QueryRelatedUserIdsRequest() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR QueryRelatedUserIdsRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline QueryRelatedUserIdsRequest(const QueryRelatedUserIdsRequest& from)
        : QueryRelatedUserIdsRequest(nullptr, from) {
    }
    inline QueryRelatedUserIdsRequest(QueryRelatedUserIdsRequest&& from) noexcept
        : QueryRelatedUserIdsRequest(nullptr, std::move(from)) {
    }
    inline QueryRelatedUserIdsRequest& operator=(const QueryRelatedUserIdsRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline QueryRelatedUserIdsRequest& operator=(QueryRelatedUserIdsRequest&& from) noexcept {
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

    static const QueryRelatedUserIdsRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const QueryRelatedUserIdsRequest* internal_default_instance() {
        return reinterpret_cast<const QueryRelatedUserIdsRequest*>(
            &_QueryRelatedUserIdsRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(QueryRelatedUserIdsRequest& a, QueryRelatedUserIdsRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(QueryRelatedUserIdsRequest* other) {
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
    void UnsafeArenaSwap(QueryRelatedUserIdsRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    QueryRelatedUserIdsRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<QueryRelatedUserIdsRequest>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const QueryRelatedUserIdsRequest& from);
    void MergeFrom(const QueryRelatedUserIdsRequest& from);
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
    void InternalSwap(QueryRelatedUserIdsRequest* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.QueryRelatedUserIdsRequest";
    }

   protected:
    explicit QueryRelatedUserIdsRequest(::google::protobuf::Arena* arena);
    QueryRelatedUserIdsRequest(::google::protobuf::Arena* arena,
                               const QueryRelatedUserIdsRequest& from);
    QueryRelatedUserIdsRequest(::google::protobuf::Arena* arena,
                               QueryRelatedUserIdsRequest&& from) noexcept
        : QueryRelatedUserIdsRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kGroupIndexesFieldNumber = 2,
        kCustomAttributesFieldNumber = 15,
        kLastUpdatedDateFieldNumber = 3,
        kBlockedFieldNumber = 1,
    };
    // repeated int32 group_indexes = 2;
    int group_indexes_size() const;

   private:
    int _internal_group_indexes_size() const;

   public:
    void clear_group_indexes();
    ::int32_t group_indexes(int index) const;
    void set_group_indexes(int index, ::int32_t value);
    void add_group_indexes(::int32_t value);
    const ::google::protobuf::RepeatedField<::int32_t>& group_indexes() const;
    ::google::protobuf::RepeatedField<::int32_t>* mutable_group_indexes();

   private:
    const ::google::protobuf::RepeatedField<::int32_t>& _internal_group_indexes() const;
    ::google::protobuf::RepeatedField<::int32_t>* _internal_mutable_group_indexes();

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
    // optional int64 last_updated_date = 3;
    bool has_last_updated_date() const;
    void clear_last_updated_date();
    ::int64_t last_updated_date() const;
    void set_last_updated_date(::int64_t value);

   private:
    ::int64_t _internal_last_updated_date() const;
    void _internal_set_last_updated_date(::int64_t value);

   public:
    // optional bool blocked = 1;
    bool has_blocked() const;
    void clear_blocked();
    bool blocked() const;
    void set_blocked(bool value);

   private:
    bool _internal_blocked() const;
    void _internal_set_blocked(bool value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.QueryRelatedUserIdsRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<3, 4, 1, 0, 2> _table_;

    static constexpr const void* _raw_default_instance_ =
        &_QueryRelatedUserIdsRequest_default_instance_;

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
                              const QueryRelatedUserIdsRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedField<::int32_t> group_indexes_;
        mutable ::google::protobuf::internal::CachedSize _group_indexes_cached_byte_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::int64_t last_updated_date_;
        bool blocked_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::
        TableStruct_request_2fuser_2frelationship_2fquery_5frelated_5fuser_5fids_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryRelatedUserIdsRequest

// optional bool blocked = 1;
inline bool QueryRelatedUserIdsRequest::has_blocked() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void QueryRelatedUserIdsRequest::clear_blocked() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.blocked_ = false;
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline bool QueryRelatedUserIdsRequest::blocked() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryRelatedUserIdsRequest.blocked)
    return _internal_blocked();
}
inline void QueryRelatedUserIdsRequest::set_blocked(bool value) {
    _internal_set_blocked(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryRelatedUserIdsRequest.blocked)
}
inline bool QueryRelatedUserIdsRequest::_internal_blocked() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.blocked_;
}
inline void QueryRelatedUserIdsRequest::_internal_set_blocked(bool value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.blocked_ = value;
}

// repeated int32 group_indexes = 2;
inline int QueryRelatedUserIdsRequest::_internal_group_indexes_size() const {
    return _internal_group_indexes().size();
}
inline int QueryRelatedUserIdsRequest::group_indexes_size() const {
    return _internal_group_indexes_size();
}
inline void QueryRelatedUserIdsRequest::clear_group_indexes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_indexes_.Clear();
}
inline ::int32_t QueryRelatedUserIdsRequest::group_indexes(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryRelatedUserIdsRequest.group_indexes)
    return _internal_group_indexes().Get(index);
}
inline void QueryRelatedUserIdsRequest::set_group_indexes(int index, ::int32_t value) {
    _internal_mutable_group_indexes()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryRelatedUserIdsRequest.group_indexes)
}
inline void QueryRelatedUserIdsRequest::add_group_indexes(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_group_indexes()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryRelatedUserIdsRequest.group_indexes)
}
inline const ::google::protobuf::RepeatedField<::int32_t>&
QueryRelatedUserIdsRequest::group_indexes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryRelatedUserIdsRequest.group_indexes)
    return _internal_group_indexes();
}
inline ::google::protobuf::RepeatedField<::int32_t>*
QueryRelatedUserIdsRequest::mutable_group_indexes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryRelatedUserIdsRequest.group_indexes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_group_indexes();
}
inline const ::google::protobuf::RepeatedField<::int32_t>&
QueryRelatedUserIdsRequest::_internal_group_indexes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_indexes_;
}
inline ::google::protobuf::RepeatedField<::int32_t>*
QueryRelatedUserIdsRequest::_internal_mutable_group_indexes() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.group_indexes_;
}

// optional int64 last_updated_date = 3;
inline bool QueryRelatedUserIdsRequest::has_last_updated_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void QueryRelatedUserIdsRequest::clear_last_updated_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t QueryRelatedUserIdsRequest::last_updated_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryRelatedUserIdsRequest.last_updated_date)
    return _internal_last_updated_date();
}
inline void QueryRelatedUserIdsRequest::set_last_updated_date(::int64_t value) {
    _internal_set_last_updated_date(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryRelatedUserIdsRequest.last_updated_date)
}
inline ::int64_t QueryRelatedUserIdsRequest::_internal_last_updated_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.last_updated_date_;
}
inline void QueryRelatedUserIdsRequest::_internal_set_last_updated_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int QueryRelatedUserIdsRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int QueryRelatedUserIdsRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* QueryRelatedUserIdsRequest::mutable_custom_attributes(
    int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryRelatedUserIdsRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryRelatedUserIdsRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryRelatedUserIdsRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& QueryRelatedUserIdsRequest::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryRelatedUserIdsRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* QueryRelatedUserIdsRequest::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryRelatedUserIdsRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryRelatedUserIdsRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryRelatedUserIdsRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryRelatedUserIdsRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryRelatedUserIdsRequest::_internal_mutable_custom_attributes() {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2frelationship_2fquery_5frelated_5fuser_5fids_5frequest_2eproto_2epb_2eh