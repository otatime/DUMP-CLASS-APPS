//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCalendarV2CommonProtoCalendarProto_CriticalMetrics_CriticalAnnotation, ComGoogleCalendarV2LibsProtoMetricProto_MetricKeyEnum;

@protocol ComGoogleCalendarV2CommonProtoCalendarProto_CriticalMetrics_CriticalMetricOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCalendarV2CommonProtoCalendarProto_CriticalMetrics_CriticalAnnotation *)getAnnotationWithInt:(int)arg1;
- (id <JavaUtilList>)getAnnotationList;
- (int)getAnnotationCount;
- (long long)getDurationMs;
- (BOOL)hasDurationMs;
- (long long)getStartTimeMs;
- (BOOL)hasStartTimeMs;
- (ComGoogleCalendarV2LibsProtoMetricProto_MetricKeyEnum *)getMetric;
- (BOOL)hasMetric;
@end

