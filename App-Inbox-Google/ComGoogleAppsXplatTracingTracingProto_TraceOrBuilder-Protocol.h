//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsXplatTracingTracingProto_AbortReasonEnum, ComGoogleAppsXplatTracingTracingProto_LevelEnum, ComGoogleAppsXplatTracingTracingProto_TraceEvent, ComGoogleAppsXplatTracingTracingProto_TraceId, NSString;

@protocol ComGoogleAppsXplatTracingTracingProto_TraceOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsXplatTracingTracingProto_AbortReasonEnum *)getAbortReason;
- (BOOL)hasAbortReason;
- (int)getTotalEventsDropped;
- (BOOL)hasTotalEventsDropped;
- (int)getTotalEventsPruned;
- (BOOL)hasTotalEventsPruned;
- (ComGoogleAppsXplatTracingTracingProto_LevelEnum *)getLevel;
- (BOOL)hasLevel;
- (int)getInverseSamplingProbability;
- (BOOL)hasInverseSamplingProbability;
- (double)getBaseTimestamp;
- (BOOL)hasBaseTimestamp;
- (ComGoogleAppsXplatTracingTracingProto_TraceEvent *)getEventsWithInt:(int)arg1;
- (id <JavaUtilList>)getEventsList;
- (int)getEventsCount;
- (NSString *)getTraceKey;
- (BOOL)hasTraceKey;
- (ComGoogleAppsXplatTracingTracingProto_TraceId *)getId;
- (BOOL)hasId;
@end
