// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: constant/group_member_role.proto
// Protobuf C++ Version: 5.27.2

#include "turms/client/model/proto/constant/group_member_role.pb.h"

#include <algorithm>
#include <type_traits>

#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/wire_format_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace turms {
namespace client {
namespace model {
namespace proto {}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
PROTOBUF_CONSTINIT const uint32_t GroupMemberRole_internal_data_[] = {
    327680u,
    0u,
};
bool GroupMemberRole_IsValid(int value) {
    return 0 <= value && value <= 4;
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string> GroupMemberRole_strings[5] =
    {};

static const char GroupMemberRole_names[] = {
    "ANONYMOUS_GUEST"
    "GUEST"
    "MANAGER"
    "MEMBER"
    "OWNER"};

static const ::google::protobuf::internal::EnumEntry GroupMemberRole_entries[] = {
    {{&GroupMemberRole_names[0], 15}, 4},
    {{&GroupMemberRole_names[15], 5}, 3},
    {{&GroupMemberRole_names[20], 7}, 1},
    {{&GroupMemberRole_names[27], 6}, 2},
    {{&GroupMemberRole_names[33], 5}, 0},
};

static const int GroupMemberRole_entries_by_number[] = {
    4,  // 0 -> OWNER
    2,  // 1 -> MANAGER
    3,  // 2 -> MEMBER
    1,  // 3 -> GUEST
    0,  // 4 -> ANONYMOUS_GUEST
};

const std::string& GroupMemberRole_Name(GroupMemberRole value) {
    static const bool kDummy = ::google::protobuf::internal::InitializeEnumStrings(
        GroupMemberRole_entries, GroupMemberRole_entries_by_number, 5, GroupMemberRole_strings);
    (void)kDummy;

    int idx = ::google::protobuf::internal::LookUpEnumName(
        GroupMemberRole_entries, GroupMemberRole_entries_by_number, 5, value);
    return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                     : GroupMemberRole_strings[idx].get();
}

bool GroupMemberRole_Parse(absl::string_view name, GroupMemberRole* value) {
    int int_value;
    bool success =
        ::google::protobuf::internal::LookUpEnumValue(GroupMemberRole_entries, 5, name, &int_value);
    if (success) {
        *value = static_cast<GroupMemberRole>(int_value);
    }
    return success;
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"