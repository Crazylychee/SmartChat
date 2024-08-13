// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/user/query_nearby_users_request.proto
// Protobuf C++ Version: 5.27.2

#include "turms/client/model/proto/request/user/query_nearby_users_request.pb.h"

#include <algorithm>
#include <type_traits>

#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
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
namespace proto {

inline constexpr QueryNearbyUsersRequest::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : _cached_size_{0},
      custom_attributes_{},
      latitude_{0},
      longitude_{0},
      max_count_{0},
      max_distance_{0},
      with_coordinates_{false},
      with_distance_{false},
      with_user_info_{false} {
}

template <typename>
PROTOBUF_CONSTEXPR QueryNearbyUsersRequest::QueryNearbyUsersRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {
}
struct QueryNearbyUsersRequestDefaultTypeInternal {
    PROTOBUF_CONSTEXPR QueryNearbyUsersRequestDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~QueryNearbyUsersRequestDefaultTypeInternal() {
    }
    union {
        QueryNearbyUsersRequest _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    QueryNearbyUsersRequestDefaultTypeInternal _QueryNearbyUsersRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class QueryNearbyUsersRequest::_Internal {
   public:
    using HasBits = decltype(std::declval<QueryNearbyUsersRequest>()._impl_._has_bits_);
    static constexpr ::int32_t kHasBitsOffset =
        8 * PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_._has_bits_);
};

void QueryNearbyUsersRequest::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
QueryNearbyUsersRequest::QueryNearbyUsersRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.QueryNearbyUsersRequest)
}
inline PROTOBUF_NDEBUG_INLINE QueryNearbyUsersRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::QueryNearbyUsersRequest& from_msg)
    : _has_bits_{from._has_bits_},
      _cached_size_{0},
      custom_attributes_{visibility, arena, from.custom_attributes_} {
}

QueryNearbyUsersRequest::QueryNearbyUsersRequest(::google::protobuf::Arena* arena,
                                                 const QueryNearbyUsersRequest& from)
    : ::google::protobuf::MessageLite(arena) {
    QueryNearbyUsersRequest* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    ::memcpy(reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, latitude_),
             reinterpret_cast<const char*>(&from._impl_) + offsetof(Impl_, latitude_),
             offsetof(Impl_, with_user_info_) - offsetof(Impl_, latitude_) +
                 sizeof(Impl_::with_user_info_));

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.QueryNearbyUsersRequest)
}
inline PROTOBUF_NDEBUG_INLINE QueryNearbyUsersRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : _cached_size_{0},
      custom_attributes_{visibility, arena} {
}

inline void QueryNearbyUsersRequest::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    ::memset(reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, latitude_),
             0,
             offsetof(Impl_, with_user_info_) - offsetof(Impl_, latitude_) +
                 sizeof(Impl_::with_user_info_));
}
QueryNearbyUsersRequest::~QueryNearbyUsersRequest() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.QueryNearbyUsersRequest)
    _internal_metadata_.Delete<std::string>();
    SharedDtor();
}
inline void QueryNearbyUsersRequest::SharedDtor() {
    ABSL_DCHECK(GetArena() == nullptr);
    _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData* QueryNearbyUsersRequest::GetClassData() const {
    PROTOBUF_CONSTINIT static const ClassDataLite<49> _data_ = {
        {
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_._cached_size_),
            true,
        },
        "turms.client.model.proto.QueryNearbyUsersRequest",
    };

    return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<4, 8, 1, 0, 2>
    QueryNearbyUsersRequest::_table_ = {
        {
            PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_._has_bits_),
            0,  // no _extensions_
            15,
            120,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950784,  // skipmap
            offsetof(decltype(_table_), field_entries),
            8,  // num_field_entries
            1,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            &_QueryNearbyUsersRequest_default_instance_._instance,
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::QueryNearbyUsersRequest>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // float latitude = 1;
            {::_pbi::TcParser::FastF32S1,
             {13, 63, 0, PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.latitude_)}},
            // float longitude = 2;
            {::_pbi::TcParser::FastF32S1,
             {21, 63, 0, PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.longitude_)}},
            // optional int32 max_count = 3;
            {::_pbi::TcParser::FastV32S1,
             {24, 0, 0, PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.max_count_)}},
            // optional int32 max_distance = 4;
            {::_pbi::TcParser::FastV32S1,
             {32, 1, 0, PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.max_distance_)}},
            // optional bool with_coordinates = 5;
            {::_pbi::TcParser::FastV8S1,
             {40, 2, 0, PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.with_coordinates_)}},
            // optional bool with_distance = 6;
            {::_pbi::TcParser::FastV8S1,
             {48, 3, 0, PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.with_distance_)}},
            // optional bool with_user_info = 7;
            {::_pbi::TcParser::FastV8S1,
             {56, 4, 0, PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.with_user_info_)}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // float latitude = 1;
            {PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.latitude_),
             -1,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
            // float longitude = 2;
            {PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.longitude_),
             -1,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
            // optional int32 max_count = 3;
            {PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.max_count_),
             _Internal::kHasBitsOffset + 0,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
            // optional int32 max_distance = 4;
            {PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.max_distance_),
             _Internal::kHasBitsOffset + 1,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
            // optional bool with_coordinates = 5;
            {PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.with_coordinates_),
             _Internal::kHasBitsOffset + 2,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kBool)},
            // optional bool with_distance = 6;
            {PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.with_distance_),
             _Internal::kHasBitsOffset + 3,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kBool)},
            // optional bool with_user_info = 7;
            {PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.with_user_info_),
             _Internal::kHasBitsOffset + 4,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kBool)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.custom_attributes_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{}},
};

