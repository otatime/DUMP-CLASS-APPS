//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (FBFoundation)
+ (id)dateWithFacebookEventTimestamp:(double)arg1;
+ (double)timeIntervalSince1970;
- (id)startOfHour;
- (id)roundUpToNextMinuteInterval:(unsigned int)arg1;
- (id)startOfDay;
- (BOOL)isSameDayAsDate:(id)arg1;
@end
