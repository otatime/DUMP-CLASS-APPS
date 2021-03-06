//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseAbstractInstant.h"

#import "JavaIoSerializable.h"
#import "OrgJodaTimeReadableInstant.h"

@class NSString;

@interface OrgJodaTimeInstant : OrgJodaTimeBaseAbstractInstant <OrgJodaTimeReadableInstant, JavaIoSerializable>
{
    long long iMillis_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_toMutableDateTimeISO;
+ (id)__annotations_toDateTimeISO;
+ (id)__annotations_parseWithNSString_;
+ (id)parseWithNSString:(id)arg1 withOrgJodaTimeFormatDateTimeFormatter:(id)arg2;
+ (id)parseWithNSString:(id)arg1;
+ (id)now;
- (id)toMutableDateTimeISO;
- (id)toMutableDateTime;
- (id)toDateTimeISO;
- (id)toDateTime;
- (id)getChronology;
- (long long)getMillis;
- (id)minusWithOrgJodaTimeReadableDuration:(id)arg1;
- (id)minusWithLong:(long long)arg1;
- (id)plusWithOrgJodaTimeReadableDuration:(id)arg1;
- (id)plusWithLong:(long long)arg1;
- (id)withDurationAddedWithOrgJodaTimeReadableDuration:(id)arg1 withInt:(int)arg2;
- (id)withDurationAddedWithLong:(long long)arg1 withInt:(int)arg2;
- (id)withMillisWithLong:(long long)arg1;
- (id)toInstant;
- (id)initWithId:(id)arg1;
- (id)initWithLong:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

