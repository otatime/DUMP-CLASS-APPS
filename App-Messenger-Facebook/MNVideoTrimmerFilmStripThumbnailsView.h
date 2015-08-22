//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVAsset, AVAssetImageGenerator;

@interface MNVideoTrimmerFilmStripThumbnailsView : UIView
{
    BOOL _generatingThumbnails;
    UIView *_thumbnailContainerView;
    AVAssetImageGenerator *_imageGenerator;
    UIView *_leftGraySection;
    UIView *_rightGraySection;
    float _leftGraySectionPercentage;
    float _rightGraySectionPercentage;
    BOOL _needsThumbnailGeneration;
    AVAsset *_asset;
}

@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)updateGrayedOutSection:(int)arg1 toPosition:(float)arg2;
- (void)layoutSubviews;
- (void)_setUpThumbnailContainerView;
- (void)_generateVisibleThumbnails;
- (id)_generateThumbnailTimes;
- (float)_videoLength;
- (unsigned int)_calculateThumbnailWidthForNumberOfThumbnails:(unsigned int)arg1 fromFrame:(struct CGRect)arg2;
- (unsigned int)_calculateNumberOfThumbnailsFromFrame:(struct CGRect)arg1;
- (id)imageGenerator;
- (id)thumbnailContainerView;
- (void)setFrame:(struct CGRect)arg1;
- (void)_willRotateViewWithNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
