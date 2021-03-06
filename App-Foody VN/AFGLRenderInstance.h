//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFRenderInstance.h"

@class AFOpenGLInstance;

@interface AFGLRenderInstance : AFRenderInstance
{
    BOOL _dirty;
    BOOL _stopped;
    AFOpenGLInstance *_glInstance;
}

@property(nonatomic, getter=isStopped) BOOL stopped; // @synthesize stopped=_stopped;
@property(nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) AFOpenGLInstance *glInstance; // @synthesize glInstance=_glInstance;
- (void).cxx_destruct;
- (void)getProcessedImage:(CDUnknownBlockType)arg1;
- (void)getProcessedImageOnCurrentThread:(CDUnknownBlockType)arg1;
- (void)runProcessor:(id)arg1;
- (void)enqueueProcessor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueProcessor:(id)arg1;
- (void)runMoaLiteBlock:(CDUnknownBlockType)arg1;
- (id)moaLiteContextForBitmap:(struct MoaBitmap *)arg1;
- (struct CGSize)size;
- (void)resumeProcessing;
- (void)pauseProcessing;
- (void)cancelProcessing;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
- (id)initHiresWithImageSize:(struct CGSize)arg1;
- (id)initWithGLInstance:(id)arg1;
- (void)enqueueProcessor:(id)arg1 resultCompletion:(CDUnknownBlockType)arg2;

@end

