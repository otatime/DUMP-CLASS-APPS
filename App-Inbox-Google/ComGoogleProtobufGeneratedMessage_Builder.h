//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleProtobufMessage_Builder.h"

@class NSString;

@interface ComGoogleProtobufGeneratedMessage_Builder : NSObject <ComGoogleProtobufMessage_Builder>
{
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)mergeFromWithByteArray:(id)arg1 withComGoogleProtobufExtensionRegistryLite:(id)arg2;
- (id)mergeFromWithByteArray:(id)arg1;
- (id)mergeFromWithComGoogleProtobufByteString:(struct ComGoogleProtobufByteString *)arg1 withComGoogleProtobufExtensionRegistryLite:(struct ComGoogleProtobufExtensionRegistryLite *)arg2;
- (id)mergeFromWithComGoogleProtobufByteString:(struct ComGoogleProtobufByteString *)arg1;
- (BOOL)mergeDelimitedFromWithJavaIoInputStream:(id)arg1 withComGoogleProtobufExtensionRegistryLite:(struct ComGoogleProtobufExtensionRegistryLite *)arg2;
- (BOOL)mergeDelimitedFromWithJavaIoInputStream:(id)arg1;
- (id)mergeFromWithJavaIoInputStream:(id)arg1 withComGoogleProtobufExtensionRegistryLite:(id)arg2;
- (id)mergeFromWithJavaIoInputStream:(id)arg1;
- (id)mergeFromWithComGoogleProtobufMessage:(id)arg1;
- (id)getAllFields;
- (id)clearFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1;
- (id)setRepeatedFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1 withInt:(int)arg2 withId:(id)arg3;
- (id)addRepeatedFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1 withId:(id)arg2;
- (id)setFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1 withId:(id)arg2;
- (id)getRepeatedFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1 withInt:(int)arg2;
- (int)getRepeatedFieldCountWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1;
- (BOOL)hasFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1;
- (id)getFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1;
- (id)newBuilderForFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(struct ComGoogleProtobufDescriptors_FieldDescriptor *)arg1;
- (id)getDefaultInstanceForType;
- (struct ComGoogleProtobufDescriptors_Descriptor *)getDescriptorForType;
- (id)clear;
- (id)buildPartial;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
