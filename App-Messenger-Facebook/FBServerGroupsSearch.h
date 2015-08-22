//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBContactsSearch.h"
#import "FBServerGroupsFetcherDelegate.h"

@class FBAnalytics, FBContactSearchQuery, FBServerGroupsSearchCache, FBServerGroupsSearchFetcher, FBUserSession, NSArray, NSString;

@interface FBServerGroupsSearch : NSObject <FBServerGroupsFetcherDelegate, FBContactsSearch, FBClassProvidable>
{
    FBServerGroupsSearchFetcher *_fetcher;
    NSString *_fbRequestViewerFBID;
    FBAnalytics *_analytics;
    unsigned long long _searchStartTime;
    FBUserSession *_session;
    BOOL _showSearchingCell;
    id <FBContactsSearchDelegate> _delegate;
    FBContactSearchQuery *_currentQuery;
    unsigned int _resultsLimit;
    unsigned int _minQueryLength;
    NSArray *_groups;
    FBServerGroupsSearchCache *_cache;
    NSString *_analyticsJobUuid;
    NSString *_analyticsQueryUuid;
}

@property(copy, nonatomic) NSString *analyticsQueryUuid; // @synthesize analyticsQueryUuid=_analyticsQueryUuid;
@property(copy, nonatomic) NSString *analyticsJobUuid; // @synthesize analyticsJobUuid=_analyticsJobUuid;
@property(retain, nonatomic) FBServerGroupsSearchCache *cache; // @synthesize cache=_cache;
@property(nonatomic) BOOL showSearchingCell; // @synthesize showSearchingCell=_showSearchingCell;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) unsigned int minQueryLength; // @synthesize minQueryLength=_minQueryLength;
@property(nonatomic) unsigned int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, copy, nonatomic) FBContactSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) id <FBContactsSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setThreadsToFilter:(id)arg1;
- (BOOL)_shouldCacheQuery:(id)arg1;
- (BOOL)hasPendingSearchOperationForSection:(int)arg1;
- (id)resultForRow:(int)arg1 inContactSection:(int)arg2;
- (id)titleForHeaderInSection:(int)arg1;
- (unsigned int)numberOfSearchResults;
- (int)numberOfSearchResultsInSection:(int)arg1;
- (id)sectionsInSearch;
- (BOOL)hasPendingSearchOperation;
- (void)cancelPendingSearchOperation;
- (void)didSelectRow:(int)arg1 inContactSection:(int)arg2;
- (BOOL)shouldShowSearchingCell;
- (void)serverGroupsSearchDidFinishWithGroups:(id)arg1;
- (void)clearResults;
- (void)refreshSearch:(id)arg1;
- (void)search:(id)arg1;
- (void)setupAnalytics:(id)arg1 jobKey:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

