//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface OrgJodaTimeFieldAbstractReadableInstantFieldProperty : NSObject <JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (int)compareToWithOrgJodaTimeReadablePartial:(id)arg1;
- (int)compareToWithOrgJodaTimeReadableInstant:(id)arg1;
- (id)toInterval;
- (long long)remainder;
- (int)getMaximumShortTextLengthWithJavaUtilLocale:(id)arg1;
- (int)getMaximumTextLengthWithJavaUtilLocale:(id)arg1;
- (int)getMaximumValue;
- (int)getMaximumValueOverall;
- (int)getMinimumValue;
- (int)getMinimumValueOverall;
- (id)getLeapDurationField;
- (int)getLeapAmount;
- (BOOL)isLeap;
- (id)getRangeDurationField;
- (id)getDurationField;
- (long long)getDifferenceAsLongWithOrgJodaTimeReadableInstant:(id)arg1;
- (int)getDifferenceWithOrgJodaTimeReadableInstant:(id)arg1;
- (id)getAsShortTextWithJavaUtilLocale:(id)arg1;
- (id)getAsShortText;
- (id)getAsTextWithJavaUtilLocale:(id)arg1;
- (id)getAsText;
- (id)getAsString;
- (int)get;
- (id)getChronology;
- (long long)getMillis;
- (id)getName;
- (id)getFieldType;
- (id)getField;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

