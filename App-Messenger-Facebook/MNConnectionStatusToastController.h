//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "FBToastPresentationListener.h"

@class FBGlobalToastPresenter, FBMConnectivityBannerExperimentContext, FBMMQTTConnectionManager, FBToast, MNConnectionStatusToastView, NSNotificationCenter, NSString, NSTimer;

@interface MNConnectionStatusToastController : NSObject <FBToastPresentationListener, FBSessionClassProvidable>
{
    MNConnectionStatusToastView *_connectionStatusView;
    FBMMQTTConnectionManager *_connectionManager;
    CDUnknownBlockType _connectionManagerCreator;
    NSNotificationCenter *_notificationCenter;
    FBGlobalToastPresenter *_globalToastPresenter;
    FBMConnectivityBannerExperimentContext *_experimentContext;
    FBToast *_toast;
    BOOL _started;
    BOOL _queuedOrShown;
    BOOL _presented;
    NSTimer *_startFrozenTimer;
    NSTimer *_dismissTimer;
}

@property(retain, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(retain, nonatomic) NSTimer *startFrozenTimer; // @synthesize startFrozenTimer=_startFrozenTimer;
- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_dismissAnimated:(BOOL)arg1;
- (void)_dismissConnectedStatusToastViaTimer;
- (void)_ensureQueued:(BOOL)arg1;
- (void)_showConnectionStatusAnimated:(BOOL)arg1;
- (void)_refreshStatus:(BOOL)arg1;
- (void)_onConnectionStatusChanged:(id)arg1;
- (void)presenter:(id)arg1 didRelinquishToast:(id)arg2;
- (void)presenter:(id)arg1 didAcceptToast:(id)arg2;
- (void)toastWillDisappear:(id)arg1;
- (void)toastWillAppear:(id)arg1;
- (void)stop;
- (void)startAndShowCurrentStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (id)connectionManager;
- (void)dealloc;
- (id)initWithConnectionManagerCreator:(CDUnknownBlockType)arg1 notificationCenter:(id)arg2 globalToastPresenter:(id)arg3 experimentContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

