//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNContactSuggestionsDelegate.h"
#import "MNFriendsFetcherDelegate.h"
#import "MNOnlineFriendsFetcherDelegate.h"

@class MNContactImporter, MNFriendsFetcher, MNFriendsFetcherAggregatorCache, MNOnlineFriendsFetcher, MNTopContactsAndGroupsRetriever, NSObject<OS_dispatch_queue>, NSString;

@interface MNFriendsFetcherAggregator : NSObject <MNFriendsFetcherDelegate, MNOnlineFriendsFetcherDelegate, MNContactSuggestionsDelegate, FBClassProvidable>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isEnabledPeopleRanking;
    BOOL _didFetchFriends;
    BOOL _didFetchOnlineFriends;
    id <MNFriendsFetcherAggregatorDelegate> _delegate;
    unsigned int _numberOfTopFriends;
    MNFriendsFetcher *_messengerFriendsFetcher;
    MNFriendsFetcherAggregatorCache *_aggregationCache;
    MNOnlineFriendsFetcher *_onlineFriendsFetcher;
    MNTopContactsAndGroupsRetriever *_favoritesFetcher;
    MNContactImporter *_contactImporter;
}

@property(retain, nonatomic) MNContactImporter *contactImporter; // @synthesize contactImporter=_contactImporter;
@property(nonatomic) BOOL didFetchOnlineFriends; // @synthesize didFetchOnlineFriends=_didFetchOnlineFriends;
@property(retain, nonatomic) MNTopContactsAndGroupsRetriever *favoritesFetcher; // @synthesize favoritesFetcher=_favoritesFetcher;
@property(retain, nonatomic) MNOnlineFriendsFetcher *onlineFriendsFetcher; // @synthesize onlineFriendsFetcher=_onlineFriendsFetcher;
@property(retain, nonatomic) MNFriendsFetcherAggregatorCache *aggregationCache; // @synthesize aggregationCache=_aggregationCache;
@property(nonatomic) BOOL didFetchFriends; // @synthesize didFetchFriends=_didFetchFriends;
@property(retain, nonatomic) MNFriendsFetcher *messengerFriendsFetcher; // @synthesize messengerFriendsFetcher=_messengerFriendsFetcher;
@property(nonatomic) BOOL isEnabledPeopleRanking; // @synthesize isEnabledPeopleRanking=_isEnabledPeopleRanking;
@property(nonatomic) unsigned int numberOfTopFriends; // @synthesize numberOfTopFriends=_numberOfTopFriends;
@property(nonatomic) __weak id <MNFriendsFetcherAggregatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didRetrieveSuggestedConversationContacts:(id)arg1;
- (void)didFinishOnlineFriendsUpdate:(id)arg1;
- (void)didFinishFriendsFetch:(id)arg1 conversationPeople:(id)arg2;
@property(readonly, nonatomic) BOOL didFetchAndAggregateFriends;
- (void)stop;
- (void)start;
- (void)_updateCacheResultsWithActiveFriends:(id)arg1 activeTopFriendsFavorites:(id)arg2 messengerFriends:(id)arg3 messengerTopFriendsFavorites:(id)arg4;
- (void)_filterFavoriteFriends:(id)arg1;
- (void)_filterMessengerFriends:(id)arg1;
- (void)_filterOnlineFriends:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithFriendsFetcher:(id)arg1 onlineFriendsFetcher:(id)arg2 aggregationCache:(id)arg3 favoritesFetcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

