//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ASDisplayNode;

@interface _ASDisplayView : UIView
{
    ASDisplayNode *_node;
    BOOL _inHitTest;
    BOOL _inPointInside;
    ASDisplayNode *_keepalive_node;
}

+ (Class)layerClass;
@property(retain, nonatomic) ASDisplayNode *keepalive_node; // @synthesize keepalive_node=_keepalive_node;
@property(nonatomic) ASDisplayNode *asyncdisplaykit_node; // @synthesize asyncdisplaykit_node=_node;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)tintColorDidChange;
- (void)asyncdisplaykit_asyncTransactionContainerStateDidChange;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)__forwardTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)__forwardTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)__forwardTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)__forwardTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setContentMode:(int)arg1;
- (int)contentMode;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (id)init;

@end

