//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NRCustomMetrics : NSObject
{
}

+ (BOOL)isValidMetricUnit:(struct NSString *)arg1;
+ (BOOL)isValidMetricInput:(id)arg1;
+ (id)harvest;
+ (id)metrics;
+ (id)generateMetricStringWithName:(id)arg1 valueUnits:(id)arg2 countUnits:(id)arg3;
+ (void)addMetric:(id)arg1 value:(id)arg2;
+ (void)recordMetricWithName:(id)arg1 category:(id)arg2 value:(id)arg3 valueUnits:(struct NSString *)arg4 countUnits:(struct NSString *)arg5;
+ (void)recordMetricWithName:(id)arg1 category:(id)arg2 value:(id)arg3 valueUnits:(struct NSString *)arg4;
+ (void)recordMetricWithName:(id)arg1 category:(id)arg2 value:(id)arg3;
+ (void)recordMetricWithName:(id)arg1 category:(id)arg2;

@end

