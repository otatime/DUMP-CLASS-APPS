//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBContactsSearch.h"

@class FBAnalytics, FBContactSearchQuery, FBMessengerSyncEngineManager, FBSyncStorePersonSearchOperation, NSArray, NSNotificationCenter, NSOperationQueue, NSString, NSTimer;

@interface FBLocalContactsSearch : NSObject <FBContactsSearch, FBClassProvidable>
{
    NSArray *_identChoices;
    NSOperationQueue *_operationQueue;
    FBSyncStorePersonSearchOperation *_pendingSearchOperation;
    BOOL _pendingSearchOperationDirty;
    NSTimer *_pendingSearchOperationProgressTimeout;
    id <FBContactsSearchDelegate> _delegate;
    FBContactSearchQuery *_currentQuery;
    NSArray *_sortedUsers;
    NSString *_currentSearch;
    NSNotificationCenter *_notificationCenter;
    FBMessengerSyncEngineManager *_syncEngineManager;
    FBAnalytics *_analytics;
    NSString *_analyticsJobUuid;
    NSString *_analyticsQueryUuid;
    unsigned long long _searchStartTime;
}

@property(nonatomic) unsigned long long searchStartTime; // @synthesize searchStartTime=_searchStartTime;
@property(copy, nonatomic) NSString *analyticsQueryUuid; // @synthesize analyticsQueryUuid=_analyticsQueryUuid;
@property(copy, nonatomic) NSString *analyticsJobUuid; // @synthesize analyticsJobUuid=_analyticsJobUuid;
@property(retain, nonatomic) FBAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) NSTimer *pendingSearchOperationProgressTimeout; // @synthesize pendingSearchOperationProgressTimeout=_pendingSearchOperationProgressTimeout;
@property(retain, nonatomic) FBSyncStorePersonSearchOperation *pendingSearchOperation; // @synthesize pendingSearchOperation=_pendingSearchOperation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) FBMessengerSyncEngineManager *syncEngineManager; // @synthesize syncEngineManager=_syncEngineManager;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(copy, nonatomic) NSString *currentSearch; // @synthesize currentSearch=_currentSearch;
@property(copy, nonatomic) NSArray *sortedUsers; // @synthesize sortedUsers=_sortedUsers;
@property(readonly, copy, nonatomic) FBContactSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) id <FBContactsSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setAndSortUsers:(id)arg1;
- (BOOL)hasPendingSearchOperationForSection:(int)arg1;
- (id)resultForRow:(int)arg1 inContactSection:(int)arg2;
- (void)didSelectRow:(int)arg1 inContactSection:(int)arg2;
- (id)titleForHeaderInSection:(int)arg1;
- (int)numberOfSearchResultsInSection:(int)arg1;
- (id)sectionsInSearch;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)hasPendingSearchOperation;
- (void)cancelPendingSearchOperation;
- (void)onSearchOperationCompleted:(id)arg1;
- (void)onSearchProgressTimeoutExpired:(id)arg1;
- (void)clearResults;
- (void)refreshSearch:(id)arg1;
- (void)search:(id)arg1;
- (void)setupAnalytics:(id)arg1 jobKey:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1 syncEngineManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

