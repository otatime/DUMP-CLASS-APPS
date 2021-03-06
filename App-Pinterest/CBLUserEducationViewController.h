//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLUserEducationTooltipViewDelegate.h"

@class NSString, UIView;

@interface CBLUserEducationViewController : CBLBaseViewController <CBLUserEducationTooltipViewDelegate>
{
    BOOL _blockHighlights;
    BOOL _allowsDismissalOnTouch;
    BOOL _isShowing;
    UIView *_currentDisplayedView;
}

@property(nonatomic) BOOL isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UIView *currentDisplayedView; // @synthesize currentDisplayedView=_currentDisplayedView;
@property(nonatomic) BOOL allowsDismissalOnTouch; // @synthesize allowsDismissalOnTouch=_allowsDismissalOnTouch;
@property(nonatomic) BOOL blockHighlights; // @synthesize blockHighlights=_blockHighlights;
- (void).cxx_destruct;
- (void)userEducationDidTapOnBackgroundView:(id)arg1;
- (void)userEducationCalloutViewDidTapActionButton:(id)arg1;
- (id)tooltipViewWithSpotlightRect:(struct CGRect)arg1 fromView:(id)arg2 cornerRadius:(float)arg3 touchesPassThrough:(BOOL)arg4 arrowDirection:(unsigned int)arg5;
- (id)intendedSuperview;
- (void)dismiss:(BOOL)arg1;
- (void)dismissDidComplete;
- (BOOL)shouldAutorotate;
- (void)willTransitionToSetupController:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

