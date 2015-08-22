//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMobileTraceRemoteTokenPtr, NSString, NSTimer;

@interface FBMMQTTPendingSendResponse : NSObject
{
    NSTimer *_timeoutTimer;
    NSString *_sendTopic;
    FBMobileTraceRemoteTokenPtr *_traceToken;
    CDUnknownBlockType _responseBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(readonly, nonatomic) FBMobileTraceRemoteTokenPtr *traceToken; // @synthesize traceToken=_traceToken;
@property(readonly, copy, nonatomic) NSString *sendTopic; // @synthesize sendTopic=_sendTopic;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
- (void).cxx_destruct;
- (id)initWithTimeoutTimer:(id)arg1 sendTopic:(id)arg2 traceToken:(id)arg3 responseBlock:(CDUnknownBlockType)arg4;

@end
