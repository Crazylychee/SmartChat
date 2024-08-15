// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/user/user_online_status.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5fonline_5fstatus_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5fonline_5fstatus_2eproto_2epb_2eh

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
#include "turms/client/model/proto/constant/device_type.pb.h"
#include "turms/client/model/proto/constant/user_status.pb.h"
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fuser_5fonline_5fstatus_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fuser_5fonline_5fstatus_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class UserOnlineStatus;
struct UserOnlineStatusDefaultTypeInternal;
extern UserOnlineStatusDefaultTypeInternal _UserOnlineStatus_default_instance_;
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

class UserOnlineStatus final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.UserOnlineStatus) */ {
   public:
    inline UserOnlineStatus()
        : UserOnlineStatus(nullptr) {
    }
    ~UserOnlineStatus() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR UserOnlineStatus(::google::protobuf::internal::ConstantInitialized);

    inline UserOnlineStatus(const UserOnlineStatus& from)
        : UserOnlineStatus(nullptr, from) {
    }
    inline UserOnlineStatus(UserOnlineStatus&& from) noexcept
        : UserOnlineStatus(nullptr, std::move(from)) {
    }
    inline UserOnlineStatus& operator=(const UserOnlineStatus& from) {
        CopyFrom(from);
        return *this;
    }
    inline UserOnlineStatus& operator=(UserOnlineStatus&& from) noexcept {
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

    static const UserOnlineStatus& default_instance() {
        return *internal_default_instance();
    }
    static inline const UserOnlineStatus* internal_default_instance() {
        return reinterpret_cast<const UserOnlineStatus*>(&_UserOnlineStatus_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(UserOnlineStatus& a, UserOnlineStatus& b) {
        a.Swap(&b);
    }
    inline void Swap(UserOnlineStatus* other) {
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
    void UnsafeArenaSwap(UserOnlineStatus* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    UserOnlineStatus* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<UserOnlineStatus>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const UserOnlineStatus& from);
    void MergeFrom(const UserOnlineStatus& from);
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
    void InternalSwap(UserOnlineStatus* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.UserOnlineStatus";
    }

   protected:
    explicit UserOnlineStatus(::google::protobuf::Arena* arena);
    UserOnlineStatus(::google::protobuf::Arena* arena, const UserOnlineStatus& from);
    UserOnlineStatus(::google::protobuf::Arena* arena, UserOnlineStatus&& from) noexcept
        : UserOnlineStatus(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kDeviceTypesFieldNumber = 3,
        kCustomAttributesFieldNumber = 15,
        kUserIdFieldNumber = 1,
        kUserStatusFieldNumber = 2,
    };
    // repeated .turms.client.model.proto.DeviceType device_types = 3;
    int device_types_size() const;

   private:
    int _internal_device_types_size() const;

   public:
    void clear_device_types();

   public:
    ::turms::client::model::proto::DeviceType device_types(int index) const;
    void set_device_types(int index, ::turms::client::model::proto::DeviceType value);
    void add_device_types(::turms::client::model::proto::DeviceType value);
    const ::google::protobuf::RepeatedField<int>& device_types() const;
    ::google::protobuf::RepeatedField<int>* mutable_device_types();

   private:
    const ::google::protobuf::RepeatedField<int>& _internal_device_types() const;
    ::google::protobuf::RepeatedField<int>* _internal_mutable_device_types();

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
    // int64 user_id = 1;
    void clear_user_id();
    ::int64_t user_id() const;
    void set_user_id(::int64_t value);

   private:
    ::int64_t _internal_user_id() const;
    void _internal_set_user_id(::int64_t value);

   public:
    // .turms.client.model.proto.UserStatus user_status = 2;
    void clear_user_status();
    ::turms::client::model::proto::UserStatus user_status() const;
    void set_user_status(::turms::client::model::proto::UserStatus value);

   private:
    ::turms::client::model::proto::UserStatus _internal_user_status() const;
    void _internal_set_user_status(::turms::client::model::proto::UserStatus value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.UserOnlineStatus)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<3, 4, 1, 0, 2> _table_;

    static constexpr const void* _raw_default_instance_ = &_UserOnlineStatus_default_instance_;

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
                              const UserOnlineStatus& from_msg);
        ::google::protobuf::RepeatedField<int> device_types_;
        mutable ::google::protobuf::internal::CachedSize _device_types_cached_byte_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::int64_t user_id_;
        int user_status_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fuser_2fuser_5fonline_5fstatus_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UserOnlineStatus

// int64 user_id = 1;
inline void UserOnlineStatus::clear_user_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = ::int64_t{0};
}
inline ::int64_t UserOnlineStatus::user_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserOnlineStatus.user_id)
    return _internal_user_id();
}
inline void UserOnlineStatus::set_user_id(::int64_t value) {
    _internal_set_user_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserOnlineStatus.user_id)
}
inline ::int64_t UserOnlineStatus::_internal_user_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_id_;
}
inline void UserOnlineStatus::_internal_set_user_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_id_ = value;
}

