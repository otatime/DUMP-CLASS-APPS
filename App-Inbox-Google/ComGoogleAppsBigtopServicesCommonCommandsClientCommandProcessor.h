//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusApiTypeAbstractCommandProcessor.h"

@class ComGoogleCumulusCommonCollectImmutableMap, ComGoogleProtobufExtensionLite;

@interface ComGoogleAppsBigtopServicesCommonCommandsClientCommandProcessor : ComGoogleCumulusApiTypeAbstractCommandProcessor
{
    ComGoogleCumulusCommonCollectImmutableMap *commandHandlersByCommandExt_;
    ComGoogleProtobufExtensionLite *baseObjectExt_;
    id <ComGoogleCumulusApiPluginSlicer> slicer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_applyCommandsToTypeWithComGoogleCumulusApiTypeObjectId_withComGoogleProtobufMessageLite_withJavaUtilList_withJavaUtilCollection__params;
+ (void)initialize;
+ (id)handlerListOfWithComGoogleAppsBigtopServicesCommonCommandsClientCommandHandlerArray:(id)arg1;
- (void)dealloc;
- (id)getCommandExtensions;
- (id)applyCommandsToTypeWithComGoogleCumulusApiTypeObjectId:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2 withJavaUtilList:(id)arg3 withJavaUtilCollection:(id)arg4;
- (id)applyCommandsWithComGoogleCumulusApiTypeObjectId:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2 withJavaUtilList:(id)arg3 withJavaUtilCollection:(id)arg4;
- (id)buildCommandHandlersMapWithJavaUtilList:(id)arg1;
- (id)initWithComGoogleProtobufExtensionLite:(id)arg1 withJavaUtilList:(id)arg2 withComGoogleCumulusApiPluginSlicer:(id)arg3;

@end
