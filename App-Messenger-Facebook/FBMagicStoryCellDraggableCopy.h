//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIView<FBMagicStoryAssetViewProtocol>;

@interface FBMagicStoryCellDraggableCopy : UIView
{
    float _scaleAmount;
    UIView<FBMagicStoryAssetViewProtocol> *_assetView;
}

@property(readonly, nonatomic) UIView<FBMagicStoryAssetViewProtocol> *assetView; // @synthesize assetView=_assetView;
- (void).cxx_destruct;
- (void)_addSpringAnimation:(id)arg1 value:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_addBasicAnimation:(id)arg1 value:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_animateShadowOpacityForCellTo:(float)arg1;
- (void)putDownAtBounds:(struct CGRect)arg1 center:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bounceDownAtBounds:(struct CGRect)arg1 center:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bounceDownAtBounds:(struct CGRect)arg1;
- (void)pickUpAtBounds:(struct CGRect)arg1 center:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bounceUpAtBounds:(struct CGRect)arg1;
- (void)placeAssetViewInCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forCell:(id)arg2 withScaleAmount:(float)arg3;

@end
