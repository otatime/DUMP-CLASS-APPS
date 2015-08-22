//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSMutableArray, UIColor;

@interface QTMInkLayer : CALayer
{
    NSMutableArray *_ripples;
    CALayer *_backgroundFadeLayer;
    double _dropStartTime;
    int _rippleState;
    BOOL _shouldFillBackgroundOnSpread;
    BOOL _gravitateInk;
    BOOL _useCustomInkCenter;
    BOOL _userLinearExpansion;
    float _maxRippleRadius;
    UIColor *_inkColor;
    struct CGPoint _customInkCenter;
}

@property(nonatomic) BOOL userLinearExpansion; // @synthesize userLinearExpansion=_userLinearExpansion;
@property(nonatomic) struct CGPoint customInkCenter; // @synthesize customInkCenter=_customInkCenter;
@property(nonatomic) BOOL useCustomInkCenter; // @synthesize useCustomInkCenter=_useCustomInkCenter;
@property(nonatomic) BOOL gravitateInk; // @synthesize gravitateInk=_gravitateInk;
@property(nonatomic) BOOL shouldFillBackgroundOnSpread; // @synthesize shouldFillBackgroundOnSpread=_shouldFillBackgroundOnSpread;
@property(retain, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
@property(nonatomic) float maxRippleRadius; // @synthesize maxRippleRadius=_maxRippleRadius;
- (void).cxx_destruct;
- (void)backgroundFadeOut;
- (void)backgroundFadeIn;
- (void)evaporateToPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaporateWithCompletion:(CDUnknownBlockType)arg1;
- (void)spreadFromPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)inkSpreadAnimationWithDuration:(double)arg1 fromScale:(float)arg2 toScale:(float)arg3 fromCenter:(struct CGPoint)arg4 toCenter:(struct CGPoint)arg5;
- (double)spreadNearlyDoneDuration;
@property(readonly, nonatomic) double evaporateDuration;
@property(readonly, nonatomic) double spreadDuration;
- (float)rippleRadius;
- (id)rippleLayer;
- (void)setBackgroundColorGroup:(id)arg1;
- (void)layoutSublayers;
- (id)init;

@end
