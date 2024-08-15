// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v1.181.1
//   protoc               v5.27.2
// source: request/user/delete_session_request.proto

/* eslint-disable */
import _m0 from "protobufjs/minimal";
import { Value } from "../../model/common/value";

export const protobufPackage = "im.turms.proto";

export interface DeleteSessionRequest {
  customAttributes: Value[];
}

function createBaseDeleteSessionRequest(): DeleteSessionRequest {
  return { customAttributes: [] };
}

export const DeleteSessionRequest = {
  encode(message: DeleteSessionRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): DeleteSessionRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseDeleteSessionRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
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