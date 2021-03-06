//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseBaseSingleFieldPeriod.h"

@interface OrgJodaTimeWeeks : OrgJodaTimeBaseBaseSingleFieldPeriod
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_toString;
+ (id)__annotations_parseWeeksWithNSString_;
+ (void)initialize;
+ (id)parseWeeksWithNSString:(id)arg1;
+ (id)standardWeeksInWithOrgJodaTimeReadablePeriod:(id)arg1;
+ (id)weeksInWithOrgJodaTimeReadableInterval:(id)arg1;
+ (id)weeksBetweenWithOrgJodaTimeReadablePartial:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2;
+ (id)weeksBetweenWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
+ (id)weeksWithInt:(int)arg1;
- (id)description;
- (BOOL)isLessThanWithOrgJodaTimeWeeks:(id)arg1;
- (BOOL)isGreaterThanWithOrgJodaTimeWeeks:(id)arg1;
- (id)negated;
- (id)dividedByWithInt:(int)arg1;
- (id)multipliedByWithInt:(int)arg1;
- (id)minusWithOrgJodaTimeWeeks:(id)arg1;
- (id)minusWithInt:(int)arg1;
- (id)plusWithOrgJodaTimeWeeks:(id)arg1;
- (id)plusWithInt:(int)arg1;
- (int)getWeeks;
- (id)toStandardDuration;
- (id)toStandardSeconds;
- (id)toStandardMinutes;
- (id)toStandardHours;
- (id)toStandardDays;
- (id)getPeriodType;
- (id)getFieldType;
- (id)readResolve;
- (id)initWithInt:(int)arg1;

@end

