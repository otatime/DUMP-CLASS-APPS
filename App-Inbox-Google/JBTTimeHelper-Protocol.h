//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaLangLong;

@protocol JBTTimeHelper <NSObject, JavaObject>
- (JavaLangLong *)getQueryTimeOverride;
- (int)getMonthOfYearWithLong:(long long)arg1;
- (int)getTimeZoneOffsetWithLong:(long long)arg1;
- (long long)startOfWeekTimeMsWithLong:(long long)arg1;
- (long long)startOfMonthTimeSecWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)roundToStartOfDayWithLong:(long long)arg1;
@end

