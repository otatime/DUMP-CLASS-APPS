//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemExtensibleMessageAttachment, FBMemImage, FBMemLocation, FBMemMessagingParticipant, FBMemSticker, FBMemTextWithEntities, NSArray, NSDate, NSNumber, NSString;

@protocol FBQueriedMessageFieldsProtocol <FBModelObjectProtocol>
- (NSDate *)voiceCallStartTime;
- (int)voiceCallDurationValue;
- (NSNumber *)voiceCallDuration;
- (BOOL)voiceCallAnsweredValue;
- (NSNumber *)voiceCallAnswered;
- (NSDate *)videoCallStartTime;
- (int)videoCallDurationValue;
- (NSNumber *)videoCallDuration;
- (BOOL)videoCallAnsweredValue;
- (NSNumber *)videoCallAnswered;
- (BOOL)unreadValue;
- (NSNumber *)unread;
- (NSString *)transferId;
- (NSString *)timestampPrecise;
- (NSDate *)timestamp;
- (NSString *)threadName;
- (NSArray *)tagsList;
- (FBMemSticker *)sticker;
- (NSString *)snippet;
- (NSArray *)participantsRemoved;
- (NSArray *)participantsAdded;
- (NSString *)pageAdminReplyType;
- (NSString *)offlineThreadingId;
- (NSString *)messageType;
- (FBMemMessagingParticipant *)messageSender;
- (NSString *)messageId;
- (FBMemTextWithEntities *)message;
- (FBMemLocation *)location;
- (BOOL)isSenderAttributedValue;
- (NSNumber *)isSenderAttributed;
- (FBMemImage *)image;
- (NSString *)graphQLID;
- (FBMemExtensibleMessageAttachment *)extensibleAttachment;
- (NSArray *)blobAttachments;
- (NSString *)adminTextType;
@end

