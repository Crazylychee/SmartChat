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

package im.turms.server.common.access.client.dto.model.file;

public final class ImageFileOuterClass {
    private ImageFileOuterClass() {
    }

    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 27,
                /* patch= */ 2,
                /* suffix= */ "",
                ImageFileOuterClass.class.getName());
    }

    public static void registerAllExtensions(com.google.protobuf.ExtensionRegistryLite registry) {
    }

    public static void registerAllExtensions(com.google.protobuf.ExtensionRegistry registry) {
        registerAllExtensions((com.google.protobuf.ExtensionRegistryLite) registry);
    }

    static final com.google.protobuf.Descriptors.Descriptor internal_static_im_turms_proto_ImageFile_descriptor;
    static final com.google.protobuf.GeneratedMessage.FieldAccessorTable internal_static_im_turms_proto_ImageFile_fieldAccessorTable;
    static final com.google.protobuf.Descriptors.Descriptor internal_static_im_turms_proto_ImageFile_Description_descriptor;
    static final com.google.protobuf.GeneratedMessage.FieldAccessorTable internal_static_im_turms_proto_ImageFile_Description_fieldAccessorTable;

    public static com.google.protobuf.Descriptors.FileDescriptor getDescriptor() {
        return descriptor;
    }

    private static final com.google.protobuf.Descriptors.FileDescriptor descriptor;
    static {
        java.lang.String[] descriptorData = {"\n\033model/file/image_file.proto\022\016im.turms."
                + "proto\032\030model/common/value.proto\"\271\002\n\tImag"
                + "eFile\022?\n\013description\030\001 \001(\0132%.im.turms.pr"
                + "oto.ImageFile.DescriptionH\000\210\001\001\022\021\n\004data\030\002"
                + " \001(\014H\001\210\001\001\0220\n\021custom_attributes\030\017 \003(\0132\025.i"
                + "m.turms.proto.Value\032\214\001\n\013Description\022\013\n\003u"
                + "rl\030\001 \001(\t\022\025\n\010original\030\002 \001(\010H\000\210\001\001\022\027\n\nimage"
                + "_size\030\003 \001(\005H\001\210\001\001\022\026\n\tfile_size\030\004 \001(\005H\002\210\001\001"
                + "B\013\n\t_originalB\r\n\013_image_sizeB\014\n\n_file_si"
                + "zeB\016\n\014_descriptionB\007\n\005_dataB:\n3im.turms."
                + "server.common.access.client.dto.model.fi"
                + "leP\001\272\002\000b\006proto3"};
        descriptor = com.google.protobuf.Descriptors.FileDescriptor.internalBuildGeneratedFileFrom(
                descriptorData,
                new com.google.protobuf.Descriptors.FileDescriptor[]{
                        im.turms.server.common.access.client.dto.model.common.ValueOuterClass
                                .getDescriptor(),});
        internal_static_im_turms_proto_ImageFile_descriptor = getDescriptor().getMessageTypes()
                .getFirst();
        internal_static_im_turms_proto_ImageFile_fieldAccessorTable =
                new com.google.protobuf.GeneratedMessage.FieldAccessorTable(
                        internal_static_im_turms_proto_ImageFile_descriptor,
                        new java.lang.String[]{"Description", "Data", "CustomAttributes",});
        internal_static_im_turms_proto_ImageFile_Description_descriptor =
                internal_static_im_turms_proto_ImageFile_descriptor.getNestedTypes()
                        .getFirst();
        internal_static_im_turms_proto_ImageFile_Description_fieldAccessorTable =
                new com.google.protobuf.GeneratedMessage.FieldAccessorTable(
                        internal_static_im_turms_proto_ImageFile_Description_descriptor,
                        new java.lang.String[]{"Url", "Original", "ImageSize", "FileSize",});
        descriptor.resolveAllFeaturesImmutable();
        im.turms.server.common.access.client.dto.model.common.ValueOuterClass.getDescriptor();
    }

    // @@protoc_insertion_point(outer_class_scope)
}