//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"
#import "iRateDelegate.h"

@class CBLRootViewController, NSString, UIWindow;

@interface CBLAppDelegate : UIResponder <iRateDelegate, UIApplicationDelegate>
{
    UIWindow *_window;
    CBLRootViewController *_rootViewController;
}

+ (id)sharedDelegate;
@property(retain, nonatomic) CBLRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)iRateUserDidRequestReminderToRateApp;
- (void)iRateUserDidDeclineToRateApp;
- (void)iRateUserDidAttemptToRateApp;
- (void)callPostInstall;
- (void)handleInAppNotification:(id)arg1;
- (void)fetchBoardsForUser;
- (void)showAppUpdateDialogsForBuildURL:(id)arg1 status:(id)arg2 ratingSampleSize:(id)arg3;
- (void)checkEnterpriseChangelog;
- (void)checkProductionStatusFile;
- (void)checkForUpdates;
- (void)updateApplicationFromVersion:(id)arg1 toVersion:(id)arg2;
- (void)userDefaultsDidChange:(id)arg1;
@property(readonly, nonatomic) NSString *installIdentifier;
- (unsigned int)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (int)performBackgroundTasksWithTaskHandler:(CDUnknownBlockType)arg1;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)logBackgroundTime;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)setupAppearance;
- (void)addNotificationObservers;
- (void)removeDiskCacheWithFilename:(id)arg1;
- (void)migrateDiskCachesWithNames:(id)arg1;
- (void)migrateCaches;
- (void)runStartupTasks;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

