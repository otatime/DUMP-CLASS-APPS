//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTCallback.h"

@class ComGoogleAppsBigtopSyncClientImplTopicsTopicFactory_TopicQueryInfo, JBTIClustersClustersImpl, NSString;

@interface JBTIClustersClustersImpl_$5 : NSObject <JBTCallback>
{
    JBTIClustersClustersImpl *this$0_;
    id <JavaUtilList> val$clusterItemList_;
    ComGoogleAppsBigtopSyncClientImplTopicsTopicFactory_TopicQueryInfo *val$topicQueryInfo_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIClustersClustersImpl:(id)arg1 withJavaUtilList:(id)arg2 withComGoogleAppsBigtopSyncClientImplTopicsTopicFactory_TopicQueryInfo:(id)arg3;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
