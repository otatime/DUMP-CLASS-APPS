//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "FBWebRTCCallMonitorDelegate.h"
#import "FBWebRTCHandler.h"
#import "VOIPConfigurationCheckerDelegate.h"

@class FBAnalytics, FBExperimentManager, FBMImageViewDownloader, FBMMQTTSender, FBMobileConfigFactory, FBProviderMapData, FBUserSession, FBWebRTCDevice, FBWebRTCNetworkAvailability, MNUserSettings, MNUserStore, NSNotificationCenter, NSString, VOIPConfiguration, VOIPConfigurationChecker, WebRTCLazyEngine;

@interface FBWebRTCHandlerImpl : NSObject <FBWebRTCCallMonitorDelegate, FBSessionClassProvidable, FBWebRTCHandler, VOIPConfigurationCheckerDelegate>
{
    struct FBWebRTCConfigWrapper *_configWrapper;
    struct FBWebRTCMessageWrapper *_messageWrapper;
    struct FBWebRTCUIWrapper *_uiWrapper;
    struct FBWebRTCLogWrapper *_logWrapper;
    WebRTCLazyEngine *_lazyEngine;
    FBMMQTTSender *_mqttSender;
    NSNotificationCenter *_notificationCenter;
    id <MNAuthenticationManager> _authManager;
    FBMImageViewDownloader *_imageViewDownloader;
    FBAnalytics *_analytics;
    MNUserStore *_userStore;
    VOIPConfigurationChecker *_configChecker;
    MNUserSettings *_userSettings;
    FBProviderMapData *_providerMap;
    FBExperimentManager *_experimentManager;
    FBMobileConfigFactory *_mobileConfigFactory;
    FBWebRTCNetworkAvailability *_networkAvailability;
    FBUserSession *_session;
    BOOL _persistentConnectionEnabled;
    VOIPConfiguration *_currentVOIPConfig;
    struct FBWebRTCCallMonitor *_callMonitor;
    long long _currentCallId;
    double _currentCallStartTime;
    BOOL _shouldStopEngine;
    BOOL _engineShouldRun;
    FBWebRTCDevice *device;
}

@property(nonatomic) FBWebRTCDevice *device; // @synthesize device;
- (void).cxx_destruct;
- (BOOL)isInACall;
- (void)callDidReceiveHeartbeat:(long long)arg1 currentCallSummary:(id)arg2;
- (void)callDidEnd:(long long)arg1 dataSent:(long long)arg2 dataReceived:(long long)arg3;
- (void)callDidStart:(long long)arg1;
- (void)voipConfigurationChecker:(id)arg1 didGetResult:(id)arg2;
- (void)invalidateUserSession;
- (void)shutdownWebRTCEngine;
- (void)startUpWebRTCEngine;
- (void)startWithGKCheck;
@property(readonly, nonatomic, getter=isWebInteropSupported) BOOL webInteropSupported;
@property(readonly, nonatomic, getter=isDirectVideoCallingEnabled) BOOL directVideoCallingEnabled;
@property(readonly, nonatomic, getter=isVideoCallingEnabled) BOOL videoCallingEnabled;
@property(readonly, nonatomic, getter=isVoipBlockedByCountry) BOOL voipBlockedByCountry;
@property(readonly, nonatomic, getter=isVoipEnabled) BOOL voipEnabled;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithMQTTSender:(id)arg1 notificationCenter:(id)arg2 authManager:(id)arg3 imageViewDownloader:(id)arg4 analytics:(id)arg5 userStore:(id)arg6 VOIPConfigurationChecker:(id)arg7 userSettings:(id)arg8 networkAvailability:(id)arg9 experimentManager:(id)arg10 mobileConfigFactory:(id)arg11 userSession:(id)arg12 providerMap:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