PROTOBUF_NOINLINE void QueryNearbyUsersRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.QueryNearbyUsersRequest)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.custom_attributes_.Clear();
    ::memset(&_impl_.latitude_,
             0,
             static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.longitude_) -
                                   reinterpret_cast<char*>(&_impl_.latitude_)) +
                 sizeof(_impl_.longitude_));
    cached_has_bits = _impl_._has_bits_[0];
    if (cached_has_bits & 0x0000001fu) {
        ::memset(&_impl_.max_count_,
                 0,
                 static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.with_user_info_) -
                                       reinterpret_cast<char*>(&_impl_.max_count_)) +
                     sizeof(_impl_.with_user_info_));
    }
    _impl_._has_bits_.Clear();
    _internal_metadata_.Clear<std::string>();
}

::uint8_t* QueryNearbyUsersRequest::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.QueryNearbyUsersRequest)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // float latitude = 1;
    static_assert(sizeof(::uint32_t) == sizeof(float),
                  "Code assumes ::uint32_t and float are the same size.");
    float tmp_latitude = this->_internal_latitude();
    ::uint32_t raw_latitude;
    memcpy(&raw_latitude, &tmp_latitude, sizeof(tmp_latitude));
    if (raw_latitude != 0) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_latitude(), target);
    }

    // float longitude = 2;
    static_assert(sizeof(::uint32_t) == sizeof(float),
                  "Code assumes ::uint32_t and float are the same size.");
    float tmp_longitude = this->_internal_longitude();
    ::uint32_t raw_longitude;
    memcpy(&raw_longitude, &tmp_longitude, sizeof(tmp_longitude));
    if (raw_longitude != 0) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_longitude(), target);
    }

    cached_has_bits = _impl_._has_bits_[0];
    // optional int32 max_count = 3;
    if (cached_has_bits & 0x00000001u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>(
            stream, this->_internal_max_count(), target);
    }

    // optional int32 max_distance = 4;
    if (cached_has_bits & 0x00000002u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>(
            stream, this->_internal_max_distance(), target);
    }

    // optional bool with_coordinates = 5;
    if (cached_has_bits & 0x00000004u) {
        target = stream->EnsureSpace(target);
        target =
            ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_with_coordinates(), target);
    }

    // optional bool with_distance = 6;
    if (cached_has_bits & 0x00000008u) {
        target = stream->EnsureSpace(target);
        target =
            ::_pbi::WireFormatLite::WriteBoolToArray(6, this->_internal_with_distance(), target);
    }

    // optional bool with_user_info = 7;
    if (cached_has_bits & 0x00000010u) {
        target = stream->EnsureSpace(target);
        target =
            ::_pbi::WireFormatLite::WriteBoolToArray(7, this->_internal_with_user_info(), target);
    }

    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    for (unsigned i = 0, n = static_cast<unsigned>(this->_internal_custom_attributes_size()); i < n;
         i++) {
        const auto& repfield = this->_internal_custom_attributes().Get(i);
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            15, repfield, repfield.GetCachedSize(), target, stream);
    }

    if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
        target = stream->WriteRaw(
            _internal_metadata_
                .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                .data(),
            static_cast<int>(
                _internal_metadata_
                    .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                    .size()),
            target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.QueryNearbyUsersRequest)
    return target;
}

