//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbIdbObjectStore_DelayedIterable.h"

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_IndexWaiter : ComGoogleCumulusSyncClientIdbIdbObjectStore_DelayedIterable
{
    id <JavaUtilList> handles_;
    BOOL didIgnoreEarlierWrites_;
}

- (void)dealloc;
- (void)cancel;
- (BOOL)didIgnoreEarlierWrites;
- (id)initWithComGoogleCumulusSyncClientIdbIdbIndexProcessor:(id)arg1 withNSString:(id)arg2 withJavaUtilSet:(id)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5;
- (id)initWithComGoogleCumulusSyncClientIdbIdbIndexProcessor:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5;

@end

