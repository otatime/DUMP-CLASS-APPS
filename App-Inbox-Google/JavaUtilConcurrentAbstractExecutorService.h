//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilConcurrentExecutorService.h"

@class NSString;

@interface JavaUtilConcurrentAbstractExecutorService : NSObject <JavaUtilConcurrentExecutorService>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)init;
- (id)invokeAllWithJavaUtilCollection:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
- (id)invokeAllWithJavaUtilCollection:(id)arg1;
- (id)invokeAnyWithJavaUtilCollection:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
- (id)invokeAnyWithJavaUtilCollection:(id)arg1;
- (id)doInvokeAnyWithJavaUtilCollection:(id)arg1 withBoolean:(BOOL)arg2 withLong:(long long)arg3;
- (id)submitWithJavaUtilConcurrentCallable:(id)arg1;
- (id)submitWithJavaLangRunnable:(id)arg1 withId:(id)arg2;
- (id)submitWithJavaLangRunnable:(id)arg1;
- (id)newTaskForWithJavaUtilConcurrentCallable:(id)arg1;
- (id)newTaskForWithJavaLangRunnable:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

