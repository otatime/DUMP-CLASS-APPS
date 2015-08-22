//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNMessageSendBatchingInfo;

@interface MNMessageSendingContext : FBValueObject <NSCopying>
{
    BOOL _canMessageSendViaExtension;
    BOOL _canMessageSendViaMQTT;
    BOOL _hasNetworkConnection;
    BOOL _hasMQTTConnection;
    MNMessageSendBatchingInfo *_batchingInfo;
}

@property(readonly, copy, nonatomic) MNMessageSendBatchingInfo *batchingInfo; // @synthesize batchingInfo=_batchingInfo;
@property(readonly, nonatomic) BOOL hasMQTTConnection; // @synthesize hasMQTTConnection=_hasMQTTConnection;
@property(readonly, nonatomic) BOOL hasNetworkConnection; // @synthesize hasNetworkConnection=_hasNetworkConnection;
@property(readonly, nonatomic) BOOL canMessageSendViaMQTT; // @synthesize canMessageSendViaMQTT=_canMessageSendViaMQTT;
@property(readonly, nonatomic) BOOL canMessageSendViaExtension; // @synthesize canMessageSendViaExtension=_canMessageSendViaExtension;
- (void).cxx_destruct;
- (id)initWithCanMessageSendViaExtension:(BOOL)arg1 canMessageSendViaMQTT:(BOOL)arg2 hasNetworkConnection:(BOOL)arg3 hasMQTTConnection:(BOOL)arg4 batchingInfo:(id)arg5;

@end
