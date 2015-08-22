//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AcknowledgeMessageControllerDelegate.h"
#import "BigtopAccessManagerDelegate.h"
#import "FullScreenViewControllerDelegate.h"
#import "ListViewControllerDelegate.h"
#import "MainPanelViewDelegate.h"
#import "ThreadViewControllerDelegate.h"

@class AccountsViewController, AcknowledgeMessageController, ActionHandler, GBTSideViewController, GBTWebViewController, GIPOpenInAppController, MainPanelView, NSString, OverlayViewController, ThreadViewController, UIView, UIViewController<GIPFullScreenViewController>;

@interface PanelViewController : UIViewController <AcknowledgeMessageControllerDelegate, BigtopAccessManagerDelegate, FullScreenViewControllerDelegate, ListViewControllerDelegate, MainPanelViewDelegate, ThreadViewControllerDelegate>
{
    struct {
        char animated;
        char isAppearing;
    } transitionAppearanceState_;
    AcknowledgeMessageController *acknowledgeMessageController_;
    ActionHandler *actionHandler_;
    UIView *backgroundRenderView_;
    struct CGAffineTransform basePanTransform_;
    int currentOrientation_;
    UIViewController<GIPFullScreenViewController> *fullScreenViewController_;
    BOOL isStatusBarSnapshotVisible_;
    BOOL statusBarHidden_;
    UIView *statusBarSnapshot_;
    id <SystemAcknowledgementDelegate> systemAcknowledgementDelegate_;
    UIView *zoomBackground_;
    BOOL leftPanelViewControllerActivated;
    BOOL performingTransition_;
    BOOL navBarGestureRecognizersEnabled_;
    BOOL _showInvitesReceivedAckAfterAccountChange;
    ThreadViewController *threadViewController_;
    id <NavigationManager> navigationManager;
    MainPanelView *mainPanelView;
    UIView *mutationIndicator_;
    GBTWebViewController *webViewController_;
    id <PopupViewController> popupViewController_;
    GBTSideViewController *sideNavigationViewController_;
    OverlayViewController *overlayViewController_;
    GIPOpenInAppController *_openInAppController;
    CDUnknownBlockType _threadViewControllerDismissHandler;
    CDUnknownBlockType _threadViewControllerFinishLoadingHandler;
}

