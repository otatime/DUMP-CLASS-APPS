//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBWebRTCBasicCallabilityStrategy.h"

#import "FBPresenceUpdateListener.h"
#import "FBSessionClassProvidable.h"
#import "FBWebRTCAvailabilityRetrieverDelegate.h"

@class FBMessengerSyncEngineManager, FBUserSession, NSMutableDictionary, NSString;

@interface FBWebRTCUserPresenceCache : FBWebRTCBasicCallabilityStrategy <FBWebRTCAvailabilityRetrieverDelegate, FBPresenceUpdateListener, FBSessionClassProvidable>
{
    FBUserSession *_userSession;
    FBMessengerSyncEngineManager *_syncEngineManager;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_pendingRetrievers;
}

@property(retain, nonatomic) NSMutableDictionary *pendingRetrievers; // @synthesize pendingRetrievers=_pendingRetrievers;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) FBMessengerSyncEngineManager *syncEngineManager; // @synthesize syncEngineManager=_syncEngineManager;
@property(retain, nonatomic) FBUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)_didReceiveAvailabilityUpdateNotification:(id)arg1;
- (void)_setAvailabilityHintForUser:(id)arg1 isAvailable:(BOOL)arg2 reason:(id)arg3 reasonId:(id)arg4;
- (void)_setAvailabilityForUser:(id)arg1 isCallingEnabled:(BOOL)arg2 reason:(id)arg3 reasonId:(id)arg4;
- (void)_fetchAvailabilityForUser:(id)arg1;
- (BOOL)_isCacheUpToDateForUser:(id)arg1;
- (void)didWritePresenceValuesIntoSyncStore:(id)arg1 didClearExistingValues:(BOOL)arg2;
- (void)availabilityRetriever:(id)arg1 didFail:(id)arg2;
- (void)availabilityRetriever:(id)arg1 didRetrieveAvailableToCall:(BOOL)arg2 permittedToCall:(BOOL)arg3 mobileInstalled:(BOOL)arg4 mobilePushable:(BOOL)arg5 disabledReason:(id)arg6;
- (id)callabilityForUser:(id)arg1 withName:(id)arg2;
- (void)refreshCallabilityForUser:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithWebRTCDevice:(id)arg1 userSession:(id)arg2 syncEngineManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

