//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilConcurrentThreadFactory.h"

@class JavaLangBoolean, JavaLangInteger, JavaUtilConcurrentAtomicAtomicLong, NSString;

@interface ComGoogleCommonUtilConcurrentThreadFactoryBuilder_$1 : NSObject <JavaUtilConcurrentThreadFactory>
{
    id <JavaUtilConcurrentThreadFactory> val$backingThreadFactory_;
    NSString *val$nameFormat_;
    JavaUtilConcurrentAtomicAtomicLong *val$count_;
    JavaLangBoolean *val$daemon_;
    JavaLangInteger *val$priority_;
    id <JavaLangThread_UncaughtExceptionHandler> val$uncaughtExceptionHandler_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaUtilConcurrentThreadFactory:(id)arg1 withNSString:(id)arg2 withJavaUtilConcurrentAtomicAtomicLong:(id)arg3 withJavaLangBoolean:(id)arg4 withJavaLangInteger:(id)arg5 withJavaLangThread_UncaughtExceptionHandler:(id)arg6;
- (id)newThreadWithJavaLangRunnable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
