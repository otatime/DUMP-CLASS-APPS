//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentLocksAbstractQueuedSynchronizer.h"

@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentAbstractFuture_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer
{
    id value_;
    JavaLangThrowable *exception_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_completeWithId_withJavaLangThrowable_withInt__params;
+ (id)__annotations_setWithId__params;
- (void)dealloc;
- (id)init;
- (BOOL)completeWithId:(id)arg1 withJavaLangThrowable:(id)arg2 withInt:(int)arg3;
- (BOOL)cancelWithBoolean:(BOOL)arg1;
- (BOOL)setExceptionWithJavaLangThrowable:(id)arg1;
- (BOOL)setWithId:(id)arg1;
- (BOOL)wasInterrupted;
- (BOOL)isCancelled;
- (BOOL)isDone;
- (id)getValue;
- (id)get;
- (id)getWithLong:(long long)arg1;
- (BOOL)tryReleaseSharedWithInt:(int)arg1;
- (int)tryAcquireSharedWithInt:(int)arg1;

@end
