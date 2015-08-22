//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMultipleUserRequestRunning.h"

@class FBNetworkActivityManager, NSHashTable, NSString;

@interface MNRemoteMultipleUserRequestRunner : NSObject <MNMultipleUserRequestRunning>
{
    FBNetworkActivityManager *_networkActivityManager;
    CDUnknownBlockType _userFetcherCreationBlock;
    id <MNMultipleUserRequestRunning> _nextRunner;
    NSHashTable *_pendingFetchers;
}

- (void).cxx_destruct;
- (void)_processResultForRequest:(long long)arg1 listener:(id)arg2 usersByUserId:(id)arg3 pendingResponse:(id)arg4 loadingIndicatorKey:(id)arg5 fetcher:(id)arg6 didFail:(BOOL)arg7 error:(id)arg8;
- (void)handleMultipleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3;
- (id)initWithNetworkActivityManager:(id)arg1 userFetcherCreationBlock:(CDUnknownBlockType)arg2 nextRunner:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

