//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTFormattedTime_FormatEnum;

@protocol JBTFormattedTime <NSObject, JavaObject>
- (long long)getSuggestedTzOffsetMinutes;
- (BOOL)hasSuggestedTzOffsetMinutes;
- (JBTFormattedTime_FormatEnum *)getSuggestedFormat;
- (long long)getMillis;
- (long long)getSeconds;
@end

