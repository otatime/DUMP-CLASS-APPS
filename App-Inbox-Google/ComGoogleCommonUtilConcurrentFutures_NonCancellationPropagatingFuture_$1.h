//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentFutureCallback.h"

@class ComGoogleCommonUtilConcurrentFutures_NonCancellationPropagatingFuture, NSString;

@interface ComGoogleCommonUtilConcurrentFutures_NonCancellationPropagatingFuture_$1 : NSObject <ComGoogleCommonUtilConcurrentFutureCallback>
{
    ComGoogleCommonUtilConcurrentFutures_NonCancellationPropagatingFuture *this$0_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> val$delegate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleCommonUtilConcurrentFutures_NonCancellationPropagatingFuture:(id)arg1 withComGoogleCommonUtilConcurrentListenableFuture:(id)arg2;
- (void)onFailureWithJavaLangThrowable:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

