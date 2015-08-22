//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBLazyInitializing.h"

@class FBProviderMapData, FBWebRTCEngine, NSString;

@interface WebRTCLazyEngine : NSObject <FBLazyInitializing>
{
    FBWebRTCEngine *_engine;
    struct FBWebRTCConfigWrapper *_configInterface;
    struct FBWebRTCMessageWrapper *_signalingInterface;
    struct FBWebRTCUIWrapper *_uiInterface;
    struct FBWebRTCLogWrapper *_loggingInterface;
    struct FBWebRTCCallMonitor *_callMonitor;
    FBProviderMapData *_providerMap;
    BOOL _running;
}

- (void).cxx_destruct;
- (id)prepareLazyState;
- (void)dealloc;
- (BOOL)running;
- (id)initWithSignalingMessageInterface:(struct FBWebRTCMessageWrapper *)arg1 uiInterface:(struct FBWebRTCUIWrapper *)arg2 configInterface:(struct FBWebRTCConfigWrapper *)arg3 loggingInterface:(struct FBWebRTCLogWrapper *)arg4 callMonitor:(struct FBWebRTCCallMonitor *)arg5 providerMap:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
