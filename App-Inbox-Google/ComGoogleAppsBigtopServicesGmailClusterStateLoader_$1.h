//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleAppsBigtopServicesGmailClusterCache, ComGoogleAppsBigtopServicesGmailClusterStateLoader, ComGoogleAppsBigtopServicesGmailSerialExecutor_RunnableContext, NSString;

@interface ComGoogleAppsBigtopServicesGmailClusterStateLoader_$1 : NSObject <JavaLangRunnable>
{
    ComGoogleAppsBigtopServicesGmailClusterStateLoader *this$0_;
    id <ComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator> val$accumulator_;
    ComGoogleAppsBigtopServicesGmailSerialExecutor_RunnableContext *val$context_;
    long long val$queryExecutionTimeMs_;
    ComGoogleAppsBigtopServicesGmailClusterCache *val$clusterCache_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopServicesGmailClusterStateLoader:(id)arg1 withComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator:(id)arg2 withComGoogleAppsBigtopServicesGmailSerialExecutor_RunnableContext:(id)arg3 withLong:(long long)arg4 withComGoogleAppsBigtopServicesGmailClusterCache:(id)arg5;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

