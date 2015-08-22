//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSObjectArray;

@interface OrgJodaTimeFormatPeriodFormatterBuilder : NSObject
{
    int iMinPrintedDigits_;
    int iPrintZeroSetting_;
    int iMaxParsedDigits_;
    BOOL iRejectSignedValues_;
    id <OrgJodaTimeFormatPeriodFormatterBuilder_PeriodFieldAffix> iPrefix_;
    id <JavaUtilList> iElementPairs_;
    BOOL iNotPrinter_;
    BOOL iNotParser_;
    IOSObjectArray *iFieldFormatters_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createCompositeWithJavaUtilList:(id)arg1;
+ (id)toFormatterWithJavaUtilList:(id)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3;
- (void)dealloc;
- (id)append0WithOrgJodaTimeFormatPeriodPrinter:(id)arg1 withOrgJodaTimeFormatPeriodParser:(id)arg2;
- (void)clearPrefix;
- (id)appendSeparatorWithNSString:(id)arg1 withNSString:(id)arg2 withNSStringArray:(id)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5;
- (id)appendSeparatorWithNSString:(id)arg1 withNSString:(id)arg2 withNSStringArray:(id)arg3;
- (id)appendSeparatorWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)appendSeparatorIfFieldsBeforeWithNSString:(id)arg1;
- (id)appendSeparatorIfFieldsAfterWithNSString:(id)arg1;
- (id)appendSeparatorWithNSString:(id)arg1;
- (id)appendSuffixWithOrgJodaTimeFormatPeriodFormatterBuilder_PeriodFieldAffix:(id)arg1;
- (id)appendSuffixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)appendSuffixWithNSString:(id)arg1;
- (void)appendFieldWithInt:(int)arg1 withInt:(int)arg2;
- (void)appendFieldWithInt:(int)arg1;
- (id)appendMillis3Digit;
- (id)appendMillis;
- (id)appendSecondsWithOptionalMillis;
- (id)appendSecondsWithMillis;
- (id)appendSeconds;
- (id)appendMinutes;
- (id)appendHours;
- (id)appendDays;
- (id)appendWeeks;
- (id)appendMonths;
- (id)appendYears;
- (id)appendPrefixWithOrgJodaTimeFormatPeriodFormatterBuilder_PeriodFieldAffix:(id)arg1;
- (id)appendPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)appendPrefixWithNSString:(id)arg1;
- (id)printZeroNever;
- (id)printZeroAlways;
- (id)printZeroIfSupported;
- (id)printZeroRarelyFirst;
- (id)printZeroRarelyLast;
- (id)rejectSignedValuesWithBoolean:(BOOL)arg1;
- (id)maximumParsedDigitsWithInt:(int)arg1;
- (id)minimumPrintedDigitsWithInt:(int)arg1;
- (id)appendLiteralWithNSString:(id)arg1;
- (id)appendWithOrgJodaTimeFormatPeriodPrinter:(id)arg1 withOrgJodaTimeFormatPeriodParser:(id)arg2;
- (id)appendWithOrgJodaTimeFormatPeriodFormatter:(id)arg1;
- (void)clear;
- (id)toParser;
- (id)toPrinter;
- (id)toFormatter;
- (id)init;

@end
