// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/storage/query_message_attachment_infos_request.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fstorage_2fquery_5fmessage_5fattachment_5finfos_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fstorage_2fquery_5fmessage_5fattachment_5finfos_5frequest_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_request_2fstorage_2fquery_5fmessage_5fattachment_5finfos_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fstorage_2fquery_5fmessage_5fattachment_5finfos_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class QueryMessageAttachmentInfosRequest;
struct QueryMessageAttachmentInfosRequestDefaultTypeInternal;
extern QueryMessageAttachmentInfosRequestDefaultTypeInternal
    _QueryMessageAttachmentInfosRequest_default_instance_;
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

class QueryMessageAttachmentInfosRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.QueryMessageAttachmentInfosRequest)
 */
{
   public:
    inline QueryMessageAttachmentInfosRequest()
        : QueryMessageAttachmentInfosRequest(nullptr) {
    }
    ~QueryMessageAttachmentInfosRequest() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR QueryMessageAttachmentInfosRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline QueryMessageAttachmentInfosRequest(const QueryMessageAttachmentInfosRequest& from)
        : QueryMessageAttachmentInfosRequest(nullptr, from) {
    }
    inline QueryMessageAttachmentInfosRequest(QueryMessageAttachmentInfosRequest&& from) noexcept
        : QueryMessageAttachmentInfosRequest(nullptr, std::move(from)) {
    }
    inline QueryMessageAttachmentInfosRequest& operator=(
        const QueryMessageAttachmentInfosRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline QueryMessageAttachmentInfosRequest& operator=(
        QueryMessageAttachmentInfosRequest&& from) noexcept {
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

    static const QueryMessageAttachmentInfosRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const QueryMessageAttachmentInfosRequest* internal_default_instance() {
        return reinterpret_cast<const QueryMessageAttachmentInfosRequest*>(
            &_QueryMessageAttachmentInfosRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(QueryMessageAttachmentInfosRequest& a, QueryMessageAttachmentInfosRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(QueryMessageAttachmentInfosRequest* other) {
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
    void UnsafeArenaSwap(QueryMessageAttachmentInfosRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    QueryMessageAttachmentInfosRequest* New(
        ::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<
            QueryMessageAttachmentInfosRequest>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const QueryMessageAttachmentInfosRequest& from);
    void MergeFrom(const QueryMessageAttachmentInfosRequest& from);
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
    void InternalSwap(QueryMessageAttachmentInfosRequest* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.QueryMessageAttachmentInfosRequest";
    }

   protected:
    explicit QueryMessageAttachmentInfosRequest(::google::protobuf::Arena* arena);
    QueryMessageAttachmentInfosRequest(::google::protobuf::Arena* arena,
                                       const QueryMessageAttachmentInfosRequest& from);
    QueryMessageAttachmentInfosRequest(::google::protobuf::Arena* arena,
                                       QueryMessageAttachmentInfosRequest&& from) noexcept
        : QueryMessageAttachmentInfosRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kUserIdsFieldNumber = 1,
        kGroupIdsFieldNumber = 2,
        kCustomAttributesFieldNumber = 15,
        kCreationDateStartFieldNumber = 3,
        kCreationDateEndFieldNumber = 4,
        kInPrivateConversationFieldNumber = 5,
        kAreSharedByMeFieldNumber = 6,
    };
    // repeated int64 user_ids = 1;
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
    // repeated int64 group_ids = 2;
    int group_ids_size() const;

   private:
    int _internal_group_ids_size() const;

   public:
    void clear_group_ids();
    ::int64_t group_ids(int index) const;
    void set_group_ids(int index, ::int64_t value);
    void add_group_ids(::int64_t value);
    const ::google::protobuf::RepeatedField<::int64_t>& group_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* mutable_group_ids();

   private:
    const ::google::protobuf::RepeatedField<::int64_t>& _internal_group_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* _internal_mutable_group_ids();

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
    // optional int64 creation_date_start = 3;
    bool has_creation_date_start() const;
    void clear_creation_date_start();
    ::int64_t creation_date_start() const;
    void set_creation_date_start(::int64_t value);

   private:
    ::int64_t _internal_creation_date_start() const;
    void _internal_set_creation_date_start(::int64_t value);

   public:
    // optional int64 creation_date_end = 4;
    bool has_creation_date_end() const;
    void clear_creation_date_end();
    ::int64_t creation_date_end() const;
    void set_creation_date_end(::int64_t value);

   private:
    ::int64_t _internal_creation_date_end() const;
    void _internal_set_creation_date_end(::int64_t value);

   public:
    // optional bool in_private_conversation = 5;
    bool has_in_private_conversation() const;
    void clear_in_private_conversation();
    bool in_private_conversation() const;
    void set_in_private_conversation(bool value);

   private:
    bool _internal_in_private_conversation() const;
    void _internal_set_in_private_conversation(bool value);

   public:
    // optional bool are_shared_by_me = 6;
    bool has_are_shared_by_me() const;
    void clear_are_shared_by_me();
    bool are_shared_by_me() const;
    void set_are_shared_by_me(bool value);

   private:
    bool _internal_are_shared_by_me() const;
    void _internal_set_are_shared_by_me(bool value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.QueryMessageAttachmentInfosRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<3, 7, 1, 0, 2> _table_;

    static constexpr const void* _raw_default_instance_ =
        &_QueryMessageAttachmentInfosRequest_default_instance_;

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
                              const QueryMessageAttachmentInfosRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedField<::int64_t> user_ids_;
        mutable ::google::protobuf::internal::CachedSize _user_ids_cached_byte_size_;
        ::google::protobuf::RepeatedField<::int64_t> group_ids_;
        mutable ::google::protobuf::internal::CachedSize _group_ids_cached_byte_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::int64_t creation_date_start_;
        ::int64_t creation_date_end_;
        bool in_private_conversation_;
        bool are_shared_by_me_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::
        TableStruct_request_2fstorage_2fquery_5fmessage_5fattachment_5finfos_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryMessageAttachmentInfosRequest

// repeated int64 user_ids = 1;
inline int QueryMessageAttachmentInfosRequest::_internal_user_ids_size() const {
    return _internal_user_ids().size();
}
inline int QueryMessageAttachmentInfosRequest::user_ids_size() const {
    return _internal_user_ids_size();
}
inline void QueryMessageAttachmentInfosRequest::clear_user_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_ids_.Clear();
}
inline ::int64_t QueryMessageAttachmentInfosRequest::user_ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMessageAttachmentInfosRequest.user_ids)
    return _internal_user_ids().Get(index);
}
inline void QueryMessageAttachmentInfosRequest::set_user_ids(int index, ::int64_t value) {
    _internal_mutable_user_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMessageAttachmentInfosRequest.user_ids)
}
inline void QueryMessageAttachmentInfosRequest::add_user_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_user_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryMessageAttachmentInfosRequest.user_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
QueryMessageAttachmentInfosRequest::user_ids() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryMessageAttachmentInfosRequest.user_ids)
    return _internal_user_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>*
QueryMessageAttachmentInfosRequest::mutable_user_ids() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryMessageAttachmentInfosRequest.user_ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_user_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
QueryMessageAttachmentInfosRequest::_internal_user_ids() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>*
QueryMessageAttachmentInfosRequest::_internal_mutable_user_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.user_ids_;
}

// repeated int64 group_ids = 2;
inline int QueryMessageAttachmentInfosRequest::_internal_group_ids_size() const {
    return _internal_group_ids().size();
}
inline int QueryMessageAttachmentInfosRequest::group_ids_size() const {
    return _internal_group_ids_size();
}
inline void QueryMessageAttachmentInfosRequest::clear_group_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.group_ids_.Clear();
}
inline ::int64_t QueryMessageAttachmentInfosRequest::group_ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMessageAttachmentInfosRequest.group_ids)
    return _internal_group_ids().Get(index);
}
inline void QueryMessageAttachmentInfosRequest::set_group_ids(int index, ::int64_t value) {
    _internal_mutable_group_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMessageAttachmentInfosRequest.group_ids)
}
inline void QueryMessageAttachmentInfosRequest::add_group_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_group_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryMessageAttachmentInfosRequest.group_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
QueryMessageAttachmentInfosRequest::group_ids() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryMessageAttachmentInfosRequest.group_ids)
    return _internal_group_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>*
