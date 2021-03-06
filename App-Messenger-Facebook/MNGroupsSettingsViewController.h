//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"
#import "MNSetPinnedGroupsSenderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBMPinnedGroupsManager, FBUserSession, MNPinnedGroupsEditManager, MNSetPinnedGroupsSender, NSString, UITableView;

@interface MNGroupsSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNSetPinnedGroupsSenderDelegate, FBClassProvidable>
{
    UITableView *_tableView;
    FBUserSession *_session;
    FBMPinnedGroupsManager *_pinnedGroupsManager;
    MNPinnedGroupsEditManager *_pinnedGroupsEditManager;
    MNSetPinnedGroupsSender *_setPinnedGroupsSender;
    unsigned int _numClearRetries;
    unsigned int _clearPinnedBgTask;
    BOOL _isObserving;
}

- (void).cxx_destruct;
- (void)_endSavingPinnedGroupBackgroundTask;
- (void)_didEnterBackground:(id)arg1;
- (void)_stopObservers;
- (void)_startObservers;
- (void)setPinnedGroupsSender:(id)arg1 didFailWithError:(id)arg2;
- (void)setPinnedGroupsSender:(id)arg1 didSucceedWithResult:(id)arg2 updateTime:(long long)arg3;
- (void)_cancelSavingPinnedGroups;
- (void)_clearPinnedGroups;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 pinnedGroupsManager:(id)arg2 pinnedGroupsEditManager:(id)arg3;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

