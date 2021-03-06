//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PSPDFMediaPlayerSlider, UILabel;

@interface PSPDFMediaPlayerScrubberView : UIView
{
    UILabel *_currentTimeLabel;
    UILabel *_remainingTimeLabel;
    PSPDFMediaPlayerSlider *_slider;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _duration;
}

@property(readonly, nonatomic) PSPDFMediaPlayerSlider *slider; // @synthesize slider=_slider;
@property(readonly, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(readonly, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (void)updateViewState;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

