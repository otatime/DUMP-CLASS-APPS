//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusCommonMetric2CrossWorkQueueSpanEventsSinkFlusher, NSString;

@interface ComGoogleCumulusCommonMetric2CrossWorkQueueSpanEventsSinkFlusher_$1 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusCommonMetric2CrossWorkQueueSpanEventsSinkFlusher *this$0_;
    id <JavaUtilList> val$flushBuffer_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusCommonMetric2CrossWorkQueueSpanEventsSinkFlusher:(id)arg1 withJavaUtilList:(id)arg2;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
