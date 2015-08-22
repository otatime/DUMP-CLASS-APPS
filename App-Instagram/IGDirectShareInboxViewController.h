//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGActionSheetDelegate.h"
#import "IGDirectShareInboxUploadCellDelegate.h"
#import "IGDirectSharePendingViewControllerDelegate.h"
#import "IGDirectedPostViewControllerDelegate.h"
#import "IGDynamicCollectionViewDatasource.h"
#import "IGFeedNetworkSourceDelegate.h"
#import "IGPullToRefreshProtocol.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGDirectShareInboxNuxView, IGDirectShareInboxUploadCell, IGDirectSharePendingRequestDataSource, IGDynamicCollectionView, IGFeedNetworkSource, IGFeedStatusView, IGKVOHandle, IGPullToRefreshViewManager, NSArray, NSString, UIControl, UILabel, UIPanGestureRecognizer, UITableView, UIView;

@interface IGDirectShareInboxViewController : IGViewController <IGActionSheetDelegate, UIGestureRecognizerDelegate, IGDynamicCollectionViewDatasource, IGDirectShareInboxUploadCellDelegate, IGDirectSharePendingViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, IGDirectedPostViewControllerDelegate, IGFeedNetworkSourceDelegate, IGPullToRefreshProtocol>
{
    BOOL _isViewVisible;
    BOOL _viewHasData;
    BOOL _waitForDataBeforeLogging;
    BOOL _inboxNeedsRefresh;
    BOOL _isNuxShown;
    UITableView *_tableView;
    IGFeedNetworkSource *_feedSource;
    UIControl *_pendingButton;
    UILabel *_pendingLabel;
    IGDynamicCollectionView *_pendingUsersView;
    IGDirectSharePendingRequestDataSource *_pendingRequestDataSource;
    IGKVOHandle *_pendingKVOHandle;
    NSArray *_previousPosts;
    NSArray *_posts;
    NSArray *_uploads;
    unsigned int _lastLoggedNumberOfPosts;
    unsigned int _lastLoggedNumberOfPendingQueueItems;
    UIView *_topTableBackgroundView;
    IGFeedStatusView *_feedStatusView;
    IGDirectShareInboxUploadCell *_tappedUploadCell;
    IGDirectShareInboxNuxView *_nuxView;
    UILabel *_topHintNuxView;
    UIView *_triangleNuxView;
    IGKVOHandle *_pendingButtonColorHandle;
    IGPullToRefreshViewManager *_pullToRefreshViewManager;
}

@property(retain, nonatomic) IGPullToRefreshViewManager *pullToRefreshViewManager; // @synthesize pullToRefreshViewManager=_pullToRefreshViewManager;
@property(retain, nonatomic) IGKVOHandle *pendingButtonColorHandle; // @synthesize pendingButtonColorHandle=_pendingButtonColorHandle;
@property(retain, nonatomic) UIView *triangleNuxView; // @synthesize triangleNuxView=_triangleNuxView;
@property(retain, nonatomic) UILabel *topHintNuxView; // @synthesize topHintNuxView=_topHintNuxView;
@property(retain, nonatomic) IGDirectShareInboxNuxView *nuxView; // @synthesize nuxView=_nuxView;
@property(nonatomic) BOOL isNuxShown; // @synthesize isNuxShown=_isNuxShown;
@property(retain, nonatomic) IGDirectShareInboxUploadCell *tappedUploadCell; // @synthesize tappedUploadCell=_tappedUploadCell;
@property(retain, nonatomic) IGFeedStatusView *feedStatusView; // @synthesize feedStatusView=_feedStatusView;
@property(nonatomic) BOOL inboxNeedsRefresh; // @synthesize inboxNeedsRefresh=_inboxNeedsRefresh;
@property(retain, nonatomic) UIView *topTableBackgroundView; // @synthesize topTableBackgroundView=_topTableBackgroundView;
@property(nonatomic) unsigned int lastLoggedNumberOfPendingQueueItems; // @synthesize lastLoggedNumberOfPendingQueueItems=_lastLoggedNumberOfPendingQueueItems;
@property(nonatomic) unsigned int lastLoggedNumberOfPosts; // @synthesize lastLoggedNumberOfPosts=_lastLoggedNumberOfPosts;
@property(nonatomic) BOOL waitForDataBeforeLogging; // @synthesize waitForDataBeforeLogging=_waitForDataBeforeLogging;
@property(nonatomic) BOOL viewHasData; // @synthesize viewHasData=_viewHasData;
@property(retain, nonatomic) NSArray *uploads; // @synthesize uploads=_uploads;
@property(nonatomic) BOOL isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(retain, nonatomic) NSArray *posts; // @synthesize posts=_posts;
@property(retain, nonatomic) NSArray *previousPosts; // @synthesize previousPosts=_previousPosts;
@property(retain, nonatomic) IGKVOHandle *pendingKVOHandle; // @synthesize pendingKVOHandle=_pendingKVOHandle;
@property(retain, nonatomic) IGDirectSharePendingRequestDataSource *pendingRequestDataSource; // @synthesize pendingRequestDataSource=_pendingRequestDataSource;
@property(retain, nonatomic) IGDynamicCollectionView *pendingUsersView; // @synthesize pendingUsersView=_pendingUsersView;
@property(retain, nonatomic) UILabel *pendingLabel; // @synthesize pendingLabel=_pendingLabel;
@property(retain, nonatomic) UIControl *pendingButton; // @synthesize pendingButton=_pendingButton;
@property(retain, nonatomic) IGFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)reloadDataFromPullToRefresh;
- (id)currentActiveScrollView;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)directSharePendingViewControllerDidAcceptPendingRequest:(id)arg1;
- (id)viewForCollectionView:(id)arg1 atIndex:(int)arg2;
- (int)numberOfViewsForCollectionView:(id)arg1;
- (void)layoutPendingRequestView;
- (void)pendingRequestDidChange;
- (void)showFailedNetworkAlert;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2;
- (void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3;
- (void)updateToPosts:(id)arg1 fromFeedFetch:(BOOL)arg2;
- (id)objectsToIndexPathsMapForObjects:(id)arg1 inArray:(id)arg2;
- (id)sortedPostsFromPosts:(id)arg1;
- (void)logInboxAnalyticsWithUserNavigation:(BOOL)arg1;
- (void)logNavigationToInbox;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onCameraFlowWillComplete:(id)arg1;
- (void)cellDidTapRetry:(id)arg1;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)cellDidTapDelete:(id)arg1;
- (void)postViewControllerDidHideOrDeletePost:(id)arg1;
- (void)postViewControllerWantsDismissal:(id)arg1;
- (void)newAction:(id)arg1;
- (void)pushToPendingQueueAnimated:(BOOL)arg1 viaPush:(BOOL)arg2;
- (void)pendingAction:(id)arg1;
- (void)refreshPendingRequestsData;
- (void)refreshInboxData;
- (void)refreshDataWithClearCount:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)pushToPostControllerWithPost:(id)arg1;
- (void)pushToPostWithPrimaryKey:(id)arg1 viaPush:(BOOL)arg2 animated:(BOOL)arg3;
- (void)reloadAllData;
- (void)reloadUploads;
- (void)removeNux;
- (void)showNux;
- (void)showTriangeView:(BOOL)arg1;
- (void)updateNuxVisibilty;
@property(readonly, nonatomic) BOOL shouldShowNux;
- (void)onTopHintNuxViewTapped;
@property(readonly, nonatomic) unsigned int subscriptionStatus;
@property(readonly, nonatomic) UIPanGestureRecognizer *scrollPanGestureRecognizer;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)disableNavigationGesture;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
