//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBAnalytics, FBUserSession, MNBatchInviteController, MNContactsRetrieverSimpleLogger, MNNavigationCoordinator, MNSMSInvitePresenter, MNUserSetUpStatePersister, NSString;

@interface MNInviteSender : NSObject <FBClassProvidable>
{
    MNSMSInvitePresenter *_smsInvitePresenter;
    MNNavigationCoordinator *_navigationCoordinator;
    id <FBProvider> _multiPeoplePickerViewControllerProvider;
    FBUserSession *_session;
    MNBatchInviteController *_presentedBatchInviteController;
    id <FBProvider> _nonMessengerContactSuggestionsProvider;
    MNContactsRetrieverSimpleLogger *_contactsRetrieversSimpleLogger;
    FBAnalytics *_analytics;
    MNUserSetUpStatePersister *_userSetupStatePersister;
}

- (void).cxx_destruct;
- (void)invitePeopleWithFacebook;
- (void)invitePeopleWithSMS;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithNavigationCoordinator:(id)arg1 multiPeoplePickerViewControllerProvider:(id)arg2 nonMessengerContactSuggestionsProvider:(id)arg3 session:(id)arg4 analytics:(id)arg5 userSetupStatePersister:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
