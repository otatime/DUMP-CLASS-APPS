//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TimeRange;

@interface DayConstraint : NSObject
{
    int _dayNumber;
    TimeRange *_timeRange;
}

@property(retain, nonatomic) TimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) int dayNumber; // @synthesize dayNumber=_dayNumber;
- (void).cxx_destruct;
- (id)getWeekdayName;

@end

