// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/user/nearby_users.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fnearby_5fusers_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fnearby_5fusers_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/user/nearby_user.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fnearby_5fusers_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fnearby_5fusers_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class NearbyUsers;
struct NearbyUsersDefaultTypeInternal;
extern NearbyUsersDefaultTypeInternal _NearbyUsers_default_instance_;
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

class NearbyUsers final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.NearbyUsers) */ {
   public:
    inline NearbyUsers()
        : NearbyUsers(nullptr) {
    }
    ~NearbyUsers() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR NearbyUsers(::google::protobuf::internal::ConstantInitialized);

    inline NearbyUsers(const NearbyUsers& from)
        : NearbyUsers(nullptr, from) {
    }
    inline NearbyUsers(NearbyUsers&& from) noexcept
        : NearbyUsers(nullptr, std::move(from)) {
    }
    inline NearbyUsers& operator=(const NearbyUsers& from) {
        CopyFrom(from);
        return *this;
    }
    inline NearbyUsers& operator=(NearbyUsers&& from) noexcept {
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

    static const NearbyUsers& default_instance() {
        return *internal_default_instance();
    }
    static inline const NearbyUsers* internal_default_instance() {
        return reinterpret_cast<const NearbyUsers*>(&_NearbyUsers_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(NearbyUsers& a, NearbyUsers& b) {
        a.Swap(&b);
    }
    inline void Swap(NearbyUsers* other) {
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
    void UnsafeArenaSwap(NearbyUsers* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    NearbyUsers* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<NearbyUsers>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const NearbyUsers& from);
    void MergeFrom(const NearbyUsers& from);
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
    void InternalSwap(NearbyUsers* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.NearbyUsers";
    }

   protected:
    explicit NearbyUsers(::google::protobuf::Arena* arena);
    NearbyUsers(::google::protobuf::Arena* arena, const NearbyUsers& from);
    NearbyUsers(::google::protobuf::Arena* arena, NearbyUsers&& from) noexcept
        : NearbyUsers(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kNearbyUsersFieldNumber = 1,
    };
    // repeated .turms.client.model.proto.NearbyUser nearby_users = 1;
    int nearby_users_size() const;

   private:
    int _internal_nearby_users_size() const;

   public:
    void clear_nearby_users();
    ::turms::client::model::proto::NearbyUser* mutable_nearby_users(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>*
    mutable_nearby_users();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>&
    _internal_nearby_users() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>*
    _internal_mutable_nearby_users();

   public:
    const ::turms::client::model::proto::NearbyUser& nearby_users(int index) const;
    ::turms::client::model::proto::NearbyUser* add_nearby_users();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>&
    nearby_users() const;
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.NearbyUsers)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<0, 1, 1, 0, 2> _table_;

    static constexpr const void* _raw_default_instance_ = &_NearbyUsers_default_instance_;

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
                              const NearbyUsers& from_msg);
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>
            nearby_users_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fuser_2fnearby_5fusers_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// NearbyUsers

// repeated .turms.client.model.proto.NearbyUser nearby_users = 1;
inline int NearbyUsers::_internal_nearby_users_size() const {
    return _internal_nearby_users().size();
}
inline int NearbyUsers::nearby_users_size() const {
    return _internal_nearby_users_size();
}
inline ::turms::client::model::proto::NearbyUser* NearbyUsers::mutable_nearby_users(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.NearbyUsers.nearby_users)
    return _internal_mutable_nearby_users()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>*
NearbyUsers::mutable_nearby_users() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.NearbyUsers.nearby_users)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_nearby_users();
}
inline const ::turms::client::model::proto::NearbyUser& NearbyUsers::nearby_users(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.NearbyUsers.nearby_users)
    return _internal_nearby_users().Get(index);
}
inline ::turms::client::model::proto::NearbyUser* NearbyUsers::add_nearby_users()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::NearbyUser* _add = _internal_mutable_nearby_users()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.NearbyUsers.nearby_users)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>&
NearbyUsers::nearby_users() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.NearbyUsers.nearby_users)
    return _internal_nearby_users();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>&
NearbyUsers::_internal_nearby_users() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.nearby_users_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::NearbyUser>*
NearbyUsers::_internal_mutable_nearby_users() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.nearby_users_;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fnearby_5fusers_2eproto_2epb_2eh