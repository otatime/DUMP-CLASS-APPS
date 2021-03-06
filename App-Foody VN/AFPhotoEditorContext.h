//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAppBackgroundStateManager, AFPhotoEditorSession, AFRenderInstance;

@interface AFPhotoEditorContext : NSObject
{
    BOOL _canceled;
    BOOL _modified;
    BOOL _hasBegunRendering;
    BOOL _closed;
    BOOL _hasQueuedProcessors;
    AFPhotoEditorSession *_session;
    CDUnknownBlockType _completionBlock;
    AFRenderInstance *_renderInstance;
    AFAppBackgroundStateManager *_backgroundStateManager;
    struct CGSize _size;
}

+ (float)highResOutputSizeLimit;
+ (void)setHighResolutionEnabled:(BOOL)arg1;
@property(retain, nonatomic) AFAppBackgroundStateManager *backgroundStateManager; // @synthesize backgroundStateManager=_backgroundStateManager;
@property(retain, nonatomic) AFRenderInstance *renderInstance; // @synthesize renderInstance=_renderInstance;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) BOOL hasQueuedProcessors; // @synthesize hasQueuedProcessors=_hasQueuedProcessors;
@property(nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
@property(nonatomic) BOOL hasBegunRendering; // @synthesize hasBegunRendering=_hasBegunRendering;
@property(nonatomic, getter=isModified) BOOL modified; // @synthesize modified=_modified;
@property(nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak AFPhotoEditorSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)resumeRenderInstance;
- (void)addProcessors:(id)arg1;
- (void)cancelRendering;
- (void)render:(CDUnknownBlockType)arg1;
- (void)addProcessor:(id)arg1;
- (void)setupRenderInstanceWithImage:(id)arg1;
- (id)initWithSession:(id)arg1 image:(id)arg2 maxSize:(struct CGSize)arg3;

@end

