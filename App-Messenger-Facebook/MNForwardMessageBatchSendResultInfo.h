//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSDictionary, NSSet, NSString;

@interface MNForwardMessageBatchSendResultInfo : FBValueObject <NSCopying>
{
    NSString *_batchId;
    NSSet *_succeededMessageIdsSet;
    NSDictionary *_messageIdToErrorMap;
    NSDictionary *_singleRecipientToErrorMap;
}

@property(readonly, copy, nonatomic) NSDictionary *singleRecipientToErrorMap; // @synthesize singleRecipientToErrorMap=_singleRecipientToErrorMap;
@property(readonly, copy, nonatomic) NSDictionary *messageIdToErrorMap; // @synthesize messageIdToErrorMap=_messageIdToErrorMap;
@property(readonly, copy, nonatomic) NSSet *succeededMessageIdsSet; // @synthesize succeededMessageIdsSet=_succeededMessageIdsSet;
@property(readonly, copy, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
- (void).cxx_destruct;
- (id)initWithBatchId:(id)arg1 succeededMessageIdsSet:(id)arg2 messageIdToErrorMap:(id)arg3 singleRecipientToErrorMap:(id)arg4;

@end

