//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGroupsDataSourceProtocol.h"
#import "FBInvalidating.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBMemViewer, FBUserSession, NSMutableArray, NSMutableSet, NSString;

@interface THNotificationsDataSource : NSObject <FBGroupsDataSourceProtocol, UITableViewDataSource, UITableViewDelegate, FBInvalidating>
{
    BOOL _invalidated;
    NSMutableArray *_notifications;
    NSMutableSet *_storiesToMarkAsRead;
    NSString *_headCursor;
    NSString *_tailCursor;
    BOOL _hasMoreTailData;
    id _downloadHandleInitial;
    id _downloadHandleHead;
    id _downloadHandleTail;
    unsigned int _unseenNotificationCount;
    id <FBGroupsTableViewControllerProtocol> _actionsTarget;
    id <THNotificationsDataSourceDelegate> _delegate;
    FBUserSession *_session;
    id <FBTableViewMutating> _tableViewMutator;
    FBMemViewer *_viewer;
}

@property(retain, nonatomic) FBMemViewer *viewer; // @synthesize viewer=_viewer;
@property(nonatomic) __weak id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <THNotificationsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBGroupsTableViewControllerProtocol> actionsTarget; // @synthesize actionsTarget=_actionsTarget;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (BOOL)_isNotificationUnread:(id)arg1;
- (void)_markPendingStoriesAsReadAfterLoad;
- (id)_notificationStoriesForSeenState:(id)arg1;
- (void)cancelRequests;
- (id)_downloadDataForCursor:(id)arg1 downloadType:(int)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)downloadTailData;
- (void)downloadHeadData;
- (void)downloadInitialData;
- (void)downloadData:(int)arg1;
- (BOOL)canDownloadTail;
- (unsigned int)count;
- (BOOL)hasData;
- (void)resetData;
- (BOOL)isDownloadingData:(int)arg1;
- (BOOL)isDownloadingData;
- (BOOL)supportsDownloadType:(int)arg1;
- (void)clearUnreadNotifications;
- (void)clearUnseenNotificationCount;
@property(readonly, nonatomic) unsigned int unreadNotificationCount;
@property(readonly, nonatomic) unsigned int unseenNotificationCount;
- (id)unseenNotificationStoryIDs;
- (id)unreadNotificationStoryIDs;
- (void)setStory:(id)arg1 forIndex:(unsigned int)arg2;
- (void)markStoryAsReadOnDataLoad:(id)arg1;
- (id)storyForIndex:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

