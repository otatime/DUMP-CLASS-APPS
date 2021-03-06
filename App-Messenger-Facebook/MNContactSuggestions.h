//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNSuggestedContactsRetriever.h"
#import "MNTopAndFavoriteFriendsFetcherDelegate.h"

@class MNTopAndFavoriteFriendsFetcher, NSString;

@interface MNContactSuggestions : NSObject <MNTopAndFavoriteFriendsFetcherDelegate, MNSuggestedContactsRetriever, FBClassProvidable>
{
    id <MNContactSuggestionsDelegate> _delegate;
    MNTopAndFavoriteFriendsFetcher *_friendsFetcher;
}

@property(retain, nonatomic) MNTopAndFavoriteFriendsFetcher *friendsFetcher; // @synthesize friendsFetcher=_friendsFetcher;
@property(nonatomic) id <MNContactSuggestionsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFinishFriendsFetch:(id)arg1 friends:(id)arg2;
- (id)_sortFriends:(id)arg1;
- (void)startRetrievingSuggestedContacts;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

