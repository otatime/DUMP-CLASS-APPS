//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNMessageSendQueueStore, MNMessageSendStateStore, NSObject<OS_dispatch_queue>;

@interface MNMQTTMessageBatchCreator : NSObject
{
    MNMessageSendStateStore *_sendStateStore;
    MNMessageSendQueueStore *_sendQueueStore;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)mqttMessageBatchBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned int)arg2;
- (id)initWithSendStateStore:(id)arg1 sendQueueStore:(id)arg2 queue:(id)arg3;

@end

