//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>;

@protocol FBDisplayableMediaAnimator <NSObject>
- (void)cleanupAnimationGroup:(NSObject<OS_dispatch_group> *)arg1 withBlock:(void (^)(void))arg2;
- (void)animateWithDuration:(double)arg1 animationBlock:(void (^)(void))arg2 completionBlock:(void (^)(void))arg3;
- (void)animateMediaViewOrLayer:(id)arg1 toFrame:(struct CGRect)arg2 withStartingVelocity:(struct CGPoint)arg3 completionBlock:(void (^)(void))arg4;
@end