QueryMessageAttachmentInfosRequest::mutable_group_ids() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryMessageAttachmentInfosRequest.group_ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_group_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
QueryMessageAttachmentInfosRequest::_internal_group_ids() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.group_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>*
QueryMessageAttachmentInfosRequest::_internal_mutable_group_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.group_ids_;
}

// optional int64 creation_date_start = 3;
inline bool QueryMessageAttachmentInfosRequest::has_creation_date_start() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void QueryMessageAttachmentInfosRequest::clear_creation_date_start() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_start_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t QueryMessageAttachmentInfosRequest::creation_date_start() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMessageAttachmentInfosRequest.creation_date_start)
    return _internal_creation_date_start();
}
inline void QueryMessageAttachmentInfosRequest::set_creation_date_start(::int64_t value) {
    _internal_set_creation_date_start(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMessageAttachmentInfosRequest.creation_date_start)
}
inline ::int64_t QueryMessageAttachmentInfosRequest::_internal_creation_date_start() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creation_date_start_;
}
inline void QueryMessageAttachmentInfosRequest::_internal_set_creation_date_start(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_start_ = value;
}

// optional int64 creation_date_end = 4;
inline bool QueryMessageAttachmentInfosRequest::has_creation_date_end() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void QueryMessageAttachmentInfosRequest::clear_creation_date_end() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_end_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t QueryMessageAttachmentInfosRequest::creation_date_end() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMessageAttachmentInfosRequest.creation_date_end)
    return _internal_creation_date_end();
}
inline void QueryMessageAttachmentInfosRequest::set_creation_date_end(::int64_t value) {
    _internal_set_creation_date_end(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMessageAttachmentInfosRequest.creation_date_end)
}
inline ::int64_t QueryMessageAttachmentInfosRequest::_internal_creation_date_end() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creation_date_end_;
}
inline void QueryMessageAttachmentInfosRequest::_internal_set_creation_date_end(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_end_ = value;
}

