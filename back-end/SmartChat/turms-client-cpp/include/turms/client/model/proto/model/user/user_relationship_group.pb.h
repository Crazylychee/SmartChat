// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/user/user_relationship_group.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5frelationship_5fgroup_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5frelationship_5fgroup_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fuser_5frelationship_5fgroup_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fuser_5frelationship_5fgroup_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class UserRelationshipGroup;
struct UserRelationshipGroupDefaultTypeInternal;
extern UserRelationshipGroupDefaultTypeInternal _UserRelationshipGroup_default_instance_;
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

class UserRelationshipGroup final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.UserRelationshipGroup) */ {
   public:
    inline UserRelationshipGroup()
        : UserRelationshipGroup(nullptr) {
    }
    ~UserRelationshipGroup() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR UserRelationshipGroup(
        ::google::protobuf::internal::ConstantInitialized);

    inline UserRelationshipGroup(const UserRelationshipGroup& from)
        : UserRelationshipGroup(nullptr, from) {
    }
    inline UserRelationshipGroup(UserRelationshipGroup&& from) noexcept
        : UserRelationshipGroup(nullptr, std::move(from)) {
    }
    inline UserRelationshipGroup& operator=(const UserRelationshipGroup& from) {
        CopyFrom(from);
        return *this;
    }
    inline UserRelationshipGroup& operator=(UserRelationshipGroup&& from) noexcept {
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

    static const UserRelationshipGroup& default_instance() {
        return *internal_default_instance();
    }
    static inline const UserRelationshipGroup* internal_default_instance() {
        return reinterpret_cast<const UserRelationshipGroup*>(
            &_UserRelationshipGroup_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(UserRelationshipGroup& a, UserRelationshipGroup& b) {
        a.Swap(&b);
    }
    inline void Swap(UserRelationshipGroup* other) {
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
    void UnsafeArenaSwap(UserRelationshipGroup* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    UserRelationshipGroup* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<UserRelationshipGroup>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const UserRelationshipGroup& from);
    void MergeFrom(const UserRelationshipGroup& from);
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
    void InternalSwap(UserRelationshipGroup* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.UserRelationshipGroup";
    }

   protected:
    explicit UserRelationshipGroup(::google::protobuf::Arena* arena);
    UserRelationshipGroup(::google::protobuf::Arena* arena, const UserRelationshipGroup& from);
    UserRelationshipGroup(::google::protobuf::Arena* arena, UserRelationshipGroup&& from) noexcept
        : UserRelationshipGroup(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kNameFieldNumber = 2,
        kIndexFieldNumber = 1,
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
    // string name = 2;
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
    // int32 index = 1;
    void clear_index();
    ::int32_t index() const;
    void set_index(::int32_t value);

   private:
    ::int32_t _internal_index() const;
    void _internal_set_index(::int32_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.UserRelationshipGroup)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<2, 3, 1, 59, 2> _table_;

    static constexpr const void* _raw_default_instance_ = &_UserRelationshipGroup_default_instance_;

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
                              const UserRelationshipGroup& from_msg);
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr name_;
        ::int32_t index_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fuser_2fuser_5frelationship_5fgroup_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UserRelationshipGroup

// int32 index = 1;
inline void UserRelationshipGroup::clear_index() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.index_ = 0;
}
inline ::int32_t UserRelationshipGroup::index() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserRelationshipGroup.index)
    return _internal_index();
}
inline void UserRelationshipGroup::set_index(::int32_t value) {
    _internal_set_index(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserRelationshipGroup.index)
}
inline ::int32_t UserRelationshipGroup::_internal_index() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.index_;
}
inline void UserRelationshipGroup::_internal_set_index(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.index_ = value;
}

// string name = 2;
inline void UserRelationshipGroup::clear_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.ClearToEmpty();
}
inline const std::string& UserRelationshipGroup::name() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserRelationshipGroup.name)
    return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void UserRelationshipGroup::set_name(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserRelationshipGroup.name)
}
inline std::string* UserRelationshipGroup::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_name();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserRelationshipGroup.name)
    return _s;
}
inline const std::string& UserRelationshipGroup::_internal_name() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.name_.Get();
}
inline void UserRelationshipGroup::_internal_set_name(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.Set(value, GetArena());
}
inline std::string* UserRelationshipGroup::_internal_mutable_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _impl_.name_.Mutable(GetArena());
}
inline std::string* UserRelationshipGroup::release_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.UserRelationshipGroup.name)
    return _impl_.name_.Release();
}
inline void UserRelationshipGroup::set_allocated_name(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.SetAllocated(value, GetArena());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    if (_impl_.name_.IsDefault()) {
        _impl_.name_.Set("", GetArena());
    }
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.UserRelationshipGroup.name)
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int UserRelationshipGroup::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int UserRelationshipGroup::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* UserRelationshipGroup::mutable_custom_attributes(
    int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserRelationshipGroup.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
UserRelationshipGroup::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.UserRelationshipGroup.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& UserRelationshipGroup::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserRelationshipGroup.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* UserRelationshipGroup::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.UserRelationshipGroup.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
UserRelationshipGroup::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.UserRelationshipGroup.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
UserRelationshipGroup::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
UserRelationshipGroup::_internal_mutable_custom_attributes() {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5frelationship_5fgroup_2eproto_2epb_2eh