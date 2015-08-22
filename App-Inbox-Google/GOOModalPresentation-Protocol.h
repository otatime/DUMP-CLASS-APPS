//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol GOOModalPresentation <NSObject>
- (double)hideAnimationDuration;
- (double)showAnimationDuration;
- (BOOL)shouldDimBackground;
- (void)revealDialog;
- (void)dismissDialog:(BOOL)arg1;
- (void)reposition;
- (void)dismissWithCancelAction:(BOOL)arg1;
- (void)dismiss;
- (void)show;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@optional
@property(nonatomic) __weak UIView *viewToReceiveVoiceOverFocusAfterDismissal;
@end
