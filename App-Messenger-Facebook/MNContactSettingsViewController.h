//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MNChatRequestUpdateMonitorListener.h"
#import "MNContactsSyncSettingControllerDelegate.h"
#import "MNSettingSectionFooterViewDelegate.h"
#import "MNSettingsCellSwitchDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBLazyCreator, FBLocaleMap, FBUserSession, MNBatchInvitePickerNavigationHandler, MNChatRequestUpdateMonitor, MNContactsSyncSettingController, MNPendingRequestsFolderThreadsQueryPolicy, MNPendingRequestsThreadListNavigationHandler, MNSettingsSection, MNSettingsView, NSArray, NSString;

@interface MNContactSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNChatRequestUpdateMonitorListener, MNSettingsCellSwitchDelegate, MNSettingSectionFooterViewDelegate, MNContactsSyncSettingControllerDelegate>
{
    MNBatchInvitePickerNavigationHandler *_batchInvitePickerNavigationHandler;
    MNContactsSyncSettingController *_contactsSyncSettingController;
    FBLazyCreator *_blockedUsersListViewControllerCreator;
    MNPendingRequestsThreadListNavigationHandler *_pendingRequestsThreadListNavigationHandler;
    MNPendingRequestsFolderThreadsQueryPolicy *_pendingRequestsFolderThreadsQueryPolicy;
    FBUserSession *_session;
    FBLocaleMap *_localeMap;
    MNSettingsSection *_syncContactsSection;
    MNChatRequestUpdateMonitor *_chatRequestUpdateMonitor;
    MNSettingsView *_settingsView;
    NSArray *_settingsSections;
    NSArray *_settingsSectionFooterViews;
}

- (void).cxx_destruct;
- (void)_reinitializeAndRefreshTableViewWithFooterViewsNeedUpdate:(BOOL)arg1;
- (void)_openURL:(id)arg1 hideActionBarButton:(BOOL)arg2;
- (void)numberOfChatRequestsDidUpdate;
- (void)contactsSyncSettingControllerDidChangeContactSyncStatus:(id)arg1;
- (void)contactsSyncSettingControllerDidPressLearnMore:(id)arg1;
- (void)_initializeSettingsSectionFooterViews;
- (void)_initializeSettingsSections;
- (void)_chatRequestsSettingTapped:(id)arg1;
- (void)_blockedListSettingTapped:(id)arg1;
- (void)_inviteSettingTapped:(id)arg1;
- (void)_syncContactSettingTapped:(id)arg1;
- (void)settingsSectionFooterViewDidTapSubtitleLink:(id)arg1 withResult:(id)arg2;
- (void)didToggleSettingsSwitch:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithBatchInvitePickerNavigationHandler:(id)arg1 contactsSyncSettingController:(id)arg2 blockedUsersListViewControllerProvider:(id)arg3 pendingRequestsThreadListNavigationHandler:(id)arg4 pendingRequestsFolderThreadsQueryPolicy:(id)arg5 chatRequestUpdateMonitor:(id)arg6 localeMap:(id)arg7 session:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

