//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMMessageAttachment, FBMMessageAttribution, FBMMessageLocation, FBMParticipantInfo, FBMStringWithRedactedDescription, FBMThreadKey, FBMessageOutgoingAttribution, NSArray, NSDictionary, NSMutableArray, NSString;

@interface FBMMutableMessage : NSObject
{
    BOOL _isIncomplete;
    BOOL _sendNonRetriable;
    BOOL _sendHasFailedBefore;
    NSString *_messageId;
    FBMThreadKey *_threadKey;
    FBMStringWithRedactedDescription *_text;
    NSString *_adminSnippet;
    FBMMessageLocation *_location;
    NSArray *_DEPRECATED_attachments;
    NSDictionary *_DEPRECATED_shareMap;
    FBMMessageAttachment *_attachment;
    NSDictionary *_logMessage;
    NSArray *_tags;
    NSDictionary *_clientTags;
    FBMParticipantInfo *_DEPRECATED_senderInfo;
    NSMutableArray *_outgoingAttachments;
    unsigned int _type;
    NSString *_offlineThreadingId;
    unsigned int _sendState;
    NSString *_sendNonRetriableErrorText;
    FBMMessageAttribution *_attribution;
    FBMessageOutgoingAttribution *_outgoingAttribution;
    unsigned long long _timestamp;
    long long _actionId;
    long long _sendTimestamp;
}

@property(copy, nonatomic) FBMessageOutgoingAttribution *outgoingAttribution; // @synthesize outgoingAttribution=_outgoingAttribution;
@property(copy, nonatomic) FBMMessageAttribution *attribution; // @synthesize attribution=_attribution;
@property(nonatomic) BOOL sendHasFailedBefore; // @synthesize sendHasFailedBefore=_sendHasFailedBefore;
@property(copy, nonatomic) NSString *sendNonRetriableErrorText; // @synthesize sendNonRetriableErrorText=_sendNonRetriableErrorText;
@property(nonatomic) BOOL sendNonRetriable; // @synthesize sendNonRetriable=_sendNonRetriable;
@property(nonatomic) unsigned int sendState; // @synthesize sendState=_sendState;
@property(nonatomic) long long sendTimestamp; // @synthesize sendTimestamp=_sendTimestamp;
@property(nonatomic) BOOL isIncomplete; // @synthesize isIncomplete=_isIncomplete;
@property(copy, nonatomic) NSString *offlineThreadingId; // @synthesize offlineThreadingId=_offlineThreadingId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) long long actionId; // @synthesize actionId=_actionId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableArray *outgoingAttachments; // @synthesize outgoingAttachments=_outgoingAttachments;
@property(retain, nonatomic) FBMParticipantInfo *DEPRECATED_senderInfo; // @synthesize DEPRECATED_senderInfo=_DEPRECATED_senderInfo;
@property(copy, nonatomic) NSDictionary *clientTags; // @synthesize clientTags=_clientTags;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSDictionary *logMessage; // @synthesize logMessage=_logMessage;
@property(copy, nonatomic) FBMMessageAttachment *attachment; // @synthesize attachment=_attachment;
@property(copy, nonatomic) NSDictionary *DEPRECATED_shareMap; // @synthesize DEPRECATED_shareMap=_DEPRECATED_shareMap;
@property(copy, nonatomic) NSArray *DEPRECATED_attachments; // @synthesize DEPRECATED_attachments=_DEPRECATED_attachments;
@property(copy, nonatomic) FBMMessageLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *adminSnippet; // @synthesize adminSnippet=_adminSnippet;
@property(copy, nonatomic) FBMStringWithRedactedDescription *text; // @synthesize text=_text;
@property(copy, nonatomic) FBMThreadKey *threadKey; // @synthesize threadKey=_threadKey;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int source;
@property(readonly, copy, nonatomic) NSString *senderId;
@property(readonly, nonatomic) long long rawActionId;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)setActionIdFromTimestamp:(long long)arg1;

@end

