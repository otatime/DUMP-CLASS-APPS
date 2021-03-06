//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CardIOGuideLayerDelegate.h"
#import "CardIOVideoStreamDelegate.h"

@class CardIOCardScanner, CardIOConfig, CardIOGuideLayer, CardIOShutterView, CardIOVideoStream, NSString, UIButton, UIFont, UIImageView, UILabel;

@interface CardIOCameraView : UIView <CardIOVideoStreamDelegate, CardIOGuideLayerDelegate>
{
    BOOL _suppressFauxCardLayer;
    BOOL _rotatingInterface;
    BOOL _videoStreamSessionWasRunningBeforeRotation;
    BOOL _hasLaidoutCameraButtons;
    id <CardIOVideoStreamDelegate> _delegate;
    CardIOGuideLayer *_cardGuide;
    UILabel *_guideLayerLabel;
    CardIOShutterView *_shutter;
    CardIOVideoStream *_videoStream;
    UIButton *_lightButton;
    UIImageView *_logoView;
    int _deviceOrientation;
    CardIOConfig *_config;
}

+ (struct CGRect)previewRectWithinSize:(struct CGSize)arg1 landscape:(BOOL)arg2;
@property(nonatomic) BOOL hasLaidoutCameraButtons; // @synthesize hasLaidoutCameraButtons=_hasLaidoutCameraButtons;
@property(retain, nonatomic) CardIOConfig *config; // @synthesize config=_config;
@property(nonatomic) BOOL videoStreamSessionWasRunningBeforeRotation; // @synthesize videoStreamSessionWasRunningBeforeRotation=_videoStreamSessionWasRunningBeforeRotation;
@property(nonatomic) BOOL rotatingInterface; // @synthesize rotatingInterface=_rotatingInterface;
@property(nonatomic) int deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIButton *lightButton; // @synthesize lightButton=_lightButton;
@property(retain, nonatomic) CardIOVideoStream *videoStream; // @synthesize videoStream=_videoStream;
@property(retain, nonatomic) CardIOShutterView *shutter; // @synthesize shutter=_shutter;
@property(retain, nonatomic) UILabel *guideLayerLabel; // @synthesize guideLayerLabel=_guideLayerLabel;
@property(readonly, nonatomic) CardIOGuideLayer *cardGuide; // @synthesize cardGuide=_cardGuide;
@property(nonatomic) BOOL suppressFauxCardLayer; // @synthesize suppressFauxCardLayer=_suppressFauxCardLayer;
@property(nonatomic) __weak id <CardIOVideoStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *instructionsFont;
- (int)defaultSupportedOverlayOrientation;
- (BOOL)isSupportedOverlayOrientation:(int)arg1;
- (unsigned int)supportedOverlayOrientationsMask;
- (void)videoStream:(id)arg1 didProcessFrame:(id)arg2;
- (void)guideLayerDidLayout:(struct CGRect)arg1;
- (void)updateCameraOrientation;
- (void)didReceiveDeviceOrientationNotification:(id)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)orientGuideLayerLabel;
- (void)showGuideLabel;
- (void)layoutCameraButtons;
- (void)updateLightButtonState;
- (void)toggleTorch:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)cameraPreviewFrame;
- (struct CGRect)guideFrame;
@property(readonly, nonatomic) CardIOCardScanner *scanner;
- (void)refocus;
- (void)stopVideoStreamSession;
- (void)startVideoStreamSession;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 config:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

