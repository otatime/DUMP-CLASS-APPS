//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBWebRTCCallConnectionStatus : FBValueObject <NSCopying>
{
    BOOL _isConnected;
    BOOL _isPoorAudioConnection;
    BOOL _isPoorVideoConnection;
    unsigned int _localVideoState;
    unsigned int _remoteVideoState;
    NSString *_connectionDetails;
}

@property(readonly, copy, nonatomic) NSString *connectionDetails; // @synthesize connectionDetails=_connectionDetails;
@property(readonly, nonatomic) unsigned int remoteVideoState; // @synthesize remoteVideoState=_remoteVideoState;
@property(readonly, nonatomic) unsigned int localVideoState; // @synthesize localVideoState=_localVideoState;
@property(readonly, nonatomic) BOOL isPoorVideoConnection; // @synthesize isPoorVideoConnection=_isPoorVideoConnection;
@property(readonly, nonatomic) BOOL isPoorAudioConnection; // @synthesize isPoorAudioConnection=_isPoorAudioConnection;
@property(readonly, nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
- (void).cxx_destruct;
- (id)initWithIsConnected:(BOOL)arg1 isPoorAudioConnection:(BOOL)arg2 isPoorVideoConnection:(BOOL)arg3 localVideoState:(unsigned int)arg4 remoteVideoState:(unsigned int)arg5 connectionDetails:(id)arg6;

@end

