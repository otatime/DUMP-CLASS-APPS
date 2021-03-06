//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMLExpanderStrategy.h"

@class NSString, TMLByDay_MonthYearLookup, TMLByMonth, TMLByMonthDay, TMLByWeekNo, TMLByYearDay;

@interface TMLYearlyStrategy : NSObject <TMLExpanderStrategy>
{
    TMLByYearDay *byyearday_;
    TMLByMonth *bymonth_;
    TMLByMonthDay *bymonthday_;
    TMLByWeekNo *byweekno_;
    TMLByDay_MonthYearLookup *byday_;
    BOOL mustInferMonthDay_;
    id <TMLDate> firstStart_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_fromRuleWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart_withTMLDate_;
+ (BOOL)isValidWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart:(id)arg1;
+ (id)fromRuleWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart:(id)arg1 withTMLDate:(id)arg2;
- (void)dealloc;
- (void)collectByMonthAndMonthDayWithJavaUtilCollection:(id)arg1 withTMLDate:(id)arg2;
- (void)collectByYearDayWithJavaUtilCollection:(id)arg1 withTMLDate:(id)arg2;
- (void)collectCandidatesWithJavaUtilCollection:(id)arg1 withTMLDate:(id)arg2;
- (id)getNextAnchorWithInt:(int)arg1 withTMLDate:(id)arg2;
- (id)initWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart:(id)arg1 withTMLDate:(id)arg2 withTMLByYearDay:(id)arg3 withTMLByMonth:(id)arg4 withTMLByMonthDay:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

