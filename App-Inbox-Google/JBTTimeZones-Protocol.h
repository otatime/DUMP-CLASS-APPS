//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTTimeZones_TimeZoneDueDateUpdateTypeEnum;

@protocol JBTTimeZones <NSObject, JavaObject>
- (void)updateDueDatesForTimeZoneWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (void)synchronizeTimeZoneWithTMLTimeZone:(id <TMLTimeZone>)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (void)setTimeZoneDueDateUpdateTypeWithJBTTimeZones_TimeZoneDueDateUpdateTypeEnum:(JBTTimeZones_TimeZoneDueDateUpdateTypeEnum *)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (void)getTimeZoneDueDateUpdateTypeWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
@end

