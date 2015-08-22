//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface RecurrenceRule : NSObject
{
    unsigned int _frequency;
    int _interval;
    NSArray *_weekdayList;
    NSArray *_monthdayList;
    NSArray *_monthList;
    NSDate *_untilDate;
    int _numberOfOccurrences;
    unsigned int _endDateType;
}

@property(nonatomic) unsigned int endDateType; // @synthesize endDateType=_endDateType;
@property(nonatomic) int numberOfOccurrences; // @synthesize numberOfOccurrences=_numberOfOccurrences;
@property(retain, nonatomic) NSDate *untilDate; // @synthesize untilDate=_untilDate;
@property(retain, nonatomic) NSArray *monthList; // @synthesize monthList=_monthList;
@property(retain, nonatomic) NSArray *monthdayList; // @synthesize monthdayList=_monthdayList;
@property(retain, nonatomic) NSArray *weekdayList; // @synthesize weekdayList=_weekdayList;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int frequency; // @synthesize frequency=_frequency;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int monthlyRepeat; // @dynamic monthlyRepeat;
- (id)init;

@end
