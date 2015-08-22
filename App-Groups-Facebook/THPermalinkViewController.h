//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBComposerFlowDelegate.h"
#import "FBComposerPublicationProgressDisplayListener.h"
#import "FBGroupsChatCreateViewControllerDelegate.h"
#import "FBGroupsReactListener.h"
#import "THTransitioningViewControllerProtocol.h"
#import "UIScrollViewDelegate.h"

@class FBPublicationProgressOverlayDisplayer, FBUserSession, NSDictionary, NSString, RCTRootView, RKModalFullscreenHost, UIButton, UIControl, UILabel, UIScrollView, UIView;

@interface THPermalinkViewController : UIViewController <UIScrollViewDelegate, FBGroupsReactListener, FBComposerFlowDelegate, FBComposerPublicationProgressDisplayListener, FBGroupsChatCreateViewControllerDelegate, THTransitioningViewControllerProtocol>
{
    FBUserSession *_session;
    NSString *_storyID;
    NSString *_legacyStoryID;
    NSString *_groupID;
    BOOL _isKeyboardVisible;
    BOOL _isInGroupContext;
    UIControl *_headerView;
    UILabel *_headerViewTitleLabel;
    UIView *_bottomHeaderDivider;
    UIButton *_rightNavBarItem;
    id <FBIntentHandler> _intentHandler;
    UIViewController *_catalystViewController;
    RKModalFullscreenHost *_modalHost;
    NSDictionary *_catalystProperties;
    unsigned int _reactModalState;
    RCTRootView *_rootView;
    float _scrollViewContentOffsetY;
    FBPublicationProgressOverlayDisplayer *_publicationDisplayer;
    UIScrollView *_topLevelScrollView;
    int _modalViewTransitionStyle;
}

@property(nonatomic) int modalViewTransitionStyle; // @synthesize modalViewTransitionStyle=_modalViewTransitionStyle;
- (void).cxx_destruct;
- (void)_cancelEventLogging;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)groupChatCreatedWithThreadFBID:(id)arg1;
- (void)uploadViewUpdatedForSuccessOfPublicationForPublisherData:(id)arg1 response:(id)arg2;
- (void)uploadViewUpdatedForTransientFailureOfPublicationForPublisherData:(id)arg1;
- (void)uploadViewUpdatedForTerminalFailureOfPublicationForPublisherData:(id)arg1;
- (void)uploadViewUpdatedForCancellationOfPublicationForPublisherData:(id)arg1;
- (void)retryButtonTappedForPublisherData:(id)arg1;
- (void)dismissButtonTappedForPublisherData:(id)arg1;
- (void)cancelButtonTappedForPublisherData:(id)arg1 withReason:(id)arg2;
- (void)composerCompletedWithResult:(id)arg1;
- (void)_headerTapped:(id)arg1;
- (void)_didTapGroupName:(id)arg1;
- (void)_didTapClose:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)createGroupChat:(id)arg1 post:(id)arg2 initialSelection:(id)arg3;
- (void)editPost:(id)arg1;
- (void)didUpdateGroupViewComponentForID:(id)arg1;
- (void)modalViewDidChangeState:(unsigned int)arg1;
- (void)fb_didCancelModalDimissGesture;
- (void)fb_willBeginModalDimissGesture;
- (BOOL)fb_shouldDismissModalViewControllerGestureInterveneInDirection:(int)arg1 atTouchLocation:(struct CGPoint)arg2;
- (void)_openEditComposerForStory:(id)arg1;
- (void)_fetchStorySource;
- (void)_setupCatalystViewController;
- (void)_updateNavBarTitle;
- (void)_setupHeaderView;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 legacyStoryID:(id)arg2 intentHandler:(id)arg3 isInGroupContext:(BOOL)arg4;
- (id)initWithSession:(id)arg1 storyID:(id)arg2 intentHandler:(id)arg3 isInGroupContext:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
