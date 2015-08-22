//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNServiceControllable.h"

@class FBAnalytics, FBUserSession, MNUserSettings, NSString;

@interface MNContactSyncStateLoggingService : NSObject <MNServiceControllable, FBClassProvidable>
{
    id <FBAddressBookAccessPermissionChecker> _addressBookAccessPermissionChecker;
    FBUserSession *_session;
    MNUserSettings *_userSettings;
    FBAnalytics *_analytics;
}

- (void).cxx_destruct;
- (void)_logContactSyncState;
- (void)_applicationWillResignActive:(id)arg1;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAddressBookAccessPermissionChecker:(id)arg1 session:(id)arg2 userSettings:(id)arg3 analytics:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
