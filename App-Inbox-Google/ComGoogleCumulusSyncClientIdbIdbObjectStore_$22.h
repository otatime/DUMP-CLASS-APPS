//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbIdbObjectStore_DelayedIterable.h"

@class ComGoogleCumulusSyncClientIdbIdbObjectStore, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_$22 : ComGoogleCumulusSyncClientIdbIdbObjectStore_DelayedIterable
{
    ComGoogleCumulusSyncClientIdbIdbObjectStore *this$0_;
    id <ComGoogleCumulusApiMetricsSpan> val$delaySpan_;
    NSString *val$sqid_;
    BOOL val$reverse_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientIdbIdbObjectStore:(id)arg1 withComGoogleCumulusApiMetricsSpan:(id)arg2 withNSString:(id)arg3 withBoolean:(BOOL)arg4;
- (id)createIterable;

@end
