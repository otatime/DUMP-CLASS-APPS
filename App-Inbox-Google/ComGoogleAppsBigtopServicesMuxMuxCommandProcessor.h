//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusApiTypeAbstractCommandProcessor.h"

@class ComGoogleAppsBigtopServicesMuxMuxClientRegistry;

@interface ComGoogleAppsBigtopServicesMuxMuxCommandProcessor : ComGoogleCumulusApiTypeAbstractCommandProcessor
{
    ComGoogleAppsBigtopServicesMuxMuxClientRegistry *muxRegistry_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_isValidStateFromStoreWithNSString_withComGoogleCumulusTypeTypeProto_Command_withJavaUtilCollection__params;
+ (id)__annotations_isValidStateFromUpdateWithComGoogleCumulusApiTypeObjectId_withComGoogleCumulusTypeTypeProto_Command_withJavaUtilCollection__params;
+ (id)__annotations_getObjectIdStringFromStateForLoggingWithComGoogleCumulusTypeTypeProto_Command__params;
+ (id)__annotations_getObjectIdStringFromStateForLoggingWithComGoogleCumulusTypeTypeProto_Command_;
+ (id)__annotations_applyCommandsWithComGoogleCumulusApiTypeObjectId_withComGoogleCumulusTypeTypeProto_Command_withJavaUtilList_withJavaUtilCollection__params;
+ (id)__annotations_getSpecificCommandProcessorWithComGoogleCumulusApiTypeObjectId_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (BOOL)isValidStateFromStoreWithNSString:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2 withJavaUtilCollection:(id)arg3;
- (BOOL)isValidStateFromUpdateWithComGoogleCumulusApiTypeObjectId:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2 withJavaUtilCollection:(id)arg3;
- (id)transformPendingWithComGoogleCumulusApiTypeObjectId:(id)arg1 withJavaUtilList:(id)arg2 withComGoogleCumulusTypeTypeProto_Command:(id)arg3 withJavaUtilCollection:(id)arg4;
- (id)transformUpdateWithComGoogleCumulusApiTypeObjectId:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2 withJavaUtilList:(id)arg3 withJavaUtilCollection:(id)arg4;
- (id)compressCommandsWithComGoogleCumulusApiTypeObjectId:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getObjectIdStringFromStateForLoggingWithComGoogleCumulusTypeTypeProto_Command:(id)arg1;
- (id)applyCommandsWithComGoogleCumulusApiTypeObjectId:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2 withJavaUtilList:(id)arg3 withJavaUtilCollection:(id)arg4;
- (id)getRequiredSpecificCommandProcessorWithComGoogleCumulusApiTypeObjectId:(id)arg1;
- (id)getSpecificCommandProcessorWithComGoogleCumulusApiTypeObjectId:(id)arg1;
- (id)initWithComGoogleAppsBigtopServicesMuxMuxClientRegistry:(id)arg1;

@end
