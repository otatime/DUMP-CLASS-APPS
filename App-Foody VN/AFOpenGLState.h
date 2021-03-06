//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AFOpenGLState : NSObject
{
    int _renderingMode;
    struct MoaGLImageData _glImageData;
    struct MoaGLRenderingObjects _glRenderingObjects;
}

@property(nonatomic) struct MoaGLRenderingObjects glRenderingObjects; // @synthesize glRenderingObjects=_glRenderingObjects;
@property(nonatomic) int renderingMode; // @synthesize renderingMode=_renderingMode;
@property(nonatomic) struct MoaGLImageData glImageData; // @synthesize glImageData=_glImageData;
- (void)destroyAssociatedObjectsInGLData:(struct MoaGLData *)arg1;
- (void)setFreshFromGLData:(struct MoaGLData *)arg1 withRenderingMode:(int)arg2;
- (void)configureGLData:(struct MoaGLData *)arg1;
- (void)setWithGLData:(struct MoaGLData *)arg1;

@end

