//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionTableViewCell.h"

@class UIImageView;

@interface CBLTableViewCell : CBLTraitCollectionTableViewCell
{
    BOOL _roundImage;
    UIImageView *_detailIcon;
    unsigned int _detailIconType;
    UIImageView *_pinnerImageView;
    UIImageView *_chevronView;
    UIImageView *_pinnerMaskView;
    struct UIEdgeInsets _textLabelInsets;
}

@property(retain, nonatomic) UIImageView *pinnerMaskView; // @synthesize pinnerMaskView=_pinnerMaskView;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UIImageView *pinnerImageView; // @synthesize pinnerImageView=_pinnerImageView;
@property(nonatomic) struct UIEdgeInsets textLabelInsets; // @synthesize textLabelInsets=_textLabelInsets;
@property(nonatomic) unsigned int detailIconType; // @synthesize detailIconType=_detailIconType;
@property(retain, nonatomic) UIImageView *detailIcon; // @synthesize detailIcon=_detailIcon;
@property(nonatomic) BOOL roundImage; // @synthesize roundImage=_roundImage;
- (void).cxx_destruct;
@property(nonatomic) BOOL chevronHidden;
- (void)setGroupImageWithURLS:(id)arg1;
- (void)setRoundedImage:(id)arg1;
- (void)setRoundedImageURL:(id)arg1;
- (void)setShadowedImageSize:(struct CGSize)arg1;
- (void)setShadowedImage:(id)arg1;
- (void)setShadowedImageURL:(id)arg1;
- (void)offsetPinnerImageView:(struct UIOffset)arg1;
- (struct UIEdgeInsets)layoutMargins;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

