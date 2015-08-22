//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMobileCanvasDialogWrapper, FBWebBridge, NSDictionary;

@interface FBMobileCanvas : NSObject
{
    NSDictionary *_metaTags;
    FBMobileCanvasDialogWrapper *_dialog;
    FBWebBridge *_webBridge;
}

@property(retain, nonatomic) FBWebBridge *webBridge; // @synthesize webBridge=_webBridge;
@property(retain, nonatomic) FBMobileCanvasDialogWrapper *dialog; // @synthesize dialog=_dialog;
@property(copy, nonatomic) NSDictionary *metaTags; // @synthesize metaTags=_metaTags;
- (void).cxx_destruct;
- (void)postMessage:(id)arg1 targetOrigin:(id)arg2 windowID:(id)arg3;
- (void)dialogDidLoad;
- (void)closeWindowWithID:(id)arg1;
- (void)setCancelAction:(id)arg1 handleCancelEvent:(id)arg2;
- (void)openURL:(id)arg1 windowID:(id)arg2;
- (void)attachToWebView;
- (BOOL)handlePossibleBridgeRequestURL:(id)arg1;
- (void)fireCancelButtonEvent;
- (void)fireActionButtonEvent;
- (void)dialogClosed;
- (id)initWithDialog:(id)arg1;
- (id)init;

@end

