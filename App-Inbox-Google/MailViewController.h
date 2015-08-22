//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GBTSwipableTableViewController.h"

#import "ActionHandlerDelegate.h"
#import "AttachmentPreviewerDelegate.h"
#import "CellContentWidthDelegate.h"
#import "EditLocationViewControllerDelegate.h"
#import "ExpandableTableViewController.h"
#import "ExplanatoryMessageViewDelegate.h"
#import "ImageToggleSwitchDelegate.h"
#import "JBTEventListener.h"
#import "ListDataSourceDelegate.h"
#import "MoreActionsViewControllerDelegate.h"
#import "OverlayViewOptionsDelegate.h"
#import "ReminderPromoViewDelegate.h"
#import "SectionViewDelegate.h"
#import "SmartMailInteractionSupport.h"
#import "SnoozeControllerDelegate.h"
#import "ThreadCellDelegate.h"
#import "TipViewControllerDelegate.h"
#import "TopToolBarDataSource.h"
#import "TopToolBarDelegate.h"
#import "TopicSettingsViewControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class ActionHandler, ContactPickerController, EmptyView, ExpansionAnimationContext, ExplanatoryMessageView, GBTNavigationBar, GOOAlertView, ImageToggleSwitch, MailListFooterView, NIViewRecycler, NSArray, NSDate, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, Prefetcher, QTMPullToRefreshController, Reachability, ReminderPromoView, SnoozeController, TipViewController, TopToolBar, UIColor, UIPopoverController, UITableView, UIView, UIViewController;

@interface MailViewController : GBTSwipableTableViewController <ActionHandlerDelegate, CellContentWidthDelegate, ExplanatoryMessageViewDelegate, MoreActionsViewControllerDelegate, UIPopoverControllerDelegate, SmartMailInteractionSupport, ThreadCellDelegate, TopToolBarDataSource, TopToolBarDelegate, AttachmentPreviewerDelegate, EditLocationViewControllerDelegate, ImageToggleSwitchDelegate, JBTEventListener, OverlayViewOptionsDelegate, ReminderPromoViewDelegate, SectionViewDelegate, SnoozeControllerDelegate, TipViewControllerDelegate, TopicSettingsViewControllerDelegate, ExpandableTableViewController, ListDataSourceDelegate>
{
    EmptyView *emptyView_;
    id <JBTItemList> items_;
    ActionHandler *actionHandler_;
    MailListFooterView *footerView_;
    UIColor *originalTableViewBackgroundColor_;
    BOOL firstFetch_;
    BOOL ignoreTimeouts_;
    BOOL isInBackground_;
    BOOL liveListStarted_;
    BOOL isListeningToSyncClientManager_;
    BOOL isRewardState_;
    BOOL mayShowRewardState_;
    NSMutableArray *sectionViews_;
    NSIndexPath *expandedCell_;
    ExpansionAnimationContext *expansionContext_;
    unsigned int cellContext_;
    NSMutableDictionary *cellHeightCache_;
    id <JBTItem> swipedObject_;
    id <ListDataSource> dataSource_;
    Prefetcher *prefetcher_;
    NSMutableArray *indexPathToIgnoreForReload_;
    SnoozeController *snoozeController_;
    ContactPickerController *contactPickerController_;
    TipViewController *tipViewController_;
    id <JBTItemList> alternateItems_;
    id <ListDataSource> alternateDataSource_;
    NSMutableArray *alternateSectionViews_;
    BOOL originalItemsLoaded_;
    BOOL forceDisableUpdateAnimations_;
    TopToolBar *batchSelectionToolbar_;
    BOOL useMoreButton_;
    NSDate *sectionsLastUpdatedDate_;
    long alternateItemsOnceToken;
    ImageToggleSwitch *toggleSwitch_;
    NSString *email_;
    ExplanatoryMessageView *explanatoryMessage_;
    UIView *tableHeaderContainer_;
    UIView *tableHeaderView_;
    QTMPullToRefreshController *pullToRefreshController_;
    BOOL animateReloadedCells_;
    NSArray *indexPathsToFadeIn_;
    BOOL requiresReloadAfterAnimatingTableViewUpdates_;
    BOOL pendingRefresh_;
    UIPopoverController *moreActionsPopoverController_;
    UIView *moreActionsPopoverTriggeringView_;
    UIPopoverController *topicSettingsPopoverController_;
    UIView *topicSettingsPopoverTriggeringView_;
    NIViewRecycler *extraCellRecycler_;
    ReminderPromoView *reminderPromoView_;
    NSMutableDictionary *topicCardToExpansionState_;
    Reachability *bulkDeleteReachability_;
    id <JBTCanceler> bulkDeleteCanceler_;
    GOOAlertView *bulkDeleteAlert_;
    BOOL forceEmptyView_;
    BOOL expectingMoreChanges_;
    BOOL liveListLocked_;
    BOOL lockedForBackground_;
    BOOL lockedForScroll_;
    BOOL lockedForSnoozePopover_;
    BOOL lockedForTip_;
    BOOL lockedForTableViewUpdates_;
    BOOL lockedForTransition_;
    BOOL pullToRefreshEnabled_;
    BOOL readyForPrefetch_;
    BOOL isShowing_;
    BOOL showingAlternateItems_;
    id <MailViewControllerDelegate> delegate_;
    unsigned int navigationType_;
    id <SwipeComponent> swipeComponent_;
}

