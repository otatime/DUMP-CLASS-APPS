//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBCameraViewDelegate.h"
#import "FBWebRTCNavigationBarViewDelegate.h"

@class FBCameraView, FBWebRTCNavigationBarView, NSString;

@interface FBWebRTCVideomailView : UIView <FBCameraViewDelegate, FBWebRTCNavigationBarViewDelegate>
{
    BOOL _isReadyForSession;
    id <FBWebRTCVideomailViewDelegate> _delegate;
    FBCameraView *_cameraView;
    FBWebRTCNavigationBarView *_navigationBarView;
    UIView *_shadowView;
}

@property(readonly, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) FBWebRTCNavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(readonly, nonatomic) FBCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) __weak id <FBWebRTCVideomailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isReadyForSession; // @synthesize isReadyForSession=_isReadyForSession;
- (void).cxx_destruct;
- (void)cameraViewDidPressRetakeButton:(id)arg1;
- (void)cameraViewDidPressSendButton:(id)arg1;
- (void)cameraViewDidPressCloseButton:(id)arg1;
- (void)cameraViewDidCancelRecording:(id)arg1 duration:(double)arg2;
- (void)cameraViewDidStopRecording:(id)arg1 duration:(double)arg2;
- (void)cameraViewDidStartRecording:(id)arg1;
- (void)cameraViewDidSelectCaptureImage:(id)arg1;
- (void)cameraViewDidSelectSwitchCamera:(id)arg1;
- (void)navigationViewDidPressSwitchCameraButton:(id)arg1;
- (void)navigationViewDidPressBackButton:(id)arg1;
- (void)navigationBarViewLazyInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

