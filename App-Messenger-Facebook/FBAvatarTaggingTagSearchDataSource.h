//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAvatarTaggingSectionDataSource.h"
#import "FBMemAvatarTaggingSearchProviderDelegate.h"

@class FBUserSession, NSArray, NSString;

@interface FBAvatarTaggingTagSearchDataSource : NSObject <FBMemAvatarTaggingSearchProviderDelegate, FBAvatarTaggingSectionDataSource>
{
    NSArray *_excludeFBIDs;
    NSArray *_unfilteredAvatars;
    FBUserSession *_session;
    id <FBAvatarProtocol> _currentViewer;
    BOOL _showNoResultsCell;
    id <FBTableViewMutating> _tableViewMutator;
    NSString *_searchText;
    id <FBAvatarTaggingSearchProviderProtocol> _searchProvider;
    id <FBAvatarTaggingSectionDataSourceDelegate> _delegate;
    NSArray *_avatars;
}

@property(retain, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
@property(nonatomic) __weak id <FBAvatarTaggingSectionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showNoResultsCell; // @synthesize showNoResultsCell=_showNoResultsCell;
@property(retain, nonatomic) id <FBAvatarTaggingSearchProviderProtocol> searchProvider; // @synthesize searchProvider=_searchProvider;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
- (void).cxx_destruct;
- (void)searchProviderDidFinishFetchingResults:(id)arg1;
- (void)searchProvider:(id)arg1 foundResults:(id)arg2 forText:(id)arg3;
- (id)loggingSourceForAvatarAtIndexPath:(id)arg1;
- (id)fetchOrInsertFullAvatarAtIndexPath:(id)arg1;
- (id)fullAvatarAtIndexPath:(id)arg1;
- (id)avatarAtIndexPath:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (BOOL)hasAvatars;
- (void)reset;
- (id)tableView:(id)arg1 noResultsCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForAvatar:(id)arg2 isLastCell:(BOOL)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setSearchText:(id)arg1 andSearch:(BOOL)arg2;
- (void)_updateSearchedAvatars:(id)arg1 forSearchedText:(id)arg2;
- (id)currentViewerForViewerFBID:(id)arg1;
- (void)clearSearchText;
- (void)setExcludeFBIDs:(id)arg1;
- (void)setUnfilteredAvatars:(id)arg1 searchedText:(id)arg2;
- (BOOL)_hasExcludeFBID:(id)arg1;
- (void)_styleCell:(id)arg1 isLastCell:(BOOL)arg2;
- (id)_bottomRowBackgroundImageView;
- (id)_backgroundImageView;
- (void)dealloc;
@property(readonly, nonatomic, getter=isFetchingResults) BOOL fetchingResults;
- (id)initWithSearchProvider:(id)arg1 session:(id)arg2;

// Remaining properties
@property(nonatomic, getter=isActive) BOOL active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

