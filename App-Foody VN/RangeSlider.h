//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UIView;

@interface RangeSlider : UIControl
{
    float min;
    float max;
    float minimumRangeLength;
    UIImageView *minSlider;
    UIImageView *maxSlider;
    UIImageView *backgroundImageView;
    UIImageView *trackImageView;
    UIImageView *inRangeTrackImageView;
    UIView *trackingSlider;
    float stepValue;
    float stepDelta;
}

@property(nonatomic) float stepDelta; // @synthesize stepDelta;
@property(nonatomic) float minimumRangeLength; // @synthesize minimumRangeLength;
@property(nonatomic) float max; // @synthesize max;
@property(nonatomic) float min; // @synthesize min;
@property(nonatomic) float stepValue; // @synthesize stepValue;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateThumbViews;
- (void)calculateMinMax;
- (void)updateTrackImageViews;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setTrackImage:(id)arg1;
- (void)setInRangeTrackImage:(id)arg1;
- (void)setMaxThumbImage:(id)arg1;
- (void)setMinThumbImage:(id)arg1;
- (void)setupSliders;
- (id)initWithFrame:(struct CGRect)arg1;

@end
