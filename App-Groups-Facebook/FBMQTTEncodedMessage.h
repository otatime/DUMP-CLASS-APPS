//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString;

@interface FBMQTTEncodedMessage : NSObject
{
    NSString *_topic;
    int _qos;
    NSData *_payload;
    NSNumber *_messageID;
}

+ (id)messageWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3;
+ (id)messageWithTopic:(id)arg1 payload:(id)arg2;
@property(retain, nonatomic) NSNumber *messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int qos; // @synthesize qos=_qos;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3;

@end

