//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMagicStoryMemoizedCollectionIndexData, FBUserSession, NSArray, NSObject<OS_dispatch_queue>;

@interface FBMagicStoryCollectionIndex : NSObject
{
    FBUserSession *_session;
    CDUnknownBlockType _mergeAlgorithmBlock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_processors;
    BOOL _updating;
    BOOL _needsUpdate;
    double _mostRecentGenerationStartTime;
    double _mostRecentGenerationFinishedTime;
    BOOL _collectionsReady;
    FBMagicStoryMemoizedCollectionIndexData *_collectionIndexData;
}

+ (void)_enumerateCollectionsFromDateSortedFbAssets:(id)arg1 withMergeAlgorithm:(CDUnknownBlockType)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)fetchMemoizedCollectionIndexDataWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) FBMagicStoryMemoizedCollectionIndexData *collectionIndexData; // @synthesize collectionIndexData=_collectionIndexData;
@property(nonatomic) BOOL collectionsReady; // @synthesize collectionsReady=_collectionsReady;
- (void).cxx_destruct;
- (id)_memoizedCollectionGenerationOperation;
- (id)analyticsDictionaryForMostRecentGeneration;
- (void)_indexUnsortedAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)indexAssetsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_indexAssetsAgainIfNeeded;
- (void)setNeedsUpdate;
- (id)initWithSession:(id)arg1;
- (id)init;

@end
