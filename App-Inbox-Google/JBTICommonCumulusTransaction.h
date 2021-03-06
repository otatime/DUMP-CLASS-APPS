//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonTransaction.h"

@class ComGoogleCumulusApiBatchError, JBTICommonCumulusTransactionHistory, JBTICommonSapiSpan_Factory, JavaLangDouble, NSString;

@interface JBTICommonCumulusTransaction : NSObject <JBTICommonTransaction>
{
    id <JBTId> transactionId_;
    id <ComGoogleCumulusApiBigSet> bigSet_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    id <JavaUtilList> operations_;
    id <JavaUtilList> operationsWithUndoers_;
    id <JavaUtilSet> affectedObjectIds_;
    id <JBTICommonTransactionFactory> txFactory_;
    JBTICommonCumulusTransactionHistory *txHistory_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id <JavaUtilList> expanders_;
    id <JavaUtilList> postCommitListeners_;
    id <JavaUtilList> postUndoListeners_;
    JavaLangDouble *commitTime_;
    JavaLangDouble *cumulusCommitTime_;
    JavaLangDouble *undoTime_;
    id <JavaUtilList> metricsTrace_;
    BOOL canUndo_;
    JavaLangDouble *remotelyAppliedTime_;
    id <JBTItemCount> approximateAffectedItemsCount_;
    ComGoogleCumulusApiBatchError *cumulusBatchError_;
    id <JBTCallback> remoteChangeAppliedCallback_;
    NSString *cumulusBatchId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_cumulusBatchId_;
+ (id)__annotations_remoteChangeAppliedCallback_;
+ (id)__annotations_cumulusBatchError_;
+ (id)__annotations_approximateAffectedItemsCount_;
+ (id)__annotations_remotelyAppliedTime_;
+ (id)__annotations_metricsTrace_;
+ (id)__annotations_undoTime_;
+ (id)__annotations_cumulusCommitTime_;
+ (id)__annotations_commitTime_;
+ (id)__annotations_postUndoListeners_;
+ (id)__annotations_postCommitListeners_;
+ (id)__annotations_expanders_;
+ (id)__annotations_undoWithJBTICommonSapiCallback_withJBTSpan__params;
+ (id)__annotations_prepareUndoTransactionWithJBTICommonSapiCallback_withJBTSpan__params;
+ (id)__annotations_mutateWithJBTId_withJBTICommonProtoExtensionValue_withJBTICommonUndoer__params;
+ (id)__annotations_createWithJBTId_withJBTICommonProtoExtensionValue_withJBTICommonUndoer_withBoolean__params;
+ (id)__annotations_getRemoteChangeAppliedCallback;
+ (void)initialize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)toAbbrString;
- (id)getAffectedItemsCount;
- (void)setApproximateAffectedItemsCountWithJBTItemCount:(id)arg1;
- (void)undoWithJBTICommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)prepareUndoTransactionWithJBTICommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)commitCumulusBatchWithJBTICommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)expandOperationsWithJBTICommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2 withJavaUtilList:(id)arg3;
- (BOOL)waitForRemoteChangeApplied;
- (void)addRemoteChangeAppliedCallbackWithJBTCallback:(id)arg1;
- (void)commitWithJBTICommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)deleteLocalObjectAffectedByBulkCommandWithJBTId:(id)arg1 withJBTId:(id)arg2;
- (id)delete__WithJBTId:(id)arg1;
- (id)setWithJBTId:(id)arg1 withJBTICommonProtoExtensionValue:(id)arg2;
- (id)setIfAbsentWithJBTId:(id)arg1 withJBTICommonProtoExtensionValue:(id)arg2 withNSString:(id)arg3 withJavaUtilCollection:(id)arg4 withJBTCBigTopObjectOriginationInfo:(id)arg5;
- (id)expandAsynchronouslyWithJBTICommonTransaction_Expander:(id)arg1;
- (id)fence;
- (id)mutateLocalObjectAffectedByBulkCommandWithJBTId:(id)arg1 withJBTICommonProtoExtensionValue:(id)arg2 withJBTId:(id)arg3;
- (id)mutateWithJBTId:(id)arg1 withJBTICommonProtoExtensionValue:(id)arg2 withJBTICommonUndoer:(id)arg3;
- (id)createLocalObjectAffectedByBulkCommandWithJBTId:(id)arg1 withJBTICommonProtoExtensionValue:(id)arg2 withJBTId:(id)arg3;
- (id)createWithJBTId:(id)arg1 withJBTICommonProtoExtensionValue:(id)arg2 withJBTICommonUndoer:(id)arg3 withBoolean:(BOOL)arg4;
- (id)createWithJBTId:(id)arg1 withJBTICommonProtoExtensionValue:(id)arg2;
- (void)checkNotUndone;
- (void)checkCanUndo;
- (void)checkCanAddOperation;
- (void)checkNotCommitted;
- (void)checkCommitted;
- (void)notifyPostCommitListenersWithJBTICommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2 withJavaUtilList:(id)arg3;
- (void)addPostUndoListenerWithJBTICommonTransaction_CommitListener:(id)arg1;
- (void)addPostCommitListenerWithJBTICommonTransaction_CommitListener:(id)arg1;
- (id)getId;
- (BOOL)canUndo;
- (void)onRemoteChangesApplied;
- (BOOL)isForCumulusBatchIdWithNSString:(id)arg1;
- (void)onCumulusBatchErrorWithComGoogleCumulusApiBatchError:(id)arg1;
- (id)resetRemoteChangeAppliedCallback;
- (id)getRemoteChangeAppliedCallback;
- (id)initWithJBTId:(id)arg1 withComGoogleCumulusApiBigSet:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3 withJBTICommonCumulusTransactionHistory:(id)arg4 withJBTICommonTransactionFactory:(id)arg5 withComGoogleCumulusCommonUtilClock:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

