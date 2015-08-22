//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLPinCloseupTitleView.h"

@class UIImageView, UILabel;

@interface CBLPinCloseupTitleWithSubtitleAndImageView : CBLPinCloseupTitleView
{
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
}

+ (BOOL)shouldDisplayForPin:(id)arg1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (void).cxx_destruct;
- (void)updateWithPin:(id)arg1;
- (void)setLabelPreferredWidthsForViewWidth:(float)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
