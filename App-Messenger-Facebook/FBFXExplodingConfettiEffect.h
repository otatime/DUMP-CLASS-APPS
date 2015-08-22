//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBFXConfettiEffect.h"

@interface FBFXExplodingConfettiEffect : FBFXConfettiEffect
{
    float _strength;
    float _randomizeVelocity;
    float _angularStrength;
    float _randomizeAngularVelocity;
    float _drag;
    float _angularDrag;
    float _averageLifetime;
    float _randomizeLifetime;
    struct CGPoint _detonationPoint;
    struct CGSize _fragmentSize;
    struct CGSize _gravity;
}

@property(nonatomic) float randomizeLifetime; // @synthesize randomizeLifetime=_randomizeLifetime;
@property(nonatomic) float averageLifetime; // @synthesize averageLifetime=_averageLifetime;
@property(nonatomic) float angularDrag; // @synthesize angularDrag=_angularDrag;
@property(nonatomic) float drag; // @synthesize drag=_drag;
@property(nonatomic) struct CGSize gravity; // @synthesize gravity=_gravity;
@property(nonatomic) float randomizeAngularVelocity; // @synthesize randomizeAngularVelocity=_randomizeAngularVelocity;
@property(nonatomic) float angularStrength; // @synthesize angularStrength=_angularStrength;
@property(nonatomic) float randomizeVelocity; // @synthesize randomizeVelocity=_randomizeVelocity;
@property(nonatomic) float strength; // @synthesize strength=_strength;
@property(nonatomic) struct CGSize fragmentSize; // @synthesize fragmentSize=_fragmentSize;
@property(nonatomic) struct CGPoint detonationPoint; // @synthesize detonationPoint=_detonationPoint;
- (id).cxx_construct;
- (void)update:(struct FBFXConfettiEffectUpdate *)arg1 forFragment:(const struct FBFXConfettiEffectFragment *)arg2 atColumn:(int)arg3 row:(int)arg4;
- (void)configureFragment:(struct FBFXConfettiEffectFragment *)arg1 atColumn:(int)arg2 row:(int)arg3;
- (void)subdivide:(struct CGSize)arg1 columns:(int *)arg2 rows:(int *)arg3;
- (id)init;

@end
