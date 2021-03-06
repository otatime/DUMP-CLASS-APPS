//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageSendStateTransitionExecuting.h"

@class MNMessageSendStateTransitionLegacyStrategyExecutor, NSString;

@interface MNMessageSendStateTransitionLegacyStrategy : NSObject <MNMessageSendStateTransitionExecuting>
{
    MNMessageSendStateTransitionLegacyStrategyExecutor *_executor;
}

- (void).cxx_destruct;
- (id)stateMachineAnalyticsExtras;
- (void)_transitionToCancelledStateFromState:(id)arg1 message:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_transitionToFailedStateFromState:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)_transitionToSyncedStateFromState:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)_transitionToSentStateFromState:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)_transitionToPublishedStateFromState:(id)arg1 message:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_transitionToSendingStateWithContext:(id)arg1 fromState:(id)arg2 message:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)_transitionToPreparingStateFromState:(id)arg1 message:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_transitionToQueuedStateFromState:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)executeTransition:(id)arg1 message:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)initWithConfiguration:(id)arg1 requester:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

