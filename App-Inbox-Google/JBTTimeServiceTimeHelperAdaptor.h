//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTDefaultTimeHelper.h"

@interface JBTTimeServiceTimeHelperAdaptor : JBTDefaultTimeHelper
{
    id <TMLTimeService> timeService_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
- (void)dealloc;
- (int)getMonthOfYearWithLong:(long long)arg1;
- (int)getTimeZoneOffsetWithLong:(long long)arg1;
- (long long)startOfWeekTimeMsWithLong:(long long)arg1;
- (long long)startOfMonthTimeSecWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)roundToStartOfDayWithLong:(long long)arg1;
- (id)initWithTMLTimeService:(id)arg1;

@end

