//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@interface FBRotatingComponent : CKCompositeComponent
{
    float _angle;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 component:(id)arg2 angle:(float)arg3;
@property(readonly, nonatomic) float angle; // @synthesize angle=_angle;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;

@end

