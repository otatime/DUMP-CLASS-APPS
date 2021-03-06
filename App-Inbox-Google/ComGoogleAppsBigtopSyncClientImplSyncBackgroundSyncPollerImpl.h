//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTBackgroundSyncPoller.h"

@class ComGoogleAppsBigtopSyncClientImplSyncBackgroundSyncLooper, ComGoogleAppsBigtopSyncClientImplSyncBackgroundSyncLooper_Factory, ComGoogleCumulusCommonCollectImmutableList, JBTICommonEventListenersList, JBTICommonSapiSpan_Factory, JBTICommonScheduler, JBTSyncStatusEnum, JavaLangDouble, JavaLangInteger, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSyncBackgroundSyncPollerImpl : NSObject <JBTBackgroundSyncPoller>
{
    JBTICommonEventListenersList *listeners_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    JBTICommonScheduler *scheduler_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleCumulusCommonCollectImmutableList *subscriptionIds_;
    ComGoogleAppsBigtopSyncClientImplSyncBackgroundSyncLooper_Factory *syncIteratorFactory_;
    BOOL isStarted_;
    JBTSyncStatusEnum *syncStatus_;
    ComGoogleAppsBigtopSyncClientImplSyncBackgroundSyncLooper *currentSyncLooper_;
    BOOL hasInitialPollHappened_;
    int intervalMs_;
    int initialIntervalMs_;
    JavaLangDouble *lastPollTimeMs_;
    JavaLangDouble *startTimeMs_;
    JavaLangInteger *nextPollSchedulerToken_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_nextPollSchedulerToken_;
+ (id)__annotations_startTimeMs_;
+ (id)__annotations_lastPollTimeMs_;
+ (id)__annotations_currentSyncLooper_;
+ (id)__annotations_stopWithJBTSpan__params;
+ (id)__annotations_startWithJBTSpan__params;
+ (void)initialize;
- (void)dealloc;
- (BOOL)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (id)getSyncStatus;
- (int)getCurrentPollingIntervalMs;
- (void)onPollingIntervalsUpdated;
- (void)setInitialPollDelaySecWithInt:(int)arg1;
- (void)setPollingIntervalSecWithInt:(int)arg1;
- (void)issueErrorEventWithJBTError:(id)arg1 withJBTSpan:(id)arg2;
- (void)issueSyncStatusChangedEventWithJBTSpan:(id)arg1;
- (void)scheduleNextPollWithDouble:(double)arg1;
- (void)scheduleNextPoll;
- (void)cancelScheduledPoll;
- (void)cancelCurrentLooper;
- (void)poll;
- (BOOL)isSyncing;
- (void)stopWithJBTSpan:(id)arg1;
- (BOOL)isStarted;
- (void)startWithJBTSpan:(id)arg1;
- (id)getSubscriptionIds;
@property(readonly, copy) NSString *description;
- (id)initWithComGoogleCumulusCommonUtilClock:(id)arg1 withJBTICommonScheduler:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3 withComGoogleCumulusCommonCollectImmutableList:(id)arg4 withComGoogleAppsBigtopSyncClientImplSyncBackgroundSyncLooper_Factory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

