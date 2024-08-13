/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.plugin.livekit.core.proto.models;

/**
 * Protobuf enum {@code livekit.ConnectionQuality}
 */
public enum ConnectionQuality implements com.google.protobuf.ProtocolMessageEnum {
    /**
     * <code>POOR = 0;</code>
     */
    POOR(0),
    /**
     * <code>GOOD = 1;</code>
     */
    GOOD(1),
    /**
     * <code>EXCELLENT = 2;</code>
     */
    EXCELLENT(2),
    /**
     * <code>LOST = 3;</code>
     */
    LOST(3),
    UNRECOGNIZED(-1),;

    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 26,
                /* patch= */ 1,
                /* suffix= */ "",
                ConnectionQuality.class.getName());
    }
    /**
     * <code>POOR = 0;</code>
     */
    public static final int POOR_VALUE = 0;
    /**
     * <code>GOOD = 1;</code>
     */
    public static final int GOOD_VALUE = 1;
    /**
     * <code>EXCELLENT = 2;</code>
     */
    public static final int EXCELLENT_VALUE = 2;
    /**
     * <code>LOST = 3;</code>
     */
    public static final int LOST_VALUE = 3;

    public final int getNumber() {
        if (this == UNRECOGNIZED) {
            throw new java.lang.IllegalArgumentException(
                    "Can't get the number of an unknown enum value.");
        }
        return value;
    }

    /**
     * @param value The numeric wire value of the corresponding enum entry.
     * @return The enum associated with the given numeric wire value.
     * @deprecated Use {@link #forNumber(int)} instead.
     */
    @java.lang.Deprecated
    public static ConnectionQuality valueOf(int value) {
        return forNumber(value);
    }

    /**
     * @param value The numeric wire value of the corresponding enum entry.
     * @return The enum associated with the given numeric wire value.
     */
    public static ConnectionQuality forNumber(int value) {
        return switch (value) {
            case 0 -> POOR;
            case 1 -> GOOD;
            case 2 -> EXCELLENT;
            case 3 -> LOST;
            default -> null;
        };
    }

    public static com.google.protobuf.Internal.EnumLiteMap<ConnectionQuality> internalGetValueMap() {
        return internalValueMap;
    }

    private static final com.google.protobuf.Internal.EnumLiteMap<ConnectionQuality> internalValueMap =
            ConnectionQuality::forNumber;

    public final com.google.protobuf.Descriptors.EnumValueDescriptor getValueDescriptor() {
        if (this == UNRECOGNIZED) {
            throw new java.lang.IllegalStateException(
                    "Can't get the descriptor of an unrecognized enum value.");
        }
        return getDescriptor().getValues()
                .get(ordinal());
    }

    public final com.google.protobuf.Descriptors.EnumDescriptor getDescriptorForType() {
        return getDescriptor();
    }

    public static final com.google.protobuf.Descriptors.EnumDescriptor getDescriptor() {
        return im.turms.plugin.livekit.core.proto.models.LivekitModels.getDescriptor()
                .getEnumTypes()
                .get(6);
    }

    private static final ConnectionQuality[] VALUES = values();

    public static ConnectionQuality valueOf(
            com.google.protobuf.Descriptors.EnumValueDescriptor desc) {
        if (desc.getType() != getDescriptor()) {
            throw new java.lang.IllegalArgumentException(
                    "EnumValueDescriptor is not for this type.");
        }
        if (desc.getIndex() == -1) {
            return UNRECOGNIZED;
        }
        return VALUES[desc.getIndex()];
    }

    private final int value;

    ConnectionQuality(int value) {
        this.value = value;
    }

    // @@protoc_insertion_point(enum_scope:livekit.ConnectionQuality)
}