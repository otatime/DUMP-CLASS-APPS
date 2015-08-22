//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLThreadUnsafeMutationSecretary, NSObject<OS_dispatch_queue>;

@interface FBGraphQLMutationSecretary : NSObject
{
    FBGraphQLThreadUnsafeMutationSecretary *_secretary;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (void)mutationDidFail:(id)arg1 withError:(id)arg2;
- (void)mutationDidSucceed:(id)arg1 withPayload:(id)arg2;
- (void)mutationDidStart:(id)arg1 withRequest:(id)arg2;
- (void)cancelMutation:(id)arg1;
- (void)registerMutation:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end
