//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFriendListModelControllerDelegate.h"
#import "MNNonMessengerFriendFetchPerforming.h"

@class FBFriendListModelController, FBMessengerSyncEngineManager, NSString;

@interface MNSyncEngineNonMessengerFriendsFetcher : NSObject <FBFriendListModelControllerDelegate, MNNonMessengerFriendFetchPerforming>
{
    FBFriendListModelController *_modelController;
    id <MNNonMessengerFriendFetchPerformerDelegate> _delegate;
    FBMessengerSyncEngineManager *_syncEngineManager;
    unsigned int _fetchLimit;
}

- (void).cxx_destruct;
- (void)modelController:(id)arg1 didCompleteSearchOperationReturningPeople:(id)arg2;
- (id)searchOperationForSyncStore:(id)arg1;
- (void)stop;
- (void)startWithDelegate:(id)arg1 fetchLimit:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithSyncEngineManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

