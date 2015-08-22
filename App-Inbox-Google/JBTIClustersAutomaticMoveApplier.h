//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTIClustersClusterFetcherListeningRefresher, JBTICommonSapiSpan_Factory;

@interface JBTIClustersAutomaticMoveApplier : NSObject
{
    JBTIClustersClusterFetcherListeningRefresher *clusterRefresher_;
    id <JBTICommonTransactionFactory> transactionFactory_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_clusterForUpdateClusterWithJBTClusterConfig_;
+ (id)__annotations_clusterForSystemClusterOverrideWithJBTClusterConfig_;
+ (id)__annotations_automaticallyMoveToNewClusterWithJBTIClustersClustersImpl_withJBTIConversationConversationImpl_withJBTClusterConfig_withJBTClusterConfig_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_automaticallyMoveWithJBTIClustersClustersImpl_withJBTIConversationConversationImpl_withJBTClusterConfig_withJBTClusterConfig_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_clusterToRemoveWithJBTClusterConfig__params;
+ (id)__annotations_clusterToRemoveWithJBTClusterConfig_;
+ (id)__annotations_clusterToAddWithComGoogleAppsBigtopServicesGmailBigTopGmailMessage_withJBTClusterConfig__params;
+ (id)__annotations_clusterToAddWithComGoogleAppsBigtopServicesGmailBigTopGmailMessage_withJBTClusterConfig_;
+ (id)__annotations_getAutomaticMoveCriteriaWithJBTIConversationConversationImpl_withJBTClusterConfig_withJBTClusterConfig__params;
+ (id)__annotations_initWithJBTIClustersClusterFetcherListeningRefresher_withJBTICommonTransactionFactory_withJBTICommonSapiSpan_Factory_;
+ (id)__annotations;
- (void)dealloc;
- (id)cleanListIdWithNSString:(id)arg1;
- (id)clusterForUpdateClusterWithJBTClusterConfig:(id)arg1;
- (id)clusterForSystemClusterOverrideWithJBTClusterConfig:(id)arg1;
- (id)listFilterWithJBTCustomClusterConfig_Builder:(id)arg1 withNSString:(id)arg2;
- (id)fromFilterWithJBTCustomClusterConfig_Builder:(id)arg1 withNSString:(id)arg2;
- (void)applyUpdateClusterCommandWithJBTIClustersClustersImpl:(id)arg1 withJBTAutomaticMoveCriteria:(id)arg2 withJBTICommonTransaction:(id)arg3;
- (void)applyUpdateSystemClusterOverrideCommandWithJBTIConversationConversationImpl:(id)arg1 withJBTIClustersAutomaticMoveCriteriaImpl:(id)arg2 withJBTICommonTransaction:(id)arg3;
- (void)automaticallyMoveToNewClusterWithJBTIClustersClustersImpl:(id)arg1 withJBTIConversationConversationImpl:(id)arg2 withJBTClusterConfig:(id)arg3 withJBTClusterConfig:(id)arg4 withJBTCallback:(id)arg5 withJBTSpan:(id)arg6;
- (void)automaticallyMoveWithJBTIClustersClustersImpl:(id)arg1 withJBTIConversationConversationImpl:(id)arg2 withJBTClusterConfig:(id)arg3 withJBTClusterConfig:(id)arg4 withJBTCallback:(id)arg5 withJBTSpan:(id)arg6;
- (id)clusterToRemoveWithJBTClusterConfig:(id)arg1;
- (BOOL)hasFilterWithJBTCustomClusterConfig:(id)arg1 withJBTClusterFilter:(id)arg2;
- (id)clusterToAddWithComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg1 withJBTClusterConfig:(id)arg2;
- (id)getAutomaticMoveCriteriaWithJBTIConversationConversationImpl:(id)arg1 withJBTClusterConfig:(id)arg2 withJBTClusterConfig:(id)arg3;
- (id)initWithJBTIClustersClusterFetcherListeningRefresher:(id)arg1 withJBTICommonTransactionFactory:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3;

@end
