//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageSendStateMachineAnalyticsLogging.h"

@class MNMessageSendAutoRetryConfiguration, NSObject<OS_dispatch_queue>, NSString;

@interface MNMessageSendStateTransitionAutoRetryStrategyExecutor : NSObject <MNMessageSendStateMachineAnalyticsLogging>
{
    MNMessageSendAutoRetryConfiguration *_configuration;
    id <MNMessageSendStateMachineSendRequester> _requester;
    id <FBClock> _clock;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _numberOfAttemptsOnExtension;
    unsigned int _numberOfAttemptsOnMQTT;
    unsigned int _numberOfAttemptsOnGraph;
    unsigned int _maxSizeOfBatchOnMQTT;
    double _startTime;
}

- (void).cxx_destruct;
- (id)stateMachineAnalyticsExtras;
- (void)_resetAttemptCounters;
- (void)_resetInternalStates;
- (double)_sendDuration;
- (double)_currentTimestamp;
- (void)_markStartTime;
- (void)_resetAttemptCountersAndRetryMessage:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)_prepareAttachmentWithSendingContext:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)_fallBackToSendMessageViaGraph:(id)arg1 sendingContext:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_sendBatchedMessageViaMQTTBeginningWithMessage:(id)arg1 sendingContext:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_sendSingleMessageViaMQTT:(id)arg1 sendingContext:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_sendMessageViaMQTT:(id)arg1 sendingContext:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_sendMessageViaExtension:(id)arg1 sendingContext:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)_continueTransitionToState:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)_finishCurrentTransitionWithSuccess:(BOOL)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)transitionToSyncedWithResultBlock:(CDUnknownBlockType)arg1;
- (void)transitionToFailedWithResultBlock:(CDUnknownBlockType)arg1;
- (void)transitionToCancelledWithMessage:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)transitionToQueuedWithResultBlock:(CDUnknownBlockType)arg1;
- (void)transitionFromSentToPublishedWithResultBlock:(CDUnknownBlockType)arg1;
- (void)transitionFromPublishedToSentWithResultBlock:(CDUnknownBlockType)arg1;
- (void)transitionFromPublishedToSending:(id)arg1 message:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)transitionFromSendingToSentWithResultBlock:(CDUnknownBlockType)arg1;
- (void)transitionFromSendingToPublishedWithResultBlock:(CDUnknownBlockType)arg1;
- (void)transitionFromSendingToSending:(id)arg1 message:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)transitionFromPreparingToSending:(id)arg1 message:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)transitionFromQueuedToCancelledWithResultBlock:(CDUnknownBlockType)arg1;
- (void)transitionFromQueuedToSending:(id)arg1 message:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)transitionFromQueuedToPreparingWithMessage:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1 requester:(id)arg2 clock:(id)arg3 queue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
