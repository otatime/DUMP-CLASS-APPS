//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaUtilLocale, OrgJodaTimePeriodType;

@interface OrgJodaTimeFormatPeriodFormatter : NSObject
{
    id <OrgJodaTimeFormatPeriodPrinter> iPrinter_;
    id <OrgJodaTimeFormatPeriodParser> iParser_;
    JavaUtilLocale *iLocale_;
    OrgJodaTimePeriodType *iParseType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)checkParser;
- (id)parseMutablePeriodWithNSString:(id)arg1;
- (id)parsePeriodWithNSString:(id)arg1;
- (int)parseIntoWithOrgJodaTimeReadWritablePeriod:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;
- (void)checkPeriodWithOrgJodaTimeReadablePeriod:(id)arg1;
- (void)checkPrinter;
- (id)printWithOrgJodaTimeReadablePeriod:(id)arg1;
- (void)printToWithJavaIoWriter:(id)arg1 withOrgJodaTimeReadablePeriod:(id)arg2;
- (void)printToWithJavaLangStringBuffer:(id)arg1 withOrgJodaTimeReadablePeriod:(id)arg2;
- (id)getParseType;
- (id)withParseTypeWithOrgJodaTimePeriodType:(id)arg1;
- (id)getLocale;
- (id)withLocaleWithJavaUtilLocale:(id)arg1;
- (id)getParser;
- (BOOL)isParser;
- (id)getPrinter;
- (BOOL)isPrinter;
- (id)initWithOrgJodaTimeFormatPeriodPrinter:(id)arg1 withOrgJodaTimeFormatPeriodParser:(id)arg2 withJavaUtilLocale:(id)arg3 withOrgJodaTimePeriodType:(id)arg4;
- (id)initWithOrgJodaTimeFormatPeriodPrinter:(id)arg1 withOrgJodaTimeFormatPeriodParser:(id)arg2;

@end

