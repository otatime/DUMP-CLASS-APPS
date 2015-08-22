//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface MNTypingIndicatorView : UIView
{
    NSMutableArray *_dotLayers;
    NSMutableArray *_animations;
}

+ (struct CGSize)preferredSize;
- (void).cxx_destruct;
- (BOOL)_isAnimating;
- (void)_stopAnimation;
- (void)_startAnimation;
- (void)_updateAnimationState;
- (void)_appWillEnterForeground;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)dealloc;
- (void)_initAnimations;
- (void)_initLayers;
- (id)initWithFrame:(struct CGRect)arg1;

@end

