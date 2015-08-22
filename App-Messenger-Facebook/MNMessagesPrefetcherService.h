//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNServiceControllable.h"

@class FBAnalytics, FBMFetchedThreadKeySet, FBMThreadDescriptorFactory, FBMThreadSet, FBMThreadStore, FBReachabilityAnnouncer, FBUserSession, NSString;

@interface MNMessagesPrefetcherService : NSObject <FBClassProvidable, MNServiceControllable>
{
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    FBUserSession *_session;
    FBMThreadSet *_threadSet;
    FBMThreadStore *_threadStore;
    FBMFetchedThreadKeySet *_fetchedThreadKeySet;
    FBMThreadDescriptorFactory *_threadDescriptorFactory;
    FBAnalytics *_analytics;
    id <MNAuthenticationManager> _authenticationManager;
    id <FBReachabilityListener> _queueDispatcher;
    BOOL _isRunning;
    BOOL _didMakeInitialFetch;
    unsigned int _reachabilityState;
    long long _threadStoreRequestId;
}

- (void).cxx_destruct;
- (void)_fetchThreadMessagesIfReady;
- (void)_initialFetchThreadMessagesIfReady;
- (void)_fetchThreadMessages;
- (id)_buildRequestFiltersSetWithNumThreads:(int)arg1 maxThreadsToScan:(int)arg2;
- (void)_handleThreadStoreSuccess:(id)arg1;
- (void)_handleThreadStoreFailureWithError:(id)arg1;
- (void)_removeReachabilityAnnouncerListener;
- (void)_addReachabilityAnnouncerListenerIfGKEnabled;
- (void)latencyStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)uploadBandwidthStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)downloadBandwidthStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)reachabilityStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithReachabilityAnnouncer:(id)arg1 session:(id)arg2 threadSet:(id)arg3 threadStore:(id)arg4 fetchedThreadKeySet:(id)arg5 threadDescriptorFactory:(id)arg6 analytics:(id)arg7 authenticationManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

