//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSyncStoreOpenedStateListener.h"

@class FBDelayer, FBSyncEventWriterListenerAnnouncer, FBSyncStore, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface FBSyncEventWriter : NSObject <FBSyncStoreOpenedStateListener>
{
    NSOperationQueue *_operationQueue;
    FBSyncEventWriterListenerAnnouncer *_announcer;
    FBSyncStore *_syncStore;
    FBDelayer *_storeOpenedDelayer;
    NSObject<OS_dispatch_queue> *_operationCreationQueue;
}

- (void).cxx_destruct;
- (void)willDiscardDatabaseContents;
- (void)didDiscardDatabaseFile;
- (void)didCreateDatabaseTables;
- (void)syncStoreDidClose:(id)arg1;
- (void)syncStoreDidOpen:(id)arg1 wasSuccessful:(BOOL)arg2;
- (void)removeSyncEventWriterListener:(id)arg1;
- (void)addSyncEventWriterListener:(id)arg1;
- (void)_onOperationCompletedWithSyncEvents:(id)arg1 wasCanceled:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAllPendingOperations;
- (BOOL)isWriteOperationPending;
- (void)_createWriteSyncEventsOperationAndAddToQueue:(id)arg1 queuePriority:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enqueueWriteToSyncStoreWithEvents:(id)arg1;
- (void)enqueueWriteToSyncStoreWithEvents:(id)arg1 queuePriority:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSyncStore:(id)arg1;
- (id)initWithSyncStore:(id)arg1 operationQueue:(id)arg2 operationCreationQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

