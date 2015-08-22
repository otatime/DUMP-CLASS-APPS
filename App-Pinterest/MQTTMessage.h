//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MQTTMessage : NSObject
{
    BOOL _retained;
    unsigned short _mid;
    NSString *_topic;
    NSData *_payload;
    unsigned int _qos;
}

@property unsigned int qos; // @synthesize qos=_qos;
@property BOOL retained; // @synthesize retained=_retained;
@property(copy) NSData *payload; // @synthesize payload=_payload;
@property(copy) NSString *topic; // @synthesize topic=_topic;
@property unsigned short mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
- (id)payloadString;
- (id)initWithTopic:(id)arg1 payload:(id)arg2 qos:(unsigned int)arg3 retain:(BOOL)arg4 mid:(short)arg5;

@end

