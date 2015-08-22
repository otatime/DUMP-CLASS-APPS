//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonMetric2SpanEventsSink_Flusher.h"

@class NSString;

@interface ComGoogleCumulusCommonMetric2CrossWorkQueueSpanEventsSinkFlusher : NSObject <ComGoogleCumulusCommonMetric2SpanEventsSink_Flusher>
{
    id <ComGoogleCumulusCommonMetric2SpanEventsSink> sink_;
    int maxFlushSize_;
    id <ComGoogleCumulusCommonMetric2SpanEventReceiver> flushReceiver_;
    id <JCGCuDelayedWorkQueue> workQueue_;
}

- (void)dealloc;
- (int)flush;
- (id)initWithComGoogleCumulusCommonMetric2SpanEventsSink:(id)arg1 withInt:(int)arg2 withComGoogleCumulusCommonMetric2SpanEventReceiver:(id)arg3 withJCGCuDelayedWorkQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
