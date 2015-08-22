//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCancelable.h"
#import "FBClassProvidable.h"
#import "FBMDetachable.h"
#import "FBNetworkerRequestDelegate.h"

@class FBMDetchedNetworkRequestsQueue, FBSimpleNetworkerRequest, FBUserSession, MNMessagingRegionHeaderHelper, NSArray, NSMutableDictionary, NSString;

@interface FBMBatchThreadsDeleter : NSObject <FBNetworkerRequestDelegate, FBClassProvidable, FBCancelable, FBMDetachable>
{
    id <MNAuthenticationManager> _authManager;
    FBUserSession *_userSession;
    FBMDetchedNetworkRequestsQueue *_detachedQueue;
    MNMessagingRegionHeaderHelper *_messagingRegionHeaderHelper;
    NSMutableDictionary *_deleteRequestByThreadKey;
    NSArray *_threadKeys;
    id <FBMBatchThreadsDeleterDelegate> _delegate;
    FBSimpleNetworkerRequest *_networkRequest;
    BOOL _requestFinished;
}

- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)_cleanUpDetachedState;
- (void)detach;
- (void)cancel;
- (void)deleteThreadsWithThreadKeys:(id)arg1 withDelegate:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSession:(id)arg1 authManager:(id)arg2 detachedQueue:(id)arg3 messagingRegionHeaderHelper:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

