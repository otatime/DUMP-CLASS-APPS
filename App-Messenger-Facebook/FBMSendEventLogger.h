//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAnalytics, FBMMQTTManager, FBMMessageAttachments;

@interface FBMSendEventLogger : NSObject
{
    FBMMQTTManager *_mqttManager;
    FBMMessageAttachments *_messageAttachmentUtils;
    FBAnalytics *_analytics;
}

- (void).cxx_destruct;
- (id)_analyticsExtrasForMessage:(id)arg1 method:(id)arg2 error:(id)arg3;
- (void)logMessageSendBatchEvent:(id)arg1 event:(id)arg2 method:(id)arg3 results:(id)arg4;
- (void)logMessageSendEvent:(id)arg1 event:(id)arg2 method:(id)arg3 error:(id)arg4;
- (id)initWithMQTTManager:(id)arg1 messageAttachmentsUtils:(id)arg2 analytics:(id)arg3;

@end

