//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsXplatTracingTracingProto_AbortReasonEnum, ComGoogleAppsXplatTracingTracingProto_TraceId, ComGoogleAppsXplatTracingTracingProto_TraceMarker_TypeEnum, NSString;

@protocol ComGoogleAppsXplatTracingTracingProto_TraceMarkerOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsXplatTracingTracingProto_AbortReasonEnum *)getAbortReason;
- (BOOL)hasAbortReason;
- (int)getInverseSamplingProbability;
- (BOOL)hasInverseSamplingProbability;
- (NSString *)getTraceKey;
- (BOOL)hasTraceKey;
- (double)getTimestamp;
- (BOOL)hasTimestamp;
- (ComGoogleAppsXplatTracingTracingProto_TraceId *)getId;
- (BOOL)hasId;
- (ComGoogleAppsXplatTracingTracingProto_TraceMarker_TypeEnum *)getType;
- (BOOL)hasType;
@end
