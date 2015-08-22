//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBTaggableCollection.h"

@class NSMutableArray;

@interface FBMutableTaggableCollection : FBTaggableCollection
{
    NSMutableArray *_allTaggableObjects;
    CDUnknownBlockType _completionWhenFinishFetching;
    BOOL _fetchingEnabled;
    BOOL _finishedFetching;
    id <FBTaggableCollectionFetcher> _fetcher;
}

+ (void)fetchAllFromMutableTaggableCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)taggableCollectionForPage:(id)arg1 authorFBID:(id)arg2 session:(id)arg3;
+ (id)postableCollectionForPerson:(id)arg1 session:(id)arg2;
+ (id)taggableCollectionForPerson:(id)arg1 authorFBID:(id)arg2 session:(id)arg3;
+ (id)taggableCollectionForEvent:(id)arg1 authorFBID:(id)arg2 session:(id)arg3;
+ (id)taggableFamilyNonUserMembersCollectionForAuthorFBID:(id)arg1 session:(id)arg2;
+ (id)taggableGroupsCollectionForAuthorFBID:(id)arg1 session:(id)arg2;
+ (id)taggableCollectionForGroup:(id)arg1 authorFBID:(id)arg2 session:(id)arg3;
+ (id)taggableCollectionForGroupSuggestedMembers:(id)arg1 authorFBID:(id)arg2 session:(id)arg3;
+ (id)taggableCollectionForTargetGraphQLID:(id)arg1 targetGraphQLTypeName:(id)arg2 authorGraphQLID:(id)arg3 authorGraphQLTypeName:(id)arg4 photoObjectGraphQLID:(id)arg5 photoObjectGraphQLTypeName:(id)arg6 session:(id)arg7;
@property(retain, nonatomic) id <FBTaggableCollectionFetcher> fetcher; // @synthesize fetcher=_fetcher;
- (void).cxx_destruct;
- (void)_fetchAllWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isFetchingEnabled) BOOL fetchingEnabled;
@property(readonly, nonatomic) BOOL hasFinishedFetching;
- (void)setHasFinishedFetching:(BOOL)arg1;
- (void)markAsFinishedFetching;
- (id)taggableObjects;
- (void)addTaggableObject:(id)arg1;
- (void)addTaggableObjects:(id)arg1;
- (id)initWithTaggableObjects:(id)arg1;

@end