+ (void)setSharedPanelViewController:(id)arg1;
+ (void)releaseSharedPanelViewController;
+ (id)sharedPanelViewController;
@property(copy, nonatomic) CDUnknownBlockType threadViewControllerFinishLoadingHandler; // @synthesize threadViewControllerFinishLoadingHandler=_threadViewControllerFinishLoadingHandler;
@property(copy, nonatomic) CDUnknownBlockType threadViewControllerDismissHandler; // @synthesize threadViewControllerDismissHandler=_threadViewControllerDismissHandler;
@property(nonatomic) BOOL showInvitesReceivedAckAfterAccountChange; // @synthesize showInvitesReceivedAckAfterAccountChange=_showInvitesReceivedAckAfterAccountChange;
@property(retain, nonatomic) GIPOpenInAppController *openInAppController; // @synthesize openInAppController=_openInAppController;
@property(retain, nonatomic) OverlayViewController *overlayViewController; // @synthesize overlayViewController=overlayViewController_;
@property(nonatomic) BOOL navBarGestureRecognizersEnabled; // @synthesize navBarGestureRecognizersEnabled=navBarGestureRecognizersEnabled_;
@property(readonly, nonatomic) id <PopupViewController> popupViewController; // @synthesize popupViewController=popupViewController_;
@property(nonatomic, getter=isPerformingTransition) BOOL performingTransition; // @synthesize performingTransition=performingTransition_;
@property(nonatomic) BOOL leftPanelViewControllerActivated; // @synthesize leftPanelViewControllerActivated;
@property(retain, nonatomic) GBTWebViewController *webViewController; // @synthesize webViewController=webViewController_;
@property(retain, nonatomic) UIView *mutationIndicator; // @synthesize mutationIndicator=mutationIndicator_;
@property(retain, nonatomic) MainPanelView *mainPanelView; // @synthesize mainPanelView;
@property(retain, nonatomic) id <NavigationManager> navigationManager; // @synthesize navigationManager;
- (void).cxx_destruct;
- (BOOL)hasWebViewController;
- (BOOL)hasThreadViewController;
- (void)swapSettingNotificationReceived:(id)arg1;
- (void)threadViewControllerDidFinishInitialLoad:(id)arg1;
- (void)threadViewControllerDismissed:(id)arg1;
- (void)topLevelMailVCDidFinishLoading:(id)arg1 forListVC:(id)arg2;
- (void)mainPanelViewWasTapped:(id)arg1;
- (void)topLevelMailVCGotFirstResults:(id)arg1 forListVC:(id)arg2;
- (void)BigtopAccessManagerDidUpdateAvailableInvites:(id)arg1 shouldShowNotification:(BOOL)arg2;
- (void)acknowledgeMessageController:(id)arg1 willChangeShownHeight:(float)arg2;
- (void)acknowledgeMessageController:(id)arg1 didSelectAction:(int)arg2;
- (void)acknowledgeMessageControllerDidDismiss:(id)arg1;
- (void)dismissAcknowledgementAnimated:(BOOL)arg1;
- (id)showAcknowledgeMessage:(unsigned int)arg1 messageInfo:(id)arg2 delegate:(id)arg3 result:(id)arg4 automaticMoveCriteria:(id)arg5;
- (void)fullScreenViewController:(id)arg1 dismissWithAnimation:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fullScreenViewController:(id)arg1 dismissWithAnimation:(BOOL)arg2;
- (void)fullScreenViewController:(id)arg1 setBackgroundAlpha:(float)arg2;
- (void)startCheckingForSurvey;
- (void)showSurveyIfNeeded;
- (id)frontmostPresentedViewController;
- (id)webViewControllerForUrl:(id)arg1 authorized:(BOOL)arg2 allowMatureURLs:(BOOL)arg3;
- (void)openUrlInWebViewController:(id)arg1 authorized:(BOOL)arg2 allowMatureURLs:(BOOL)arg3;
- (void)openUrlInWebViewController:(id)arg1 authorized:(BOOL)arg2;
- (void)updateThreadViewControllerFrame;
- (void)dismissGOOModalViews;
- (BOOL)dismissIPadPopupViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPopupViewControllerWithIgnoreIPadPopover:(BOOL)arg1;
- (void)dismissPopupViewController;
- (void)presentPopupViewController:(id)arg1;
- (void)dismissTipViewController;
- (void)dismissFullScreenViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dismissFullScreenViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFullScreenViewController:(id)arg1;
- (BOOL)addViewForBackgroundRender:(id)arg1;
- (void)setupMainControllerHierarchy;
- (id)mainViewController;
- (void)removeStatusBarSnapshotIfNecessary;
- (void)replaceStatusBarWithSnapshotIfNecessary;
- (void)updateStatusBarAppearanceWithHide:(BOOL)arg1;
- (id)statusBarSnapshot;
- (void)recognizePan:(id)arg1;
- (void)startNavigateToQuerySpanFromView:(id)arg1;
- (void)animateLeftPanelToOriginAndShowPanel:(BOOL)arg1;
- (void)endTransitionToLeftPanelAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startTransitionToLeftPanelAnimated:(BOOL)arg1;
- (void)showComposeViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (float)preferredSideNavigationWidth;
- (void)showEmptyView;
- (void)showPinnedView:(BOOL)arg1;
- (void)updateHeaderViewAvatars;
- (void)setLeftPaneHidden:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)toggleLeftPanelAnimated:(BOOL)arg1;
- (void)showDetailViewForMessages:(id)arg1 fromView:(id)arg2 parentSpan:(id)arg3 mainSmartmailIndex:(int)arg4 actionIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 closeHandler:(CDUnknownBlockType)arg7;
- (void)showDetailViewForMessages:(id)arg1 fromView:(id)arg2 mainSmartmailIndex:(int)arg3;
- (void)showDetailViewForTask:(id)arg1 fromView:(id)arg2 actionIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showClusteredItemsViewForClusteredItems:(id)arg1 fromView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showClusteredItemsViewForClusteredItems:(id)arg1 fromView:(id)arg2;
- (BOOL)prepareToShowDetailedViewFromView:(id)arg1;
- (void)showListViewWithNavigationItem:(id)arg1 fromView:(id)arg2;
- (void)showHomeFromView:(id)arg1 animated:(BOOL)arg2;
- (void)dismissModalViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)showModalViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showModalViewController:(id)arg1;
- (void)showComposeViewController:(id)arg1;
- (void)dismissDetailViewWithAnimation:(BOOL)arg1;
- (void)showInboxWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeActiveChildViewControllers;
- (BOOL)canShowDetailView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (BOOL)shouldAutorotate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)hasSideNavigationViewController;
- (void)precreateSideNavigationViewController;
@property(readonly, nonatomic) GBTSideViewController *sideNavigationViewController; // @synthesize sideNavigationViewController=sideNavigationViewController_;
@property(readonly, nonatomic) BOOL showingPopup;
@property(readonly, nonatomic) AccountsViewController *accountsViewController; // @dynamic accountsViewController;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
- (void)precreateThreadViewController;
- (void)closeActiveChildViewControllersForConversationId:(id)arg1;
@property(readonly, nonatomic) ThreadViewController *threadViewController; // @synthesize threadViewController=threadViewController_;
- (id)currentToolbarColor;
- (id)topNavigationController;
@property(readonly, nonatomic) UIView *topView;
- (void)ensureFullScreenViewControllerClosed;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
