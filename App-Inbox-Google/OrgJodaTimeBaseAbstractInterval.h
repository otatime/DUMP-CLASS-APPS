//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgJodaTimeReadableInterval.h"

@class NSString;

@interface OrgJodaTimeBaseAbstractInterval : NSObject <OrgJodaTimeReadableInterval>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)toPeriodWithOrgJodaTimePeriodType:(id)arg1;
- (id)toPeriod;
- (id)toDuration;
- (long long)toDurationMillis;
- (id)toMutableInterval;
- (id)toInterval;
- (BOOL)isAfterWithOrgJodaTimeReadableInterval:(id)arg1;
- (BOOL)isAfterWithOrgJodaTimeReadableInstant:(id)arg1;
- (BOOL)isAfterNow;
- (BOOL)isAfterWithLong:(long long)arg1;
- (BOOL)isBeforeWithOrgJodaTimeReadableInterval:(id)arg1;
- (BOOL)isBeforeWithOrgJodaTimeReadableInstant:(id)arg1;
- (BOOL)isBeforeNow;
- (BOOL)isBeforeWithLong:(long long)arg1;
- (BOOL)isEqualWithOrgJodaTimeReadableInterval:(id)arg1;
- (BOOL)overlapsWithOrgJodaTimeReadableInterval:(id)arg1;
- (BOOL)containsWithOrgJodaTimeReadableInterval:(id)arg1;
- (BOOL)containsWithOrgJodaTimeReadableInstant:(id)arg1;
- (BOOL)containsNow;
- (BOOL)containsWithLong:(long long)arg1;
- (id)getEnd;
- (id)getStart;
- (void)checkIntervalWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

