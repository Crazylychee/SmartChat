// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v1.181.1
//   protoc               v5.27.2
// source: request/user/query_user_settings_request.proto

/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";
import { Value } from "../../model/common/value";

export const protobufPackage = "im.turms.proto";

export interface QueryUserSettingsRequest {
  names: string[];
  lastUpdatedDateStart?: string | undefined;
  customAttributes: Value[];
}

function createBaseQueryUserSettingsRequest(): QueryUserSettingsRequest {
  return { names: [], lastUpdatedDateStart: undefined, customAttributes: [] };
}

export const QueryUserSettingsRequest = {
  encode(message: QueryUserSettingsRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    for (const v of message.names) {
      writer.uint32(10).string(v!);
    }
    if (message.lastUpdatedDateStart !== undefined) {
      writer.uint32(16).int64(message.lastUpdatedDateStart);
    }
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): QueryUserSettingsRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryUserSettingsRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 10) {
            break;
          }

          message.names.push(reader.string());
          continue;
        case 2:
          if (tag !== 16) {
            break;
          }

          message.lastUpdatedDateStart = longToString(reader.int64() as Long);
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
