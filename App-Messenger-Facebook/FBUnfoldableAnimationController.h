//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "POPAnimationDelegate.h"

@class NSMutableSet, NSSet, NSString;

@interface FBUnfoldableAnimationController : NSObject <POPAnimationDelegate>
{
    id <POPAnimationDelegate> _animationDelegate;
    NSMutableSet *_animations;
    BOOL _rampingDynamics;
    BOOL _dynamicsAreRamped;
    double _beginRampingTime;
}

@property(readonly, nonatomic) NSSet *animations; // @synthesize animations=_animations;
@property(nonatomic) __weak id <POPAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (id)_animatablePropertyForPropertyName:(id)arg1;
- (void)_updateAnimationDynamics:(id)arg1;
- (void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)pop_animationDidReachToValue:(id)arg1;
- (void)pop_animationDidApply:(id)arg1;
- (void)pop_animationDidStart:(id)arg1;
- (void)stopAnimations;
- (void)animatePropertyWithName:(id)arg1 toValue:(id)arg2 onLayers:(id)arg3;
- (void)animatePropertyWithName:(id)arg1 toValue:(id)arg2 onLayer:(id)arg3;
- (void)resetDynamics;
- (void)beginRampingDynamics;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
