//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"
#import "MNAddContactOperationDelegate.h"
#import "MNContactAddedDialogDelegate.h"
#import "MNContactNotFoundDialogDelegate.h"
#import "MNPhoneNumberDialogDelegate.h"
#import "MNPresentableDialog.h"

@class FBAnalytics, FBCurrentCountryManager, FBMParticipantNameFormatter, FBSyncStoreWriter, FBUserSession, MNAddContactOperation, MNAddContactView, MNNavigationCoordinator, MNSMSInvitePresenter, MNSyncStoreCache, NSString;

@interface MNAddContactViewController : UIViewController <MNPhoneNumberDialogDelegate, MNContactNotFoundDialogDelegate, MNContactAddedDialogDelegate, MNAddContactOperationDelegate, FBClassProvidable, MNPresentableDialog>
{
    BOOL _statusBarHiddenBeforeAddContactFlow;
    MNAddContactOperation *_addContactOperation;
    MNAddContactView *_addContactView;
    FBUserSession *_session;
    MNNavigationCoordinator *_navigationCoordinator;
    FBSyncStoreWriter *_syncStoreWriter;
    FBMParticipantNameFormatter *_nameFormatter;
    MNSyncStoreCache *_syncStoreCache;
    FBAnalytics *_analytics;
    MNSMSInvitePresenter *_smsInvitePresenter;
    FBCurrentCountryManager *_currentCountryManager;
    struct CGPoint _originalPopoverLocation;
}

@property(nonatomic) struct CGPoint originalPopoverLocation; // @synthesize originalPopoverLocation=_originalPopoverLocation;
@property(nonatomic) BOOL statusBarHiddenBeforeAddContactFlow; // @synthesize statusBarHiddenBeforeAddContactFlow=_statusBarHiddenBeforeAddContactFlow;
@property(retain, nonatomic) FBCurrentCountryManager *currentCountryManager; // @synthesize currentCountryManager=_currentCountryManager;
@property(retain, nonatomic) MNSMSInvitePresenter *smsInvitePresenter; // @synthesize smsInvitePresenter=_smsInvitePresenter;
@property(retain, nonatomic) FBAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) MNSyncStoreCache *syncStoreCache; // @synthesize syncStoreCache=_syncStoreCache;
@property(retain, nonatomic) FBMParticipantNameFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(retain, nonatomic) FBSyncStoreWriter *syncStoreWriter; // @synthesize syncStoreWriter=_syncStoreWriter;
@property(retain, nonatomic) MNNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MNAddContactView *addContactView; // @synthesize addContactView=_addContactView;
@property(retain, nonatomic) MNAddContactOperation *addContactOperation; // @synthesize addContactOperation=_addContactOperation;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_orientationChanged:(id)arg1;
- (void)_dismiss;
- (void)_showErrorAlert:(id)arg1;
- (void)addContactOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)addContactOperation:(id)arg1 didAddContact:(id)arg2 withMatchedProfile:(id)arg3;
- (void)addContactOperation:(id)arg1 didAddContact:(id)arg2;
- (void)userDidPressClose;
- (void)userDidPressUndo;
- (void)userDidPressSendMessage;
- (void)userDidPressInvite:(id)arg1;
- (void)userDidDismissPhoneNumberEntry;
- (void)userDidEnterPhoneNumber:(id)arg1;
- (BOOL)willOpenKeyboardOnAppear;
- (float)backgroundAlpha;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 syncStoreWriter:(id)arg3 nameFormatter:(id)arg4 syncStoreCache:(id)arg5 analytics:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

