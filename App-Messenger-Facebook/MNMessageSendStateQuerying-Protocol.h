//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBOutgoingMessage, MNMessageSendStateInfo, NSString;

@protocol MNMessageSendStateQuerying <NSObject>
- (MNMessageSendStateInfo *)messageSendStateInfoForMessageWithOfflineThreadingId:(NSString *)arg1;
- (FBOutgoingMessage *)messageWithOfflineThreadingId:(NSString *)arg1;
@end

