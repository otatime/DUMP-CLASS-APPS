//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGroupsDataSourceProtocol.h"
#import "FBGroupsPendingMembersViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBMemGroup, FBUserSession, NSMutableArray, NSMutableIndexSet, NSString;

@interface FBGroupsPendingMembersDataSource : NSObject <FBGroupsPendingMembersViewCellDelegate, FBGroupsDataSourceProtocol, UITableViewDataSource, UITableViewDelegate>
{
    NSString *_groupID;
    NSString *_source;
    FBMemGroup *_group;
    NSMutableArray *_requestEdges;
    NSMutableIndexSet *_approvedMemberIndices;
    NSMutableIndexSet *_ignoredMemberIndices;
    NSMutableIndexSet *_blockedMemberIndices;
    id _downloadHandle;
    BOOL _canDownloadTail;
    NSString *_tailCursor;
    id <FBGroupsPendingMembersViewConfig> _config;
    id <FBGroupsTableViewControllerProtocol> _actionsTarget;
    id <FBGroupsPendingMembersDataSourceDelegate> _delegate;
    FBUserSession *_session;
    id <FBTableViewMutating> _tableViewMutator;
}

@property(nonatomic) __weak id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <FBGroupsPendingMembersDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBGroupsTableViewControllerProtocol> actionsTarget; // @synthesize actionsTarget=_actionsTarget;
- (void).cxx_destruct;
- (id)_contextStringsForRequest:(id)arg1;
- (id)_indexPathForPerson:(id)arg1;
- (void)didBlockRequestForPerson:(id)arg1;
- (void)didIgnoreRequestForPerson:(id)arg1;
- (void)didApproveRequestForPerson:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cancelRequests;
- (BOOL)canDownloadTail;
- (unsigned int)count;
- (BOOL)hasData;
- (BOOL)isDownloadingData;
- (void)downloadData:(int)arg1;
- (BOOL)supportsDownloadType:(int)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 groupID:(id)arg2 source:(id)arg3 viewConfig:(id)arg4;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