// optional bool in_private_conversation = 5;
inline bool QueryMessageAttachmentInfosRequest::has_in_private_conversation() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void QueryMessageAttachmentInfosRequest::clear_in_private_conversation() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.in_private_conversation_ = false;
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline bool QueryMessageAttachmentInfosRequest::in_private_conversation() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMessageAttachmentInfosRequest.in_private_conversation)
    return _internal_in_private_conversation();
}
inline void QueryMessageAttachmentInfosRequest::set_in_private_conversation(bool value) {
    _internal_set_in_private_conversation(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMessageAttachmentInfosRequest.in_private_conversation)
}
inline bool QueryMessageAttachmentInfosRequest::_internal_in_private_conversation() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.in_private_conversation_;
}
inline void QueryMessageAttachmentInfosRequest::_internal_set_in_private_conversation(bool value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.in_private_conversation_ = value;
}

// optional bool are_shared_by_me = 6;
inline bool QueryMessageAttachmentInfosRequest::has_are_shared_by_me() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void QueryMessageAttachmentInfosRequest::clear_are_shared_by_me() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.are_shared_by_me_ = false;
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline bool QueryMessageAttachmentInfosRequest::are_shared_by_me() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMessageAttachmentInfosRequest.are_shared_by_me)
    return _internal_are_shared_by_me();
}
inline void QueryMessageAttachmentInfosRequest::set_are_shared_by_me(bool value) {
    _internal_set_are_shared_by_me(value);
    _impl_._has_bits_[0] |= 0x00000008u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryMessageAttachmentInfosRequest.are_shared_by_me)
}
inline bool QueryMessageAttachmentInfosRequest::_internal_are_shared_by_me() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.are_shared_by_me_;
}
inline void QueryMessageAttachmentInfosRequest::_internal_set_are_shared_by_me(bool value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.are_shared_by_me_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int QueryMessageAttachmentInfosRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int QueryMessageAttachmentInfosRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value*
QueryMessageAttachmentInfosRequest::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.QueryMessageAttachmentInfosRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryMessageAttachmentInfosRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.QueryMessageAttachmentInfosRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value&
QueryMessageAttachmentInfosRequest::custom_attributes(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryMessageAttachmentInfosRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value*
QueryMessageAttachmentInfosRequest::add_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.QueryMessageAttachmentInfosRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryMessageAttachmentInfosRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.QueryMessageAttachmentInfosRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
QueryMessageAttachmentInfosRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
QueryMessageAttachmentInfosRequest::_internal_mutable_custom_attributes() {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fstorage_2fquery_5fmessage_5fattachment_5finfos_5frequest_2eproto_2epb_2eh
