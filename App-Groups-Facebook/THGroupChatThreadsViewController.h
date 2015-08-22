//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "THAbstractPagedDataViewController.h"

#import "FBGroupsDataSourceDelegate.h"
#import "FBGroupsTableViewControllerProtocol.h"
#import "THPersonDataLoaderDelegate.h"
#import "UITableViewDelegate.h"

@class FBContentInsetTracker, FBUserSession, NSString, THGroupChatThreadsDataSource, THGroupEmptyState, THPersonDataLoader;

@interface THGroupChatThreadsViewController : THAbstractPagedDataViewController <FBGroupsDataSourceDelegate, THPersonDataLoaderDelegate, UITableViewDelegate, FBGroupsTableViewControllerProtocol>
{
    FBUserSession *_session;
    NSString *_groupID;
    THGroupChatThreadsDataSource *_chatThreadsDataSource;
    THPersonDataLoader *_personDataLoader;
    THGroupEmptyState *_emptyStateView;
    BOOL _hasInitialLoaded;
    FBContentInsetTracker *_contentInsetTracker;
    BOOL _canViewerCreateGroupChats;
    id <FBIntentHandler> _intentHandler;
}

@property(nonatomic) BOOL canViewerCreateGroupChats; // @synthesize canViewerCreateGroupChats=_canViewerCreateGroupChats;
@property(nonatomic) __weak id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_updatePerson:(id)arg1;
- (void)_setupEmptyStateForViewStateManager;
- (void)scrollToTop;
- (void)personDataLoader:(id)arg1 didUpdatePerson:(id)arg2;
- (void)dataSource:(id)arg1 didEndDownloadForType:(int)arg2 error:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 groupID:(id)arg2 intentHandler:(id)arg3;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
