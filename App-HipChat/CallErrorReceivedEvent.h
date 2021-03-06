//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CallEvent.h"

@class NSString;

@interface CallErrorReceivedEvent : CallEvent
{
    NSString *_errorType;
    NSString *_errorMessage;
}

@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSString *errorType; // @synthesize errorType=_errorType;
- (void).cxx_destruct;
- (id)initWithAccountContext:(id)arg1 fromJID:(id)arg2 errorType:(id)arg3 errorMessage:(id)arg4;

@end

