//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSObjectArray, JavaUtilTreeMap;

@interface OrgJodaTimeChronoGJLocaleSymbols : NSObject
{
    IOSObjectArray *iEras_;
    IOSObjectArray *iDaysOfWeek_;
    IOSObjectArray *iShortDaysOfWeek_;
    IOSObjectArray *iMonths_;
    IOSObjectArray *iShortMonths_;
    IOSObjectArray *iHalfday_;
    JavaUtilTreeMap *iParseEras_;
    JavaUtilTreeMap *iParseDaysOfWeek_;
    JavaUtilTreeMap *iParseMonths_;
    int iMaxEraLength_;
    int iMaxDayOfWeekLength_;
    int iMaxShortDayOfWeekLength_;
    int iMaxMonthLength_;
    int iMaxShortMonthLength_;
    int iMaxHalfdayLength_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (int)maxLengthWithNSStringArray:(id)arg1;
+ (void)addNumeralsWithJavaUtilTreeMap:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaLangIntegerArray:(id)arg4;
+ (void)addSymbolsWithJavaUtilTreeMap:(id)arg1 withNSStringArray:(id)arg2 withJavaLangIntegerArray:(id)arg3;
+ (id)realignDaysOfWeekWithNSStringArray:(id)arg1;
+ (id)realignMonthsWithNSStringArray:(id)arg1;
+ (id)forLocaleWithJavaUtilLocale:(id)arg1;
- (void)dealloc;
- (int)getHalfdayMaxTextLength;
- (int)halfdayTextToValueWithNSString:(id)arg1;
- (id)halfdayValueToTextWithInt:(int)arg1;
- (int)getDayOfWeekMaxShortTextLength;
- (int)getDayOfWeekMaxTextLength;
- (int)dayOfWeekTextToValueWithNSString:(id)arg1;
- (id)dayOfWeekValueToShortTextWithInt:(int)arg1;
- (id)dayOfWeekValueToTextWithInt:(int)arg1;
- (int)getMonthMaxShortTextLength;
- (int)getMonthMaxTextLength;
- (int)monthOfYearTextToValueWithNSString:(id)arg1;
- (id)monthOfYearValueToShortTextWithInt:(int)arg1;
- (id)monthOfYearValueToTextWithInt:(int)arg1;
- (int)getEraMaxTextLength;
- (int)eraTextToValueWithNSString:(id)arg1;
- (id)eraValueToTextWithInt:(int)arg1;
- (id)initWithJavaUtilLocale:(id)arg1;

@end

