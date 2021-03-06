//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HipChatContext;

@interface HipChatOperationFactory : NSObject
{
    HipChatContext *_context;
}

@property(readonly, nonatomic) __weak HipChatContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)saveAllAccountsPreferences;
- (id)removeAccountWithAccountContext:(id)arg1;
- (id)loginWithCredentials:(id)arg1;
- (id)editAccountWithConfiguration:(id)arg1;
- (id)addAccountWithConfiguration:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

