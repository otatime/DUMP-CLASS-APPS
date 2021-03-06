//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBOutgoingMessage, MNMessageSendStateInfo;

@interface MNOutgoingMessageWithSendStates : FBValueObject <NSCopying, NSCoding>
{
    FBOutgoingMessage *_message;
    MNMessageSendStateInfo *_sendStates;
}

@property(readonly, copy, nonatomic) MNMessageSendStateInfo *sendStates; // @synthesize sendStates=_sendStates;
@property(readonly, copy, nonatomic) FBOutgoingMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 sendStates:(id)arg2;

@end

