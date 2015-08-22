//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNLegacyThreadListFetcherDelegate.h"

@class FBMMemModelThreadParser, FBMNetworkProtocolController, FBMThreadSet, FBMUserFetchedListeningAnnouncer, FBMUserInfoFetchManager, MNGraphQLThreadListFetcher, MNLegacyThreadListFetcher, NSString;

@interface FBMThreadListFetcher : NSObject <MNLegacyThreadListFetcherDelegate, FBClassProvidable>
{
    MNGraphQLThreadListFetcher *_graphQLThreadListFetcher;
    MNLegacyThreadListFetcher *_legacyThreadListFetcher;
    id <FBMAppProperties> _appProperties;
    FBMThreadSet *_threadSet;
    FBMNetworkProtocolController *_networkProtocolController;
    FBMMemModelThreadParser *_memModelThreadParser;
    id <FBMThreadListFetcherDelegate> _delegate;
    id <MNAuthenticationManager> _authManager;
    FBMUserInfoFetchManager *_userInfoFetchManager;
    FBMUserFetchedListeningAnnouncer *_userFetchListeningAnnouncer;
    unsigned int _threadListType;
}

- (void).cxx_destruct;
- (void)_updateUserInfoQueryTimestampForThreads_DEPRECATED:(id)arg1;
- (void)_didFetchMemModelForMessageThreadsConnection:(id)arg1;
- (void)couldNotFetchThreadsWithError:(id)arg1;
- (void)didCancelFetchThreads;
- (void)didFetchThreads:(id)arg1;
- (void)cancel;
- (void)configureAndFetchThreadListWithType:(unsigned int)arg1 andDelegate:(id)arg2;
- (id)initWithGraphQLThreadListFetcher:(id)arg1 legacyThreadListFetcher:(id)arg2 threadSet:(id)arg3 memModelThreadParser:(id)arg4 appProperties:(id)arg5 networkProtocolController:(id)arg6 authManger:(id)arg7 userInfoFetchManager:(id)arg8 userFetchListeningAnnouncer:(id)arg9;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
