//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBEncryptedChannelManager;

@interface FBUDPPrimer : NSObject
{
    FBEncryptedChannelManager *_encryptedChannelManager;
    id <FBUDPPrimerTimeSyncer> _timeSyncer;
    unsigned int _port;
}

+ (BOOL)_sendUDPPacketToIPAddress:(id)arg1 port:(unsigned int)arg2 data:(id)arg3;
+ (id)_encodedStringForURL:(id)arg1 headers:(id)arg2 originalHost:(id)arg3 channel:(id)arg4 estimatedServerUnixTime:(int)arg5;
+ (id)sendPrimerPacket:(id)arg1 timeSyncer:(id)arg2;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
- (void).cxx_destruct;
- (id)primerPacketForUrl:(id)arg1 headers:(id)arg2 userAgent:(id)arg3 originalHost:(id)arg4 clientQueryID:(id)arg5;
- (id)sendPrimerPacket:(id)arg1;
- (id)init;
- (id)initWithEncryptedChannelManager:(id)arg1 timeSyncer:(id)arg2;

@end

