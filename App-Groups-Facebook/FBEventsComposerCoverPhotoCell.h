//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FBGradientView, UIButton, UIImageView, UITextField;

@interface FBEventsComposerCoverPhotoCell : UICollectionViewCell
{
    struct UIEdgeInsets _contentPadding;
    FBGradientView *_gradientView;
    UITextField *_textField;
    UIButton *_cameraButton;
    UIImageView *_headerPreviewImageView;
    unsigned int _style;
}

@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(readonly, nonatomic) UIImageView *headerPreviewImageView; // @synthesize headerPreviewImageView=_headerPreviewImageView;
@property(readonly, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)setStyle:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
