//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiMetricsCounterGroup.h"

@class NSString;

@interface ComGoogleCumulusCommonMetric2NullCounterGroup : NSObject <ComGoogleCumulusApiMetricsCounterGroup>
{
}

+ (void)initialize;
+ (id)defaultFactory;
+ (id)defaultInstance;
- (id)init;
- (void)stop;
- (void)flushNow;
- (void)scheduleFlushIntervalWithInt:(int)arg1;
- (void)scheduleFlushWithInt:(int)arg1;
- (void)setValueSupplierWithInt:(int)arg1 withComGoogleCommonBaseSupplier:(id)arg2;
- (void)recordWithInt:(int)arg1 withJavaUtilList:(id)arg2 withInt:(int)arg3;
- (void)recordWithInt:(int)arg1 withInt:(int)arg2;
- (void)incrementByWithInt:(int)arg1 withJavaUtilList:(id)arg2 withDouble:(double)arg3;
- (void)incrementByWithInt:(int)arg1 withDouble:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
