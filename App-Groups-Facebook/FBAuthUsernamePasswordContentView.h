//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIButton, UITextField;

@interface FBAuthUsernamePasswordContentView : UIView
{
    float _maximumWidth;
    UIView *_inputContainer;
    UIView *_usernameBackground;
    UIView *_passwordBackground;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _passwordExtensionsEnabled;
    UITextField *_usernameInput;
    UITextField *_passwordInput;
    UIButton *_loginButton;
    UIButton *_passwordExtensionButton;
}

@property(readonly, nonatomic) UIButton *passwordExtensionButton; // @synthesize passwordExtensionButton=_passwordExtensionButton;
@property(readonly, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) UITextField *passwordInput; // @synthesize passwordInput=_passwordInput;
@property(readonly, nonatomic) UITextField *usernameInput; // @synthesize usernameInput=_usernameInput;
- (void).cxx_destruct;
- (id)_makePasswordExtensionButtonWithConfiguration:(id)arg1;
- (id)_makeLoginButtonWithConfiguration:(id)arg1;
- (id)_makePasswordInputWithConfiguration:(id)arg1;
- (id)_makeUsernameInputWithConfiguration:(id)arg1;
- (id)_makeInputBackgroundWithConfiguration:(id)arg1;
- (id)_makeInputContainerWithConfiguration:(id)arg1;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithConfiguration:(id)arg1 showPasswordExtensionButton:(BOOL)arg2;

@end
