//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKComponentDataSourceProtocol.h"
#import "CKComponentLifecycleManagerDelegate.h"
#import "CKSuspensionControllerOutputHandler.h"
#import "CKTransactionalComponentDataSourceListener.h"

@class CKSectionedArrayController, CKSuspensionController, CKTransactionalComponentDataSource, CKTransactionalComponentDataSourceConfiguration, NSObject<OS_dispatch_queue>, NSString;

@interface CKTransactionalComponentDataSourceShim : NSObject <CKSuspensionControllerOutputHandler, CKComponentLifecycleManagerDelegate, CKTransactionalComponentDataSourceListener, CKComponentDataSourceProtocol>
{
    id <CKComponentDeciding> _decider;
    CKSectionedArrayController *_outputArrayController;
    CKSectionedArrayController *_preSuspensionArrayController;
    CKSectionedArrayController *_inputArrayController;
    CKSuspensionController *_suspensionController;
    struct queue<unsigned long long, std::__1::deque<unsigned long long, std::__1::allocator<unsigned long long>>> _operationsInPreparationQueueTracker;
    CDUnknownBlockType _lifecycleManagerFactory;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    CKTransactionalComponentDataSource *_transactionalComponentDataSource;
    CKTransactionalComponentDataSourceConfiguration *_transactionalComponentDataSourceConfiguration;
    id <CKComponentDataSourceDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <CKComponentDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)concurrentQueue;
- (void)componentLifecycleManager:(id)arg1 sizeDidChangeWithAnimation:(const struct CKComponentBoundsAnimation *)arg2;
- (void)suspensionController:(id)arg1 didDequeueChangeset:(const struct Changeset *)arg2 ticker:(CDUnknownBlockType)arg3;
- (id)startingIndexPathForTailChangesetInSuspensionController:(id)arg1;
- (void)_componentPreparationQueueDidPrepareBatch:(id)arg1 sections:(const struct Sections *)arg2 isContiguousTailInsertion:(BOOL)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (BOOL)isComputingChanges;
@property(readonly, nonatomic) BOOL hasPendingChanges;
@property(nonatomic) unsigned int state;
- (unsigned long long)_enqueueChangesetApplication:(const struct Changeset *)arg1 withChangesetApplicator:(CDUnknownBlockType)arg2;
- (unsigned long long)enqueueChangeset:(const struct Changeset *)arg1 constrainedSize:(const struct CKSizeRange *)arg2;
- (void)updateContextAndEnqeueReload:(id)arg1;
- (void)enqueueReload;
- (void)enumerateObjectsInSectionAtIndex:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (int)numberOfObjectsInSection:(int)arg1;
- (int)numberOfSections;
@property(readonly, copy) NSString *description;
- (void)removeTransactionalDataSourceListerner:(id)arg1;
- (void)addTransactionalDataSourceListener:(id)arg1;
- (void)_transactionalFakePrepareInputBatch:(const struct CKComponentPreparationInputBatch *)arg1 withState:(id)arg2 uuidToFinalIndexPathMap:(id)arg3;
- (void)_transactionalDataSourceApplyStateUpdatesWithChanges:(id)arg1 state:(id)arg2 previousState:(id)arg3;
- (void)transactionalComponentDataSource:(id)arg1 didModifyPreviousState:(id)arg2 byApplyingChanges:(id)arg3;
- (unsigned long long)_transactionalDataSourceUpdateConfigurationWithContext:(id)arg1 constrainedSize:(struct CKSizeRange)arg2;
- (unsigned long long)_transactionalDataSourceEnqueueChangeset:(const struct Changeset *)arg1;
- (id)init;
- (id)initWithComponentProvider:(Class)arg1 context:(id)arg2 constrainedSize:(const struct CKSizeRange *)arg3 decider:(id)arg4;
- (id)initWithLifecycleManagerFactory:(CDUnknownBlockType)arg1 decider:(id)arg2 inputArrayController:(id)arg3 preSuspensionArrayController:(id)arg4 outputArrayController:(id)arg5 suspensionController:(id)arg6 transactionalComponentDataSourceConfiguration:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

