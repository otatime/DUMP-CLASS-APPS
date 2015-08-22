//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGLFilter.h"

@interface LUXFilter : FBGLFilter
{
    int uniformLuxSaturationMultiplier;
    int uniformLuxNumHistogramBuckets;
}

- (id)prepareInputsWithImageData:(unsigned int *)arg1 width:(int)arg2 height:(int)arg3 derivedContext:(id)arg4;
- (float)calculateHueVarianceForImage:(unsigned int *)arg1 width:(int)arg2 height:(int)arg3;
- (id)getHSVFromColorAtIndex:(int)arg1 inImageData:(unsigned int *)arg2;
- (void)drawWithContext:(id)arg1;
- (void)activateWithFilterer:(id)arg1 derivedContext:(id)arg2;
- (id)prepareDerivedContext:(id)arg1 withFilterer:(id)arg2;
- (id)shaderFunctionIncludes;
- (id)init;

@end
