//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBQuickPromotionInterstitial.h"

@class FBQuickPromotionCardWithBlurredBackgroundView, FBQuickPromotionCreativeView, FBQuickPromotionInterstitialConfiguration, FBQuickPromotionInterstitialHorizontalButtonBarView, FBRichTextView, FBUserSession, NSString, UIButton, UIImageView, UILabel;

@interface FBQuickPromotionInterstitialCardView : UIView <FBQuickPromotionInterstitial>
{
    UIImageView *_backgroundImageView;
    FBUserSession *_session;
    NSString *_promotionID;
    UIButton *_dismissButton;
    FBQuickPromotionCreativeView *_interstitialView;
    FBQuickPromotionCardWithBlurredBackgroundView *_cardView;
    FBQuickPromotionInterstitialHorizontalButtonBarView *_buttonBarView;
}

@property(retain, nonatomic) FBQuickPromotionInterstitialHorizontalButtonBarView *buttonBarView; // @synthesize buttonBarView=_buttonBarView;
@property(retain, nonatomic) FBQuickPromotionCardWithBlurredBackgroundView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) FBQuickPromotionCreativeView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(copy, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBRichTextView *socialContextView;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) UIButton *secondaryButton;
@property(readonly, nonatomic) UIButton *primaryButton;
@property(readonly, nonatomic) FBRichTextView *subtitleTextView;
@property(readonly, nonatomic) UILabel *textLabel;
- (void)setBackgroundImage:(id)arg1;
- (BOOL)isTakeOverView;
- (void)unsetFacepile;
- (void)setFacepileWithText:(id)arg1 imageURLs:(id)arg2;
- (void)setAnimatedImageWithURL:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3;
- (void)unsetImage;
- (void)setImageWithURL:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3;
- (void)layoutButtonItemsForInterstitialSize:(struct CGSize)arg1 cardBounds:(struct CGRect)arg2;
- (struct CGSize)buttonBarSizeForCardBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) FBQuickPromotionInterstitialConfiguration *configuration;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
