//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SSOAuthenticatorInterfaceControllerDelegate.h"
#import "SSOAuthenticatorListener.h"

@class InviteRedeemViewController, NSString, PanelViewController, SignInEntryScreenController;

@interface BigtopRootContainerViewController : UIViewController <SSOAuthenticatorInterfaceControllerDelegate, SSOAuthenticatorListener>
{
    BOOL currentAccountDidChange_;
    BOOL isDismissingSignInView_;
    BOOL isShowingOutOfBox_;
    BOOL outOfBoxSetting_;
    BOOL shouldDismissSignInView_;
    BOOL isShowingEmptyView_;
    BOOL viewHierarchyCreated;
    InviteRedeemViewController *inviteController;
    PanelViewController *panelVC_;
    SignInEntryScreenController *signInPresentingViewController;
}

+ (id)sharedRootContainerVC;
+ (void)setSharedRootContainerVC:(id)arg1;
@property(nonatomic) BOOL viewHierarchyCreated; // @synthesize viewHierarchyCreated;
@property(retain, nonatomic) SignInEntryScreenController *signInPresentingViewController; // @synthesize signInPresentingViewController;
@property(retain, nonatomic) PanelViewController *panelVC; // @synthesize panelVC=panelVC_;
@property(nonatomic) BOOL isShowingEmptyView; // @synthesize isShowingEmptyView=isShowingEmptyView_;
@property(retain, nonatomic) InviteRedeemViewController *inviteController; // @synthesize inviteController;
- (void).cxx_destruct;
- (void)unlockMailVCs;
- (void)signInViewControllerWillDismiss;
- (void)signInViewControllerDidDismiss;
- (void)showPanelVC:(id)arg1;
- (void)preserveToastsOnUpdateRootViewController;
- (id)lastVisibleChild;
- (id)lastChild;
- (void)hidePanelVC;
- (void)addSignInEntryViewToViewHierarchyHidden:(BOOL)arg1;
- (void)authenticatorHasNoAccountsSignedIn:(id)arg1;
- (void)authenticatorDidSwitchCurrentAccount:(id)arg1;
- (id)signInPresentingViewControllerForAuthenticator:(id)arg1;
- (void)authenticatorDidDismissSignIn:(id)arg1 animated:(BOOL)arg2;
- (void)authenticatorDidCancelSignIn:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldDisableRateMyAppForModals;
- (void)updateUIAfterSignInWithAuth:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showOutOfBoxExperienceIfNeeded;
- (BOOL)shouldShowOutOfBoxExperience;
- (void)openOutOfBoxExperience;
- (void)showInviteControllerForError:(id)arg1;
- (void)showInviteController;
- (void)shouldShowInviteController:(id)arg1;
- (void)didBecomeActiveWithNoNotification;
- (void)didOpenNotificationWithSuccess:(BOOL)arg1;
- (void)updateWithPanelVC:(BOOL)arg1 openingNotification:(BOOL)arg2;
- (void)updateWithPanelVC:(BOOL)arg1;
- (void)restoreViewHierarchy;
- (void)handleMemoryWarning;
- (void)closeSignInViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeActiveViewControllersWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeActiveViewControllersAndShowInboxWithCompletion:(CDUnknownBlockType)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
