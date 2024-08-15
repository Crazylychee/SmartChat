// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/group/group_join_questions_answer_result.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fjoin_5fquestions_5fanswer_5fresult_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fjoin_5fquestions_5fanswer_5fresult_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fgroup_2fgroup_5fjoin_5fquestions_5fanswer_5fresult_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fgroup_2fgroup_5fjoin_5fquestions_5fanswer_5fresult_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class GroupJoinQuestionsAnswerResult;
struct GroupJoinQuestionsAnswerResultDefaultTypeInternal;
extern GroupJoinQuestionsAnswerResultDefaultTypeInternal
    _GroupJoinQuestionsAnswerResult_default_instance_;
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

class GroupJoinQuestionsAnswerResult final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.GroupJoinQuestionsAnswerResult)
 */
{
   public:
    inline GroupJoinQuestionsAnswerResult()
        : GroupJoinQuestionsAnswerResult(nullptr) {
    }
    ~GroupJoinQuestionsAnswerResult() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR GroupJoinQuestionsAnswerResult(
        ::google::protobuf::internal::ConstantInitialized);

    inline GroupJoinQuestionsAnswerResult(const GroupJoinQuestionsAnswerResult& from)
        : GroupJoinQuestionsAnswerResult(nullptr, from) {
    }
    inline GroupJoinQuestionsAnswerResult(GroupJoinQuestionsAnswerResult&& from) noexcept
        : GroupJoinQuestionsAnswerResult(nullptr, std::move(from)) {
    }
    inline GroupJoinQuestionsAnswerResult& operator=(const GroupJoinQuestionsAnswerResult& from) {
        CopyFrom(from);
        return *this;
    }
    inline GroupJoinQuestionsAnswerResult& operator=(
        GroupJoinQuestionsAnswerResult&& from) noexcept {
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

    static const GroupJoinQuestionsAnswerResult& default_instance() {
        return *internal_default_instance();
    }
    static inline const GroupJoinQuestionsAnswerResult* internal_default_instance() {
        return reinterpret_cast<const GroupJoinQuestionsAnswerResult*>(
            &_GroupJoinQuestionsAnswerResult_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(GroupJoinQuestionsAnswerResult& a, GroupJoinQuestionsAnswerResult& b) {
        a.Swap(&b);
    }
    inline void Swap(GroupJoinQuestionsAnswerResult* other) {
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
    void UnsafeArenaSwap(GroupJoinQuestionsAnswerResult* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    GroupJoinQuestionsAnswerResult* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<GroupJoinQuestionsAnswerResult>(
            arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const GroupJoinQuestionsAnswerResult& from);
    void MergeFrom(const GroupJoinQuestionsAnswerResult& from);
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
    void InternalSwap(GroupJoinQuestionsAnswerResult* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.GroupJoinQuestionsAnswerResult";
    }

   protected:
    explicit GroupJoinQuestionsAnswerResult(::google::protobuf::Arena* arena);
    GroupJoinQuestionsAnswerResult(::google::protobuf::Arena* arena,
                                   const GroupJoinQuestionsAnswerResult& from);
    GroupJoinQuestionsAnswerResult(::google::protobuf::Arena* arena,
                                   GroupJoinQuestionsAnswerResult&& from) noexcept
        : GroupJoinQuestionsAnswerResult(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kQuestionIdsFieldNumber = 2,
        kScoreFieldNumber = 1,
        kJoinedFieldNumber = 3,
    };
    // repeated int64 question_ids = 2;
    int question_ids_size() const;

   private:
    int _internal_question_ids_size() const;

   public:
    void clear_question_ids();
    ::int64_t question_ids(int index) const;
    void set_question_ids(int index, ::int64_t value);
    void add_question_ids(::int64_t value);
    const ::google::protobuf::RepeatedField<::int64_t>& question_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* mutable_question_ids();

   private:
    const ::google::protobuf::RepeatedField<::int64_t>& _internal_question_ids() const;
    ::google::protobuf::RepeatedField<::int64_t>* _internal_mutable_question_ids();

   public:
    // int32 score = 1;
    void clear_score();
    ::int32_t score() const;
    void set_score(::int32_t value);

   private:
    ::int32_t _internal_score() const;
    void _internal_set_score(::int32_t value);

   public:
    // bool joined = 3;
    void clear_joined();
    bool joined() const;
    void set_joined(bool value);

   private:
    bool _internal_joined() const;
    void _internal_set_joined(bool value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.GroupJoinQuestionsAnswerResult)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<2, 3, 0, 0, 2> _table_;

    static constexpr const void* _raw_default_instance_ =
        &_GroupJoinQuestionsAnswerResult_default_instance_;

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
                              const GroupJoinQuestionsAnswerResult& from_msg);
        ::google::protobuf::RepeatedField<::int64_t> question_ids_;
        mutable ::google::protobuf::internal::CachedSize _question_ids_cached_byte_size_;
        ::int32_t score_;
        bool joined_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fgroup_2fgroup_5fjoin_5fquestions_5fanswer_5fresult_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GroupJoinQuestionsAnswerResult

// int32 score = 1;
inline void GroupJoinQuestionsAnswerResult::clear_score() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.score_ = 0;
}
inline ::int32_t GroupJoinQuestionsAnswerResult::score() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupJoinQuestionsAnswerResult.score)
    return _internal_score();
}
inline void GroupJoinQuestionsAnswerResult::set_score(::int32_t value) {
    _internal_set_score(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupJoinQuestionsAnswerResult.score)
}
inline ::int32_t GroupJoinQuestionsAnswerResult::_internal_score() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.score_;
}
inline void GroupJoinQuestionsAnswerResult::_internal_set_score(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.score_ = value;
}

// repeated int64 question_ids = 2;
inline int GroupJoinQuestionsAnswerResult::_internal_question_ids_size() const {
    return _internal_question_ids().size();
}
inline int GroupJoinQuestionsAnswerResult::question_ids_size() const {
    return _internal_question_ids_size();
}
inline void GroupJoinQuestionsAnswerResult::clear_question_ids() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.question_ids_.Clear();
}
inline ::int64_t GroupJoinQuestionsAnswerResult::question_ids(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupJoinQuestionsAnswerResult.question_ids)
    return _internal_question_ids().Get(index);
}
inline void GroupJoinQuestionsAnswerResult::set_question_ids(int index, ::int64_t value) {
    _internal_mutable_question_ids()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupJoinQuestionsAnswerResult.question_ids)
}
inline void GroupJoinQuestionsAnswerResult::add_question_ids(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_question_ids()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.GroupJoinQuestionsAnswerResult.question_ids)
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
GroupJoinQuestionsAnswerResult::question_ids() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.GroupJoinQuestionsAnswerResult.question_ids)
    return _internal_question_ids();
}
inline ::google::protobuf::RepeatedField<::int64_t>*
GroupJoinQuestionsAnswerResult::mutable_question_ids() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.GroupJoinQuestionsAnswerResult.question_ids)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_question_ids();
}
inline const ::google::protobuf::RepeatedField<::int64_t>&
GroupJoinQuestionsAnswerResult::_internal_question_ids() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.question_ids_;
}
inline ::google::protobuf::RepeatedField<::int64_t>*
GroupJoinQuestionsAnswerResult::_internal_mutable_question_ids() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.question_ids_;
}

// bool joined = 3;
inline void GroupJoinQuestionsAnswerResult::clear_joined() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.joined_ = false;
}
inline bool GroupJoinQuestionsAnswerResult::joined() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupJoinQuestionsAnswerResult.joined)
    return _internal_joined();
}
inline void GroupJoinQuestionsAnswerResult::set_joined(bool value) {
    _internal_set_joined(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupJoinQuestionsAnswerResult.joined)
}
inline bool GroupJoinQuestionsAnswerResult::_internal_joined() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.joined_;
}
inline void GroupJoinQuestionsAnswerResult::_internal_set_joined(bool value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.joined_ = value;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fjoin_5fquestions_5fanswer_5fresult_2eproto_2epb_2eh