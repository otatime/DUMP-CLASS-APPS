//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPPaymentMethodCell.h"

@class UIImage, UIImageView, UILabel;

@interface PPCreditCardMethodCell : PPPaymentMethodCell
{
    UIImageView *_cameraGlyphView;
    UILabel *_payWithCardActionLabel;
}

@property(retain, nonatomic) UILabel *payWithCardActionLabel; // @synthesize payWithCardActionLabel=_payWithCardActionLabel;
@property(retain, nonatomic) UIImageView *cameraGlyphView; // @synthesize cameraGlyphView=_cameraGlyphView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUserInfoVisible:(BOOL)arg1 animated:(BOOL)arg2 complete:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIImage *cardImage;
- (id)init;

@end

