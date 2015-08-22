//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMThreadKey, NSSet;

@interface FBOutgoingMessageRecipientInfo : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    FBMThreadKey *_singleRecipientInfo_threadKey;
    NSSet *_multiRecipientInfo_threadKeys;
}

+ (id)singleRecipientInfoWithThreadKey:(id)arg1;
+ (id)multiRecipientInfoWithThreadKeys:(id)arg1;
- (void).cxx_destruct;
- (void)matchSingleRecipientInfo:(CDUnknownBlockType)arg1 multiRecipientInfo:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end
