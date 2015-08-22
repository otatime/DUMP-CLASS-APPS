//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBNetworkerRequestDelegate.h"

@class FBAnalytics, FBMUserFetchedListeningAnnouncer, FBSimpleNetworkerRequest, FBUserSession, NSSet, NSString;

@interface FBMMultipleUserFetcher : NSObject <FBNetworkerRequestDelegate, FBClassProvidable>
{
    id <FBMMultipleUserFetcherDelegate> _delegate;
    id <MNAuthenticationManager> _authenticationManager;
    FBSimpleNetworkerRequest *_downloadRequest;
    FBMUserFetchedListeningAnnouncer *_userFetchedAnnouncer;
    FBUserSession *_session;
    FBAnalytics *_analytics;
    NSSet *_userIds;
}

- (void).cxx_destruct;
- (id)_userListFromResult:(id)arg1;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)cancel;
- (void)send;
- (void)configureWithUserIds:(id)arg1 delegate:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSession:(id)arg1 authenticationManager:(id)arg2 analytics:(id)arg3 userFetchedAnnouncer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

