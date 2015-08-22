//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class FBWebPhotoView, UILabel, UIView;

@interface FBComposerAlbumPickerTableItemView : UIControl
{
    UILabel *_albumTitleLabel;
    UILabel *_photoCountLabel;
    FBWebPhotoView *_coverPhotoView;
    UIView *_separatorView;
}

+ (struct UIEdgeInsets)separatorInset;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) FBWebPhotoView *coverPhotoView; // @synthesize coverPhotoView=_coverPhotoView;
@property(readonly, nonatomic) UILabel *photoCountLabel; // @synthesize photoCountLabel=_photoCountLabel;
@property(readonly, nonatomic) UILabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithAlbum:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)_updateSelectionAndHighlight:(BOOL)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 separatorColor:(id)arg2 session:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
