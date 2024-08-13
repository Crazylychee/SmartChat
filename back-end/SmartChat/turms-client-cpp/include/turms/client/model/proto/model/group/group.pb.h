// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/group/group.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_2eproto_2epb_2eh

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
#include "google/protobuf/map.h"  // IWYU pragma: export
#include "google/protobuf/map_field_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fgroup_2fgroup_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fgroup_2fgroup_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class Group;
struct GroupDefaultTypeInternal;
extern GroupDefaultTypeInternal _Group_default_instance_;
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

// -------------------------------------------------------------------

class Group final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.Group) */ {
   public:
    inline Group()
        : Group(nullptr) {
    }
    ~Group() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR Group(::google::protobuf::internal::ConstantInitialized);

    inline Group(const Group& from)
        : Group(nullptr, from) {
    }
    inline Group(Group&& from) noexcept
        : Group(nullptr, std::move(from)) {
    }
    inline Group& operator=(const Group& from) {
        CopyFrom(from);
        return *this;
    }
    inline Group& operator=(Group&& from) noexcept {
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

    static const Group& default_instance() {
        return *internal_default_instance();
    }
    static inline const Group* internal_default_instance() {
        return reinterpret_cast<const Group*>(&_Group_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 1;
    friend void swap(Group& a, Group& b) {
        a.Swap(&b);
    }
    inline void Swap(Group* other) {
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
    void UnsafeArenaSwap(Group* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    Group* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<Group>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const Group& from);
    void MergeFrom(const Group& from);
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
    void InternalSwap(Group* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.Group";
    }

   protected:
    explicit Group(::google::protobuf::Arena* arena);
    Group(::google::protobuf::Arena* arena, const Group& from);
    Group(::google::protobuf::Arena* arena, Group&& from) noexcept
        : Group(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kUserDefinedAttributesFieldNumber = 12,
        kCustomAttributesFieldNumber = 15,
        kNameFieldNumber = 5,
        kIntroFieldNumber = 6,
        kAnnouncementFieldNumber = 7,
        kIdFieldNumber = 1,
        kTypeIdFieldNumber = 2,
        kCreatorIdFieldNumber = 3,
        kOwnerIdFieldNumber = 4,
        kCreationDateFieldNumber = 8,
        kLastUpdatedDateFieldNumber = 9,
        kMuteEndDateFieldNumber = 10,
        kActiveFieldNumber = 11,
    };
    // map<string, .turms.client.model.proto.Value> user_defined_attributes = 12;
    int user_defined_attributes_size() const;

   private:
    int _internal_user_defined_attributes_size() const;

   public:
    void clear_user_defined_attributes();
    const ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>&
    user_defined_attributes() const;
    ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>*
    mutable_user_defined_attributes();

   private:
    const ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>&
    _internal_user_defined_attributes() const;
    ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>*
    _internal_mutable_user_defined_attributes();

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
    // optional string name = 5;
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
    // optional string intro = 6;
    bool has_intro() const;
    void clear_intro();
    const std::string& intro() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_intro(Arg_&& arg, Args_... args);
    std::string* mutable_intro();
    PROTOBUF_NODISCARD std::string* release_intro();
    void set_allocated_intro(std::string* value);

   private:
    const std::string& _internal_intro() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_intro(const std::string& value);
    std::string* _internal_mutable_intro();

   public:
    // optional string announcement = 7;
    bool has_announcement() const;
    void clear_announcement();
    const std::string& announcement() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_announcement(Arg_&& arg, Args_... args);
    std::string* mutable_announcement();
    PROTOBUF_NODISCARD std::string* release_announcement();
    void set_allocated_announcement(std::string* value);

   private:
    const std::string& _internal_announcement() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_announcement(const std::string& value);
    std::string* _internal_mutable_announcement();

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
    // optional int64 type_id = 2;
    bool has_type_id() const;
    void clear_type_id();
    ::int64_t type_id() const;
    void set_type_id(::int64_t value);

   private:
    ::int64_t _internal_type_id() const;
    void _internal_set_type_id(::int64_t value);

   public:
    // optional int64 creator_id = 3;
    bool has_creator_id() const;
    void clear_creator_id();
    ::int64_t creator_id() const;
    void set_creator_id(::int64_t value);

   private:
    ::int64_t _internal_creator_id() const;
    void _internal_set_creator_id(::int64_t value);

   public:
    // optional int64 owner_id = 4;
    bool has_owner_id() const;
    void clear_owner_id();
    ::int64_t owner_id() const;
    void set_owner_id(::int64_t value);

   private:
    ::int64_t _internal_owner_id() const;
    void _internal_set_owner_id(::int64_t value);

   public:
    // optional int64 creation_date = 8;
    bool has_creation_date() const;
    void clear_creation_date();
    ::int64_t creation_date() const;
    void set_creation_date(::int64_t value);

   private:
    ::int64_t _internal_creation_date() const;
    void _internal_set_creation_date(::int64_t value);

   public:
    // optional int64 last_updated_date = 9;
    bool has_last_updated_date() const;
    void clear_last_updated_date();
    ::int64_t last_updated_date() const;
    void set_last_updated_date(::int64_t value);

   private:
    ::int64_t _internal_last_updated_date() const;
    void _internal_set_last_updated_date(::int64_t value);

   public:
    // optional int64 mute_end_date = 10;
    bool has_mute_end_date() const;
    void clear_mute_end_date();
    ::int64_t mute_end_date() const;
    void set_mute_end_date(::int64_t value);

   private:
    ::int64_t _internal_mute_end_date() const;
    void _internal_set_mute_end_date(::int64_t value);

   public:
    // optional bool active = 11;
    bool has_active() const;
    void clear_active();
    bool active() const;
    void set_active(bool value);

   private:
    bool _internal_active() const;
    void _internal_set_active(bool value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.Group)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<4, 13, 3, 91, 2> _table_;

    static constexpr const void* _raw_default_instance_ = &_Group_default_instance_;

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
                              const Group& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::internal::MapFieldLite<std::string,
                                                   ::turms::client::model::proto::Value>
            user_defined_attributes_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr name_;
        ::google::protobuf::internal::ArenaStringPtr intro_;
        ::google::protobuf::internal::ArenaStringPtr announcement_;
        ::int64_t id_;
        ::int64_t type_id_;
        ::int64_t creator_id_;
        ::int64_t owner_id_;
        ::int64_t creation_date_;
        ::int64_t last_updated_date_;
        ::int64_t mute_end_date_;
        bool active_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fgroup_2fgroup_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// Group

// optional int64 id = 1;
inline bool Group::has_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void Group::clear_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int64_t Group::id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.id)
    return _internal_id();
}
inline void Group::set_id(::int64_t value) {
    _internal_set_id(value);
    _impl_._has_bits_[0] |= 0x00000008u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.id)
}
inline ::int64_t Group::_internal_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.id_;
}
inline void Group::_internal_set_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_ = value;
}

