//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiMetricsCounterGroup_Factory.h"

@class NSString;

@interface ComGoogleCumulusCommonMetric2DefaultCounterGroup_Factory : NSObject <ComGoogleCumulusApiMetricsCounterGroup_Factory>
{
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id <JCGCuDelayedWorkQueue> workQueue_;
    id <ComGoogleCumulusApiMetricsSpan_Factory> spanFactory_;
}

- (void)dealloc;
- (id)createWithComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg1 withInt:(int)arg2;
- (id)initWithComGoogleCumulusCommonUtilClock:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2 withComGoogleCumulusApiMetricsSpan_Factory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