::size_t QueryNearbyUsersRequest::ByteSizeLong() const {
    // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.QueryNearbyUsersRequest)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    total_size += 1UL * this->_internal_custom_attributes_size();
    for (const auto& msg : this->_internal_custom_attributes()) {
        total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
    }
    // float latitude = 1;
    static_assert(sizeof(::uint32_t) == sizeof(float),
                  "Code assumes ::uint32_t and float are the same size.");
    float tmp_latitude = this->_internal_latitude();
    ::uint32_t raw_latitude;
    memcpy(&raw_latitude, &tmp_latitude, sizeof(tmp_latitude));
    if (raw_latitude != 0) {
        total_size += 5;
    }

    // float longitude = 2;
    static_assert(sizeof(::uint32_t) == sizeof(float),
                  "Code assumes ::uint32_t and float are the same size.");
    float tmp_longitude = this->_internal_longitude();
    ::uint32_t raw_longitude;
    memcpy(&raw_longitude, &tmp_longitude, sizeof(tmp_longitude));
    if (raw_longitude != 0) {
        total_size += 5;
    }

    cached_has_bits = _impl_._has_bits_[0];
    if (cached_has_bits & 0x0000001fu) {
        // optional int32 max_count = 3;
        if (cached_has_bits & 0x00000001u) {
            total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_max_count());
        }

        // optional int32 max_distance = 4;
        if (cached_has_bits & 0x00000002u) {
            total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_max_distance());
        }

        // optional bool with_coordinates = 5;
        if (cached_has_bits & 0x00000004u) {
            total_size += 2;
        }

        // optional bool with_distance = 6;
        if (cached_has_bits & 0x00000008u) {
            total_size += 2;
        }

        // optional bool with_user_info = 7;
        if (cached_has_bits & 0x00000010u) {
            total_size += 2;
        }
    }
    if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
        total_size += _internal_metadata_
                          .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                          .size();
    }
    _impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
    return total_size;
}

void QueryNearbyUsersRequest::CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) {
    MergeFrom(*::_pbi::DownCast<const QueryNearbyUsersRequest*>(&from));
}

void QueryNearbyUsersRequest::MergeFrom(const QueryNearbyUsersRequest& from) {
    QueryNearbyUsersRequest* const _this = this;
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.QueryNearbyUsersRequest)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    static_assert(sizeof(::uint32_t) == sizeof(float),
                  "Code assumes ::uint32_t and float are the same size.");
    float tmp_latitude = from._internal_latitude();
    ::uint32_t raw_latitude;
    memcpy(&raw_latitude, &tmp_latitude, sizeof(tmp_latitude));
    if (raw_latitude != 0) {
        _this->_impl_.latitude_ = from._impl_.latitude_;
    }
    static_assert(sizeof(::uint32_t) == sizeof(float),
                  "Code assumes ::uint32_t and float are the same size.");
    float tmp_longitude = from._internal_longitude();
    ::uint32_t raw_longitude;
    memcpy(&raw_longitude, &tmp_longitude, sizeof(tmp_longitude));
    if (raw_longitude != 0) {
        _this->_impl_.longitude_ = from._impl_.longitude_;
    }
    cached_has_bits = from._impl_._has_bits_[0];
    if (cached_has_bits & 0x0000001fu) {
        if (cached_has_bits & 0x00000001u) {
            _this->_impl_.max_count_ = from._impl_.max_count_;
        }
        if (cached_has_bits & 0x00000002u) {
            _this->_impl_.max_distance_ = from._impl_.max_distance_;
        }
        if (cached_has_bits & 0x00000004u) {
            _this->_impl_.with_coordinates_ = from._impl_.with_coordinates_;
        }
        if (cached_has_bits & 0x00000008u) {
            _this->_impl_.with_distance_ = from._impl_.with_distance_;
        }
        if (cached_has_bits & 0x00000010u) {
            _this->_impl_.with_user_info_ = from._impl_.with_user_info_;
        }
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void QueryNearbyUsersRequest::CopyFrom(const QueryNearbyUsersRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.QueryNearbyUsersRequest)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void QueryNearbyUsersRequest::InternalSwap(QueryNearbyUsersRequest* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    ::google::protobuf::internal::memswap<
        PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.with_user_info_) +
        sizeof(QueryNearbyUsersRequest::_impl_.with_user_info_) -
        PROTOBUF_FIELD_OFFSET(QueryNearbyUsersRequest, _impl_.latitude_)>(
        reinterpret_cast<char*>(&_impl_.latitude_),
        reinterpret_cast<char*>(&other->_impl_.latitude_));
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