// optional int64 type_id = 2;
inline bool Group::has_type_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
    return value;
}
inline void Group::clear_type_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.type_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int64_t Group::type_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.type_id)
    return _internal_type_id();
}
inline void Group::set_type_id(::int64_t value) {
    _internal_set_type_id(value);
    _impl_._has_bits_[0] |= 0x00000010u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.type_id)
}
inline ::int64_t Group::_internal_type_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.type_id_;
}
inline void Group::_internal_set_type_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.type_id_ = value;
}

// optional int64 creator_id = 3;
inline bool Group::has_creator_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
    return value;
}
inline void Group::clear_creator_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creator_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::int64_t Group::creator_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.creator_id)
    return _internal_creator_id();
}
inline void Group::set_creator_id(::int64_t value) {
    _internal_set_creator_id(value);
    _impl_._has_bits_[0] |= 0x00000020u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.creator_id)
}
inline ::int64_t Group::_internal_creator_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creator_id_;
}
inline void Group::_internal_set_creator_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creator_id_ = value;
}

// optional int64 owner_id = 4;
inline bool Group::has_owner_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
    return value;
}
inline void Group::clear_owner_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.owner_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000040u;
}
inline ::int64_t Group::owner_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.owner_id)
    return _internal_owner_id();
}
inline void Group::set_owner_id(::int64_t value) {
    _internal_set_owner_id(value);
    _impl_._has_bits_[0] |= 0x00000040u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.owner_id)
}
inline ::int64_t Group::_internal_owner_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.owner_id_;
}
inline void Group::_internal_set_owner_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.owner_id_ = value;
}

// optional string name = 5;
inline bool Group::has_name() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void Group::clear_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.name_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Group::name() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.name)
    return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Group::set_name(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.name)
}
inline std::string* Group::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_name();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Group.name)
    return _s;
}
inline const std::string& Group::_internal_name() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.name_.Get();
}
inline void Group::_internal_set_name(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.name_.Set(value, GetArena());
}
inline std::string* Group::_internal_mutable_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.name_.Mutable(GetArena());
}
inline std::string* Group::release_name() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.Group.name)
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
inline void Group::set_allocated_name(std::string* value) {
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
        // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.Group.name)
}

// optional string intro = 6;
inline bool Group::has_intro() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void Group::clear_intro() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.intro_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Group::intro() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.intro)
    return _internal_intro();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Group::set_intro(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    _impl_.intro_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.intro)
}
inline std::string* Group::mutable_intro() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_intro();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Group.intro)
    return _s;
}
inline const std::string& Group::_internal_intro() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.intro_.Get();
}
inline void Group::_internal_set_intro(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    _impl_.intro_.Set(value, GetArena());
}
inline std::string* Group::_internal_mutable_intro() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    return _impl_.intro_.Mutable(GetArena());
}
inline std::string* Group::release_intro() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.Group.intro)
    if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000002u;
    auto* released = _impl_.intro_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.intro_.Set("", GetArena());
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    return released;
}
inline void Group::set_allocated_intro(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }
    _impl_.intro_.SetAllocated(value, GetArena());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    if (_impl_.intro_.IsDefault()) {
        _impl_.intro_.Set("", GetArena());
    }
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
        // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.Group.intro)
}

