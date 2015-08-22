//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ActionHandlerDelegate.h"
#import "BackgroundColorSupport.h"
#import "CellContentWidth.h"
#import "CellPositionSupport.h"
#import "ComposeViewControllerDelegate.h"
#import "EditLocationViewControllerDelegate.h"
#import "ExpansionSupport.h"
#import "JBTEventListener.h"
#import "MessageRegionsViewCache.h"
#import "MessageRegionsViewRenderingDelegate.h"
#import "MessageViewDataSource.h"
#import "MessageViewDelegate.h"
#import "MoreActionsViewControllerDelegate.h"
#import "OverlayViewOptionsDelegate.h"
#import "SmartMailInteractionSupport.h"
#import "SnoozeControllerDelegate.h"
#import "TaskDetailViewControllerDelegate.h"
#import "ThreadHeaderViewDelegate.h"
#import "ThreadNestedLayoutViewDataSource.h"
#import "ThreadNestedLayoutViewDelegate.h"
#import "ThreadViewDataSource.h"
#import "ThreadViewDelegate.h"
#import "TipViewControllerDelegate.h"
#import "TouchStartLocationGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UISplitViewControllerDelegate.h"

@class ActionHandler, CADisplayLink, CollapsableScrollviewController, ContactPickerController, EmptyView, EmptyViewSpinnerController, JBTConversationMessageDraft_ResponseTypeEnum, NIViewRecycler, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NestedScrollController, Nugget, ScrollManager, SnoozeController, ThreadHeaderView, ThreadTaskDetailViewController, ThreadView, TipViewController, UIButton, UIPopoverController, UIScrollView, UITableView, UIView;

@interface ThreadViewController : UIViewController <ActionHandlerDelegate, ComposeViewControllerDelegate, EditLocationViewControllerDelegate, JBTEventListener, MessageRegionsViewCache, MessageRegionsViewRenderingDelegate, MessageViewDataSource, MessageViewDelegate, MoreActionsViewControllerDelegate, OverlayViewOptionsDelegate, SmartMailInteractionSupport, SnoozeControllerDelegate, TaskDetailViewControllerDelegate, ThreadHeaderViewDelegate, ThreadNestedLayoutViewDataSource, ThreadNestedLayoutViewDelegate, ThreadViewDataSource, ThreadViewDelegate, TipViewControllerDelegate, TouchStartLocationGestureRecognizerDelegate, UIPopoverControllerDelegate, UIScrollViewDelegate, UISplitViewControllerDelegate, BackgroundColorSupport, CellContentWidth, CellPositionSupport, ExpansionSupport>
{
    UIView *backgroundView_;
    ThreadView *threadView_;
    NSMutableArray *messagesArray_;
    NSMutableSet *unreadMessages_;
    ActionHandler *actionHandler_;
    BOOL firstMessagesLoaded_;
    BOOL loading_;
    unsigned int messageCount_;
    id <JBTSpan> openCVSpan_;
    id <JBTSpan> actionSpan_;
    id <JBTSpan> renderSpan_;
    NSDate *lastNewDataRenderCompletionTime_;
    NSMutableDictionary *renderSubspans_;
    id <JBTSpan> animationSpan_;
    CollapsableScrollviewController *collapseController_;
    NSMutableArray *eventsWaitingForPlayback_;
    int selectedMessageIndex_;
    BOOL messageListStopped_;
    BOOL needsDismissAfterMoreActionsDismiss_;
    BOOL showingMoreActionsView_;
    SnoozeController *snoozeController_;
    ContactPickerController *contactPickerController_;
    ThreadHeaderView *headerView_;
    NSMutableArray *pendingHeightCacheRequests_;
    NSMutableDictionary *messagesById_;
    NSMutableDictionary *messageViewsById_;
    NSMutableArray *loadedMessages_;
    NIViewRecycler *viewRecycler_;
    BOOL manuallyDismissed_;
    ScrollManager *scrollManager_;
    NestedScrollController *nestedScrollController_;
    CDUnknownBlockType updateScreenshotCallback_;
    UIView *cachedEmptyView_;
    id <JBTSpan> eventSubspan_;
    id <JBTSpan> deferredPlaybackSpan_;
    BOOL hasShownWebviewDelayToast_;
    unsigned int displayState_;
    id <JBTConversationMessageDraft> quickReplyDraftMessage_;
    JBTConversationMessageDraft_ResponseTypeEnum *responseType_;
    NSMutableDictionary *cachedMessageRegionsViews_;
    ThreadTaskDetailViewController *taskDetailVC_;
    EmptyView *emptyView_;
    EmptyViewSpinnerController *emptyViewSpinnerController_;
    int pendingSmartMailScrollIndex_;
    BOOL forceScrollToSmartmail_;
    BOOL cancelledMoreActionsView_;
    TipViewController *tipViewController_;
    BOOL showingFullScreenCompose_;
    BOOL hasCalculatedInitialHeights;
    CADisplayLink *heightPollDisplayLink_;
    NSDate *eventDeferTime_;
    UIPopoverController *popoverController_;
    UIView *popoverTriggeringView_;
    NSString *pendingActionIdentifier_;
    id <JBTId> discardedMessageId_;
    BOOL _smartMailExpanded;
    NSTimer *autosaveTimer;
    unsigned int cellPosition_;
    id <CellContentWidthDelegate> contentWidthDelegate_;
    id <ThreadViewControllerDelegate> delegate;
    id <JBTConversationMessageList> messages_;
    Nugget *nugget_;
    id <ThreadViewControllerScrollDelegate> _scrollDelegate;
    UITableView *_tableView;
    UIView *_mainView;
}

