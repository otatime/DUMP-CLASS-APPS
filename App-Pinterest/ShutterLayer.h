//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface ShutterLayer : CALayer
{
    float _openAngle;
    float _closedAngle;
}

@property(nonatomic) float closedAngle; // @synthesize closedAngle=_closedAngle;
@property(nonatomic) float openAngle; // @synthesize openAngle=_openAngle;
- (void)rotateToAngle:(float)arg1;
- (id)init;

@end

