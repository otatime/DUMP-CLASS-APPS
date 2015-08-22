//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAlertBar.h"

@class UITapGestureRecognizer;

@interface IGAlertActionBar : IGAlertBar
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    CDUnknownBlockType _tapActionBlock;
    CDUnknownBlockType _completeBlock;
}

+ (id)sharedAlertBar;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void).cxx_destruct;
- (void)hideAfterDelay;
- (void)cancelHidePerformSelector;
- (void)resetCallbackBlocks;
- (void)didHideAlertView;
- (void)didShowAlertView;
- (void)handleTap:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dismissAndNotify:(BOOL)arg1;
- (void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 delay:(double)arg4 updateExistingAlertBar:(BOOL)arg5 actionBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7;
- (id)init;

@end
