//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplProducersFilteringElementProducer.h"

@class ComGoogleCommonBaseOptional, JBTClusters_ClusterFilterTypeEnum;

@interface JBTIClustersClusterFilteringElementProducer : ComGoogleAppsBigtopSyncClientImplProducersFilteringElementProducer
{
    id <JavaUtilSet> addedClusterIds_;
    JBTClusters_ClusterFilterTypeEnum *filterType_;
    ComGoogleCommonBaseOptional *topicType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_filterWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change_;
- (void)dealloc;
- (id)filterWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change:(id)arg1;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withJBTClusters_ClusterFilterTypeEnum:(id)arg2 withComGoogleCommonBaseOptional:(id)arg3;

@end
