//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UITapGestureRecognizer;

@interface MNFormHeaderView : UIView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_hideKeyboardRecognizer;
    unsigned int _state;
    id <MNFormHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNFormHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)transitionToState:(unsigned int)arg1 animateWithDuration:(double)arg2 animationOptions:(unsigned int)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setState:(unsigned int)arg1 animateWithDuration:(double)arg2 andAnimationOptions:(unsigned int)arg3;
- (void)hideKeyboard;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
