//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeChronoGJChronology_CutoverField.h"

@class OrgJodaTimeChronoGJChronology;

@interface OrgJodaTimeChronoGJChronology_ImpreciseCutoverField : OrgJodaTimeChronoGJChronology_CutoverField
{
    OrgJodaTimeChronoGJChronology *this$1_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getMaximumValueWithLong:(long long)arg1;
- (int)getMinimumValueWithLong:(long long)arg1;
- (long long)getDifferenceAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)getDifferenceWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withInt:(int)arg2;
- (id)initWithOrgJodaTimeChronoGJChronology:(id)arg1 withOrgJodaTimeDateTimeField:(id)arg2 withOrgJodaTimeDateTimeField:(id)arg3 withOrgJodaTimeDurationField:(id)arg4 withLong:(long long)arg5 withBoolean:(BOOL)arg6;
- (id)initWithOrgJodaTimeChronoGJChronology:(id)arg1 withOrgJodaTimeDateTimeField:(id)arg2 withOrgJodaTimeDateTimeField:(id)arg3 withOrgJodaTimeDurationField:(id)arg4 withLong:(long long)arg5;
- (id)initWithOrgJodaTimeChronoGJChronology:(id)arg1 withOrgJodaTimeDateTimeField:(id)arg2 withOrgJodaTimeDateTimeField:(id)arg3 withLong:(long long)arg4;

@end

