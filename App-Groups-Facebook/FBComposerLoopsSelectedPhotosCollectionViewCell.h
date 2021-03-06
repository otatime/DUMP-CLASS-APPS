//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImage, UIImageView;

@interface FBComposerLoopsSelectedPhotosCollectionViewCell : UICollectionViewCell
{
    UIImageView *_photoImageView;
    BOOL _isSelectedCell;
    UIImage *_image;
}

@property(nonatomic) BOOL isSelectedCell; // @synthesize isSelectedCell=_isSelectedCell;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)_shrinkingNoBouncingAnimationFromScale:(float)arg1 toScale:(float)arg2 duration:(double)arg3;
- (id)_shrinkingBouncingAnimationFromScale:(float)arg1 toScale:(float)arg2;
- (void)_endSpringAnimation;
- (void)startSpringAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

