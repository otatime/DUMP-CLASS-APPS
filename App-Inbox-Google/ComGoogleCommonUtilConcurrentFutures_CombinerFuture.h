//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentListenableFutureTask.h"

@class ComGoogleCommonCollectImmutableList;

@interface ComGoogleCommonUtilConcurrentFutures_CombinerFuture : ComGoogleCommonUtilConcurrentListenableFutureTask
{
    ComGoogleCommonCollectImmutableList *futures_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)setExceptionWithJavaLangThrowable:(id)arg1;
- (void)done;
- (BOOL)cancelWithBoolean:(BOOL)arg1;
- (id)initWithJavaUtilConcurrentCallable:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;

@end

