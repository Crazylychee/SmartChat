// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v1.181.1
//   protoc               v5.27.2
// source: request/user/relationship/create_relationship_request.proto

/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";
import { Value } from "../../../model/common/value";

export const protobufPackage = "im.turms.proto";

export interface CreateRelationshipRequest {
  userId: string;
  blocked: boolean;
  groupIndex?: number | undefined;
  name?: string | undefined;
  customAttributes: Value[];
}

function createBaseCreateRelationshipRequest(): CreateRelationshipRequest {
  return { userId: "0", blocked: false, groupIndex: undefined, name: undefined, customAttributes: [] };
}

export const CreateRelationshipRequest = {
  encode(message: CreateRelationshipRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.userId !== "0") {
      writer.uint32(8).int64(message.userId);
    }
    if (message.blocked !== false) {
      writer.uint32(16).bool(message.blocked);
    }
    if (message.groupIndex !== undefined) {
      writer.uint32(24).int32(message.groupIndex);
    }
    if (message.name !== undefined) {
      writer.uint32(34).string(message.name);
    }
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): CreateRelationshipRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseCreateRelationshipRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 8) {
            break;
          }

          message.userId = longToString(reader.int64() as Long);
          continue;
        case 2:
          if (tag !== 16) {
            break;
          }

          message.blocked = reader.bool();
          continue;
        case 3:
          if (tag !== 24) {
            break;
          }

          message.groupIndex = reader.int32();
          continue;
        case 4:
          if (tag !== 34) {
            break;
          }

          message.name = reader.string();
          continue;
        case 15:
          if (tag !== 122) {
            break;
          }

          message.customAttributes.push(Value.decode(reader, reader.uint32()));
          continue;
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skipType(tag & 7);
    }
    return message;
  },
};

function longToString(long: Long) {
  return long.toString();
}

if (_m0.util.Long !== Long) {
  _m0.util.Long = Long as any;
  _m0.configure();
}
