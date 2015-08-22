//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBHttpAttempt, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface FBHttpRequestInternalState : NSObject
{
    BOOL _completedFlag;
    BOOL _cancelRequestedFlag;
    BOOL _hardTimeoutReached;
    id <FBHttpRequest> _request;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <FBHttpRequestDelegate> _delegate;
    FBHttpAttempt *_currentAttempt;
    unsigned int _phase;
    unsigned int _attempts;
    unsigned int _nonTransientFailures;
    int _priority;
    unsigned int _priorityOrder;
    NSObject<OS_dispatch_source> *_hardTimeoutTimer;
    double _addTime;
    unsigned long long _nextRetryAtNanos;
    unsigned long long _currentDelayNanos;
}

@property(nonatomic) BOOL hardTimeoutReached; // @synthesize hardTimeoutReached=_hardTimeoutReached;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *hardTimeoutTimer; // @synthesize hardTimeoutTimer=_hardTimeoutTimer;
@property(nonatomic) unsigned int priorityOrder; // @synthesize priorityOrder=_priorityOrder;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long currentDelayNanos; // @synthesize currentDelayNanos=_currentDelayNanos;
@property(nonatomic) unsigned long long nextRetryAtNanos; // @synthesize nextRetryAtNanos=_nextRetryAtNanos;
@property(nonatomic) unsigned int nonTransientFailures; // @synthesize nonTransientFailures=_nonTransientFailures;
@property(nonatomic) unsigned int attempts; // @synthesize attempts=_attempts;
@property(nonatomic) BOOL cancelRequestedFlag; // @synthesize cancelRequestedFlag=_cancelRequestedFlag;
@property(readonly, nonatomic) BOOL completedFlag; // @synthesize completedFlag=_completedFlag;
@property(nonatomic) unsigned int phase; // @synthesize phase=_phase;
@property(retain, nonatomic) FBHttpAttempt *currentAttempt; // @synthesize currentAttempt=_currentAttempt;
@property(readonly, nonatomic) double addTime; // @synthesize addTime=_addTime;
@property(readonly, nonatomic) __weak id <FBHttpRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) id <FBHttpRequest> request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 callbackQueue:(id)arg3 addTime:(double)arg4 initialClientPriority:(int)arg5;

@end
