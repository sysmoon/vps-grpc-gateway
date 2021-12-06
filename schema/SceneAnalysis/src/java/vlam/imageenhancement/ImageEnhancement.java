// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ImageEnhancement.proto

package vlam.imageenhancement;

public final class ImageEnhancement {
  private ImageEnhancement() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface ImageEnhancementInOrBuilder extends
      // @@protoc_insertion_point(interface_extends:vlam.sa.ImageEnhancementIn)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <pre>
     * for Both (Service &amp; DB Creation)
     * </pre>
     *
     * <code>.vpdata.VPData stVPSensorData = 1;</code>
     * @return Whether the stVPSensorData field is set.
     */
    boolean hasStVPSensorData();
    /**
     * <pre>
     * for Both (Service &amp; DB Creation)
     * </pre>
     *
     * <code>.vpdata.VPData stVPSensorData = 1;</code>
     * @return The stVPSensorData.
     */
    msgmanager.protobuf.VpMsg.VPData getStVPSensorData();
    /**
     * <pre>
     * for Both (Service &amp; DB Creation)
     * </pre>
     *
     * <code>.vpdata.VPData stVPSensorData = 1;</code>
     */
    msgmanager.protobuf.VpMsg.VPDataOrBuilder getStVPSensorDataOrBuilder();
  }
  /**
   * <pre>
   * Only for Service
   * </pre>
   *
   * Protobuf type {@code vlam.sa.ImageEnhancementIn}
   */
  public static final class ImageEnhancementIn extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:vlam.sa.ImageEnhancementIn)
      ImageEnhancementInOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use ImageEnhancementIn.newBuilder() to construct.
    private ImageEnhancementIn(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private ImageEnhancementIn() {
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new ImageEnhancementIn();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private ImageEnhancementIn(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            case 10: {
              msgmanager.protobuf.VpMsg.VPData.Builder subBuilder = null;
              if (stVPSensorData_ != null) {
                subBuilder = stVPSensorData_.toBuilder();
              }
              stVPSensorData_ = input.readMessage(msgmanager.protobuf.VpMsg.VPData.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(stVPSensorData_);
                stVPSensorData_ = subBuilder.buildPartial();
              }

              break;
            }
            default: {
              if (!parseUnknownField(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return vlam.imageenhancement.ImageEnhancement.internal_static_vlam_sa_ImageEnhancementIn_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return vlam.imageenhancement.ImageEnhancement.internal_static_vlam_sa_ImageEnhancementIn_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn.class, vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn.Builder.class);
    }

    public static final int STVPSENSORDATA_FIELD_NUMBER = 1;
    private msgmanager.protobuf.VpMsg.VPData stVPSensorData_;
    /**
     * <pre>
     * for Both (Service &amp; DB Creation)
     * </pre>
     *
     * <code>.vpdata.VPData stVPSensorData = 1;</code>
     * @return Whether the stVPSensorData field is set.
     */
    @java.lang.Override
    public boolean hasStVPSensorData() {
      return stVPSensorData_ != null;
    }
    /**
     * <pre>
     * for Both (Service &amp; DB Creation)
     * </pre>
     *
     * <code>.vpdata.VPData stVPSensorData = 1;</code>
     * @return The stVPSensorData.
     */
    @java.lang.Override
    public msgmanager.protobuf.VpMsg.VPData getStVPSensorData() {
      return stVPSensorData_ == null ? msgmanager.protobuf.VpMsg.VPData.getDefaultInstance() : stVPSensorData_;
    }
    /**
     * <pre>
     * for Both (Service &amp; DB Creation)
     * </pre>
     *
     * <code>.vpdata.VPData stVPSensorData = 1;</code>
     */
    @java.lang.Override
    public msgmanager.protobuf.VpMsg.VPDataOrBuilder getStVPSensorDataOrBuilder() {
      return getStVPSensorData();
    }

    private byte memoizedIsInitialized = -1;
    @java.lang.Override
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (stVPSensorData_ != null) {
        output.writeMessage(1, getStVPSensorData());
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (stVPSensorData_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getStVPSensorData());
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn)) {
        return super.equals(obj);
      }
      vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn other = (vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn) obj;

      if (hasStVPSensorData() != other.hasStVPSensorData()) return false;
      if (hasStVPSensorData()) {
        if (!getStVPSensorData()
            .equals(other.getStVPSensorData())) return false;
      }
      if (!unknownFields.equals(other.unknownFields)) return false;
      return true;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      if (hasStVPSensorData()) {
        hash = (37 * hash) + STVPSENSORDATA_FIELD_NUMBER;
        hash = (53 * hash) + getStVPSensorData().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    @java.lang.Override
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * <pre>
     * Only for Service
     * </pre>
     *
     * Protobuf type {@code vlam.sa.ImageEnhancementIn}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:vlam.sa.ImageEnhancementIn)
        vlam.imageenhancement.ImageEnhancement.ImageEnhancementInOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return vlam.imageenhancement.ImageEnhancement.internal_static_vlam_sa_ImageEnhancementIn_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return vlam.imageenhancement.ImageEnhancement.internal_static_vlam_sa_ImageEnhancementIn_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn.class, vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn.Builder.class);
      }

      // Construct using vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      @java.lang.Override
      public Builder clear() {
        super.clear();
        if (stVPSensorDataBuilder_ == null) {
          stVPSensorData_ = null;
        } else {
          stVPSensorData_ = null;
          stVPSensorDataBuilder_ = null;
        }
        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return vlam.imageenhancement.ImageEnhancement.internal_static_vlam_sa_ImageEnhancementIn_descriptor;
      }

      @java.lang.Override
      public vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn getDefaultInstanceForType() {
        return vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn.getDefaultInstance();
      }

      @java.lang.Override
      public vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn build() {
        vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn buildPartial() {
        vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn result = new vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn(this);
        if (stVPSensorDataBuilder_ == null) {
          result.stVPSensorData_ = stVPSensorData_;
        } else {
          result.stVPSensorData_ = stVPSensorDataBuilder_.build();
        }
        onBuilt();
        return result;
      }

      @java.lang.Override
      public Builder clone() {
        return super.clone();
      }
      @java.lang.Override
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return super.setField(field, value);
      }
      @java.lang.Override
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return super.clearField(field);
      }
      @java.lang.Override
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return super.clearOneof(oneof);
      }
      @java.lang.Override
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return super.setRepeatedField(field, index, value);
      }
      @java.lang.Override
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return super.addRepeatedField(field, value);
      }
      @java.lang.Override
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn) {
          return mergeFrom((vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn other) {
        if (other == vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn.getDefaultInstance()) return this;
        if (other.hasStVPSensorData()) {
          mergeStVPSensorData(other.getStVPSensorData());
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      @java.lang.Override
      public final boolean isInitialized() {
        return true;
      }

      @java.lang.Override
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private msgmanager.protobuf.VpMsg.VPData stVPSensorData_;
      private com.google.protobuf.SingleFieldBuilderV3<
          msgmanager.protobuf.VpMsg.VPData, msgmanager.protobuf.VpMsg.VPData.Builder, msgmanager.protobuf.VpMsg.VPDataOrBuilder> stVPSensorDataBuilder_;
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       * @return Whether the stVPSensorData field is set.
       */
      public boolean hasStVPSensorData() {
        return stVPSensorDataBuilder_ != null || stVPSensorData_ != null;
      }
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       * @return The stVPSensorData.
       */
      public msgmanager.protobuf.VpMsg.VPData getStVPSensorData() {
        if (stVPSensorDataBuilder_ == null) {
          return stVPSensorData_ == null ? msgmanager.protobuf.VpMsg.VPData.getDefaultInstance() : stVPSensorData_;
        } else {
          return stVPSensorDataBuilder_.getMessage();
        }
      }
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       */
      public Builder setStVPSensorData(msgmanager.protobuf.VpMsg.VPData value) {
        if (stVPSensorDataBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          stVPSensorData_ = value;
          onChanged();
        } else {
          stVPSensorDataBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       */
      public Builder setStVPSensorData(
          msgmanager.protobuf.VpMsg.VPData.Builder builderForValue) {
        if (stVPSensorDataBuilder_ == null) {
          stVPSensorData_ = builderForValue.build();
          onChanged();
        } else {
          stVPSensorDataBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       */
      public Builder mergeStVPSensorData(msgmanager.protobuf.VpMsg.VPData value) {
        if (stVPSensorDataBuilder_ == null) {
          if (stVPSensorData_ != null) {
            stVPSensorData_ =
              msgmanager.protobuf.VpMsg.VPData.newBuilder(stVPSensorData_).mergeFrom(value).buildPartial();
          } else {
            stVPSensorData_ = value;
          }
          onChanged();
        } else {
          stVPSensorDataBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       */
      public Builder clearStVPSensorData() {
        if (stVPSensorDataBuilder_ == null) {
          stVPSensorData_ = null;
          onChanged();
        } else {
          stVPSensorData_ = null;
          stVPSensorDataBuilder_ = null;
        }

        return this;
      }
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       */
      public msgmanager.protobuf.VpMsg.VPData.Builder getStVPSensorDataBuilder() {
        
        onChanged();
        return getStVPSensorDataFieldBuilder().getBuilder();
      }
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       */
      public msgmanager.protobuf.VpMsg.VPDataOrBuilder getStVPSensorDataOrBuilder() {
        if (stVPSensorDataBuilder_ != null) {
          return stVPSensorDataBuilder_.getMessageOrBuilder();
        } else {
          return stVPSensorData_ == null ?
              msgmanager.protobuf.VpMsg.VPData.getDefaultInstance() : stVPSensorData_;
        }
      }
      /**
       * <pre>
       * for Both (Service &amp; DB Creation)
       * </pre>
       *
       * <code>.vpdata.VPData stVPSensorData = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          msgmanager.protobuf.VpMsg.VPData, msgmanager.protobuf.VpMsg.VPData.Builder, msgmanager.protobuf.VpMsg.VPDataOrBuilder> 
          getStVPSensorDataFieldBuilder() {
        if (stVPSensorDataBuilder_ == null) {
          stVPSensorDataBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              msgmanager.protobuf.VpMsg.VPData, msgmanager.protobuf.VpMsg.VPData.Builder, msgmanager.protobuf.VpMsg.VPDataOrBuilder>(
                  getStVPSensorData(),
                  getParentForChildren(),
                  isClean());
          stVPSensorData_ = null;
        }
        return stVPSensorDataBuilder_;
      }
      @java.lang.Override
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFields(unknownFields);
      }

      @java.lang.Override
      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:vlam.sa.ImageEnhancementIn)
    }

    // @@protoc_insertion_point(class_scope:vlam.sa.ImageEnhancementIn)
    private static final vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn();
    }

    public static vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<ImageEnhancementIn>
        PARSER = new com.google.protobuf.AbstractParser<ImageEnhancementIn>() {
      @java.lang.Override
      public ImageEnhancementIn parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new ImageEnhancementIn(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<ImageEnhancementIn> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<ImageEnhancementIn> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public vlam.imageenhancement.ImageEnhancement.ImageEnhancementIn getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_vlam_sa_ImageEnhancementIn_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_vlam_sa_ImageEnhancementIn_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\026ImageEnhancement.proto\022\007vlam.sa\032\014vp_ms" +
      "g.proto\"<\n\022ImageEnhancementIn\022&\n\016stVPSen" +
      "sorData\030\001 \001(\0132\016.vpdata.VPDataB\027\n\025vlam.im" +
      "ageenhancementb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          msgmanager.protobuf.VpMsg.getDescriptor(),
        });
    internal_static_vlam_sa_ImageEnhancementIn_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_vlam_sa_ImageEnhancementIn_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_vlam_sa_ImageEnhancementIn_descriptor,
        new java.lang.String[] { "StVPSensorData", });
    msgmanager.protobuf.VpMsg.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
