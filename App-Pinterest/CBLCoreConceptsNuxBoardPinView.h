//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

@class CAShapeLayer, UIImageView, UIView;

@interface CBLCoreConceptsNuxBoardPinView : CBLTraitCollectionView
{
    UIImageView *_imageView;
    UIView *_pinShadowView;
    CAShapeLayer *_roundedMaskLayer;
    float _topLeftRoundedPercent;
    float _topRightRoundedPercent;
    float _bottomRightRoundedPercent;
    float _bottomLeftRoundedPercent;
    float _pinShadowPercentage;
}

@property(nonatomic) float pinShadowPercentage; // @synthesize pinShadowPercentage=_pinShadowPercentage;
@property(nonatomic) float bottomLeftRoundedPercent; // @synthesize bottomLeftRoundedPercent=_bottomLeftRoundedPercent;
@property(nonatomic) float bottomRightRoundedPercent; // @synthesize bottomRightRoundedPercent=_bottomRightRoundedPercent;
@property(nonatomic) float topRightRoundedPercent; // @synthesize topRightRoundedPercent=_topRightRoundedPercent;
@property(nonatomic) float topLeftRoundedPercent; // @synthesize topLeftRoundedPercent=_topLeftRoundedPercent;
@property(retain, nonatomic) CAShapeLayer *roundedMaskLayer; // @synthesize roundedMaskLayer=_roundedMaskLayer;
@property(retain, nonatomic) UIView *pinShadowView; // @synthesize pinShadowView=_pinShadowView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (struct CGPath *)newRoundedMaskWithCornerRadius:(float)arg1 topLeft:(float)arg2 topRight:(float)arg3 bottomRight:(float)arg4 bottomLeft:(float)arg5;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1;

@end

