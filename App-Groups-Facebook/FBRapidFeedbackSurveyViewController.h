//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBKeyboardObserverDelegate.h"
#import "FBOrientationStateDelegate.h"

@class FBKVOController, FBKeyboardObserver, FBOrientationState, FBRapidFeedbackPopoverView, FBRapidFeedbackStyleSheet, NSLayoutConstraint, NSString, UIButton, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface FBRapidFeedbackSurveyViewController : UIViewController <FBKeyboardObserverDelegate, FBOrientationStateDelegate>
{
    UIViewController *_contentViewController;
    FBRapidFeedbackPopoverView *_popoverView;
    UIView *_fadingFullScreenBackgroundView;
    unsigned int _popoverState;
    NSLayoutConstraint *_popoverTopConstraint;
    NSLayoutConstraint *_popoverBottomConstraint;
    NSLayoutConstraint *_popoverCenterYConstraint;
    NSLayoutConstraint *_popoverHeightConstraint;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_topBar;
    UIButton *_closeButton;
    UIView *_bottomBar;
    UIButton *_submitButton;
    FBKeyboardObserver *_keyboardObserver;
    FBKVOController *_contentViewScrollObserver;
    FBOrientationState *_orientationState;
    UIPanGestureRecognizer *_panRecognizer;
    struct CGPoint _initialViewPosition;
    FBKVOController *_contentSizeObserver;
    BOOL _showXOutButton;
    id <FBRapidFeedbackSurveyViewDelegate> _delegate;
    CDUnknownBlockType _submitButtonHandler;
    float _bottomPaddingOffset;
    FBRapidFeedbackStyleSheet *_styleSheet;
    NSLayoutConstraint *_popoverWidthConstraint;
    NSLayoutConstraint *_popoverCenterXConstraint;
    UIView *_topBarFadingBackground;
    NSString *_submitButtonTitle;
    int _underlyingStatusBarStyle;
}

@property(nonatomic) int underlyingStatusBarStyle; // @synthesize underlyingStatusBarStyle=_underlyingStatusBarStyle;
@property(copy, nonatomic) NSString *submitButtonTitle; // @synthesize submitButtonTitle=_submitButtonTitle;
@property(retain, nonatomic) UIView *topBarFadingBackground; // @synthesize topBarFadingBackground=_topBarFadingBackground;
@property(retain, nonatomic) NSLayoutConstraint *popoverCenterXConstraint; // @synthesize popoverCenterXConstraint=_popoverCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *popoverWidthConstraint; // @synthesize popoverWidthConstraint=_popoverWidthConstraint;
@property(retain, nonatomic) FBRapidFeedbackStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(nonatomic) BOOL showXOutButton; // @synthesize showXOutButton=_showXOutButton;
@property(nonatomic) float bottomPaddingOffset; // @synthesize bottomPaddingOffset=_bottomPaddingOffset;
@property(copy, nonatomic) CDUnknownBlockType submitButtonHandler; // @synthesize submitButtonHandler=_submitButtonHandler;
@property(nonatomic) __weak id <FBRapidFeedbackSurveyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_initConstraints;
- (void)_updateConstraintsForVerticallyCenteredState;
- (void)_updateConstraintsForFullScreenState;
- (void)_updateConstraintsForToastState;
- (void)_updateKeyboardStateWithBeginFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(int)arg4;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)_panGestureHandle:(id)arg1;
- (float)_timeForPopoverToLeaveScreenBoredersWithVelocity:(struct CGPoint)arg1;
- (float)_popoverWidth;
- (float)_popoverBottomOuterPadding;
- (void)_addBottomBar;
- (void)_addTopBar;
- (void)_applyShadowToBarView:(id)arg1;
- (void)_handleSubmitButton:(id)arg1;
- (void)_handleCloseButton:(id)arg1;
- (void)_setSurveyContentView:(id)arg1 state:(unsigned int)arg2;
- (void)_updateViewsConstraints;
- (BOOL)fb_disableFakePush;
- (void)orientationState:(id)arg1 didChangeToInterfaceOrientation:(int)arg2;
- (id)analyticsModule;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)setContentViewController:(id)arg1 state:(unsigned int)arg2 submitButtonTitle:(id)arg3;
- (int)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1 styleSheet:(id)arg2 state:(unsigned int)arg3 submitButtonTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
