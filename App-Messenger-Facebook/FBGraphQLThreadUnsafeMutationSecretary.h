//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession, NSMutableDictionary;

@interface FBGraphQLThreadUnsafeMutationSecretary : NSObject
{
    FBUserSession *_session;
    NSMutableDictionary *_mutationBookkeeperMap;
}

- (void).cxx_destruct;
- (void)mutationDidFail:(id)arg1 withError:(id)arg2;
- (void)mutationDidSucceed:(id)arg1 withPayload:(id)arg2;
- (void)mutationDidStart:(id)arg1 withRequest:(id)arg2;
- (void)registerMutation:(id)arg1;
- (void)cancelMutation:(id)arg1;
- (id)bookkeeperForMutation:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

