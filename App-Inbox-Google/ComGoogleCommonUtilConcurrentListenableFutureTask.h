//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentFutureTask.h"

#import "ComGoogleCommonUtilConcurrentListenableFuture.h"

@class ComGoogleCommonUtilConcurrentExecutionList, NSString;

@interface ComGoogleCommonUtilConcurrentListenableFutureTask : JavaUtilConcurrentFutureTask <ComGoogleCommonUtilConcurrentListenableFuture>
{
    ComGoogleCommonUtilConcurrentExecutionList *executionList_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJavaLangRunnable_withId__params;
+ (id)__annotations_createWithJavaLangRunnable_withId__params;
+ (id)createWithJavaLangRunnable:(id)arg1 withId:(id)arg2;
+ (id)createWithJavaUtilConcurrentCallable:(id)arg1;
- (void)dealloc;
- (void)done;
- (void)addListenerWithJavaLangRunnable:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;
- (id)initWithJavaLangRunnable:(id)arg1 withId:(id)arg2;
- (id)initWithJavaUtilConcurrentCallable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
