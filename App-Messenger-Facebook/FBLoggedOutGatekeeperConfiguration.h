//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGatekeeperConfiguration.h"

@class NSString;

@interface FBLoggedOutGatekeeperConfiguration : NSObject <FBGatekeeperConfiguration>
{
}

- (unsigned int)actionTypeForNotification:(id)arg1;
- (id)notificationObjectToObserve;
- (id)notificationsToObserve;
- (id)networkerRequest;
- (id)preferencesKey;
- (id)preferenceStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

