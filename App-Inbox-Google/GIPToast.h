//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface GIPToast : UIView
{
    UILabel *message_;
    UIActivityIndicatorView *spinner_;
}

+ (void)setToastHideTimer:(id)arg1;
+ (void)showTodo;
+ (void)hide;
+ (void)showToastWithSpinner:(id)arg1;
+ (void)showCenteredToast:(id)arg1 forDuration:(double)arg2;
+ (void)showToast:(id)arg1 forDuration:(double)arg2;
+ (id)toast;
- (void)hide;
- (void)showMessage:(id)arg1 forDuration:(double)arg2 showIndicator:(BOOL)arg3 isCentered:(BOOL)arg4;
- (void)createView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
