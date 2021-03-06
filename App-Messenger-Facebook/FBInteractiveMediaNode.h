//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBScrollableMediaNode.h"

@class CADisplayLink, FBMediaKeyFrame;

@interface FBInteractiveMediaNode : FBScrollableMediaNode
{
    FBMediaKeyFrame *_previousKeyFrame;
    FBMediaKeyFrame *_currentKeyFrame;
    float _transitionProgress;
    int _updateBehavior;
    int _scrollBehavior;
    CADisplayLink *_displayLink;
    struct CGSize _baselineBoundsSize;
    float _baselineZoom;
}

@property(nonatomic) int scrollBehavior; // @synthesize scrollBehavior=_scrollBehavior;
@property(nonatomic) int updateBehavior; // @synthesize updateBehavior=_updateBehavior;
@property(retain, nonatomic) FBMediaKeyFrame *keyFrame; // @synthesize keyFrame=_currentKeyFrame;
- (void).cxx_destruct;
- (void)didLoad;
- (void)didUpdateMediaSize:(struct CGSize)arg1 fromSize:(struct CGSize)arg2;
- (void)willBeginInteractiveZooming:(id)arg1;
- (void)willBeginDraggingScrollView:(id)arg1;
- (BOOL)_requiresDisplayLink;
- (void)_applyKeyFrameUpdateBehavior;
- (void)_setTransitionProgress:(float)arg1;
- (void)_relaxInteractionBounds;
- (void)_restoreInteractionBounds;
- (void)_killDisplayLink;
- (void)_activateDisplayLink;
- (void)_updateScrollViewForAnimation;
- (id)_newTransitionSpringAnimationFromConfig:(id)arg1 issueUpdates:(BOOL)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)didExitHierarchy;
- (void)stopAnimating;
- (void)setKeyFrame:(id)arg1 withAnimation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(nonatomic) __weak id <FBInteractiveMediaNodeDelegate> delegate; // @dynamic delegate;

@end

