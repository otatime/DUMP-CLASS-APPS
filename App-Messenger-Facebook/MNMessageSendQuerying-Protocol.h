//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMThreadKey, FBOutgoingMessage, MNMessageSendStateInfo, NSArray, NSString;

@protocol MNMessageSendQuerying <NSObject>
- (unsigned int)sizeOfSendQueueForThread:(FBMThreadKey *)arg1;
- (BOOL)isMessageWithOfflineThreadingIdInSendQueue:(NSString *)arg1;
- (FBOutgoingMessage *)outgoingMessageWithOfflineThreadingId:(NSString *)arg1;
- (NSArray *)outgoingMessagesWithSendStatesForThreadWithKey:(FBMThreadKey *)arg1;
- (MNMessageSendStateInfo *)sendStateInfoForMessageWithOfflineThreadingId:(NSString *)arg1;
@end

