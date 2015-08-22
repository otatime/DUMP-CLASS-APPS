//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNMessagesViewComposing.h"

@class FBMDeliveryReceiptGating, FBMSticker, FBMStickerResourceManager, FBMStickerView, MNComposingLikeStickerAnimator, MNMessageCellLayout;

@interface MNComposingStickerView : UIView <MNMessagesViewComposing>
{
    FBMStickerResourceManager *_stickerResourceManager;
    MNMessageCellLayout *_cellLayout;
    FBMStickerView *_stickerView;
    UIView *_wrapper;
    MNComposingLikeStickerAnimator *_animator;
    FBMDeliveryReceiptGating *_deliveryReceiptGating;
    BOOL _shouldShowWideGutter;
    FBMSticker *_sticker;
}

@property(retain, nonatomic) FBMSticker *sticker; // @synthesize sticker=_sticker;
@property(nonatomic) BOOL shouldShowWideGutter; // @synthesize shouldShowWideGutter=_shouldShowWideGutter;
- (void).cxx_destruct;
- (float)overshotViewHeightForSendingStickerType:(unsigned int)arg1;
- (float)finalViewHeightForSendingStickerType:(unsigned int)arg1;
- (float)finalViewHeightForComposingSticker;
- (float)initialViewHeightForComposingSticker;
- (void)endAnimation;
- (void)beginAnimationWithConfig:(id)arg1;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 stickerResourceManager:(id)arg2 messageCellLayout:(id)arg3 deliveryReceiptGating:(id)arg4;

@end

