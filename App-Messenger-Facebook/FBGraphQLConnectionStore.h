//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLConnectionInterface.h"

@class FBGraphQLConnectionStoreListenerAnnouncer, FBGraphQLConnectionStorePersistenceCoordinator, FBGraphQLConnectionStoreState, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, _FBGraphQLConnectionStorePageInfo, _FBGraphQLConnectionStoreUpdateCoordinator;

@interface FBGraphQLConnectionStore : NSObject <FBGraphQLConnectionInterface>
{
    id <FBGraphQLConnectionStoreConfiguration> _configuration;
    FBGraphQLConnectionStoreListenerAnnouncer *_announcer;
    FBGraphQLConnectionStoreState *_state;
    NSMutableArray *_edgeFiltersByPriority;
    _FBGraphQLConnectionStoreUpdateCoordinator *_updateCoordinator;
    NSString *_nextStartCursorOnDisk;
    _FBGraphQLConnectionStorePageInfo *_lastRestoredPageInfo;
    id <FBGraphQLConnectionStoreStateModifying> _stateModificationBeingSynchronouslyApplied;
    BOOL _isRestoringFromDisk;
    BOOL _currentlyInsertingEdgesFromPage;
    NSObject<OS_dispatch_queue> *_asynchronousStateModificationComputationQueue;
    BOOL _isComputingAsynchronousStateModification;
    NSMutableArray *_pendingAsynchronousStateModifications;
    FBGraphQLConnectionStorePersistenceCoordinator *_persistenceCoordinator;
}

@property(readonly, nonatomic) FBGraphQLConnectionStorePersistenceCoordinator *persistenceCoordinator; // @synthesize persistenceCoordinator=_persistenceCoordinator;
- (void).cxx_destruct;
- (id)_deduplicatedEdgesFromEdgesToBeAdded:(id)arg1 allEdges:(id)arg2;
- (void)_startNextAsynchronousStateModificationIfNeeded;
- (void)_synchronouslyApplyStateTransitions:(id)arg1 forStateModification:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)asynchronouslyApplyStateModification:(id)arg1;
- (void)synchronouslyApplyStateModification:(id)arg1;
- (void)registerEdgeFilter:(id)arg1 withPriority:(int)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)deleteChunksFromIndex:(unsigned int)arg1;
- (id)addEdgesFromConnectionPage:(id)arg1 atLocation:(id)arg2 userInfo:(id)arg3;
- (id)state;
- (void)loadAdditionalPagesFromDiskAtTailLocationFailedToLoadPagesCallback:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1 consistentLookasideCache:(id)arg2 fieldSet:(const struct FBGraphQLFieldSet *)arg3 persistenceCoordinator:(id)arg4;
- (id)init;
- (void)removeConnectionListener:(id)arg1;
- (void)addConnectionListener:(id)arg1;
- (id)connectionState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

