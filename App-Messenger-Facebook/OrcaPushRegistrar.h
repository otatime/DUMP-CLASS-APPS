//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBPushRegistrar, FBUserSession, NSMutableArray, NSString, NSUserDefaults, UIApplication;

@interface OrcaPushRegistrar : NSObject <FBSessionClassProvidable>
{
    id <FBPushUserSettings> _userSettings;
    NSUserDefaults *_userDefaults;
    UIApplication *_application;
    FBUserSession *_session;
    FBPushRegistrar *_pushRegistrar;
    NSMutableArray *_apnsRegistrationCompletionBlocks;
}

@property(retain, nonatomic) NSMutableArray *apnsRegistrationCompletionBlocks; // @synthesize apnsRegistrationCompletionBlocks=_apnsRegistrationCompletionBlocks;
@property(retain, nonatomic) FBPushRegistrar *pushRegistrar; // @synthesize pushRegistrar=_pushRegistrar;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (void)_executeAPNSRegistrationCompletionBlocks;
- (void)handleDidEnterForeground;
- (BOOL)hasRegisteredForPush;
- (void)_postNuxAppEventTokenRegistrationComplete;
- (BOOL)eligibleForPushInterstitial;
- (void)addAPNSRegistrationCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setMessagePreviewSettingLocally:(BOOL)arg1;
- (void)addFBRegistrationFailureBlock:(CDUnknownBlockType)arg1;
- (void)setMessagePreviews:(BOOL)arg1 withfailureBlock:(CDUnknownBlockType)arg2;
- (BOOL)hasMessagePreviews;
- (void)unregisterForRemoteNotificationsAndLog:(id)arg1;
- (void)unregisterForPush;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)_registerForPushPermissions;
- (void)registerForPushIfNecessary;
- (void)stopObservers;
- (void)startObservers;
- (void)stop;
- (void)start;
- (double)_minBackoffInterval;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithPushRegistrar:(id)arg1 application:(id)arg2 session:(id)arg3 pushUserSettings:(id)arg4 userDefaults:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

