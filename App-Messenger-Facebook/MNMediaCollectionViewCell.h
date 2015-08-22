//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FBLazyCreator, FBMPhotoView, FBMStickerResourceManager, FBMStickerView, MNMediaCollectionCellViewModel, MNMediaCollectionIconView, UIAccessibilityElement, UIButton, UIImageView, UIView;

@interface MNMediaCollectionViewCell : UICollectionViewCell
{
    UIImageView *_strokeView;
    float _scrollOffset;
    float _checkmarkOffset;
    UIView *_blurView;
    UIButton *_sendButton;
    UIView *_photoContainerView;
    UIImageView *_blueCheckImageView;
    UIImageView *_checkImageView;
    UIAccessibilityElement *_mediaElement;
    UIAccessibilityElement *_sendButtonElement;
    UIAccessibilityElement *_appIconElement;
    FBLazyCreator *_accessibleElementsCreator;
    FBMPhotoView *_photoView;
    FBMStickerView *_stickerView;
    MNMediaCollectionIconView *_iconView;
    MNMediaCollectionCellViewModel *_viewModel;
    FBMStickerResourceManager *_stickerResourceManager;
    id <MNMediaCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <MNMediaCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBMStickerResourceManager *stickerResourceManager; // @synthesize stickerResourceManager=_stickerResourceManager;
@property(retain, nonatomic) MNMediaCollectionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) MNMediaCollectionIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) FBMStickerView *stickerView; // @synthesize stickerView=_stickerView;
@property(readonly, nonatomic) FBMPhotoView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (id)_createAccessibleElementsCreator;
- (void)_updateAccessibleElements;
- (id)_createAccessibleElements;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)_updateSubviewsAnimated:(BOOL)arg1;
- (void)_onSelectTapSend:(id)arg1;
- (void)_initSendButtonIfNeeded;
- (void)_initBlurViewIfNeeded;
- (void)_updateCheckImage;
- (void)_updateIconView;
- (void)_updateSendButton;
- (void)_updateStrokeView;
- (void)_updateStickerView;
- (void)_updateBlurView;
- (void)setHidesIcon:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setCheckmarkOffset:(float)arg1;
- (void)setScrollOffset:(float)arg1;
- (void)_layoutCheckView;
- (void)_layoutIconView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

