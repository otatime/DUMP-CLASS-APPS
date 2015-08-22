//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FBMThreadReadUpdateInfo : NSObject <NSCopying>
{
    unsigned int _subtype;
    long long _syncProtocol_sequenceId;
    unsigned long long _syncProtocol_messageServerTime;
    long long _legacyFQLPlusMQTT_threadActionId;
    unsigned long long _legacyFQLPlusMQTT_messageServerTime;
}

+ (id)syncProtocolWithSequenceId:(long long)arg1 messageServerTime:(unsigned long long)arg2;
+ (id)legacyFQLPlusMQTTWithThreadActionId:(long long)arg1 messageServerTime:(unsigned long long)arg2;
- (void)matchSyncProtocol:(CDUnknownBlockType)arg1 legacyFQLPlusMQTT:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
