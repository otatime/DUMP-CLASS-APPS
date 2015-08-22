//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FBPhotoCropInfo : NSObject <NSCopying, NSCoding>
{
    unsigned int _cropMode;
    float _uIRotation;
    float _uIXOffset;
    float _uIYOffset;
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomLeft;
}

+ (int)orientationForUIRotation:(float)arg1;
+ (id)titleForMode:(unsigned int)arg1 inContext:(unsigned int)arg2;
+ (float)cropRatioForMode:(unsigned int)arg1 inFrame:(struct CGRect)arg2;
+ (struct CGRect)cropRectForCropMode:(unsigned int)arg1 inRect:(struct CGRect)arg2 landscape:(BOOL)arg3;
+ (id)squareCropFittingImageSize:(struct CGSize)arg1;
@property(nonatomic) float uIYOffset; // @synthesize uIYOffset=_uIYOffset;
@property(nonatomic) float uIXOffset; // @synthesize uIXOffset=_uIXOffset;
@property(nonatomic) float uIRotation; // @synthesize uIRotation=_uIRotation;
@property(nonatomic) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(nonatomic) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(nonatomic) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
@property(nonatomic) unsigned int cropMode; // @synthesize cropMode=_cropMode;
@property(readonly, nonatomic) int orientationQuadrant;
- (void)_assignRotatedPointsWithTopLeft:(struct CGPoint)arg1 size:(struct CGSize)arg2 orientation:(int)arg3;
- (struct CGRect)_unrotatedCropRectWithOrientation:(int)arg1;
- (void)_cropSquareWithImageSize:(struct CGSize)arg1;
- (id)croppedSquareWithImageSize:(struct CGSize)arg1;
- (id)cropInfoInWithoutRotation;
- (id)cropInfoInStandardCoordinate;
- (struct ManipulationParams)manipulationParamsForInitCropping:(struct CGRect)arg1 bounds:(struct CGRect)arg2 maxFrame:(struct CGRect)arg3;
- (BOOL)isIdentityTransformation;
- (BOOL)isEqualToCropInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
