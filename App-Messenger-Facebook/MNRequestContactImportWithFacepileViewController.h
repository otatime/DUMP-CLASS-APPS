//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"
#import "MNContactImportInitiationListener.h"
#import "MNPermissionRequestViewDelegate.h"
#import "MNUserSetUpStepViewController.h"

@class FBAnalytics, FBUserSession, MNAddressBookContactImportInitiator, MNPermissionRequestView, MNPermissionRequestViewModel, NSString;

@interface MNRequestContactImportWithFacepileViewController : UIViewController <MNPermissionRequestViewDelegate, MNContactImportInitiationListener, FBClassProvidable, MNUserSetUpStepViewController>
{
    MNAddressBookContactImportInitiator *_contactImportInitiator;
    FBAnalytics *_analytics;
    FBUserSession *_session;
    MNPermissionRequestView *_permissionRequestView;
    BOOL _skipButtonEnabled;
    id <FBServiceTransactionMutating> _graphQLRequestToken;
    MNPermissionRequestViewModel *_permissionRequestViewModel;
    id <MNUserSetUpStepCompletion> _completionDelegate;
}

@property(nonatomic) __weak id <MNUserSetUpStepCompletion> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
- (void).cxx_destruct;
- (id)_skipButton;
- (void)_showSkipButton;
- (void)_hideBackButton;
- (void)_configureNavigationBarExtendedLayout;
- (void)_skipButtonPressed;
- (void)_initiateContactImporting;
- (void)_completeStep;
- (void)_handleFetchError:(id)arg1;
- (void)_handleFetchResponse:(id)arg1;
- (void)_requestFacepile;
- (id)analyticsModule;
- (void)userInitiatedContactImportFailedToInitiate;
- (void)userInitiatedContactImportDisallowed;
- (void)userInitiatedContactImportAllowed;
- (void)permissionRequestViewDidTapFooterText:(id)arg1;
- (void)permissionRequestViewDidPressContinueButton:(id)arg1;
- (unsigned int)preferredTransitionType;
- (void)setSkipButtonEnabled:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithContactImporter:(id)arg1 syncLock:(id)arg2 userSettings:(id)arg3 session:(id)arg4 analytics:(id)arg5 permissionRequestViewModel:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

