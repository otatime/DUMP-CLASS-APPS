//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class FBAuthenticationRoundedImageView, NSString, UIActivityIndicatorView, UIButton, UILabel, UITextField;

@interface FBAuthenticationEnterPasswordView : UIView <UITextFieldDelegate>
{
    struct FBAuthenticationEnterPasswordMetrics _metrics;
    UIView *_containerView;
    UILabel *_instructionTextView;
    FBAuthenticationRoundedImageView *_roundedImage;
    UITextField *_passwordTextField;
    UIButton *_passwordEnteredButton;
    UIButton *_goBackButton;
    UIButton *_passwordResetButton;
    UIActivityIndicatorView *_activityIndicator;
    int _attempt;
    BOOL _hideProfilePicture;
    id <FBAuthenticationEnterPasswordViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAuthenticationEnterPasswordViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)hideAllOtherElementsThanImage:(BOOL)arg1;
- (void)animateScreenTransition;
- (void)preAnimateSetupWithImageLocation:(struct CGPoint)arg1;
- (void)resetStateExceptText;
- (void)resetState;
- (void)setPasswordConfirmErrorMessage;
- (void)setErrorAndClearUserInput;
- (struct CGSize)imageSize;
- (void)setImageURL:(id)arg1;
- (void)resignPasswordFieldAsFirstResponder;
- (void)makePasswordFieldAsFirstResponder;
- (void)_setDefaultInstructionText;
- (id)_makePasswordResetButton;
- (id)_makeGoBackButton;
- (id)_makePasswordEnteredButton;
- (id)_makePasswordTextField;
- (id)_makeInstructionTextView;
- (void)dealloc;
- (void)_submitPasswordEntry;
- (void)_passwordResetButtonTapped:(id)arg1;
- (void)_goBackButtonTapped:(id)arg1;
- (void)_passwordEnteredButtonTapped:(id)arg1;
- (float)_layoutCommonUIs:(float)arg1 width:(float)arg2;
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2 gatekeeper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
