//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMMessageAppModel, NSString;

@interface FBMMessageReceivedPayload : FBValueObject <NSCopying>
{
    BOOL _launchedByUser;
    BOOL _requiresFetch;
    BOOL _isLocalSend;
    NSString *_threadFbId;
    NSString *_senderId;
    unsigned int _pushSource;
    FBMMessageAppModel *_message;
}

@property(readonly, copy, nonatomic) FBMMessageAppModel *message; // @synthesize message=_message;
@property(readonly, nonatomic) BOOL isLocalSend; // @synthesize isLocalSend=_isLocalSend;
@property(readonly, nonatomic) BOOL requiresFetch; // @synthesize requiresFetch=_requiresFetch;
@property(readonly, nonatomic) BOOL launchedByUser; // @synthesize launchedByUser=_launchedByUser;
@property(readonly, nonatomic) unsigned int pushSource; // @synthesize pushSource=_pushSource;
@property(readonly, copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(readonly, copy, nonatomic) NSString *threadFbId; // @synthesize threadFbId=_threadFbId;
- (void).cxx_destruct;
- (id)initWithThreadFbId:(id)arg1 senderId:(id)arg2 pushSource:(unsigned int)arg3 launchedByUser:(BOOL)arg4 requiresFetch:(BOOL)arg5 isLocalSend:(BOOL)arg6 message:(id)arg7;

@end
