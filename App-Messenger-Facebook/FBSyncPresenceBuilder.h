//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface FBSyncPresenceBuilder : NSObject
{
    NSString *_personId;
    NSDate *_lastActiveTime;
    unsigned int _presenceState;
    unsigned int _clientType;
    unsigned int _voipCapabilities;
}

+ (id)syncPresenceFromExistingSyncPresence:(id)arg1;
+ (id)syncPresence;
- (void).cxx_destruct;
- (id)withVoipCapabilities:(unsigned int)arg1;
- (id)withClientType:(unsigned int)arg1;
- (id)withPresenceState:(unsigned int)arg1;
- (id)withLastActiveTime:(id)arg1;
- (id)withPersonId:(id)arg1;
- (id)build;

@end
