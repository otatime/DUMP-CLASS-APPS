//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplSettingsSettingsReader.h"

@class ComGoogleProtobufExtensionRegistry, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSettingsClientNongwtFileSettingsReader : NSObject <ComGoogleAppsBigtopSyncClientImplSettingsSettingsReader>
{
    NSString *filepath_;
    ComGoogleProtobufExtensionRegistry *extensionRegistry_;
    id <JavaUtilConcurrentExecutor> executor_;
    id <JCGCuWorkQueue> callbackWorkQueue_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_closeWithJavaIoCloseable__params;
+ (void)initialize;
- (void)dealloc;
- (void)closeWithJavaIoCloseable:(id)arg1;
- (void)readWithJBTICommonSapiCallback:(id)arg1 withJBTICommonSapiSpan:(id)arg2;
- (id)initWithNSString:(id)arg1 withComGoogleProtobufExtensionRegistry:(id)arg2 withJavaUtilConcurrentExecutor:(id)arg3 withJCGCuWorkQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
