//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilConcurrentExecutor.h"
#import "NSObject.h"

@class JavaUtilConcurrentTimeUnitEnum;

@protocol JavaUtilConcurrentExecutorService <JavaUtilConcurrentExecutor, NSObject, JavaObject>
- (id)invokeAnyWithJavaUtilCollection:(id <JavaUtilCollection>)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)arg3;
- (id)invokeAnyWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (id <JavaUtilList>)invokeAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)arg3;
- (id <JavaUtilList>)invokeAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (id <JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id <JavaLangRunnable>)arg1;
- (id <JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id <JavaLangRunnable>)arg1 withId:(id)arg2;
- (id <JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id <JavaUtilConcurrentCallable>)arg1;
- (BOOL)awaitTerminationWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)arg2;
- (BOOL)isTerminated;
- (BOOL)isShutdown;
- (id <JavaUtilList>)shutdownNow;
- (void)shutdown;
@end