// optional string announcement = 7;
inline bool Group::has_announcement() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void Group::clear_announcement() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.announcement_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Group::announcement() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.announcement)
    return _internal_announcement();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Group::set_announcement(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    _impl_.announcement_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.announcement)
}
inline std::string* Group::mutable_announcement() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_announcement();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Group.announcement)
    return _s;
}
inline const std::string& Group::_internal_announcement() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.announcement_.Get();
}
inline void Group::_internal_set_announcement(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    _impl_.announcement_.Set(value, GetArena());
}
inline std::string* Group::_internal_mutable_announcement() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000004u;
    return _impl_.announcement_.Mutable(GetArena());
}
inline std::string* Group::release_announcement() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.Group.announcement)
    if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000004u;
    auto* released = _impl_.announcement_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.announcement_.Set("", GetArena());
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    return released;
}
inline void Group::set_allocated_announcement(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000004u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000004u;
    }
    _impl_.announcement_.SetAllocated(value, GetArena());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    if (_impl_.announcement_.IsDefault()) {
        _impl_.announcement_.Set("", GetArena());
    }
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
        // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.Group.announcement)
}

// optional int64 creation_date = 8;
inline bool Group::has_creation_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
    return value;
}
inline void Group::clear_creation_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000080u;
}
inline ::int64_t Group::creation_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.creation_date)
    return _internal_creation_date();
}
inline void Group::set_creation_date(::int64_t value) {
    _internal_set_creation_date(value);
    _impl_._has_bits_[0] |= 0x00000080u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.creation_date)
}
inline ::int64_t Group::_internal_creation_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creation_date_;
}
inline void Group::_internal_set_creation_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_ = value;
}

// optional int64 last_updated_date = 9;
inline bool Group::has_last_updated_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000100u) != 0;
    return value;
}
inline void Group::clear_last_updated_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000100u;
}
inline ::int64_t Group::last_updated_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.last_updated_date)
    return _internal_last_updated_date();
}
inline void Group::set_last_updated_date(::int64_t value) {
    _internal_set_last_updated_date(value);
    _impl_._has_bits_[0] |= 0x00000100u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.last_updated_date)
}
inline ::int64_t Group::_internal_last_updated_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.last_updated_date_;
}
inline void Group::_internal_set_last_updated_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.last_updated_date_ = value;
}

// optional int64 mute_end_date = 10;
inline bool Group::has_mute_end_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000200u) != 0;
    return value;
}
inline void Group::clear_mute_end_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.mute_end_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000200u;
}
inline ::int64_t Group::mute_end_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.mute_end_date)
    return _internal_mute_end_date();
}
inline void Group::set_mute_end_date(::int64_t value) {
    _internal_set_mute_end_date(value);
    _impl_._has_bits_[0] |= 0x00000200u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.mute_end_date)
}
inline ::int64_t Group::_internal_mute_end_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.mute_end_date_;
}
inline void Group::_internal_set_mute_end_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.mute_end_date_ = value;
}

// optional bool active = 11;
inline bool Group::has_active() const {
    bool value = (_impl_._has_bits_[0] & 0x00000400u) != 0;
    return value;
}
inline void Group::clear_active() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.active_ = false;
    _impl_._has_bits_[0] &= ~0x00000400u;
}
inline bool Group::active() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.active)
    return _internal_active();
}
inline void Group::set_active(bool value) {
    _internal_set_active(value);
    _impl_._has_bits_[0] |= 0x00000400u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.Group.active)
}
inline bool Group::_internal_active() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.active_;
}
inline void Group::_internal_set_active(bool value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.active_ = value;
}

// map<string, .turms.client.model.proto.Value> user_defined_attributes = 12;
inline int Group::_internal_user_defined_attributes_size() const {
    return _internal_user_defined_attributes().size();
}
inline int Group::user_defined_attributes_size() const {
    return _internal_user_defined_attributes_size();
}
inline const ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>&
Group::_internal_user_defined_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.user_defined_attributes_.GetMap();
}
inline const ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>&
Group::user_defined_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_map:turms.client.model.proto.Group.user_defined_attributes)
    return _internal_user_defined_attributes();
}
inline ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>*
Group::_internal_mutable_user_defined_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _impl_.user_defined_attributes_.MutableMap();
}
inline ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>*
Group::mutable_user_defined_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_map:turms.client.model.proto.Group.user_defined_attributes)
    return _internal_mutable_user_defined_attributes();
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int Group::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int Group::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* Group::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Group.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
Group::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.Group.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& Group::custom_attributes(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.Group.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* Group::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.Group.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
Group::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.Group.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
Group::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
Group::_internal_mutable_custom_attributes() {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_2eproto_2epb_2eh
