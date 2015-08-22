//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CardIOCardScanner, CardIOConfig, NSDate, NSObject<OS_dispatch_semaphore>, NSString;

@interface CardIOVideoStream : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    CDStruct_7a6dc4e9 *dmz;
    BOOL _running;
    BOOL _wasRunningBeforeBeingBackgrounded;
    BOOL _didEndGeneratingDeviceOrientationNotifications;
    BOOL _currentlyAdjustingFocus;
    BOOL _currentlyAdjustingExposure;
    BOOL _lastChangeTorchStateToOFF;
    CardIOConfig *_config;
    id <CardIOVideoStreamDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CardIOCardScanner *_scanner;
    int _interfaceOrientation;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_camera;
    AVCaptureDeviceInput *_cameraInput;
    AVCaptureVideoDataOutput *_videoOutput;
    NSObject<OS_dispatch_semaphore> *_cameraConfigurationSemaphore;
    NSDate *_start;
    unsigned int _numFrames;
    double _lastAutoFocusOnceTime;
    double _lastChangeSignal;
}

@property(nonatomic) unsigned int numFrames; // @synthesize numFrames=_numFrames;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *cameraConfigurationSemaphore; // @synthesize cameraConfigurationSemaphore=_cameraConfigurationSemaphore;
@property(nonatomic) BOOL lastChangeTorchStateToOFF; // @synthesize lastChangeTorchStateToOFF=_lastChangeTorchStateToOFF;
@property(nonatomic) double lastChangeSignal; // @synthesize lastChangeSignal=_lastChangeSignal;
@property(nonatomic) BOOL currentlyAdjustingExposure; // @synthesize currentlyAdjustingExposure=_currentlyAdjustingExposure;
@property(nonatomic) BOOL currentlyAdjustingFocus; // @synthesize currentlyAdjustingFocus=_currentlyAdjustingFocus;
@property(nonatomic) double lastAutoFocusOnceTime; // @synthesize lastAutoFocusOnceTime=_lastAutoFocusOnceTime;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *cameraInput; // @synthesize cameraInput=_cameraInput;
@property(retain, nonatomic) AVCaptureDevice *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) BOOL didEndGeneratingDeviceOrientationNotifications; // @synthesize didEndGeneratingDeviceOrientationNotifications=_didEndGeneratingDeviceOrientationNotifications;
@property(nonatomic) BOOL wasRunningBeforeBeingBackgrounded; // @synthesize wasRunningBeforeBeingBackgrounded=_wasRunningBeforeBeingBackgrounded;
@property(retain, nonatomic) CardIOCardScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) __weak id <CardIOVideoStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL running; // @synthesize running=_running;
@property(retain, nonatomic) CardIOConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)didReceiveForegroundingNotification:(id)arg1;
- (void)didReceiveBackgroundingNotification:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sendFrameToDelegate:(id)arg1;
- (void)stopSession;
- (void)startSession;
- (void)removeInputAndOutput;
- (BOOL)addInputAndOutput;
- (void)resumeContinuousAutofocusing;
- (void)autofocusOnce;
- (void)refocus;
- (BOOL)hasAutofocus;
- (BOOL)setTorchModeOnWithLevel:(float)arg1;
- (BOOL)setTorchOn:(BOOL)arg1;
- (BOOL)torchIsOn;
- (BOOL)canSetTorchLevel;
- (BOOL)hasTorch;
- (BOOL)changeCameraConfiguration:(CDUnknownBlockType)arg1;
- (void)didReceiveDeviceOrientationNotification:(id)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

