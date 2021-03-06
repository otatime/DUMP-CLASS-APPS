//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZBarReaderView.h"

@class AVCaptureDevice, AVCaptureInput, AVCaptureSession;

@interface ZBarReaderViewImpl : ZBarReaderView
{
    AVCaptureSession *session;
    AVCaptureDevice *device;
    AVCaptureInput *input;
}

- (id)session;
- (id)device;
- (void)captureReader:(id)arg1 didReadNewSymbolsFromImage:(id)arg2;
- (void)captureReader:(id)arg1 didTrackSymbols:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onVideoError:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)lockDevice;
- (void)configureDevice;
- (void)flushCache;
- (void)stop;
- (void)start;
- (void)setShowsFPS:(BOOL)arg1;
- (void)setTorchMode:(int)arg1;
- (void)setEnableCache:(BOOL)arg1;
- (BOOL)enableCache;
- (void)setDevice:(id)arg1;
- (id)scanner;
- (void)updateCrop;
- (void)dealloc;
- (void)initSubviews;
- (void)_initWithImageScanner:(id)arg1;

@end

