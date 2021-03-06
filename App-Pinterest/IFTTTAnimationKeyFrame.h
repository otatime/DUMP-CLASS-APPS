//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFTTTAnimationFrame.h"

@interface IFTTTAnimationKeyFrame : IFTTTAnimationFrame
{
    int _time;
    CDUnknownBlockType _easingFunction;
}

+ (id)keyFrameWithTime:(int)arg1 andConstraint:(float)arg2;
+ (id)keyFrameWithTime:(int)arg1 andScale:(float)arg2;
+ (id)keyFrameWithTime:(int)arg1 andTransform3D:(id)arg2;
+ (id)keyFrameWithTime:(int)arg1 andAngle:(float)arg2;
+ (id)keyFrameWithTime:(int)arg1 andColor:(id)arg2;
+ (id)keyFrameWithTime:(int)arg1 andHidden:(BOOL)arg2;
+ (id)keyFrameWithTime:(int)arg1 andFrame:(struct CGRect)arg2;
+ (id)keyFrameWithTime:(int)arg1 andCornerRadius:(float)arg2;
+ (id)keyFrameWithTime:(int)arg1 andAlpha:(float)arg2;
+ (id)keyFramesWithTimesAndConstraint:(int)arg1;
+ (id)keyFramesWithTimesAndScales:(int)arg1;
+ (id)keyFramesWithTimesAndTransform3D:(int)arg1;
+ (id)keyFramesWithTimesAndAngles:(int)arg1;
+ (id)keyFramesWithTimesAndColors:(int)arg1;
+ (id)keyFramesWithTimesAndHiddens:(int)arg1;
+ (id)keyFramesWithTimesAndFrames:(int)arg1;
+ (id)keyFramesWithTimesAndCornerRadius:(int)arg1;
+ (id)keyFramesWithTimesAndAlphas:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType easingFunction; // @synthesize easingFunction=_easingFunction;
@property(nonatomic) int time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)initWithTime:(int)arg1 andConstraint:(float)arg2;
- (id)initWithTime:(int)arg1 andScale:(float)arg2;
- (id)initWithTime:(int)arg1 andTransform3D:(id)arg2;
- (id)initWithTime:(int)arg1 andAngle:(float)arg2;
- (id)initWithTime:(int)arg1 andColor:(id)arg2;
- (id)initWithTime:(int)arg1 andHidden:(BOOL)arg2;
- (id)initWithTime:(int)arg1 andFrame:(struct CGRect)arg2;
- (id)initWithTime:(int)arg1 andCornerRadius:(float)arg2;
- (id)initWithTime:(int)arg1 andAlpha:(float)arg2;
- (id)initWithTime:(int)arg1;

@end

