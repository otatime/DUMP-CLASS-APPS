//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DateTimeUtil : NSObject
{
}

+ (id)formatDateForRestaurantOpeningString:(id)arg1;
+ (id)formatRestaurantOpeningDate:(id)arg1;
+ (id)simpleFormatDateTime:(id)arg1;
+ (id)formatDateForReserveString:(id)arg1;
+ (id)reserveDateTimeToString:(id)arg1;
+ (id)reserveTimeToString:(id)arg1;
+ (id)reserveDateToString:(id)arg1;
+ (id)birthdayDateToString:(id)arg1;
+ (id)formatBirthdayDateString:(id)arg1;
+ (id)stringFromDate:(id)arg1;
+ (id)formatDateString:(id)arg1;
+ (void)initialize;
+ (void)setLocalizationStringKey:(id)arg1 value:(id)arg2;
+ (id)formatDate:(id)arg1 withTrailingDetails:(BOOL)arg2 withTime:(BOOL)arg3 forceDuration:(BOOL)arg4;
+ (id)formatFriendlyDuration:(id)arg1;
+ (id)formatFriendlyDateTime:(id)arg1;
+ (id)parseISO8601:(id)arg1;
+ (float)convertFromString:(id)arg1;
+ (id)convertTimeForNativePlaybackFromSeconds:(float)arg1 hasHour:(BOOL)arg2;
+ (id)convertTimeForPlaybackFromSeconds:(float)arg1 hasHour:(BOOL)arg2;
+ (id)convertFromSeconds:(float)arg1;
+ (id)convertFromMiliseconds:(float)arg1;
+ (id)getStringFromKey:(id)arg1;
+ (id)pl:(id)arg1 number:(double)arg2;
+ (id)getFullDateFormatter;
+ (id)getSimpleDateFormatter;
+ (id)ISO8601_DATE_FORMAT_ALT2;
+ (id)ISO8601_DATE_FORMAT_ALT;
+ (id)ISO8601_DATE_FORMAT;

@end