+ (BOOL)eventIsExpectingMoreChanges:(id)arg1;
@property(nonatomic) BOOL smartMailExpanded; // @synthesize smartMailExpanded=_smartMailExpanded;
@property(readonly, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ThreadViewControllerScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(retain, nonatomic) ThreadView *threadView; // @synthesize threadView=threadView_;
@property(retain, nonatomic) id <JBTSpan> openCVSpan; // @synthesize openCVSpan=openCVSpan_;
@property(retain, nonatomic) Nugget *nugget; // @synthesize nugget=nugget_;
@property(retain, nonatomic) id <JBTConversationMessageList> messages; // @synthesize messages=messages_;
@property(nonatomic) __weak id <ThreadViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <CellContentWidthDelegate> contentWidthDelegate; // @synthesize contentWidthDelegate=contentWidthDelegate_;
@property(nonatomic) unsigned int cellPosition; // @synthesize cellPosition=cellPosition_;
@property(nonatomic) __weak NSTimer *autosaveTimer; // @synthesize autosaveTimer;
@property(retain, nonatomic) ActionHandler *actionHandler; // @synthesize actionHandler=actionHandler_;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)composeViewControllerDidDismiss:(id)arg1;
- (void)taskDetailViewDidSelectEmail:(id)arg1 name:(id)arg2;
- (void)taskDetailViewDidScroll:(id)arg1;
- (void)taskDetailViewDidFinishEditingWithCompletion:(CDUnknownBlockType)arg1;
- (void)touchStartLocationGestureRecognizer:(id)arg1 didStartTouchAtLocation:(struct CGPoint)arg2;
- (BOOL)messageViewShouldShowSeparator:(id)arg1;
- (void)messageViewDidTapEditButton:(id)arg1;
- (void)messageViewDidTapDiscardButton:(id)arg1;
- (void)messageViewDidTapMoreButton:(id)arg1;
- (void)messageViewDidChangeHeight:(id)arg1 scrollNeeded:(BOOL)arg2;
- (void)messageView:(id)arg1 didToggleQuotedTextButtonAtRegionIndex:(unsigned int)arg2;
- (void)messageView:(id)arg1 didSelectUrl:(id)arg2;
- (void)messageView:(id)arg1 didSelectAttachmentCard:(id)arg2;
- (void)messageView:(id)arg1 didToggleSenderDetails:(BOOL)arg2;
- (void)cacheMessageRegionsView:(id)arg1 forId:(id)arg2;
- (id)cachedMessageRegionsViewForId:(id)arg1;
- (void)messageRegionsViewDidFinishLoad:(id)arg1;
- (void)messageRegionsView:(id)arg1 didFinishLoadingWebview:(id)arg2;
- (void)messageRegionsViewHeightDidChange:(id)arg1 scrollNeeded:(BOOL)arg2;
- (void)messageRegionsViewDidStartLoad:(id)arg1;
- (void)messageRegionsViewWasCreatedAsync:(id)arg1;
- (void)messageRegionsViewWillBeCreatedAsync;
- (void)view:(id)arg1 didSelectPickContactAction:(id)arg2 withSubActionType:(id)arg3;
- (void)view:(id)arg1 didSelectSetAliasActionWithName:(id)arg2 categoryId:(id)arg3;
- (void)view:(id)arg1 didSelectEmail:(id)arg2 name:(id)arg3;
- (void)view:(id)arg1 didSelectSuggestedSnoozeConfig:(id)arg2 forItem:(id)arg3;
- (void)view:(id)arg1 didSelectAppLink:(id)arg2 withFallbackLink:(id)arg3;
- (void)view:(id)arg1 didSelectLink:(id)arg2;
- (void)view:(id)arg1 didTapButtonAction:(id)arg2 withCallback:(id)arg3;
- (void)view:(id)arg1 didSelectResponse:(id)arg2 forAction:(id)arg3;
- (void)editLocationViewControllerDidDelete:(id)arg1;
- (void)editLocationViewControllerDidSave:(id)arg1;
- (void)editLocationViewControllerDidCancel:(id)arg1;
- (void)threadHeaderViewDidTapSubject:(id)arg1;
- (void)threadHeaderViewDidTapDismiss:(id)arg1;
- (void)threadHeaderView:(id)arg1 didSelectLink:(id)arg2;
- (void)threadHeaderView:(id)arg1 didSelectEmail:(id)arg2 name:(id)arg3;
- (void)threadHeaderViewEditTaskTapped:(id)arg1;
- (void)smartMailThreadHeader:(id)arg1 changedExpandedState:(BOOL)arg2 atIndex:(unsigned int)arg3;
- (void)smartMailThreadHeader:(id)arg1 changedState:(id)arg2;
- (unsigned int)threadViewShouldAnimateKeyboardShow:(id)arg1;
- (id)webviewWithFocus;
- (id)threadViewScrollable:(id)arg1;
- (id)threadView:(id)arg1 messageAtRow:(int)arg2;
- (BOOL)shouldDockToBottomForThreadNestedLayoutView:(id)arg1;
- (float)threadNestedLayoutView:(id)arg1 cachedHeightForRow:(int)arg2 includingScrollableArea:(BOOL)arg3;
- (BOOL)threadNestedLayoutView:(id)arg1 hasCachedHeightsForRow:(int)arg2;
- (void)threadNestedLayoutView:(id)arg1 computeCacheHeightsForRow:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (float)threadNestedLayoutView:(id)arg1 cachedScrollHeightAtRow:(int)arg2 forScrollableAreaIndex:(int)arg3;
- (int)threadNestedLayoutView:(id)arg1 scrollableAreaCountForRow:(int)arg2;
- (id)threadNestedLayoutView:(id)arg1 viewForRow:(int)arg2;
- (float)threadNestedLayoutViewTopInset:(id)arg1;
- (int)threadNestedLayoutViewNumberOfRows:(id)arg1;
- (void)snoozeController:(id)arg1 didSnoozeWithSnoozeConfig:(id)arg2 andRecurrenceRule:(id)arg3;
- (void)setUpdateScreenshotCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIView *viewToAnimate;
- (void)layoutEmptyView;
- (id)emptyView;
- (id)emptyThreadView;
- (void)didPerformCollapse;
- (void)willPerformCollapse;
- (void)willPerformContinuousCollapse;
- (void)didPerformExpand;
- (void)willPerformExpand;
@property(readonly, nonatomic) UIScrollView *activeScrollView;
@property(readonly, nonatomic) UIButton *backButton;
@property(readonly, nonatomic) struct CGPoint backButtonOffset;
@property(readonly, nonatomic) NSArray *backgroundViews;
@property(readonly, nonatomic) struct UIEdgeInsets innerFrameInsets;
@property(readonly, nonatomic) struct UIEdgeInsets backgroundViewInsets;
@property(readonly, nonatomic) BOOL supportExpansion; // @dynamic supportExpansion;
@property(readonly, nonatomic) id <JBTId> itemId;
- (void)setCellBackgroundColor:(id)arg1;
- (BOOL)overlayViewShouldShowButtons;
- (void)threadViewDidTapDropDownView:(id)arg1;
- (void)threadViewDidTapLocationInfoIcon:(id)arg1;
- (void)autosave:(id)arg1;
- (void)threadViewQuickReplyTextDidChange:(id)arg1;
- (void)threadViewQuickReplyDidEndEditing:(id)arg1;
- (void)threadViewQuickReplyDidBeginEditing:(id)arg1;
- (void)threadViewBackButtonTapped:(id)arg1;
- (void)threadViewMoreButtonTapped:(id)arg1;
- (void)threadViewDidChooseFullScreen:(id)arg1;
- (void)threadViewAttachImageTapped:(id)arg1;
- (void)threadViewSendButtonTapped:(id)arg1;
- (void)showTipForTutorial:(id)arg1;
- (void)showMoveToInboxTip;
- (void)showTip:(id)arg1;
- (struct CGRect)tipViewController:(id)arg1 cutoutCircleForTip:(unsigned int)arg2 object:(id)arg3;
- (unsigned int)tipViewController:(id)arg1 cutoutShapeForTip:(unsigned int)arg2 object:(id)arg3;
- (void)tipViewControllerDidDismiss:(id)arg1 withAcknowledgement:(BOOL)arg2;
- (struct CGRect)tipViewController:(id)arg1 targetRectForTip:(unsigned int)arg2 object:(id)arg3;
- (id)tipViewController:(id)arg1 targetViewForTip:(unsigned int)arg2 object:(id)arg3;
- (void)moreActionsViewControllerDidCancel:(id)arg1;
- (void)moreActionsViewController:(id)arg1 didSelectAction:(unsigned int)arg2;
- (void)moreActionsViewController:(id)arg1 didSelectMoveToNewClusterWithDisplayName:(id)arg2;
- (void)moreActionsViewController:(id)arg1 didSelectMoveToCluster:(id)arg2;
- (void)moreActionsViewControllerDidSelectRemoveFromCurrentCluster:(id)arg1;
- (void)dismissMoreActionViewController:(id)arg1;
- (void)threadNestedLayoutView:(id)arg1 didEndDisplayingView:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (int)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (struct CGRect)trackingViewFrame;
- (struct CGRect)threadViewFrame;
- (struct CGRect)backgroundFrame;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)appDidBecomeActive;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)processOrDeferEvent:(id)arg1;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)playbackEventsIfReady;
- (BOOL)computeThreadRowHeights;
- (BOOL)isThreadViewReady;
- (void)processUpdateEvent:(id)arg1;
- (void)updateForElementExpansionEvent:(id)arg1;
- (void)updateForDetailedConversationMessagesLoadedEvent:(BOOL)arg1;
- (void)updateForElementsChangedWithRemovals:(id)arg1 withInsertions:(id)arg2 withReloads:(id)arg3;
- (void)autoscrollWithScrollToUnreadAllowed:(BOOL)arg1;
- (void)updateForElementsChangedEvent:(id)arg1 mayScrollToUnreadMessage:(BOOL)arg2;
- (void)updateScreenshot;
- (void)didFinishInitialLoad;
- (void)updateViewsForEvent:(id)arg1 withNewMessages:(BOOL)arg2 mayScrollToUnreadMessage:(BOOL)arg3;
- (void)setQuickReplyBottomOffset:(float)arg1;
- (BOOL)isDropDownEnabled:(id)arg1;
- (BOOL)toolbarShouldFloat;
- (float)topInsetsWithFloatingToolbar:(BOOL)arg1;
- (void)saveSuggestedTask;
- (BOOL)toolbarShouldBeTransparent;
- (void)moreActionsViewControllerDidDismissAnimated:(BOOL)arg1;
- (void)handlePendingAction;
- (void)back;
- (void)backgroundTapped;
- (void)handleAction:(id)arg1;
- (void)setupTaskEndState;
- (void)setupTaskStartState;
- (void)scrollToSmartMailIndex:(int)arg1;
- (void)scrollToRow:(int)arg1 withOffsetInArea:(float)arg2 withLayoutUpdate:(BOOL)arg3;
- (void)scrollToRow:(int)arg1;
- (void)closeOverlayViewControllers;
- (void)willResignActive:(id)arg1;
- (void)enqueueMessageViewOfClass:(Class)arg1 withFrame:(struct CGRect)arg2;
- (void)reloadDataWithSpanAndScrollToRow:(int)arg1;
- (void)reloadDataWithSpan;
- (void)executeEventSubspanBlock:(CDUnknownBlockType)arg1 withMetric:(id)arg2;
- (id)parentSpanForEvent;
- (Class)messageViewClassForMessage:(id)arg1;
- (void)cellRenderedNotification;
- (id)firstSpamMessage;
- (void)enumerateConversationMessagesWithBlock:(CDUnknownBlockType)arg1;
- (id)allMessages;
- (id)messageById:(id)arg1;
- (int)messageArrayIndexByMessageId:(id)arg1;
- (id)messageAtIndex:(int)arg1;
- (id)messageForMessageElement:(id)arg1;
- (void)resetMessageViewForId:(id)arg1;
- (float)widthForMessageCaching;
- (float)heightForMessage:(id)arg1;
- (void)incrementNSIndexPathRows:(id)arg1;
- (void)updateQuickReplyRecipientsSummary;
- (void)sendQuickReply;
- (void)saveQuickReplyDraftIfNeeded;
- (void)clearQuickReplyDraftMessage;
- (void)updateQuickReplyHtmlRegions;
- (void)updateQuickReplyDraftMessageAndCall:(CDUnknownBlockType)arg1;
- (void)createQuickReplyDraftMessageAndCall:(CDUnknownBlockType)arg1;
- (void)openComposeWithQuickReplyAndShouldShowAttachmentPicker:(BOOL)arg1;
- (void)openComposeWithQuickReply;
- (void)showMoreActionsViewController;
- (void)displayIncludeAttachmentsSheetForMessage:(id)arg1 withTriggeringView:(id)arg2;
- (void)didInvokeAction:(unsigned int)arg1 forMessage:(id)arg2 withTriggeringView:(id)arg3;
- (id)headerView;
- (void)showComposeVCWithEmail:(id)arg1 name:(id)arg2;
- (void)showComposeVCForMessage:(id)arg1 withAction:(unsigned int)arg2 includeSeparateAttachments:(BOOL)arg3;
- (void)didActionForward:(id)arg1 withTriggeringView:(id)arg2;
- (void)updateCellHeightsAfterRotation;
- (void)displayNewMessagesButtonWithCount:(unsigned int)arg1;
- (void)hideNewMessagesButton:(id)arg1;
- (void)updateSeparatorVisibility;
- (void)updateViewsForTableViewData;
- (void)updateTableViewDataWithRemovals:(id)arg1 withInsertions:(id)arg2;
- (void)updateTableViewDataWithReloads:(id)arg1;
- (void)updateTableViewData;
- (void)updateUnreadMessages;
- (void)showTableView;
- (void)showEmptyView:(id)arg1;
- (void)showFailedToLoadView;
- (void)showLoadingView;
- (int)scrollToUnreadMessageIndex;
- (void)dismissDetailViewAnimated:(BOOL)arg1;
- (void)statusBarTapped:(id)arg1;
- (void)markMessageAsRead;
- (void)stopMessageList;
- (void)startMessageList:(id)arg1;
- (void)onExitQuickReply;
- (void)loadMessages:(id)arg1;
- (BOOL)isQuickReplyDraftMessage:(id)arg1;
- (BOOL)isCurrentMessageList:(id)arg1;
- (void)completeOpenCVSpanWithSuccess:(BOOL)arg1;
- (BOOL)isUserActionFromContextWithNavigationType:(unsigned int)arg1;
- (void)didNotPerformAction:(unsigned int)arg1;
- (void)didPerformAction:(unsigned int)arg1 isMultiselect:(BOOL)arg2;
- (void)willPerformAction:(unsigned int)arg1 span:(id)arg2;
- (void)mayPerformAction:(unsigned int)arg1;
- (BOOL)actionDismissesDetailsView:(unsigned int)arg1;
- (id)currentConversationId;
- (void)renderWithMessages:(id)arg1 span:(id)arg2 mainSmartmailIndex:(int)arg3 actionIdentifier:(id)arg4;
- (id)messageFromArrayById:(id)arg1;
- (id)messageFromArrayAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
