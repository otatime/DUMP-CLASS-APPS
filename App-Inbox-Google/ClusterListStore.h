//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ClusterListStore : NSObject
{
    NSMutableDictionary *clusterLists_;
    NSMutableDictionary *topicClusterLists_;
}

+ (id)sharedClusterStore;
- (void).cxx_destruct;
- (id)topicClusterListForUser:(id)arg1 withTopic:(id)arg2;
- (id)clusterListForUser:(id)arg1;
- (void)removeClusterListsForUser:(id)arg1;
- (id)topicClusterListForCurrentUserWithTopic:(id)arg1;
- (id)clusterListForCurrentUser;
- (id)init;

@end