+ (id)titleForSection:(id)arg1;
@property(retain, nonatomic) id <SwipeComponent> swipeComponent; // @synthesize swipeComponent=swipeComponent_;
@property(nonatomic) BOOL showingAlternateItems; // @synthesize showingAlternateItems=showingAlternateItems_;
@property(readonly, nonatomic, getter=isShowing) BOOL showing; // @synthesize showing=isShowing_;
@property(nonatomic) BOOL readyForPrefetch; // @synthesize readyForPrefetch=readyForPrefetch_;
@property(nonatomic) BOOL pullToRefreshEnabled; // @synthesize pullToRefreshEnabled=pullToRefreshEnabled_;
@property(retain, nonatomic) Prefetcher *prefetcher; // @synthesize prefetcher=prefetcher_;
@property(readonly, nonatomic) unsigned int navigationType; // @synthesize navigationType=navigationType_;
@property(nonatomic, getter=isLockedForTransition) BOOL lockedForTransition; // @synthesize lockedForTransition=lockedForTransition_;
@property(nonatomic) BOOL lockedForTableViewUpdates; // @synthesize lockedForTableViewUpdates=lockedForTableViewUpdates_;
@property(nonatomic) BOOL lockedForTip; // @synthesize lockedForTip=lockedForTip_;
@property(nonatomic) BOOL lockedForSnoozePopover; // @synthesize lockedForSnoozePopover=lockedForSnoozePopover_;
@property(nonatomic) BOOL lockedForScroll; // @synthesize lockedForScroll=lockedForScroll_;
@property(nonatomic) BOOL lockedForBackground; // @synthesize lockedForBackground=lockedForBackground_;
@property(nonatomic) BOOL liveListLocked; // @synthesize liveListLocked=liveListLocked_;
@property(nonatomic, getter=isExpectingMoreChanges) BOOL expectingMoreChanges; // @synthesize expectingMoreChanges=expectingMoreChanges_;
@property(retain, nonatomic) ExpansionAnimationContext *expansionContext; // @synthesize expansionContext=expansionContext_;
@property(readonly, nonatomic) NSIndexPath *expandedCell; // @synthesize expandedCell=expandedCell_;
@property(nonatomic) __weak id <MailViewControllerDelegate> delegate; // @synthesize delegate=delegate_;
@property(readonly, nonatomic) id <ListDataSource> dataSource; // @synthesize dataSource=dataSource_;
@property(readonly, nonatomic) unsigned int cellContext; // @synthesize cellContext=cellContext_;
@property(readonly, nonatomic) ActionHandler *actionHandler; // @synthesize actionHandler=actionHandler_;
- (void).cxx_destruct;
- (void)addExplanatoryMessage;
- (void)addReminderPromoWithTutorial:(id)arg1;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)imageToggleSwitch:(id)arg1 changedToState:(BOOL)arg2;
- (void)switchToAlternateItems;
- (void)attachmentPreviewerWillClose:(id)arg1;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)showTipForTutorial:(id)arg1;
- (unsigned int)indexForSweepTipObject:(id)arg1;
- (struct CGRect)tipViewController:(id)arg1 cutoutRectForTip:(unsigned int)arg2 object:(id)arg3;
- (unsigned int)tipViewController:(id)arg1 cutoutShapeForTip:(unsigned int)arg2 object:(id)arg3;
- (void)tipViewControllerDidDismiss:(id)arg1 withAcknowledgement:(BOOL)arg2;
- (id)tipViewController:(id)arg1 targetViewForTip:(unsigned int)arg2 object:(id)arg3;
- (void)sectionViewDidTapSweepAction:(id)arg1;
- (void)editLocationViewControllerDidDelete:(id)arg1;
- (void)editLocationViewControllerDidSave:(id)arg1;
- (void)editLocationViewControllerDidCancel:(id)arg1;
- (BOOL)canSwipeRightItemAtIndexPath:(id)arg1;
- (BOOL)canSwipeLeftItemAtIndexPath:(id)arg1;
- (BOOL)canSwipeAtPoint:(struct CGPoint)arg1 atIndexPath:(id)arg2;
- (void)didFinishSwipeItemAtIndexPath:(id)arg1 withVisibilityRatio:(float)arg2 withVelocity:(float)arg3;
- (void)willCancelSwipeItemAtIndexPath:(id)arg1;
- (void)willSwipeItemAtIndexPath:(id)arg1;
- (unsigned int)swipeActionForIndexPath:(id)arg1 isLeftDirection:(BOOL)arg2;
- (void)didCollapseCurrentContext;
- (void)willExpandCurrentContext;
- (void)collapseCurrentContext;
- (BOOL)setupExpansionContextForExpandedVC:(id)arg1;
- (id)collapseIndexPathForId:(id)arg1;
- (void)invokeBlockForEachNugget:(CDUnknownBlockType)arg1;
- (void)expandCurrentContextAnimated:(BOOL)arg1;
- (void)expandCurrentContext;
- (void)clearCurrentExpansionContext;
- (void)setupExpansionContextForCellAtIndexPath:(id)arg1;
@property(readonly, nonatomic) UIColor *innerBackgroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) GBTNavigationBar *topToolbar;
- (void)dismissTopicSettingsViewController:(id)arg1;
- (void)reminderPromoViewDidSelectCancel:(id)arg1;
- (void)reminderPromoViewDidSelectCreateReminder:(id)arg1;
- (BOOL)overlayViewShouldShowButtons;
- (void)snoozeController:(id)arg1 didSnoozeWithSnoozeConfig:(id)arg2 andRecurrenceRule:(id)arg3;
- (void)snoozeControllerDidCancelSnooze:(id)arg1;
- (void)unswipeAndUnlock;
- (BOOL)shouldSwipeCellAtIndexPath:(id)arg1;
- (void)setSwipeObjectForIndexPath:(id)arg1;
- (id)indexPathForSwipedObject;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)heightForObject:(id)arg1 atIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)heightForExpandedIndexPath;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (int)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setBatchToolbarMiddleButtonsEnabled:(BOOL)arg1;
- (void)logMetricsForZeroState;
- (float)contentWidthForIndexPath:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForSpan;
- (void)listDataSource:(id)arg1 didUpdateElements:(id)arg2 expectingMoreChanges:(BOOL)arg3 span:(id)arg4;
- (void)listDataSource:(id)arg1 didLoadContactsForConversations:(id)arg2;
- (void)listDataSource:(id)arg1 didReceiveError:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)dismissMoreActionViewController;
- (void)openNugget:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldShowEmptyViewWithMoreChanges:(BOOL)arg1;
- (void)updateFooterViewAfterTableViewAnimation;
- (void)updateFooterViewBeforeTableViewAnimationWithIndexPathsToDelete:(id)arg1;
- (void)updateDropShadowsWithScrollView:(id)arg1;
- (void)resizeTableHeader;
- (void)maybeFetchMoreForInfiniteScroll:(id)arg1;
- (void)setUpDataSource:(id)arg1;
- (void)reloadDataAndMaintainSelection:(BOOL)arg1;
- (void)deselectAllRows;
- (void)performActionOnSelectedRows:(unsigned int)arg1 withTriggeringView:(id)arg2;
- (void)updateBatchToolbarTitleVisibility;
- (void)updateSelectionState;
- (void)updateMultiselectIndicatorsForCell:(id)arg1;
- (BOOL)hasSelectedRows;
- (void)handleLongPress:(id)arg1;
- (void)handleEmptyList;
- (void)initializeAlternateItems;
- (void)removeEmptyView;
- (void)hideAdditionalHeaderVew:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAdditionalHeaderView:(id)arg1 animated:(BOOL)arg2;
- (void)showConversation:(id)arg1 smartmailComponent:(id)arg2;
- (void)showConversationMessageList:(id)arg1 smartmailComponent:(id)arg2 itemWithSmartmails:(id)arg3;
- (void)showConversationAtIndexPath:(id)arg1 smartmailComponent:(id)arg2;
- (void)reloadAllData;
- (BOOL)shouldReinitializeSections;
- (void)reinitializeSectionsIfNeeded;
- (void)initializeSections;
- (void)updateTableView:(id)arg1 animated:(BOOL)arg2 indexPathsToInsert:(id)arg3 indexPathsToDelete:(id)arg4 indexPathsToReload:(id)arg5;
- (id)visibleCellsAtIndexPaths:(id)arg1 inTableView:(id)arg2;
- (void)logElapsedTimeSinceLastUpdate;
- (void)updateTableView:(id)arg1 withChanges:(id)arg2 animated:(BOOL)arg3;
- (void)willHide;
- (void)willShow;
- (BOOL)isShowingZeroState;
- (BOOL)isOnline;
@property(readonly, nonatomic) BOOL isLoading;
- (BOOL)showEmptyView:(id)arg1;
- (void)showEmptyViewWithSpinner;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)fetchMore;
- (void)refresh;
- (void)statusBarTapped:(id)arg1;
- (void)updateCellPositionsForVisibleIndexPaths;
- (void)pullToRefreshDidFire;
- (void)updatePullToRefreshColor;
- (void)precreateCells;
@property(nonatomic, getter=isNavBarCollapsed) BOOL navBarCollapsed; // @dynamic navBarCollapsed;
@property(readonly, nonatomic) id <JBTItemList> items; // @dynamic items;
@property(retain, nonatomic) UIView *tableHeaderView;
- (id)convIdFromCurrentAction;
- (void)resizeFooterView;
- (void)updateHeaderAndFooter;
- (id)rightToolbarButtons;
- (void)showTopicSettingsViewControllerWithTriggeringView:(id)arg1 topicType:(id)arg2;
- (void)showMoreActionsViewControllerWithTriggeringView:(id)arg1;
- (void)shutdown;
- (void)markAsSeen;
- (BOOL)shouldLockLiveList;
- (void)settingsButtonTapped:(id)arg1;
- (void)loadData;
- (void)dealloc;
- (id)initWithItems:(id)arg1 alternateItems:(id)arg2 cellContext:(unsigned int)arg3 navigationType:(unsigned int)arg4 deferLoading:(BOOL)arg5;
- (id)initWithItems:(id)arg1 cellContext:(unsigned int)arg2 navigationType:(unsigned int)arg3;
- (void)dismissBulkDeleteProgressAlert;
- (void)reachabilityChanged:(id)arg1;
- (void)handlePermanentDeleteWhileOffline;
- (float)backgroundHorizontalInsetForView:(id)arg1;
- (float)contentWidthForView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)moreActionsViewControllerDidCancel:(id)arg1;
- (void)moreActionsViewController:(id)arg1 didSelectAction:(unsigned int)arg2;
- (void)moreActionsViewController:(id)arg1 didSelectMoveToNewClusterWithDisplayName:(id)arg2;
- (void)moreActionsViewController:(id)arg1 didSelectMoveToCluster:(id)arg2;
- (void)moreActionsViewControllerDidSelectRemoveFromCurrentCluster:(id)arg1;
- (void)explanatoryMessageViewDidPerformAction:(id)arg1;
- (void)explanatoryMessageViewDidDismiss:(id)arg1;
- (id)explanatoryMessageViewToDisplayWithFrame:(struct CGRect)arg1;
- (void)dismissExplanatoryMessageAnimated:(BOOL)arg1;
- (void)didDismissExplanatoryMessage;
- (void)showTip:(id)arg1;
- (void)showSweepTipWithSection:(id)arg1;
- (void)performSweepAction:(id)arg1;
- (BOOL)isUserActionFromContextWithNavigationType:(unsigned int)arg1;
- (void)didNotPerformAction:(unsigned int)arg1;
- (void)didPerformAction:(unsigned int)arg1 isMultiselect:(BOOL)arg2;
- (void)willPerformAction:(unsigned int)arg1 span:(id)arg2;
- (void)mayPerformAction:(unsigned int)arg1;
- (void)updateTableViewScrollOffset:(struct CGPoint)arg1;
- (void)setupCellExpansionForExpanded:(BOOL)arg1;
- (void)forceEmptyViewOnNextUpdate;
- (void)moreActionsViewControllerDidDismiss;
- (void)updateEmptyViewWithCluster:(id)arg1;
- (void)configureActionHandler;
- (unsigned int)cellPositionForIndexPath:(id)arg1;
- (void)prefetchVisibleItems;
- (id)viewForEmptyList;
- (BOOL)canShowZeroStates;
- (id)createDataSource;
- (struct CGPoint)contentOffsetForExpansion;
- (void)topToolBar:(id)arg1 didSelectMiddleButton:(id)arg2 isLongPress:(BOOL)arg3;
- (void)topToolBar:(id)arg1 didSelectRightButton:(id)arg2;
- (void)topToolBarDidSelectLeftButton:(id)arg1;
- (id)topToolBar:(id)arg1 updateTitle:(id)arg2;
- (id)topToolBarBackgroundColor:(id)arg1;
- (id)middleButtonsForTopToolBar:(id)arg1;
- (BOOL)hasLongPressBehaviourForMiddleButtonType:(unsigned int)arg1;
- (void)threadCellDidSelectPin:(id)arg1;
- (void)threadCell:(id)arg1 didInvokeAction:(unsigned int)arg2;
- (void)view:(id)arg1 didSelectPickContactAction:(id)arg2 withSubActionType:(id)arg3;
- (void)view:(id)arg1 didSelectSuggestedSnoozeConfig:(id)arg2 forItem:(id)arg3;
- (void)view:(id)arg1 didToggleExpanded:(BOOL)arg2 withNugget:(id)arg3;
- (void)view:(id)arg1 didSelectNugget:(id)arg2;
- (void)view:(id)arg1 didSelectSuggestedTask:(id)arg2;
- (void)view:(id)arg1 didSelectSetAliasActionWithName:(id)arg2 categoryId:(id)arg3;
- (void)view:(id)arg1 didSelectSmartmailComponent:(id)arg2;
- (void)view:(id)arg1 didSelectRating:(unsigned int)arg2 review:(id)arg3 forAction:(id)arg4;
- (void)view:(id)arg1 didTapButtonAction:(id)arg2 withCallback:(id)arg3;
- (void)view:(id)arg1 didSelectResponse:(id)arg2 forAction:(id)arg3;
- (void)view:(id)arg1 didSelectAppLink:(id)arg2 withFallbackLink:(id)arg3;
- (void)view:(id)arg1 didSelectLink:(id)arg2;
- (void)view:(id)arg1 didSelectEmail:(id)arg2 name:(id)arg3;
- (void)view:(id)arg1 didSelectAttachmentCard:(id)arg2;
- (BOOL)topicCardExpandedForIndexPath:(id)arg1;
- (BOOL)isShowingExplanatoryMessage;
- (void)didFinishInitialLoad;
- (void)gotFirstResults;
- (void)completeInitialLoad;
- (void)completeFirstResults:(unsigned int)arg1;
- (void)listElementsDidChange:(id)arg1 expectingMoreChanges:(BOOL)arg2;
- (BOOL)shouldAnimateTableForChanges:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITableView *tableView;

@end
