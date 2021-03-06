//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBGroupsInfoManagementDataSourceDelegate.h"
#import "FBGroupsInfoNotificationsDataSourceDelegate.h"
#import "FBGroupsInfoOptionsDataSourceDelegate.h"
#import "FBGroupsMembersListDetailViewControllerDelegate.h"
#import "FBGroupsTableViewControllerProtocol.h"
#import "RKModalDelegate.h"
#import "THGroupInfoUtilityDataSourceDelegate.h"
#import "THTransitioningViewControllerProtocol.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBConsistentLookasideCacheObservationHandle, FBGroupsInfoManagementDataSource, FBGroupsInfoNotificationsDataSource, FBGroupsInfoOptionsDataSource, FBMemGroup, FBTableViewAggregatedDataSource, FBTransientViewStateManager, FBUserSession, NSString, THAdminCatalystViewController, THCreationFlowCoverPhotoPickerViewController, THEventsListDetailViewController, THGroupHeaderView, THGroupInfoUtilityDataSource, THGroupInfoViewConfig, THGroupMutationInfo, THGroupNotificationsSettingsViewController, THMembersListDetailViewController, THPendingMembersViewController, THPhotosListDetailViewController, UIActivityIndicatorView, UIAlertView, UIButton, UITableView;

@interface THGroupInfoViewController : UIViewController <FBGroupsInfoManagementDataSourceDelegate, FBGroupsInfoNotificationsDataSourceDelegate, FBGroupsInfoOptionsDataSourceDelegate, THGroupInfoUtilityDataSourceDelegate, FBGroupsMembersListDetailViewControllerDelegate, RKModalDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, THTransitioningViewControllerProtocol, FBGroupsTableViewControllerProtocol>
{
    UITableView *_tableView;
    FBUserSession *_session;
    FBTransientViewStateManager *_viewStateManager;
    FBTableViewAggregatedDataSource *_aggregatedDataSource;
    FBConsistentLookasideCacheObservationHandle *_groupObservationHandle;
    FBMemGroup *_group;
    FBGroupsInfoManagementDataSource *_groupManagementDataSource;
    FBGroupsInfoNotificationsDataSource *_notificationsOptionDataSource;
    FBGroupsInfoOptionsDataSource *_optionsDataSource;
    THGroupInfoUtilityDataSource *_utilityDataSource;
    FBConsistentLookasideCacheObservationHandle *_cacheHandle;
    THPendingMembersViewController *_pendingMembersViewController;
    THAdminCatalystViewController *_reportedPostsViewController;
    THAdminCatalystViewController *_pendingPostsViewController;
    THGroupNotificationsSettingsViewController *_notificationsViewController;
    THGroupMutationInfo *_groupMutationInfo;
    THCreationFlowCoverPhotoPickerViewController *_coverPhotoPicker;
    THEventsListDetailViewController *_eventsDetailViewController;
    THMembersListDetailViewController *_membersListDetailViewController;
    THPhotosListDetailViewController *_photosListDetailViewController;
    UIActivityIndicatorView *_spinner;
    UIAlertView *_unableToLoadGroupAlertView;
    THGroupHeaderView *_headerView;
    UIButton *_shareGroupButton;
    THGroupInfoViewConfig *_config;
    id <FBIntentHandler> _intentHandler;
    int _modalViewTransitionStyle;
    id <THGroupInfoViewControllerDelegate> _delegate;
    NSString *_groupID;
}

@property(readonly, copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) __weak id <THGroupInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int modalViewTransitionStyle; // @synthesize modalViewTransitionStyle=_modalViewTransitionStyle;
@property(nonatomic) __weak id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_groupModelUpdated:(id)arg1;
- (void)_updateTableHeaderView;
- (void)_didTapShareGroup:(id)arg1;
- (void)_setupGroupSharingButton;
- (void)_setupHeaderView;
- (void)_showEditGroupViewController;
- (void)_showReportedPostsViewController;
- (void)_showPendingPostsViewController;
- (void)_showPendingMembersViewController;
- (void)_showGroupMembersViewController;
- (void)_addToHomeScreen;
- (void)_removeFromFavorites;
- (void)_addToFavorites;
- (void)_addCoverPhoto;
- (void)_leaveGroup;
- (void)_backButtonPressed:(id)arg1;
- (void)_didTapClose:(id)arg1;
- (void)_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToTop;
- (void)updateGroupMembershipForPersonID:(id)arg1 mutation:(unsigned int)arg2;
- (void)fb_didCancelModalDimissGesture;
- (void)fb_willBeginModalDimissGesture;
- (BOOL)fb_shouldDismissModalViewControllerGestureInterveneInDirection:(int)arg1 atTouchLocation:(struct CGPoint)arg2;
- (void)membershipChanged:(id)arg1 mutation:(unsigned int)arg2 reload:(BOOL)arg3;
- (void)didTapURL:(id)arg1;
- (void)didSelectUtilityOption:(int)arg1;
- (void)didSelectManagementOption:(int)arg1;
- (void)didSelectNotificationsOption:(int)arg1;
- (void)didSelectReportGroupOption;
- (void)didSelectLeaveGroupOption;
- (BOOL)_isGroupSecret;
- (void)_loadGroupProfileUsingCache:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 groupID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

