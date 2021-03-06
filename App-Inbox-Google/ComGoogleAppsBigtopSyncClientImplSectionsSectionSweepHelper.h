//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTICommonSapiSpan_Factory, JBTIItemsBulkCommandSpecificationFactory;

@interface ComGoogleAppsBigtopSyncClientImplSectionsSectionSweepHelper : NSObject
{
    id <JBTICommonTransactionFactory> transactionFactory_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    id <DaggerLazy> bulkCommandHelper_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    JBTIItemsBulkCommandSpecificationFactory *bulkCommandSpecificationFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_NONE_;
+ (id)__annotations_trashAllWithNSString_withJBTICommonQueryExtension_withComGoogleAppsBigtopSyncClientImplSectionsSectionImpl_withJBTSpan_withJBTCallback__params;
+ (id)__annotations_sweepWithNSString_withJBTICommonQueryExtension_withComGoogleAppsBigtopSyncClientImplSectionsSectionImpl_withJBTSpan_withJBTCallback__params;
+ (id)__annotations_initWithJBTICommonTransactionFactory_withJBTICommonSapiSpan_Factory_withDaggerLazy_withComGoogleCumulusCommonUtilClock_withJBTIItemsBulkCommandSpecificationFactory_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (void)undoClusterSweepOrTrashTxWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3;
- (void)commitClusterSweepOrTrashTxWithJBTICommonTransaction:(id)arg1 withJBTICommonTransaction:(id)arg2 withJBTICommonSapiCallback:(id)arg3 withJBTSpan:(id)arg4;
- (void)trashClustersInSectionWithComGoogleAppsBigtopSyncClientImplSectionsSectionImpl:(id)arg1 withJBTICommonTransaction:(id)arg2 withJBTICommonSapiCallback:(id)arg3 withJBTSpan:(id)arg4;
- (void)sweepClustersInSectionWithComGoogleAppsBigtopSyncClientImplSectionsSectionImpl:(id)arg1 withJBTICommonTransaction:(id)arg2 withJBTICommonSapiCallback:(id)arg3 withJBTSpan:(id)arg4;
- (void)addTrashAllToTransactionWithJavaUtilList:(id)arg1 withJBTItemCount:(id)arg2 withJBTICommonTransaction:(id)arg3;
- (void)addArchiveToTransactionWithJavaUtilList:(id)arg1 withJBTItemCount:(id)arg2 withJBTICommonTransaction:(id)arg3;
- (void)trashAllWithNSString:(id)arg1 withJBTICommonQueryExtension:(id)arg2 withComGoogleAppsBigtopSyncClientImplSectionsSectionImpl:(id)arg3 withJBTSpan:(id)arg4 withJBTCallback:(id)arg5;
- (void)sweepWithNSString:(id)arg1 withJBTICommonQueryExtension:(id)arg2 withComGoogleAppsBigtopSyncClientImplSectionsSectionImpl:(id)arg3 withJBTSpan:(id)arg4 withJBTCallback:(id)arg5;
- (id)initWithJBTICommonTransactionFactory:(id)arg1 withJBTICommonSapiSpan_Factory:(id)arg2 withDaggerLazy:(id)arg3 withComGoogleCumulusCommonUtilClock:(id)arg4 withJBTIItemsBulkCommandSpecificationFactory:(id)arg5;

@end

