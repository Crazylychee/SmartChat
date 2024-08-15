// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/group/group_join_request.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
private struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
    struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
    typealias Version = _2
}

public struct GroupJoinRequest {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var id: Int64 {
        get { return _id ?? 0 }
        set { _id = newValue }
    }

    /// Returns true if `id` has been explicitly set.
    public var hasID: Bool { return _id != nil }
    /// Clears the value of `id`. Subsequent reads from it will return its default value.
    public mutating func clearID() { _id = nil }

    public var creationDate: Int64 {
        get { return _creationDate ?? 0 }
        set { _creationDate = newValue }
    }

    /// Returns true if `creationDate` has been explicitly set.
    public var hasCreationDate: Bool { return _creationDate != nil }
    /// Clears the value of `creationDate`. Subsequent reads from it will return its default value.
    public mutating func clearCreationDate() { _creationDate = nil }

    public var content: String {
        get { return _content ?? String() }
        set { _content = newValue }
    }

    /// Returns true if `content` has been explicitly set.
    public var hasContent: Bool { return _content != nil }
    /// Clears the value of `content`. Subsequent reads from it will return its default value.
    public mutating func clearContent() { _content = nil }

    public var status: RequestStatus {
        get { return _status ?? .pending }
        set { _status = newValue }
    }

    /// Returns true if `status` has been explicitly set.
    public var hasStatus: Bool { return _status != nil }
    /// Clears the value of `status`. Subsequent reads from it will return its default value.
    public mutating func clearStatus() { _status = nil }

    public var expirationDate: Int64 {
        get { return _expirationDate ?? 0 }
        set { _expirationDate = newValue }
    }

    /// Returns true if `expirationDate` has been explicitly set.
    public var hasExpirationDate: Bool { return _expirationDate != nil }
    /// Clears the value of `expirationDate`. Subsequent reads from it will return its default value.
    public mutating func clearExpirationDate() { _expirationDate = nil }

    public var groupID: Int64 {
        get { return _groupID ?? 0 }
        set { _groupID = newValue }
    }

    /// Returns true if `groupID` has been explicitly set.
    public var hasGroupID: Bool { return _groupID != nil }
    /// Clears the value of `groupID`. Subsequent reads from it will return its default value.
    public mutating func clearGroupID() { _groupID = nil }

    public var requesterID: Int64 {
        get { return _requesterID ?? 0 }
        set { _requesterID = newValue }
    }

    /// Returns true if `requesterID` has been explicitly set.
    public var hasRequesterID: Bool { return _requesterID != nil }
    /// Clears the value of `requesterID`. Subsequent reads from it will return its default value.
    public mutating func clearRequesterID() { _requesterID = nil }

    public var responderID: Int64 {
        get { return _responderID ?? 0 }
        set { _responderID = newValue }
    }

    /// Returns true if `responderID` has been explicitly set.
    public var hasResponderID: Bool { return _responderID != nil }
    /// Clears the value of `responderID`. Subsequent reads from it will return its default value.
    public mutating func clearResponderID() { _responderID = nil }

    public var customAttributes: [Value] = []

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _id: Int64?
    fileprivate var _creationDate: Int64?
    fileprivate var _content: String?
    fileprivate var _status: RequestStatus?
    fileprivate var _expirationDate: Int64?
    fileprivate var _groupID: Int64?
    fileprivate var _requesterID: Int64?
    fileprivate var _responderID: Int64?
}

#if swift(>=5.5) && canImport(_Concurrency)
    extension GroupJoinRequest: @unchecked Sendable {}
#endif // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension GroupJoinRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".GroupJoinRequest"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .same(proto: "id"),
        2: .standard(proto: "creation_date"),
        3: .same(proto: "content"),
        4: .same(proto: "status"),
        5: .standard(proto: "expiration_date"),
        6: .standard(proto: "group_id"),
        7: .standard(proto: "requester_id"),
        8: .standard(proto: "responder_id"),
        15: .standard(proto: "custom_attributes"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try decoder.decodeSingularInt64Field(value: &_id)
            case 2: try decoder.decodeSingularInt64Field(value: &_creationDate)
            case 3: try decoder.decodeSingularStringField(value: &_content)
            case 4: try decoder.decodeSingularEnumField(value: &_status)
            case 5: try decoder.decodeSingularInt64Field(value: &_expirationDate)
            case 6: try decoder.decodeSingularInt64Field(value: &_groupID)
            case 7: try decoder.decodeSingularInt64Field(value: &_requesterID)
            case 8: try decoder.decodeSingularInt64Field(value: &_responderID)
            case 15: try decoder.decodeRepeatedMessageField(value: &customAttributes)
            default: break
            }
        }
    }

    public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
        // The use of inline closures is to circumvent an issue where the compiler
        // allocates stack space for every if/case branch local when no optimizations
        // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
        // https://github.com/apple/swift-protobuf/issues/1182
        try { if let v = self._id {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 1)
        } }()
        try { if let v = self._creationDate {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 2)
        } }()
        try { if let v = self._content {
            try visitor.visitSingularStringField(value: v, fieldNumber: 3)
        } }()
        try { if let v = self._status {
            try visitor.visitSingularEnumField(value: v, fieldNumber: 4)
        } }()
        try { if let v = self._expirationDate {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 5)
        } }()
        try { if let v = self._groupID {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 6)
        } }()
        try { if let v = self._requesterID {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 7)
        } }()
        try { if let v = self._responderID {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 8)
        } }()
        if !customAttributes.isEmpty {
            try visitor.visitRepeatedMessageField(value: customAttributes, fieldNumber: 15)
        }
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: GroupJoinRequest, rhs: GroupJoinRequest) -> Bool {
        if lhs._id != rhs._id { return false }
        if lhs._creationDate != rhs._creationDate { return false }
        if lhs._content != rhs._content { return false }
        if lhs._status != rhs._status { return false }
        if lhs._expirationDate != rhs._expirationDate { return false }
        if lhs._groupID != rhs._groupID { return false }
        if lhs._requesterID != rhs._requesterID { return false }
        if lhs._responderID != rhs._responderID { return false }
        if lhs.customAttributes != rhs.customAttributes { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}