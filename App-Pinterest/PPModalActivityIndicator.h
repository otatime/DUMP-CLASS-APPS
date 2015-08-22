//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel, UIViewController;

@interface PPModalActivityIndicator : UIView
{
    BOOL _isShowing;
    UIView *_iconView;
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    UIViewController *_parentViewController;
}

+ (id)lowestViewController:(id)arg1;
@property(nonatomic) BOOL isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)dismissNow;
- (void)dismissAfter:(double)arg1;
- (void)showInViewController:(id)arg1;
- (void)show;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)initWithText:(id)arg1 forViewController:(id)arg2 clipToView:(BOOL)arg3;

@end
