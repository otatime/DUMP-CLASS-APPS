//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKComponentDataSourceProtocol.h"
#import "CKComponentLifecycleManagerAsynchronousUpdateHandler.h"
#import "CKComponentLifecycleManagerDelegate.h"
#import "CKSuspensionControllerOutputHandler.h"

@class CKComponentPreparationQueue, CKSectionedArrayController, CKSuspensionController, NSString;

@interface CKComponentDataSource : NSObject <CKSuspensionControllerOutputHandler, CKComponentLifecycleManagerDelegate, CKComponentLifecycleManagerAsynchronousUpdateHandler, CKComponentDataSourceProtocol>
{
    id <CKComponentDeciding> _decider;
    id <NSObject> _context;
    CKSectionedArrayController *_outputArrayController;
    CKSectionedArrayController *_inputArrayController;
    CKComponentPreparationQueue *_componentPreparationQueue;
    CKSuspensionController *_suspensionController;
    struct queue<unsigned long long, std::__1::deque<unsigned long long, std::__1::allocator<unsigned long long>>> _operationsInPreparationQueueTracker;
    CDUnknownBlockType _lifecycleManagerFactory;
    id <CKComponentDataSourceDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <CKComponentDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)concurrentQueue;
- (void)handleAsynchronousUpdateForComponentLifecycleManager:(id)arg1;
- (void)componentLifecycleManager:(id)arg1 sizeDidChangeWithAnimation:(const struct CKComponentBoundsAnimation *)arg2;
- (void)suspensionController:(id)arg1 didDequeueChangeset:(const struct Changeset *)arg2 ticker:(CDUnknownBlockType)arg3;
- (id)startingIndexPathForTailChangesetInSuspensionController:(id)arg1;
- (void)_componentPreparationQueueDidPrepareBatch:(id)arg1 sections:(const struct Sections *)arg2 isContiguousTailInsertion:(BOOL)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (BOOL)isComputingChanges;
@property(readonly, nonatomic) BOOL hasPendingChanges;
@property(nonatomic) unsigned int state;
- (unsigned long long)_enqueueChangeset:(const struct Changeset *)arg1;
- (unsigned long long)enqueueChangeset:(const struct Changeset *)arg1 constrainedSize:(const struct CKSizeRange *)arg2;
- (void)updateContextAndEnqeueReload:(id)arg1;
- (void)enqueueReload;
- (void)enumerateObjectsInSectionAtIndex:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (int)numberOfObjectsInSection:(int)arg1;
- (int)numberOfSections;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithComponentProvider:(Class)arg1 context:(id)arg2 decider:(id)arg3;
- (id)initWithLifecycleManagerFactory:(CDUnknownBlockType)arg1 decider:(id)arg2 context:(id)arg3 inputArrayController:(id)arg4 outputArrayController:(id)arg5 preparationQueue:(id)arg6 suspensionController:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

