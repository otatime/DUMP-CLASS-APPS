//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseBasePeriod.h"

#import "JavaIoSerializable.h"
#import "NSCopying.h"
#import "OrgJodaTimeReadWritablePeriod.h"

@class NSString;

@interface OrgJodaTimeMutablePeriod : OrgJodaTimeBaseBasePeriod <OrgJodaTimeReadWritablePeriod, NSCopying, JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_parseWithNSString_;
+ (id)parseWithNSString:(id)arg1 withOrgJodaTimeFormatPeriodFormatter:(id)arg2;
+ (id)parseWithNSString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)clone;
- (id)copy__;
- (void)addMillisWithInt:(int)arg1;
- (void)setMillisWithInt:(int)arg1;
- (void)addSecondsWithInt:(int)arg1;
- (void)setSecondsWithInt:(int)arg1;
- (void)addMinutesWithInt:(int)arg1;
- (void)setMinutesWithInt:(int)arg1;
- (void)addHoursWithInt:(int)arg1;
- (void)setHoursWithInt:(int)arg1;
- (void)addDaysWithInt:(int)arg1;
- (void)setDaysWithInt:(int)arg1;
- (void)addWeeksWithInt:(int)arg1;
- (void)setWeeksWithInt:(int)arg1;
- (void)addMonthsWithInt:(int)arg1;
- (void)setMonthsWithInt:(int)arg1;
- (void)addYearsWithInt:(int)arg1;
- (void)setYearsWithInt:(int)arg1;
- (int)getMillis;
- (int)getSeconds;
- (int)getMinutes;
- (int)getHours;
- (int)getDays;
- (int)getWeeks;
- (int)getMonths;
- (int)getYears;
- (void)mergePeriodWithOrgJodaTimeReadablePeriod:(id)arg1;
- (void)addWithLong:(long long)arg1 withOrgJodaTimeChronology:(id)arg2;
- (void)addWithLong:(long long)arg1;
- (void)addWithOrgJodaTimeReadableDuration:(id)arg1;
- (void)addWithOrgJodaTimeReadableInterval:(id)arg1;
- (void)addWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8;
- (void)addWithOrgJodaTimeReadablePeriod:(id)arg1;
- (void)addWithOrgJodaTimeDurationFieldType:(id)arg1 withInt:(int)arg2;
- (void)setPeriodWithLong:(long long)arg1 withOrgJodaTimeChronology:(id)arg2;
- (void)setPeriodWithLong:(long long)arg1;
- (void)setPeriodWithOrgJodaTimeReadableDuration:(id)arg1 withOrgJodaTimeChronology:(id)arg2;
- (void)setPeriodWithOrgJodaTimeReadableDuration:(id)arg1;
- (void)setPeriodWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimeChronology:(id)arg3;
- (void)setPeriodWithLong:(long long)arg1 withLong:(long long)arg2;
- (void)setPeriodWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (void)setPeriodWithOrgJodaTimeReadableInterval:(id)arg1;
- (void)setPeriodWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8;
- (void)setPeriodWithOrgJodaTimeReadablePeriod:(id)arg1;
- (void)setWithOrgJodaTimeDurationFieldType:(id)arg1 withInt:(int)arg2;
- (void)setValueWithInt:(int)arg1 withInt:(int)arg2;
- (void)clear;
- (id)initWithId:(id)arg1 withOrgJodaTimePeriodType:(id)arg2 withOrgJodaTimeChronology:(id)arg3;
- (id)initWithId:(id)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)initWithId:(id)arg1 withOrgJodaTimePeriodType:(id)arg2;
- (id)initWithId:(id)arg1;
- (id)initWithOrgJodaTimeReadableDuration:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithOrgJodaTimeReadableDuration:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableDuration:(id)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableDuration:(id)arg2;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimePeriodType:(id)arg3 withOrgJodaTimeChronology:(id)arg4;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimeChronology:(id)arg3;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)initWithLong:(long long)arg1 withOrgJodaTimePeriodType:(id)arg2 withOrgJodaTimeChronology:(id)arg3;
- (id)initWithLong:(long long)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)initWithLong:(long long)arg1 withOrgJodaTimePeriodType:(id)arg2;
- (id)initWithLong:(long long)arg1;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withOrgJodaTimePeriodType:(id)arg9;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)initWithOrgJodaTimePeriodType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
