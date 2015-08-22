//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLConnectionStoreStateModifying.h"

@class FBGraphQLConnectionStoreLocation, NSArray, NSDictionary, NSString;

@interface _FBGraphQLConnectionStoreInsertion : NSObject <FBGraphQLConnectionStoreStateModifying>
{
    id <FBGraphQLConnectionPageProtocol> _connectionPage;
    FBGraphQLConnectionStoreLocation *_targetLocation;
    NSDictionary *_userInfo;
    NSArray *_edgeFilters;
    BOOL _didFilterAllEdgesInNewChunk;
    FBGraphQLConnectionStoreLocation *_locationForEdgesStreamedAfterThisInsertion;
}

@property(readonly, nonatomic) BOOL didFilterAllEdgesInNewChunk; // @synthesize didFilterAllEdgesInNewChunk=_didFilterAllEdgesInNewChunk;
@property(readonly, nonatomic) FBGraphQLConnectionStoreLocation *locationForEdgesStreamedAfterThisInsertion; // @synthesize locationForEdgesStreamedAfterThisInsertion=_locationForEdgesStreamedAfterThisInsertion;
- (void).cxx_destruct;
- (id)_transitionStatesForInsertingAfterTargetFromState:(id)arg1;
- (id)_transitionStatesForInsertingBeforeTargetFromState:(id)arg1;
- (id)_transitionStatesForInsertingNewChunkAtTopFromState:(id)arg1;
- (id)_filteredEdgesAtChunkIndex:(unsigned int)arg1 state:(id)arg2 locationType:(unsigned int)arg3;
- (id)transitionsFromState:(id)arg1;
- (id)initWithConnectionPage:(id)arg1 targetLocation:(id)arg2 userInfo:(id)arg3 edgeFilters:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

