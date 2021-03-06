//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "OAuthDelegate.h"
#import "OAuthViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UITextField, UIView;

@interface UserLoginViewController : BaseViewController <OAuthDelegate, UIAlertViewDelegate, OAuthViewControllerDelegate>
{
    int firstResponsderTag;
    UILabel *headerLabel;
    UIActivityIndicatorView *spinnerView;
    UIView *lightBlackBgView;
    UIView *containerView;
    UITextField *emailTextField;
    UITextField *passwordTextField;
    UIButton *registerButton;
    UIButton *loginButton;
    UIButton *closeButton;
}

@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak UIButton *loginButton; // @synthesize loginButton;
@property(nonatomic) __weak UIButton *registerButton; // @synthesize registerButton;
@property(nonatomic) __weak UITextField *passwordTextField; // @synthesize passwordTextField;
@property(nonatomic) __weak UITextField *emailTextField; // @synthesize emailTextField;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView;
@property(nonatomic) __weak UIView *lightBlackBgView; // @synthesize lightBlackBgView;
@property(nonatomic) __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel;
- (void).cxx_destruct;
- (void)controller:(id)arg1 didFinishOAuthForUser:(id)arg2;
- (void)OAuthProcessDidFinishForUser:(id)arg1;
- (void)didTouchLoginFacebookButton:(id)arg1;
- (void)resignAllFirstResponders;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didTouchRegisterButton:(id)arg1;
- (void)didTouchCancelLoginButton:(id)arg1;
- (void)stopSpinner;
- (void)startSpinner;
- (void)doLoginWithEmailAndPassword:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

