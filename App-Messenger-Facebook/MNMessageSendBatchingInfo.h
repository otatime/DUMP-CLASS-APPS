//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MNMessageSendBatchingInfo : NSObject <NSCopying>
{
    unsigned int _subtype;
    BOOL _batched_isBatchHead;
}

+ (id)none;
+ (id)batchedWithIsBatchHead:(BOOL)arg1;
- (void)matchNone:(CDUnknownBlockType)arg1 batched:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

