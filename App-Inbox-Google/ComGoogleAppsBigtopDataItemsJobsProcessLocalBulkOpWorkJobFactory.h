//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataCommonRpcRpcJobScheduler;

@interface ComGoogleAppsBigtopDataItemsJobsProcessLocalBulkOpWorkJobFactory : NSObject
{
    ComGoogleAppsBigtopDataCommonRpcRpcJobScheduler *jobScheduler_;
    id <JavaUtilConcurrentExecutor> executor_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleAppsBigtopDataCommonRpcRpcJobScheduler_withJavaUtilConcurrentExecutor_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (void)createAndScheduleJob;
- (id)createJob;
- (id)initWithComGoogleAppsBigtopDataCommonRpcRpcJobScheduler:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;

@end
