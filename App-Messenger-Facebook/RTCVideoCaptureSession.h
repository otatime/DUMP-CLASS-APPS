//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface RTCVideoCaptureSession : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
    int _videoOrientation;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    AVCaptureSession *_captureSession;
    AVCaptureVideoDataOutput *_captureOutput;
    BOOL _running;
    NSMutableArray *_activeListeners;
    NSMutableArray *_pendingDeviceChanges;
    id <RTCVideoCaptureSessionDelegate> _delegate;
    float _basePortraitAspectRatio;
}

+ (void)clearActiveSession:(id)arg1;
+ (void)setActiveSession:(id)arg1;
+ (id)activeSession;
@property(readonly) float basePortraitAspectRatio; // @synthesize basePortraitAspectRatio=_basePortraitAspectRatio;
@property(nonatomic) __weak id <RTCVideoCaptureSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)_setInput:(id)arg1;
- (void)_changeInputDevice;
- (void)_updateVideoCaptureToWidth:(int)arg1 height:(int)arg2 maxFPS:(int)arg3;
- (void)_updateSessionWithListeners:(id)arg1;
- (void)_stopCaptureAndClose;
- (void)_removeFromCapture:(id)arg1;
- (void)_addToCapture:(id)arg1;
- (void)_updatePreviewLayer:(id)arg1;
- (void)_updateToVideoOrientation:(int)arg1;
- (id)_itemForListener:(id)arg1;
- (void)_setRunning:(BOOL)arg1;
- (void)_setBasePortraitAspectRatio:(float)arg1;
- (void)_createSessionIfNeeded;
- (void)closeWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopCaptureForListener:(id)arg1;
- (void)startCaptureForListener:(id)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3 maxFPS:(unsigned long)arg4;
- (void)setCaptureVideoOrientation:(int)arg1;
- (void)setInputByDeviceId:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
@property(readonly) BOOL isRunning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