// .turms.client.model.proto.UserStatus user_status = 2;
inline void UserOnlineStatus::clear_user_status() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_status_ = 0;
}
inline ::turms::client::model::proto::UserStatus UserOnlineStatus::user_status() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserOnlineStatus.user_status)
    return _internal_user_status();
}
inline void UserOnlineStatus::set_user_status(::turms::client::model::proto::UserStatus value) {
    _internal_set_user_status(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserOnlineStatus.user_status)
}
inline ::turms::client::model::proto::UserStatus UserOnlineStatus::_internal_user_status() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return static_cast<::turms::client::model::proto::UserStatus>(_impl_.user_status_);
}
inline void UserOnlineStatus::_internal_set_user_status(
    ::turms::client::model::proto::UserStatus value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.user_status_ = value;
}

// repeated .turms.client.model.proto.DeviceType device_types = 3;
inline int UserOnlineStatus::_internal_device_types_size() const {
    return _internal_device_types().size();
}
inline int UserOnlineStatus::device_types_size() const {
    return _internal_device_types_size();
}
inline void UserOnlineStatus::clear_device_types() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.device_types_.Clear();
}
inline ::turms::client::model::proto::DeviceType UserOnlineStatus::device_types(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserOnlineStatus.device_types)
    return static_cast<::turms::client::model::proto::DeviceType>(
        _internal_device_types().Get(index));
}
inline void UserOnlineStatus::set_device_types(int index,
                                               ::turms::client::model::proto::DeviceType value) {
    _internal_mutable_device_types()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserOnlineStatus.device_types)
}
inline void UserOnlineStatus::add_device_types(::turms::client::model::proto::DeviceType value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_device_types()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.UserOnlineStatus.device_types)
}
inline const ::google::protobuf::RepeatedField<int>& UserOnlineStatus::device_types() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.UserOnlineStatus.device_types)
    return _internal_device_types();
}
inline ::google::protobuf::RepeatedField<int>* UserOnlineStatus::mutable_device_types()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.UserOnlineStatus.device_types)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_device_types();
}
inline const ::google::protobuf::RepeatedField<int>& UserOnlineStatus::_internal_device_types()
    const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.device_types_;
}
inline ::google::protobuf::RepeatedField<int>* UserOnlineStatus::_internal_mutable_device_types() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.device_types_;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int UserOnlineStatus::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int UserOnlineStatus::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* UserOnlineStatus::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserOnlineStatus.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
UserOnlineStatus::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.UserOnlineStatus.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& UserOnlineStatus::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserOnlineStatus.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* UserOnlineStatus::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.UserOnlineStatus.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
UserOnlineStatus::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.UserOnlineStatus.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
UserOnlineStatus::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
UserOnlineStatus::_internal_mutable_custom_attributes() {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5fonline_5fstatus_2eproto_2epb_2eh