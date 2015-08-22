//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseBaseDuration.h"

#import "JavaIoSerializable.h"
#import "OrgJodaTimeReadableDuration.h"

@class NSString;

@interface OrgJodaTimeDuration : OrgJodaTimeBaseBaseDuration <OrgJodaTimeReadableDuration, JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_parseWithNSString_;
+ (void)initialize;
+ (id)millisWithLong:(long long)arg1;
+ (id)standardSecondsWithLong:(long long)arg1;
+ (id)standardMinutesWithLong:(long long)arg1;
+ (id)standardHoursWithLong:(long long)arg1;
+ (id)standardDaysWithLong:(long long)arg1;
+ (id)parseWithNSString:(id)arg1;
- (id)minusWithOrgJodaTimeReadableDuration:(id)arg1;
- (id)minusWithLong:(long long)arg1;
- (id)plusWithOrgJodaTimeReadableDuration:(id)arg1;
- (id)plusWithLong:(long long)arg1;
- (id)withDurationAddedWithOrgJodaTimeReadableDuration:(id)arg1 withInt:(int)arg2;
- (id)withDurationAddedWithLong:(long long)arg1 withInt:(int)arg2;
- (id)withMillisWithLong:(long long)arg1;
- (id)toStandardSeconds;
- (id)toStandardMinutes;
- (id)toStandardHours;
- (id)toStandardDays;
- (id)toDuration;
- (long long)getStandardSeconds;
- (long long)getStandardMinutes;
- (long long)getStandardHours;
- (long long)getStandardDays;
- (id)initWithId:(id)arg1;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)initWithLong:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
