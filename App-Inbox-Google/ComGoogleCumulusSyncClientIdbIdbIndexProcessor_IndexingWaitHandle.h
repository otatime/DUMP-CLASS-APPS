//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuAsyncHandle.h"

@class ComGoogleCumulusSyncClientIdbIdbIndexProcessor, ComGoogleCumulusSyncClientIdbIdbIndexProcessor_IndexingWaiter, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbIndexProcessor_IndexingWaitHandle : NSObject <JCGCuAsyncHandle>
{
    ComGoogleCumulusSyncClientIdbIdbIndexProcessor *this$0_;
    BOOL isBucketWaiter_;
    ComGoogleCumulusSyncClientIdbIdbIndexProcessor_IndexingWaiter *waiter_;
}

- (void)dealloc;
- (void)cancel;
- (id)initWithComGoogleCumulusSyncClientIdbIdbIndexProcessor:(id)arg1 withBoolean:(BOOL)arg2 withComGoogleCumulusSyncClientIdbIdbIndexProcessor_IndexingWaiter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
