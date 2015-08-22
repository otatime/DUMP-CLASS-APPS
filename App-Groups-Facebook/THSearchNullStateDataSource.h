//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBGroupsDataLoader, FBUserSession, NSArray, NSString, UITableView;

@interface THSearchNullStateDataSource : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    FBUserSession *_session;
    FBGroupsDataLoader *_groupsDataLoader;
    NSArray *_recentlySearchedGroupIDs;
    NSArray *_recentlySearchedGroups;
    NSArray *_adminedGroups;
    NSArray *_recentlyUpdatedGroups;
    UITableView *_nullStateTableView;
}

@property(nonatomic) __weak UITableView *nullStateTableView; // @synthesize nullStateTableView=_nullStateTableView;
- (void).cxx_destruct;
- (id)_cellForTableView:(id)arg1 group:(id)arg2 identifier:(id)arg3;
- (id)_groupInArray:(id)arg1 atIndexPath:(id)arg2;
- (void)_refreshAdminedGroups;
- (void)_refreshRecentlyUpdatedGroups;
- (void)_validateRecentlySearchedGroups;
- (void)_updateRecentlySearchedGroups:(id)arg1;
- (void)_refreshRecentlySearchedGroups;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didSelectSearchResult:(id)arg1;
- (void)reloadData;
- (id)groupAtIndexPath:(id)arg1;
- (BOOL)hasAdminedGroupsSection;
- (BOOL)hasRecentlyUpdatedGroupsSection;
- (BOOL)hasRecentlySearchedGroupsSection;
- (unsigned int)totalGroups;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
