//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutConstraint, NSMutableArray, UIView;

@interface IFTTTAnimation : NSObject
{
    UIView *_view;
    NSLayoutConstraint *_constraint;
    NSMutableArray *_keyFrames;
    NSMutableArray *_timeline;
    int _startTime;
}

+ (id)animationWithView:(id)arg1;
@property(nonatomic) int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) NSMutableArray *keyFrames; // @synthesize keyFrames=_keyFrames;
@property(retain, nonatomic) NSLayoutConstraint *constraint; // @synthesize constraint=_constraint;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (float)tweenValueForStartTime:(int)arg1 endTime:(int)arg2 startValue:(float)arg3 endValue:(float)arg4 atTime:(float)arg5;
- (id)frameForTime:(int)arg1 startKeyFrame:(id)arg2 endKeyFrame:(id)arg3;
- (void)animate:(int)arg1;
- (id)animationFrameForTime:(int)arg1;
- (void)addKeyFrame:(id)arg1;
- (void)addKeyFrames:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end

