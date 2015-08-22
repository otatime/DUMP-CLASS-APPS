//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, FBGLFilter;

@interface FBFilterer : NSObject
{
    unsigned int _srcTextureIndex;
    int _vertexAttrib;
    int _texCoordAttrib;
    int _imgSizeUniformLocation;
    unsigned int _colorRenderbuffer;
    unsigned int _framebuffer;
    int _bufferWidth;
    int _bufferHeight;
    FBGLFilter *_activatedFilter;
    unsigned int _vertexBuffer;
    int _imageWidth;
    int _imageHeight;
    unsigned int *_imageData;
    unsigned int _renderToTextureFrameBuffer;
    EAGLContext *_context;
    int _preppedImageHandle;
}

+ (unsigned int)createTextureIntoTextureUnit:(unsigned int)arg1 withMapCountAndMaps:(int)arg2;
+ (unsigned int)createTexture:(void *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 format:(unsigned int)arg4 intoTextureUnit:(unsigned int)arg5;
+ (unsigned int)loadTextureFromImage:(id)arg1;
+ (unsigned int)createTextureFromImageData:(unsigned int *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 intoTextureUnit:(unsigned int)arg4;
+ (unsigned int *)createImageDataFromImage:(id)arg1;
@property(nonatomic) int preppedImageHandle; // @synthesize preppedImageHandle=_preppedImageHandle;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned int renderToTextureFrameBuffer; // @synthesize renderToTextureFrameBuffer=_renderToTextureFrameBuffer;
@property(nonatomic) unsigned int *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, nonatomic) int imageWidth; // @synthesize imageWidth=_imageWidth;
- (void).cxx_destruct;
- (void)freeImageData;
- (unsigned int)createProgramWithString:(id)arg1;
- (void)drawWithFilter:(id)arg1 derivedContext:(id)arg2;
- (void)drawWithFilterPasses:(id)arg1 derivedContext:(id)arg2;
- (unsigned int)createTextureForRendering;
- (void)setAttributeIndices:(unsigned int)arg1;
- (id)newImageFromBuffer;
- (id)newFilteredImage:(id)arg1 derivedContext:(id)arg2;
- (void)prepForImage:(id)arg1;
- (void)tearDownContext;
- (void)setRenderBufferWidth:(int)arg1 height:(int)arg2;
- (void)activateFilterIfNeeded:(id)arg1 derivedContext:(id)arg2;
- (void)makeCurrentContext;
- (void)setupContextWithWidth:(int)arg1 height:(int)arg2;
- (void)dealloc;
- (id)initWithSourceImage:(id)arg1;
- (id)init;

@end
