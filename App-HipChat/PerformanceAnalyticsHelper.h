//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PerformanceAnalyticsHelper : NSObject
{
}

+ (void)trackPerformanceEventWithName:(id)arg1 accountContext:(id)arg2 eventStartDate:(id)arg3;
+ (void)trackPerformanceEventWithName:(id)arg1 accountContext:(id)arg2 timeTaken:(double)arg3;
+ (void)trackPerformanceEventWithName:(id)arg1 accountContext:(id)arg2 eventStartDate:(id)arg3 numberOfItems:(unsigned int)arg4;

@end

