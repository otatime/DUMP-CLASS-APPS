//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentFutureTask.h"

#import "JavaUtilConcurrentRunnableScheduledFuture.h"

@class JavaUtilConcurrentScheduledThreadPoolExecutor, NSString;

@interface JavaUtilConcurrentScheduledThreadPoolExecutor_ScheduledFutureTask : JavaUtilConcurrentFutureTask <JavaUtilConcurrentRunnableScheduledFuture>
{
    JavaUtilConcurrentScheduledThreadPoolExecutor *this$0_;
    long long sequenceNumber_;
    long long time_;
    long long period_;
    id <JavaUtilConcurrentRunnableScheduledFuture> outerTask_;
    int heapIndex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)run;
- (BOOL)cancelWithBoolean:(BOOL)arg1;
- (void)setNextRunTime;
- (BOOL)isPeriodic;
- (int)compareToWithId:(id)arg1;
- (long long)getDelayWithJavaUtilConcurrentTimeUnitEnum:(id)arg1;
- (id)initWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1 withJavaUtilConcurrentCallable:(id)arg2 withLong:(long long)arg3;
- (id)initWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1 withJavaLangRunnable:(id)arg2 withId:(id)arg3 withLong:(long long)arg4 withLong:(long long)arg5;
- (id)initWithJavaUtilConcurrentScheduledThreadPoolExecutor:(id)arg1 withJavaLangRunnable:(id)arg2 withId:(id)arg3 withLong:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
