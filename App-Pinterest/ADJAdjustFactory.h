//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADJAdjustFactory : NSObject
{
}

+ (void)setAttributionHandler:(id)arg1;
+ (void)setTimerStart:(double)arg1;
+ (void)setTimerInterval:(double)arg1;
+ (void)setSubsessionInterval:(double)arg1;
+ (void)setSessionInterval:(double)arg1;
+ (void)setLogger:(id)arg1;
+ (void)setActivityHandler:(id)arg1;
+ (void)setRequestHandler:(id)arg1;
+ (void)setPackageHandler:(id)arg1;
+ (id)attributionHandlerForActivityHandler:(id)arg1 withAttributionPackage:(id)arg2 startPaused:(BOOL)arg3 hasDelegate:(BOOL)arg4;
+ (double)timerStart;
+ (double)timerInterval;
+ (double)subsessionInterval;
+ (double)sessionInterval;
+ (id)logger;
+ (id)activityHandlerWithConfig:(id)arg1;
+ (id)requestHandlerForPackageHandler:(id)arg1;
+ (id)packageHandlerForActivityHandler:(id)arg1 startPaused:(BOOL)arg2;

@end

