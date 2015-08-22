//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTTimeHelper.h"

@class NSString;

@interface JBTDefaultTimeHelper : NSObject <JBTTimeHelper>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
+ (void)initialize;
- (id)init;
- (int)getMonthOfYearWithLong:(long long)arg1;
- (id)getQueryTimeOverride;
- (int)getTimeZoneOffsetWithLong:(long long)arg1;
- (long long)startOfWeekTimeMsWithLong:(long long)arg1;
- (long long)startOfMonthTimeSecWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)roundToStartOfDayWithLong:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
