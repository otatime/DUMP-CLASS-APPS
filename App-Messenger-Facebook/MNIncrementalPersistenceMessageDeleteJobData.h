//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface MNIncrementalPersistenceMessageDeleteJobData : FBValueObject <NSCopying>
{
    NSString *_messageId;
    NSString *_threadFbId;
}

@property(readonly, copy, nonatomic) NSString *threadFbId; // @synthesize threadFbId=_threadFbId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)initWithMessageId:(id)arg1 threadFbId:(id)arg2;

@end

