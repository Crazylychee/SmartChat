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

package im.turms.client.model.proto.request.user;

public interface UpdateUserSettingsRequestOrBuilder extends
        // @@protoc_insertion_point(interface_extends:im.turms.proto.UpdateUserSettingsRequest)
        com.google.protobuf.MessageLiteOrBuilder {

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>map&lt;string, .im.turms.proto.Value&gt; settings = 1;</code>
     */
    int getSettingsCount();

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>map&lt;string, .im.turms.proto.Value&gt; settings = 1;</code>
     */
    boolean containsSettings(java.lang.String key);

    /**
     * Use {@link #getSettingsMap()} instead.
     */
    @java.lang.Deprecated
    java.util.Map<java.lang.String, im.turms.client.model.proto.model.common.Value> getSettings();

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>map&lt;string, .im.turms.proto.Value&gt; settings = 1;</code>
     */
    java.util.Map<java.lang.String, im.turms.client.model.proto.model.common.Value> getSettingsMap();

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>map&lt;string, .im.turms.proto.Value&gt; settings = 1;</code>
     */

    /* nullable */
    im.turms.client.model.proto.model.common.Value getSettingsOrDefault(
            java.lang.String key,
            /* nullable */
            im.turms.client.model.proto.model.common.Value defaultValue);

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>map&lt;string, .im.turms.proto.Value&gt; settings = 1;</code>
     */

    im.turms.client.model.proto.model.common.Value getSettingsOrThrow(java.lang.String key);

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    java.util.List<im.turms.client.model.proto.model.common.Value> getCustomAttributesList();

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    im.turms.client.model.proto.model.common.Value getCustomAttributes(int index);

    /**
     * <code>repeated .im.turms.proto.Value custom_attributes = 15;</code>
     */
    int getCustomAttributesCount();
}