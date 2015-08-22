//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLConnectionStoreEdgeFiltering.h"

@class NSObject<FBGraphQLConnectionSyncStoreFilter>, NSString;

@interface FBGraphQLConnectionSyncStoreEdgeFilter : NSObject <FBGraphQLConnectionStoreEdgeFiltering>
{
    NSObject<FBGraphQLConnectionSyncStoreFilter> *_filter;
}

@property(readonly, nonatomic) NSObject<FBGraphQLConnectionSyncStoreFilter> *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (BOOL)shouldFilterNode:(id)arg1;
- (CDUnknownBlockType)filterPredicate;
- (id)filteredEdgesFromEdgesToBeAdded:(id)arg1 atChunkIndex:(unsigned int)arg2 state:(id)arg3 locationType:(unsigned int)arg4;
- (id)initWithConnectionSyncStoreFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
