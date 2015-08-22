//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "UIAlertViewDelegate.h"

@class FBMParticipantNameFormatter, FBMUser, FBUserSession, NSString;

@interface MNMessageSendNotEligibleAlertController : NSObject <UIAlertViewDelegate, FBClassProvidable>
{
    FBMParticipantNameFormatter *_nameFormatter;
    FBUserSession *_userSession;
    id <FBProvider> _userBlockerProvider;
    FBMUser *_userToUnblock;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_showUnblockOnFacebookAlertForOtherUser:(id)arg1;
- (void)_showUnblockMessagesAlertForOtherUser:(id)arg1;
- (void)_showNotReceivingMessagesAlert:(id)arg1;
- (void)showSendNotEligibleAlertForViewModel:(id)arg1;
- (void)showSendNotEligibleAlertForNewThreadWithPickedUsers:(id)arg1;
- (BOOL)shouldShowForNewThreadWithPickedUsers:(id)arg1;
- (BOOL)shouldShowSendNotEligibleAlertForViewModel:(id)arg1;
- (id)initWithNameFormatter:(id)arg1 userSession:(id)arg2 userBlockerProvider:(id)arg3;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

