//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangComparable.h"

@class ComGoogleCumulusQueryClientLocalQueryQueue, NSString;

@interface ComGoogleCumulusQueryClientLocalQueryQueue_ScheduledQuery : NSObject <JavaLangComparable>
{
    ComGoogleCumulusQueryClientLocalQueryQueue *this$0_;
    id <ComGoogleCumulusApiMetricsSpan> queuedSpan_;
}

- (void)__javaClone;
- (void)dealloc;
- (id)initWithComGoogleCumulusQueryClientLocalQueryQueue:(id)arg1;
- (BOOL)isPreemptive;
- (void)stopQueuedSpan;
- (void)startQueuedSpanWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (int)compareToWithId:(id)arg1;
- (BOOL)reschedule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

