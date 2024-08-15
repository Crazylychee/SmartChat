// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: constant/group_member_role.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_constant_2fgroup_5fmember_5frole_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_constant_2fgroup_5fmember_5frole_2eproto_2epb_2eh

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
#include "google/protobuf/generated_enum_util.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_constant_2fgroup_5fmember_5frole_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_constant_2fgroup_5fmember_5frole_2eproto {
    static const ::uint32_t offsets[];
};
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {
enum GroupMemberRole : int {
    OWNER = 0,
    MANAGER = 1,
    MEMBER = 2,
    GUEST = 3,
    ANONYMOUS_GUEST = 4,
    GroupMemberRole_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::int32_t>::min(),
    GroupMemberRole_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::int32_t>::max(),
};

bool GroupMemberRole_IsValid(int value);
extern const uint32_t GroupMemberRole_internal_data_[];
constexpr GroupMemberRole GroupMemberRole_MIN = static_cast<GroupMemberRole>(0);
constexpr GroupMemberRole GroupMemberRole_MAX = static_cast<GroupMemberRole>(4);
constexpr int GroupMemberRole_ARRAYSIZE = 4 + 1;
const std::string& GroupMemberRole_Name(GroupMemberRole value);
template <typename T>
const std::string& GroupMemberRole_Name(T value) {
    static_assert(std::is_same<T, GroupMemberRole>::value || std::is_integral<T>::value,
                  "Incorrect type passed to GroupMemberRole_Name().");
    return GroupMemberRole_Name(static_cast<GroupMemberRole>(value));
}
bool GroupMemberRole_Parse(absl::string_view name, GroupMemberRole* value);

// ===================================================================

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms

namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::turms::client::model::proto::GroupMemberRole> : std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_constant_2fgroup_5fmember_5frole_2eproto_2epb_2eh