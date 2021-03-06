//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBCameraCloseEventHandlerDelegate.h"

@class CKComponentHostingView, FBCameraCaptureEventHandler, FBCameraLogger, FBCaptureManager, FBComponentModelManager, FBEventHandlerStore, NSString;

@interface FBCameraComponentViewController : UIViewController <FBCameraCloseEventHandlerDelegate>
{
    id <FBCameraComponentAppearanceProvider> _appearanceProvider;
    CKComponentHostingView *_cameraView;
    FBCameraCaptureEventHandler *_captureEventHandler;
    FBCaptureManager *_captureManager;
    FBEventHandlerStore *_eventHandlerStore;
    FBCameraLogger *_logger;
    FBComponentModelManager *_modelManager;
    Class _cameraComponentProvider;
    id <FBCameraComponentViewControllerDelegate> _delegate;
    id <FBCameraComponentCaptureDelegate> _captureDelegate;
}

@property(nonatomic) __weak id <FBCameraComponentCaptureDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
@property(nonatomic) __weak id <FBCameraComponentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeEventHandlerCloseButtonDidTap:(id)arg1;
- (void)_createEventHandlersWithEventsFromToolbox:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (int)preferredStatusBarStyle;
- (id)initWithAppearanceProvider:(id)arg1 captureManager:(id)arg2 componentProvider:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

