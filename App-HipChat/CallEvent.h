//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatEvent.h"

@class AccountContext, XMPPJID;

@interface CallEvent : HipChatEvent
{
    AccountContext *_accountContext;
    XMPPJID *_fromJID;
}

@property(readonly, nonatomic) XMPPJID *fromJID; // @synthesize fromJID=_fromJID;
@property(readonly, nonatomic) AccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFromCurrentUser) BOOL fromCurrentUser;
- (id)initWithAccountContext:(id)arg1 fromJID:(id)arg2;

@end
