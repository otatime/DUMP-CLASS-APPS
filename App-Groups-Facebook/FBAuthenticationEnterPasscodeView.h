//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBAuthenticatingEnterPasscodeView.h"
#import "FBKeyboardObserverDelegate.h"

@class FBKeyboardObserver, FBNetworkErrorBar, NSArray, NSString, NSTimer, UIActivityIndicatorView, UIButton, UILabel, UITextField;

@interface FBAuthenticationEnterPasscodeView : UIView <FBKeyboardObserverDelegate, FBAuthenticatingEnterPasscodeView>
{
    struct FBAuthenticationEnterPasscodeMetrics _metrics;
    UILabel *_instructionTextView;
    UIButton *_secondaryActionButton;
    UITextField *_hiddenInputField;
    NSArray *_displayTextFields;
    UIView *_secondaryActionSeparatorView;
    BOOL _showNumbers;
    NSString *_secondaryActionText;
    UIActivityIndicatorView *_activityIndicator;
    int _attempt;
    FBNetworkErrorBar *_numericOnlyErrorBar;
    BOOL _displayingNumericWarning;
    NSTimer *_numericWarningDisplayTimer;
    FBKeyboardObserver *_keyboardObserver;
    float _keyboardHeight;
    id <FBAuthenticatingEnterPasscodeViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAuthenticatingEnterPasscodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)_handleKeyboardVisibilityChangeWithKeyboardHeight:(float)arg1 duration:(double)arg2 curve:(int)arg3;
- (void)_hideNumericOnlyWarning;
- (void)_showNumericOnlyWarning;
- (void)_filterNumericOnly:(id)arg1;
- (void)_refreshPinInputDisplay;
- (void)_performBlockOnNextRunLoop:(CDUnknownBlockType)arg1;
- (void)secondaryButtonTapped;
- (void)textEntered:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)clearUserInput;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setInstructionText:(id)arg1;
- (id)_createTextField;
- (id)_makeDisplayTextFields;
- (id)_makeHiddenInputField;
- (id)_makeSecondaryActionSeparatorView;
- (id)_makeSecondaryActionButton;
- (id)_makeInstructionTextView;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSecondaryActionText:(id)arg1 showNumbers:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
