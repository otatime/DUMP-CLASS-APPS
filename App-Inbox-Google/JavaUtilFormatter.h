//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoCloseable.h"
#import "JavaIoFlushable.h"

@class JavaIoIOException, JavaUtilFormatter_FormatToken, JavaUtilLocale, LibcoreIcuLocaleData, NSString;

@interface JavaUtilFormatter : NSObject <JavaIoCloseable, JavaIoFlushable>
{
    id <JavaLangAppendable> out_;
    JavaUtilLocale *locale_;
    id arg_;
    BOOL closed_;
    JavaUtilFormatter_FormatToken *formatToken_;
    JavaIoIOException *lastIOException_;
    LibcoreIcuLocaleData *localeData_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (void)transformAWithJavaLangStringBuilder:(id)arg1;
- (void)transformFWithJavaLangStringBuilder:(id)arg1;
- (void)transformGWithJavaLangStringBuilder:(id)arg1;
- (void)transformEWithJavaLangStringBuilder:(id)arg1;
- (id)transformFromFloat;
- (id)transformFromSpecialNumberWithDouble:(double)arg1;
- (void)appendLocalizedWithJavaLangStringBuilder:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (int)to12HourWithInt:(int)arg1;
- (BOOL)appendTWithJavaLangStringBuilder:(id)arg1 withChar:(unsigned short)arg2 withJavaUtilCalendar:(id)arg3;
- (id)transformFromDateTime;
- (id)transformFromBigInteger;
- (id)transformFromNull;
- (id)transformFromInteger;
- (id)wrapParenthesesWithJavaLangStringBuilder:(id)arg1;
- (id)toStringBuilderWithJavaLangCharSequence:(id)arg1;
- (id)paddingWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2;
- (id)transformFromPercent;
- (id)transformFromCharacter;
- (id)transformFromString;
- (id)transformFromHashCode;
- (id)transformFromBoolean;
- (id)insertGroupingWithJavaLangCharSequence:(id)arg1;
- (id)localizeDigitsWithJavaLangCharSequence:(id)arg1;
- (id)badArgumentType;
- (id)transformWithJavaUtilFormatter_FormatToken:(id)arg1 withId:(id)arg2;
- (id)getArgumentWithNSObjectArray:(id)arg1 withInt:(int)arg2 withJavaUtilFormatter_FormatSpecifierParser:(id)arg3 withId:(id)arg4 withBoolean:(BOOL)arg5;
- (void)outputCharSequenceWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)doFormatWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (id)formatWithJavaUtilLocale:(id)arg1 withNSString:(id)arg2 withNSObjectArray:(id)arg3;
- (id)formatWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (id)ioException;
- (void)close;
- (void)flush;
@property(readonly, copy) NSString *description;
- (id)out;
- (id)locale;
- (void)checkNotClosed;
- (id)initWithJavaIoPrintStream:(id)arg1;
- (id)initWithJavaIoOutputStream:(id)arg1 withNSString:(id)arg2 withJavaUtilLocale:(id)arg3;
- (id)initWithJavaIoOutputStream:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaIoOutputStream:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1 withNSString:(id)arg2 withJavaUtilLocale:(id)arg3;
- (id)initWithJavaIoFile:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaIoFile:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilLocale:(id)arg3;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaLangAppendable:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)initWithJavaUtilLocale:(id)arg1;
- (id)initWithJavaLangAppendable:(id)arg1;
- (id)init;
- (id)getDecimalFormatWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
