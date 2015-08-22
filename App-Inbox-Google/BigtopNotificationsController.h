//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccountDemultiplexingPrefetcherDelegate.h"
#import "SSOAuthenticatorListener.h"
#import "SyncClientManagerListener.h"

@class AccountDemultiplexingPrefetcher, DeviceRegistrationServiceStub, GIPPersistentCache, NSData, NSDate, NSMutableArray, NSMutableSet, NSString, NSTimer;

@interface BigtopNotificationsController : NSObject <AccountDemultiplexingPrefetcherDelegate, SyncClientManagerListener, SSOAuthenticatorListener>
{
    NSDate *backgroundSyncStartTime_;
    NSTimer *backgroundSyncTimer_;
    GIPPersistentCache *prefetchStatusCache_;
    NSString *lastPrerenderConvId_;
    double lastPrerenderStartTime_;
    id <JBTSpan> bgSyncSpan_;
    id <JBTSpan> prefetchSpan_;
    id <JBTSpan> syncSpan_;
    AccountDemultiplexingPrefetcher *prerenderPrefetcher_;
    NSMutableSet *prerenderDelayTimers_;
    NSTimer *retryRegistrationTimer_;
    int failedRegistrationCount_;
    BOOL _showBgPrefetchStatus;
    CDUnknownBlockType backgroundSyncCompletion_;
    NSMutableArray *pendingBackgroundNotifications_;
    NSMutableSet *pendingSyncEmails_;
    NSMutableSet *syncedEmails_;
    NSData *savedDeviceToken;
    DeviceRegistrationServiceStub *stub_;
    unsigned int _testBgSyncStatus;
}

+ (id)sharedNotificationsController;
+ (void)setSharedNotificationsController:(id)arg1;
@property(nonatomic) unsigned int testBgSyncStatus; // @synthesize testBgSyncStatus=_testBgSyncStatus;
@property(nonatomic) BOOL showBgPrefetchStatus; // @synthesize showBgPrefetchStatus=_showBgPrefetchStatus;
@property(retain, nonatomic) DeviceRegistrationServiceStub *stub; // @synthesize stub=stub_;
@property(retain, nonatomic) NSData *savedDeviceToken; // @synthesize savedDeviceToken;
@property(retain, nonatomic) NSMutableSet *syncedEmails; // @synthesize syncedEmails=syncedEmails_;
@property(retain, nonatomic) NSMutableSet *pendingSyncEmails; // @synthesize pendingSyncEmails=pendingSyncEmails_;
@property(retain, nonatomic) NSMutableArray *pendingBackgroundNotifications; // @synthesize pendingBackgroundNotifications=pendingBackgroundNotifications_;
@property(copy, nonatomic) CDUnknownBlockType backgroundSyncCompletion; // @synthesize backgroundSyncCompletion=backgroundSyncCompletion_;
- (void).cxx_destruct;
- (void)authenticatorDidChangeAccounts:(id)arg1;
- (void)authenticatorHasNoAccountsSignedIn:(id)arg1;
- (void)accountDemultiplexingPrefetcher:(id)arg1 didPrefetchItem:(id)arg2;
- (void)accountDemultiplexingPrefetcher:(id)arg1 didCompleteHeightComputationForItem:(id)arg2;
- (void)accountDemultiplexingPrefetcherDidCompleteHeightComputation:(id)arg1;
- (void)savePrefetchStatus:(unsigned int)arg1 forConvId:(id)arg2;
- (id)createAccountDemultiplexingPrefetcher;
- (void)setPrefetcher:(id)arg1;
- (void)resetRetryRegistrationState;
- (void)scheduleRegistrationTimer;
- (void)clearRegistrationTimer;
- (void)experimentChanged:(id)arg1;
- (void)prerenderFinished;
- (void)shutdownPrerender;
- (BOOL)isPrerendering;
- (void)stopSpans;
- (void)startSpansWithMetric:(id)arg1 syncNotification:(BOOL)arg2;
- (void)finishBackgroundSyncWithSuccess:(BOOL)arg1;
- (BOOL)isBackgroundSync;
- (void)initializeBackgroundSync:(CDUnknownBlockType)arg1 withTopLevelMetric:(id)arg2 syncNotification:(BOOL)arg3;
- (void)clearBackgroundSync;
- (void)prerenderDelayTimeout:(id)arg1;
- (void)backgroundSyncTimeout:(id)arg1;
- (void)processBackgroundNotificationsForEmail:(id)arg1 forceRemote:(BOOL)arg2;
- (void)prerenderConversationWithId:(id)arg1 forceRemote:(BOOL)arg2 forEmail:(id)arg3;
- (void)prerenderConversationFromNotification:(id)arg1 forceRemote:(BOOL)arg2;
- (id)usersFromAccessTokenMap:(id)arg1;
- (id)stubOptionsWithSecurityOptions:(id)arg1;
- (BOOL)shouldRegisterPushNotifications;
- (void)setupPrefetchStatusCache;
- (void)logErrorAccounts:(id)arg1;
- (void)getAccessTokensForEmails:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)applicationId;
- (void)annotateSpanWithNotifcationState:(id)arg1 forConversationId:(id)arg2;
- (void)handleOpportunisticBackgroundSyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleBackgroundNotification:(id)arg1;
- (BOOL)triggerBgSyncForEmail:(id)arg1 syncNotification:(BOOL)arg2;
- (void)handleSyncStatus:(id)arg1 email:(id)arg2 syncNotification:(BOOL)arg3;
- (void)maybeShowPrefetchStatusForConvId:(id)arg1;
- (void)simulateLaunchingFromBackgroundSync;
- (void)deregisterPushNotificationsForAllUsersWithOptions:(id)arg1;
- (void)deregisterPushNotificationsForAllUsers;
- (void)updatePushNotificationsForUsers;
- (void)checkDeviceTokenAndUpdatePushNotifications;
- (void)updatePushNotifications;
- (void)registerPushNotificationsForCurrentUsers;
- (void)registerPushNotificationsForDeviceToken;
- (void)registerPushNotificationsForUsersInMap:(id)arg1;
- (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)didRegisterUserNotificationSettings:(id)arg1;
- (void)dealloc;
- (void)tearDown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
