//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLConnectionStoreState, NSArray;

@protocol FBGraphQLConnectionStoreEdgeFiltering <NSObject>
- (NSArray *)filteredEdgesFromEdgesToBeAdded:(NSArray *)arg1 atChunkIndex:(unsigned int)arg2 state:(FBGraphQLConnectionStoreState *)arg3 locationType:(unsigned int)arg4;
@end

