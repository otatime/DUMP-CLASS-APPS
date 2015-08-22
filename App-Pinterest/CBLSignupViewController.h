//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLPresentedViewControllerDelegate.h"
#import "CBLSignupViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class CBLOAuthUser, CBLSignupManager, CBLSignupView, NSDictionary<FBGraphUser>, NSString;

@interface CBLSignupViewController : CBLBaseViewController <CBLSignupViewDelegate, UIAlertViewDelegate, CBLPresentedViewControllerDelegate>
{
    id <CBLAccountSetupDelegate> _delegate;
    id <CBLPresentedViewControllerDelegate> _presentationDelegate;
    NSString *_facebookToken;
    NSDictionary<FBGraphUser> *_facebookUser;
    CBLOAuthUser *_oAuthUser;
    NSString *_invitedUserEmail;
    CBLSignupView *_signupView;
    CBLSignupManager *_signupManager;
}

@property(retain, nonatomic) CBLSignupManager *signupManager; // @synthesize signupManager=_signupManager;
@property(retain, nonatomic) CBLSignupView *signupView; // @synthesize signupView=_signupView;
@property(retain, nonatomic) NSString *invitedUserEmail; // @synthesize invitedUserEmail=_invitedUserEmail;
@property(retain, nonatomic) CBLOAuthUser *oAuthUser; // @synthesize oAuthUser=_oAuthUser;
@property(retain, nonatomic) NSDictionary<FBGraphUser> *facebookUser; // @synthesize facebookUser=_facebookUser;
@property(copy, nonatomic) NSString *facebookToken; // @synthesize facebookToken=_facebookToken;
@property(nonatomic) __weak id <CBLPresentedViewControllerDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) __weak id <CBLAccountSetupDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)barTintColor;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (int)parseOAuthGender:(int)arg1;
- (void)fillFormWithFacebookUser;
- (id)setNameBasedOnLocaleWithLastName:(id)arg1 firstName:(id)arg2;
- (void)dismissKeyboard;
- (void)cancelButtonPressed:(id)arg1;
- (void)createUser;
- (void)setupNewTestingAccount;
- (void)createButtonPressed:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)signupViewFacebookButtonPressed:(id)arg1;
- (void)signupView:(id)arg1 didValidate:(BOOL)arg2;
- (void)signupView:(id)arg1 shouldValidateEmail:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)signupView:(id)arg1 shouldRevokeFacebookTimelineWithBlock:(CDUnknownBlockType)arg2;
- (void)signupView:(id)arg1 shouldAuthorizeFacebookTimelineWithBlock:(CDUnknownBlockType)arg2;
- (void)signupViewCreateAccountPressed:(id)arg1;
- (void)signupViewContinueAsBusinessPressed:(id)arg1;
- (void)signupViewShouldPresentTermsOfService:(id)arg1;
- (void)shouldPresentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentedViewControllerShouldBeDismissed:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithFacebookUser:(id)arg1 andToken:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

