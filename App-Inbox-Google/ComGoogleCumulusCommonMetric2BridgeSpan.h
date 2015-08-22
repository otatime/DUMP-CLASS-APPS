//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiMetricsSpan.h"

@class NSString;

@interface ComGoogleCumulusCommonMetric2BridgeSpan : NSObject <ComGoogleCumulusApiMetricsSpan>
{
    id <ComGoogleCumulusCommonMetric2SpanPolicy> spanPolicy_;
    id <ComGoogleCumulusApiMetricsSpan_Factory> spanFactory_;
    NSString *parentId_;
}

+ (BOOL)isBridgeSpanWithComGoogleCumulusApiMetricsSpan:(id)arg1;
- (void)dealloc;
- (void)sysTraceWithNSString:(id)arg1;
- (void)extendWithComGoogleProtobufExtensionLite:(id)arg1 withId:(id)arg2;
- (void)stopAtWithDouble:(double)arg1;
- (void)stop;
- (id)startChildAtWithComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg1 withInt:(int)arg2 withDouble:(double)arg3;
- (id)startChildWithComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg1 withInt:(int)arg2;
- (BOOL)isNullSpan;
- (id)getId;
- (id)initWithComGoogleCumulusCommonMetric2SpanPolicy:(id)arg1 withComGoogleCumulusApiMetricsSpan_Factory:(id)arg2 withNSString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
