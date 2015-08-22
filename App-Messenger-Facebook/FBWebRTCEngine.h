//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBWebRTCVoipAudioSessionDelegate.h"

@class FBMUser, FBUserSession, FBWebRTCCallConnectionStatus, FBWebRTCCallModel, FBWebRTCEngineListenerAnnouncer, FBWebRTCVoipAudioSession, MNUserSettings, NSNumber, NSString;

@interface FBWebRTCEngine : NSObject <FBWebRTCVoipAudioSessionDelegate, FBClassProvidable>
{
    unique_ptr_37eb45d4 _nativeEngine;
    struct WebRTCConfigInterface *_configuration;
    FBUserSession *_userSession;
    MNUserSettings *_userSettings;
    FBWebRTCEngineListenerAnnouncer *_announcer;
    BOOL _engineInitialized;
    int _videoWidth;
    int _videoHeight;
    NSString *_frontCameraUniqueId;
    NSString *_backCameraUniqueId;
    FBWebRTCVoipAudioSession *_currentCallAudioSession;
    FBWebRTCCallModel *_currentCall;
    FBWebRTCCallConnectionStatus *_currentConnectionStatus;
    FBMUser *_peerUser;
    unsigned int _callState;
    BOOL _hasConnected;
    BOOL _hasConnectedWithVideo;
    BOOL _isMuted;
    BOOL _isSpeakerPhone;
    BOOL _isOutboundCall;
    BOOL _isDirectVideoCall;
    BOOL _isVideoCallAnsweredAsAudioCall;
    BOOL _localVideoSupported;
    BOOL _remoteVideoSupported;
    BOOL _callWaitingSupported;
    BOOL _isVideoEscalationRequired;
    long long _callId;
    NSNumber *_remoteVideoSource;
    unsigned int _currentCamera;
    id _rendererWindow;
    NSNumber *_startTimestamp;
    NSNumber *_endTimestamp;
}

@property(readonly, nonatomic) FBWebRTCCallConnectionStatus *currentConnectionStatus; // @synthesize currentConnectionStatus=_currentConnectionStatus;
@property(readonly, nonatomic) FBWebRTCCallModel *currentCall; // @synthesize currentCall=_currentCall;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_promptForCamera:(BOOL)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (void)_updateIsSpeakerPhone:(BOOL)arg1;
- (void)_updateDefaultSpeakerMode;
- (void)_createAudioSession;
- (void)audioVolumeChanged:(int)arg1;
- (void)audioRouteUpdated:(int)arg1;
- (void)audioRouteChangedToSpeakerphone:(BOOL)arg1;
- (void)handleEndAudioInterrupt;
- (void)handleBeginAudioInterrupt;
- (void)_logVideoFrameSizeExperiment;
- (void)_initializeVideoFrameSize;
- (id)_currentCameraId;
- (void)_resetCameraToDefault;
- (void)_initializeAvailableCameras;
- (void)_notifyCallTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned int)arg2;
- (void)_notifyCallAbortedWithFailedDeviceRequest:(unsigned int)arg1;
- (void)_notifyCallEnded:(id)arg1 reason:(int)arg2 remoteEnded:(BOOL)arg3 callSummary:(id)arg4;
- (void)_notifyCallConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3;
- (void)_notifyCallChangedFromState:(id)arg1 toState:(id)arg2;
- (void)_notifyCallStarted:(id)arg1;
- (void)_transitionToCallState:(unsigned int)arg1;
- (void)_resetCurrentCall;
- (void)_initializeEngineIfNeeded;
- (void)releaseNativeEngine;
- (void)configureWithNativeEngine:(unique_ptr_37eb45d4)arg1 configuration:(struct WebRTCConfigInterface *)arg2;
- (void)onMessageSendError:(long long)arg1 callId:(long long)arg2 errorDomain:(id)arg3 errorCode:(int)arg4 errorDescription:(id)arg5;
- (void)onMessageSendSuccess:(long long)arg1 callId:(long long)arg2;
- (void)onThriftMessage:(id)arg1 withFBTraceMetadata:(id)arg2;
- (void)onMessage:(id)arg1 fromPeer:(long long)arg2 withFBTraceMetadata:(id)arg3;
- (void)_endCallTimeTracking;
- (void)_startCallTimeTracking;
- (void)_updateCallModel;
- (id)_createCallModel;
- (void)setIsConnected:(BOOL)arg1 isPoorAudioConnection:(BOOL)arg2 isPoorVideoConnection:(BOOL)arg3 localVideoState:(unsigned int)arg4 remoteVideoState:(unsigned int)arg5 connectionDetails:(id)arg6;
- (void)_deEscalateVideo;
- (void)onVideoEscalationTimeout;
- (void)onRemoteVideoEscalationSuccess;
- (void)onRemoteVideoEscalationResponse:(BOOL)arg1;
- (void)onRemoteVideoEscalationRequest:(BOOL)arg1;
- (void)clearRendererWindows;
- (void)removeRemoteVideoTrack:(unsigned int)arg1;
- (void)addRemoteVideoTrack:(unsigned int)arg1;
- (void)setRemoteVideoSupported:(BOOL)arg1;
- (void)switchToCallWaiting;
- (void)switchToStreaming:(BOOL)arg1;
- (void)switchToRinging;
- (void)switchToContacting;
- (void)startIncomingCall:(long long)arg1 peerUser:(id)arg2 isDirectVideoCall:(BOOL)arg3;
- (void)callEnded:(long long)arg1 reason:(int)arg2 remoteEnded:(BOOL)arg3 endCallSummary:(id)arg4;
- (void)initializeCall:(long long)arg1 peerId:(id)arg2 isOutboundCall:(BOOL)arg3 isDogfoodCall:(BOOL)arg4;
- (void)_setVideoOn:(BOOL)arg1;
- (void)_sendEscalationSuccess;
- (void)_sendEscalationResponse:(BOOL)arg1;
- (void)_sendEscalationRequest:(BOOL)arg1;
- (void)_setAudioOutputRoute:(int)arg1;
- (void)_setVolume:(int)arg1;
- (BOOL)_isCallWaitingSupported;
- (BOOL)_isLocalVideoSupported:(BOOL)arg1;
- (void)_acceptCall;
- (void)_startCallWithPeerUser:(id)arg1 callTrigger:(id)arg2 isDirectVideoCall:(BOOL)arg3;
- (void)extendAudioSession:(CDUnknownBlockType)arg1;
- (long long)currentCallId;
- (id)currentPeerId;
- (void)setVideoOrientation:(int)arg1;
- (void)toggleCamera;
- (BOOL)hasMultipleCameras;
- (void)setCurrentCamera:(unsigned int)arg1;
- (BOOL)isCameraSupported:(unsigned int)arg1;
- (void)setRendererWindow:(id)arg1;
- (void)didShowUI;
- (BOOL)isVideoCallingSupported;
- (void)resumeSendingVideo;
- (void)pauseSendingVideo;
- (void)declineVideoEscalation;
- (void)acceptVideoEscalation;
- (void)cancelRequestVideoEscalation;
- (void)requestVideoEscalation;
- (void)setSpeakerPhone:(BOOL)arg1;
- (BOOL)canSetSpeakerPhone:(BOOL)arg1;
- (void)setMute:(BOOL)arg1;
- (void)rejectWaitingCall;
- (void)acceptWaitingCall;
- (void)endCall:(int)arg1;
- (void)acceptCall;
- (void)startCallWithPeerUser:(id)arg1 callTrigger:(id)arg2 isDirectVideoCall:(BOOL)arg3 onCallStarted:(CDUnknownBlockType)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSession:(id)arg1 userSettings:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

