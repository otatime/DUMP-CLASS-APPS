//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilConcurrentRunnableFuture.h"

@class NSString;

@interface JavaUtilConcurrentFutureTask : NSObject <JavaUtilConcurrentRunnableFuture>
{
    // Error parsing type: Ai, name: state_
    id <JavaUtilConcurrentCallable> callable_;
    id outcome_;
    // Error parsing type: A^v, name: runner_
    // Error parsing type: A^v, name: waiters_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (void)ensureLoadedWithIOSClass:(id)arg1;
- (void)__javaClone;
- (void)dealloc;
- (void)removeWaiterWithJavaUtilConcurrentFutureTask_WaitNode:(id)arg1;
- (int)awaitDoneWithBoolean:(BOOL)arg1 withLong:(long long)arg2;
- (void)finishCompletion;
- (void)handlePossibleCancellationInterruptWithInt:(int)arg1;
- (BOOL)runAndReset;
- (void)run;
- (void)setExceptionWithJavaLangThrowable:(id)arg1;
- (void)setWithId:(id)arg1;
- (void)done;
- (id)getWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (id)get;
- (BOOL)cancelWithBoolean:(BOOL)arg1;
- (BOOL)isDone;
- (BOOL)isCancelled;
- (id)initWithJavaLangRunnable:(id)arg1 withId:(id)arg2;
- (id)initWithJavaUtilConcurrentCallable:(id)arg1;
- (id)reportWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
