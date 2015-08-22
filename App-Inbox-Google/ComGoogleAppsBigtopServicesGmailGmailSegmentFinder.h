//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopServicesMuxSegmentFinder.h"

@class JBTCClusterIdentifier, NSString;

@interface ComGoogleAppsBigtopServicesGmailGmailSegmentFinder : NSObject <ComGoogleAppsBigtopServicesMuxSegmentFinder>
{
    JBTCClusterIdentifier *clusterIdentifier_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)getMatchesNonThrottledGroupedSegmentsWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (BOOL)getMatchesThrottledGroupedSegmentsWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (id)findClusterLabelsUnlessPinnedWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
- (id)findClusterLabelsWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
- (BOOL)needsAdditionalObjectsWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;
- (id)getIdsWithJavaUtilSet:(id)arg1;
- (id)getEnabledClusterSegmentsWithJavaUtilSet:(id)arg1;
- (id)getSegmentsThatMatchResultWithJavaUtilSet:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2;
- (BOOL)isGroupedWithComGoogleAppsBigtopServicesMuxClusterSegment:(id)arg1;
- (id)getGroupedSegmentsWithJavaUtilSet:(id)arg1;
- (id)getHighestPriorityClusterSegmentsWithJavaUtilSet:(id)arg1;
- (id)getHeuristicClusterExpansionResultWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1 withNSString:(id)arg2;
- (id)segmentIdsFromSegmentsWithJavaUtilSet:(id)arg1;
- (id)getResultForSegmentedQueryWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusTypeTypeProto_BaseObject:(id)arg2 withJavaUtilSet:(id)arg3;
- (id)getResultForNonSegmentedQueryWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusTypeTypeProto_BaseObject:(id)arg2 withJavaUtilSet:(id)arg3;
- (id)getSegmentedResultWithComGoogleCumulusApiPluginQueryMatcher_MatchTypeEnum:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusTypeTypeProto_BaseObject:(id)arg3 withJavaUtilSet:(id)arg4;
- (id)initWithJBTCClusterIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
