//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSystemAudioSessionManagerListener.h"
#import "FBWebRTCEngineListener.h"

@class FBExperimentManager, FBRingingAudioSession, FBWebRTCCallModel, FBWebRTCEngine, FBWebRTCInCallSoundEffect, NSString, NSTimer;

@interface FBWebRTCRingtoneManager : NSObject <FBWebRTCEngineListener, FBSystemAudioSessionManagerListener>
{
    FBWebRTCEngine *_engine;
    FBExperimentManager *_experimentManager;
    FBRingingAudioSession *_ringingSession;
    FBWebRTCCallModel *_currentCall;
    BOOL _connectionStatusHasConnected;
    NSTimer *_searchingTimer;
    BOOL _listeningForLock;
    int _lockNotificationToken;
    BOOL _audioSessionHasStarted;
    BOOL _hasPendingPlaySearchingSound;
    BOOL _vibrationLoopShouldContinue;
    BOOL _isPlayingRepeatingSound;
    BOOL _isInterrupted;
    BOOL _isAudioConnected;
    FBWebRTCInCallSoundEffect *_incomingRingtoneSoundEffect;
    FBWebRTCInCallSoundEffect *_ringbackSoundEffect;
    FBWebRTCInCallSoundEffect *_searchingSoundEffect;
    FBWebRTCInCallSoundEffect *_endCallSoundEffect;
    FBWebRTCInCallSoundEffect *_droppedCallSoundEffect;
    FBWebRTCInCallSoundEffect *_remoteVideoStartedSoundEffect;
    FBWebRTCInCallSoundEffect *_connectedSoundEffect;
    FBWebRTCInCallSoundEffect *_disconnectedSoundEffect;
    FBWebRTCInCallSoundEffect *_currentRepeatingSoundEffect;
}

@property(nonatomic) BOOL isAudioConnected; // @synthesize isAudioConnected=_isAudioConnected;
@property(nonatomic) BOOL isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(nonatomic) BOOL isPlayingRepeatingSound; // @synthesize isPlayingRepeatingSound=_isPlayingRepeatingSound;
@property(nonatomic) BOOL vibrationLoopShouldContinue; // @synthesize vibrationLoopShouldContinue=_vibrationLoopShouldContinue;
@property(nonatomic) BOOL hasPendingPlaySearchingSound; // @synthesize hasPendingPlaySearchingSound=_hasPendingPlaySearchingSound;
@property(nonatomic) BOOL audioSessionHasStarted; // @synthesize audioSessionHasStarted=_audioSessionHasStarted;
@property(nonatomic) __weak FBWebRTCInCallSoundEffect *currentRepeatingSoundEffect; // @synthesize currentRepeatingSoundEffect=_currentRepeatingSoundEffect;
@property(readonly, nonatomic) FBWebRTCInCallSoundEffect *disconnectedSoundEffect; // @synthesize disconnectedSoundEffect=_disconnectedSoundEffect;
@property(readonly, nonatomic) FBWebRTCInCallSoundEffect *connectedSoundEffect; // @synthesize connectedSoundEffect=_connectedSoundEffect;
@property(readonly, nonatomic) FBWebRTCInCallSoundEffect *remoteVideoStartedSoundEffect; // @synthesize remoteVideoStartedSoundEffect=_remoteVideoStartedSoundEffect;
@property(readonly, nonatomic) FBWebRTCInCallSoundEffect *droppedCallSoundEffect; // @synthesize droppedCallSoundEffect=_droppedCallSoundEffect;
@property(readonly, nonatomic) FBWebRTCInCallSoundEffect *endCallSoundEffect; // @synthesize endCallSoundEffect=_endCallSoundEffect;
@property(readonly, nonatomic) FBWebRTCInCallSoundEffect *searchingSoundEffect; // @synthesize searchingSoundEffect=_searchingSoundEffect;
@property(readonly, nonatomic) FBWebRTCInCallSoundEffect *ringbackSoundEffect; // @synthesize ringbackSoundEffect=_ringbackSoundEffect;
@property(readonly, nonatomic) FBWebRTCInCallSoundEffect *incomingRingtoneSoundEffect; // @synthesize incomingRingtoneSoundEffect=_incomingRingtoneSoundEffect;
- (void).cxx_destruct;
- (void)audioSessionManagerNotedRouteChange:(id)arg1;
- (void)audioSessionManagerUpdatedAudioSession:(id)arg1;
- (void)updateToneVolume;
- (BOOL)_shouldPlayWithReducedVolume;
- (void)_startRinging;
- (void)_stopConnecting;
- (void)_startConnecting;
- (void)_startContacting;
- (void)_transitionFromCallState:(unsigned int)arg1 toCallState:(unsigned int)arg2;
- (void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned int)arg2;
- (void)callAbortedWithFailedDeviceRequest:(unsigned int)arg1;
- (void)callEnded:(id)arg1 reason:(int)arg2 remoteEnded:(BOOL)arg3 callSummary:(id)arg4;
- (void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3;
- (void)callChangedFromState:(id)arg1 toState:(id)arg2;
- (void)callStarted:(id)arg1;
- (void)stopAll;
- (void)_stopListeningForDeviceLockPress;
- (void)_startListeningForDeviceLockPress;
- (BOOL)_isRunningInBackground;
- (void)_playEndCallTone:(BOOL)arg1 afterDelay:(double)arg2;
- (BOOL)_isDroppedCall:(int)arg1;
- (BOOL)_shouldPlayEndCallToneForRemoteEnded:(BOOL)arg1 callEndReason:(int)arg2;
- (void)_resumeCurrentRepeatingSoundEffect;
- (void)_pauseCurrentRepeatingSoundEffect;
- (void)_stopCurrentRepeatingSoundEffect;
- (void)_vibrateAndLoop:(int)arg1;
- (void)_playRepeatingSoundEffect:(id)arg1;
- (void)_stopPlayingSound;
- (void)_stopVibrationLoop;
- (void)_playVibrationLoop;
- (void)playEndCallTone:(BOOL)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)_onSearchingTimer;
- (void)_cancelSearchingTimer;
- (void)_startSearchingTimer;
- (void)_playSearchingSound;
- (void)_playConnectedSound;
- (void)_playSearchingSoundIfPending;
- (void)_playDisconnectedAndSearchingSound;
- (void)_playRemoteVideoStartedSound;
- (void)playRingbackSound;
- (void)_vibrateAndPlayIncomingRingtone;
- (void)_playRingingSound:(CDUnknownBlockType)arg1;
- (void)_responseToAudioDeviceInterrupt:(id)arg1;
- (void)_startRingingInForegroundIfNeeded;
- (void)configureWithEngine:(id)arg1;
- (void)dealloc;
- (id)initWithExperimentManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

