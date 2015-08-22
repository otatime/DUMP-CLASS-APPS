//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBContactsSearch.h"

@class FBAnalytics, FBContactSearchQuery, NSArray, NSBlockOperation, NSOperationQueue, NSString;

@interface FBLocalGroupsSearch : NSObject <FBContactsSearch>
{
    id <FBLocalGroupsSearchModelAdapter> _modelAdapter;
    NSOperationQueue *_operationQueue;
    NSBlockOperation *_searchOperation;
    FBAnalytics *_analytics;
    NSString *_analyticsJobUuid;
    NSString *_analyticsQueryUuid;
    unsigned long long _searchStartTime;
    id <FBContactsSearchDelegate> _delegate;
    FBContactSearchQuery *_currentQuery;
    NSArray *_sortedResults;
}

@property(copy, nonatomic) NSArray *sortedResults; // @synthesize sortedResults=_sortedResults;
@property(readonly, copy, nonatomic) FBContactSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) id <FBContactsSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_searchOperationCompleted;
- (BOOL)hasPendingSearchOperationForSection:(int)arg1;
- (BOOL)hasPendingSearchOperation;
- (void)cancelPendingSearchOperation;
- (void)setupAnalytics:(id)arg1 jobKey:(id)arg2;
- (void)didSelectRow:(int)arg1 inContactSection:(int)arg2;
- (id)titleForHeaderInSection:(int)arg1;
- (id)resultForRow:(int)arg1 inContactSection:(int)arg2;
- (int)numberOfSearchResultsInSection:(int)arg1;
- (id)sectionsInSearch;
- (void)clearResults;
- (void)refreshSearch:(id)arg1;
- (void)_executeSearchThroughPossibleResults:(id)arg1;
- (void)_searchExecutionOperationMain;
- (void)_createSearchOperation;
- (void)search:(id)arg1;
- (id)initWithModelAdapter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
