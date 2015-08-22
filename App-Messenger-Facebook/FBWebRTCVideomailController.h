//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCaptureManagerDelegate.h"
#import "FBClassProvidable.h"
#import "FBWebRTCVideomailViewDelegate.h"

@class FBCaptureManager, FBUserSession, FBWebRTCVideomailView, MNPhotoImageRequester, MNPhotoImageUploadResultCacher, NSString, NSTimer, _FBWebRTCVideomailRecordHolder;

@interface FBWebRTCVideomailController : NSObject <FBCaptureManagerDelegate, FBWebRTCVideomailViewDelegate, FBClassProvidable>
{
    FBWebRTCVideomailView *_videomailView;
    FBCaptureManager *_captureManager;
    _FBWebRTCVideomailRecordHolder *_recordHolder;
    MNPhotoImageRequester *_imageRequester;
    MNPhotoImageUploadResultCacher *_uploadResultCacher;
    FBUserSession *_userSession;
    NSTimer *_videoTimer;
    NSTimer *_startRecordingTimer;
    BOOL _isInfoViewHidden;
    BOOL _reachedMaxDuration;
    id <FBWebRTCVideomailControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBWebRTCVideomailControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videomailViewDidCancelRecording;
- (void)videomailViewDidStopRecording;
- (void)videomailViewDidStartRecording;
- (void)videomailViewDidPressBack;
- (void)videomailViewDidPressSwitchCamera;
- (void)captureManager:(id)arg1 didCaptureImage:(id)arg2 metadata:(id)arg3 cameraPosition:(int)arg4;
- (void)captureManagerPreviewDidLoad:(id)arg1;
- (void)captureManagerDidFailToCaptureVideo:(id)arg1;
- (void)captureManagerDidStartCaptureVideo:(id)arg1;
- (void)captureManager:(id)arg1 didChangeCapturePositionTo:(int)arg2;
- (void)captureManagerSessionDidStart:(id)arg1;
- (struct CGSize)captureManagerVideoInputSize:(id)arg1;
- (id)addFilterToPhoto:(id)arg1;
- (void)captureManager:(id)arg1 didCaptureVideo:(id)arg2 thumbnail:(id)arg3 cameraPosition:(int)arg4;
- (void)_cancelVideomail;
- (id)_buildVideoAttachmentForAsset:(id)arg1 thumbnail:(id)arg2;
- (void)_invalidateAndNilStartTimer;
- (void)_invalidateAndNilVideoTimer;
- (void)_reachedMaxDuration;
- (void)_stopSession;
- (void)_stopRecording;
- (void)_startRecording;
- (id)_getPreviewLayer;
- (void)setVideomailView:(id)arg1;
- (void)ensureSessionStopped;
- (void)startSession;
- (void)dealloc;
- (id)init;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithCaptureManager:(id)arg1 uploadResultCacher:(id)arg2 imageRequester:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

