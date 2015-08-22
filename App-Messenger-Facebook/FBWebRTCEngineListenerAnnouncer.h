//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBWebRTCEngineListener.h"

@class NSString;

@interface FBWebRTCEngineListenerAnnouncer : FBAnnouncerBase <FBWebRTCEngineListener>
{
}

- (void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned int)arg2;
- (void)callAbortedWithFailedDeviceRequest:(unsigned int)arg1;
- (void)callEnded:(id)arg1 reason:(int)arg2 remoteEnded:(BOOL)arg3 callSummary:(id)arg4;
- (void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3;
- (void)callChangedFromState:(id)arg1 toState:(id)arg2;
- (void)callStarted:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

