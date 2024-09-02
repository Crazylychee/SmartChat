// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v1.181.1
//   protoc               v5.27.2
// source: request/group/member/query_group_members_request.proto

/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";
import { Value } from "../../../model/common/value";

export const protobufPackage = "im.turms.proto";

export interface QueryGroupMembersRequest {
  groupId: string;
  lastUpdatedDate?: string | undefined;
  memberIds: string[];
  withStatus?: boolean | undefined;
  customAttributes: Value[];
}

function createBaseQueryGroupMembersRequest(): QueryGroupMembersRequest {
  return { groupId: "0", lastUpdatedDate: undefined, memberIds: [], withStatus: undefined, customAttributes: [] };
}

export const QueryGroupMembersRequest = {
  encode(message: QueryGroupMembersRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.groupId !== "0") {
      writer.uint32(8).int64(message.groupId);
    }
    if (message.lastUpdatedDate !== undefined) {
      writer.uint32(16).int64(message.lastUpdatedDate);
    }
    writer.uint32(26).fork();
    for (const v of message.memberIds) {
      writer.int64(v);
    }
    writer.ldelim();
    if (message.withStatus !== undefined) {
      writer.uint32(32).bool(message.withStatus);
    }
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): QueryGroupMembersRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryGroupMembersRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 8) {
            break;
          }

          message.groupId = longToString(reader.int64() as Long);
          continue;
        case 2:
          if (tag !== 16) {
            break;
          }

          message.lastUpdatedDate = longToString(reader.int64() as Long);
          continue;
        case 3:
          if (tag === 24) {
            message.memberIds.push(longToString(reader.int64() as Long));

            continue;
          }

          if (tag === 26) {
            const end2 = reader.uint32() + reader.pos;
            while (reader.pos < end2) {
              message.memberIds.push(longToString(reader.int64() as Long));
            }

            continue;
          }

          break;
        case 4:
          if (tag !== 32) {
            break;
          }

          message.withStatus = reader.bool();
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