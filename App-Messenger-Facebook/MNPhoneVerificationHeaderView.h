//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNFormHeaderView.h"

@class UIImageView, UILabel, UIView;

@interface MNPhoneVerificationHeaderView : MNFormHeaderView
{
    BOOL _needsToUpdateLabelFontSizes;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_detailsLabel;
    UIView *_innerView;
}

@property(retain, nonatomic) UIView *innerView; // @synthesize innerView=_innerView;
@property(nonatomic) BOOL needsToUpdateLabelFontSizes; // @synthesize needsToUpdateLabelFontSizes=_needsToUpdateLabelFontSizes;
@property(retain, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)_calculateFontForLabel:(id)arg1 withDefaultFont:(id)arg2 thatFitsSize:(struct CGSize)arg3 minFontSize:(float)arg4;
- (id)_fontForDetailsLabelToFitInWidth:(float)arg1;
- (id)_fontForTitleLabelToFitInWidth:(float)arg1;
- (struct CGSize)_getInnerViewSizeForState:(unsigned int)arg1 titleLabelSize:(struct CGSize)arg2 detailsLabelSize:(struct CGSize)arg3 andContainingSize:(struct CGSize)arg4;
- (void)_layoutTitleAndDetailsLabel:(struct CGSize)arg1 atY:(float)arg2 padding:(float)arg3;
- (void)_layoutForState:(unsigned int)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setState:(unsigned int)arg1 animateWithDuration:(double)arg2 andAnimationOptions:(unsigned int)arg3;
- (void)setImage:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setDetailsText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

