//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMLRecurrenceExpander.h"

@class NSString;

@interface TMLRecurrenceExpanderImpl : NSObject <TMLRecurrenceExpander>
{
    id <TMLTimeService> timeService_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getStrategyWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart_withTMLDate_;
+ (id)__annotations_expandRruleWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart_withTMLDateTime_withTMLDateTime_withTMLDateTime__params;
+ (id)__annotations_expandInternalWithJavaUtilCollection_withTMLDateTime_withTMLDateTime_withTMLDateTime_withTMLDateTime_withComGoogleCalendarV2LibsProtoRecurrenceProto_RecurrenceData__params;
+ (id)__annotations_expandSortedWithTMLDateTime_withTMLDateTime_withTMLDateTime_withTMLDateTime_withComGoogleCalendarV2LibsProtoRecurrenceProto_RecurrenceData__params;
+ (id)__annotations_expandWithTMLDateTime_withTMLDateTime_withTMLDateTime_withTMLDateTime_withComGoogleCalendarV2LibsProtoRecurrenceProto_RecurrenceData__params;
+ (void)initialize;
+ (BOOL)isValidWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart:(id)arg1;
- (void)dealloc;
- (id)getStrategyWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart:(id)arg1 withTMLDate:(id)arg2;
- (id)expandRruleWithComGoogleCalendarV2LibsProtoRecurrenceProto_RecurRulePart:(id)arg1 withTMLDateTime:(id)arg2 withTMLDateTime:(id)arg3 withTMLDateTime:(id)arg4;
- (void)expandInternalWithJavaUtilCollection:(id)arg1 withTMLDateTime:(id)arg2 withTMLDateTime:(id)arg3 withTMLDateTime:(id)arg4 withTMLDateTime:(id)arg5 withComGoogleCalendarV2LibsProtoRecurrenceProto_RecurrenceData:(id)arg6;
- (id)expandSortedWithTMLDateTime:(id)arg1 withTMLDateTime:(id)arg2 withTMLDateTime:(id)arg3 withTMLDateTime:(id)arg4 withComGoogleCalendarV2LibsProtoRecurrenceProto_RecurrenceData:(id)arg5;
- (id)expandWithTMLDateTime:(id)arg1 withTMLDateTime:(id)arg2 withTMLDateTime:(id)arg3 withTMLDateTime:(id)arg4 withComGoogleCalendarV2LibsProtoRecurrenceProto_RecurrenceData:(id)arg5;
- (id)initWithTMLTimeService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

