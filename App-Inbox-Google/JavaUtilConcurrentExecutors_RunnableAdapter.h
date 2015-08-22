//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilConcurrentCallable.h"

@class NSString;

@interface JavaUtilConcurrentExecutors_RunnableAdapter : NSObject <JavaUtilConcurrentCallable>
{
    id <JavaLangRunnable> task_;
    id result_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)callInternal;
- (id)call;
- (id)initWithJavaLangRunnable:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
