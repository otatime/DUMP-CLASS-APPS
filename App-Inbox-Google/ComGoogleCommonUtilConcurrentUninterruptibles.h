//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCommonUtilConcurrentUninterruptibles : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (BOOL)tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3 withJavaUtilConcurrentTimeUnitEnum:(id)arg4;
+ (BOOL)tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
+ (void)sleepUninterruptiblyWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
+ (void)putUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id)arg1 withId:(id)arg2;
+ (id)takeUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id)arg1;
+ (void)joinUninterruptiblyWithJavaLangThread:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
+ (id)getUninterruptiblyWithJavaUtilConcurrentFuture:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
+ (id)getUninterruptiblyWithJavaUtilConcurrentFuture:(id)arg1;
+ (void)joinUninterruptiblyWithJavaLangThread:(id)arg1;
+ (BOOL)awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
+ (void)awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch:(id)arg1;
- (id)init;

@end
