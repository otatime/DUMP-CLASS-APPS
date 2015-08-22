//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBContactsSearch.h"

@class FBContactSearchQuery, FBGraphQLService, MNUserStore, NSArray, NSString;

@interface MNPaymentsDollarForFriendEligibleContactSearch : NSObject <FBContactsSearch>
{
    FBGraphQLService *_graphQLService;
    MNUserStore *_userStore;
    id <FBServiceTransactionMutating> _requestToken;
    NSArray *_contactsSearchResult;
    id <FBContactsSearchDelegate> _delegate;
    FBContactSearchQuery *_currentQuery;
}

@property(readonly, copy, nonatomic) FBContactSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) id <FBContactsSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateContactsSearchResultAndFinishSearch:(id)arg1;
- (BOOL)hasPendingSearchOperationForSection:(int)arg1;
- (BOOL)hasPendingSearchOperation;
- (void)cancelPendingSearchOperation;
- (void)setupAnalytics:(id)arg1 jobKey:(id)arg2;
- (void)didSelectRow:(int)arg1 inContactSection:(int)arg2;
- (id)titleForHeaderInSection:(int)arg1;
- (int)numberOfSearchResultsInSection:(int)arg1;
- (id)sectionsInSearch;
- (id)resultForRow:(int)arg1 inContactSection:(int)arg2;
- (void)clearResults;
- (void)refreshSearch:(id)arg1;
- (void)search:(id)arg1;
- (id)initWithGraphQLService:(id)arg1 userStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
