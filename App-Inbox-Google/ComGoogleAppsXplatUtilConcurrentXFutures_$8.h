//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCommonUtilConcurrentSettableFuture, NSString;

@interface ComGoogleAppsXplatUtilConcurrentXFutures_$8 : NSObject <JavaLangRunnable>
{
    ComGoogleCommonUtilConcurrentSettableFuture *val$future_;
    id <JavaUtilConcurrentCallable> val$task_;
    id <ComGoogleAppsXplatUtilConcurrentScheduledExecutor> val$scheduled_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleCommonUtilConcurrentSettableFuture:(id)arg1 withJavaUtilConcurrentCallable:(id)arg2 withComGoogleAppsXplatUtilConcurrentScheduledExecutor:(id)arg3;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
