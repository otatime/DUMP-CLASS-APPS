//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgJodaTimeFormatDateTimeParser.h"
#import "OrgJodaTimeFormatDateTimePrinter.h"

@class IOSObjectArray, NSString;

@interface OrgJodaTimeFormatDateTimeFormatterBuilder_Composite : NSObject <OrgJodaTimeFormatDateTimePrinter, OrgJodaTimeFormatDateTimeParser>
{
    IOSObjectArray *iPrinters_;
    IOSObjectArray *iParsers_;
    int iPrintedLengthEstimate_;
    int iParsedLengthEstimate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)addArrayToListWithJavaUtilList:(id)arg1 withNSObjectArray:(id)arg2;
- (void)decomposeWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3;
- (BOOL)isParser;
- (BOOL)isPrinter;
- (int)parseIntoWithOrgJodaTimeFormatDateTimeParserBucket:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;
- (int)estimateParsedLength;
- (void)printToWithJavaIoWriter:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2 withJavaUtilLocale:(id)arg3;
- (void)printToWithJavaLangStringBuffer:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2 withJavaUtilLocale:(id)arg3;
- (void)printToWithJavaIoWriter:(id)arg1 withLong:(long long)arg2 withOrgJodaTimeChronology:(id)arg3 withInt:(int)arg4 withOrgJodaTimeDateTimeZone:(id)arg5 withJavaUtilLocale:(id)arg6;
- (void)printToWithJavaLangStringBuffer:(id)arg1 withLong:(long long)arg2 withOrgJodaTimeChronology:(id)arg3 withInt:(int)arg4 withOrgJodaTimeDateTimeZone:(id)arg5 withJavaUtilLocale:(id)arg6;
- (int)estimatePrintedLength;
- (id)initWithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
