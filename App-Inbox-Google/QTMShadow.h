//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CAShapeLayer;

@interface QTMShadow : CALayer
{
    BOOL _applyShadowMask;
    int _zIndex;
    CAShapeLayer *_topShadow;
    CAShapeLayer *_bottomShadow;
}

+ (CDStruct_03236302)shadowMetricsForZIndex:(int)arg1;
@property(retain, nonatomic) CAShapeLayer *bottomShadow; // @synthesize bottomShadow=_bottomShadow;
@property(retain, nonatomic) CAShapeLayer *topShadow; // @synthesize topShadow=_topShadow;
@property(nonatomic) BOOL applyShadowMask; // @synthesize applyShadowMask=_applyShadowMask;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
- (void).cxx_destruct;
- (void)commonLayoutSublayers;
- (void)setZIndex:(int)arg1 animationDuration:(double)arg2;
- (id)shadowLayerMaskForLayer:(id)arg1;
- (struct CGSize)shadowSpreadForLevel:(int)arg1;
- (void)setShouldRasterize:(BOOL)arg1;
- (void)setShadowColor:(struct CGColor *)arg1;
- (void)setShadowPath:(struct CGPath *)arg1;
- (id)defaultShadowPath;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (id)init;

@end

