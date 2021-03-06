//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatViewController.h"

#import "AHCTabBarScrollManagerProtocol.h"
#import "ChatTabsViewControllerDelegate.h"
#import "ChatViewControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UIWebViewDelegate.h"

@class AHCTabBarScrollManager, AHCUnreadBadgeView, AccountContext, ChatTabsViewController, ChatTitleView, HipChatiOSApp, LoadingViewController, NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, RequestCookieInjector, Room, UIButton, UISearchBar, UIView, UIViewController, UIWebView, User, XMPPJID;

@interface ChatContainerViewController : HipChatViewController <ChatViewControllerDelegate, ChatTabsViewControllerDelegate, UISearchBarDelegate, UIWebViewDelegate, AHCTabBarScrollManagerProtocol>
{
    BOOL _searchInProgress;
    XMPPJID *_jid;
    UIViewController *_currentlySelectedViewController;
    UIView *_childContainerView;
    AccountContext *_accountContext;
    UIView *_tabsContainerView;
    NSLayoutConstraint *_tabsContainerViewVerticalConstraint;
    UISearchBar *_searchBar;
    AHCTabBarScrollManager *_tabBarScrollManager;
    UIView *_webViewContainerView;
    NSLayoutConstraint *_webViewContainerHeightConstraint;
    UIWebView *_webView;
    ChatTabsViewController *_chatTabsViewController;
    AHCUnreadBadgeView *_unreadView;
    User *_currentUser;
    Room *_currentRoom;
    NSMutableDictionary *_tabsViewControllers;
    NSArray *_currentViewControllerConstraints;
    ChatTitleView *_titleView;
    UIButton *_titleLabelButton;
    HipChatiOSApp *_app;
    RequestCookieInjector *_cookieInjector;
    LoadingViewController *_loadingViewController;
}

@property(retain, nonatomic) LoadingViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(retain, nonatomic) RequestCookieInjector *cookieInjector; // @synthesize cookieInjector=_cookieInjector;
@property(nonatomic) __weak HipChatiOSApp *app; // @synthesize app=_app;
@property(nonatomic) __weak UIButton *titleLabelButton; // @synthesize titleLabelButton=_titleLabelButton;
@property(retain, nonatomic) ChatTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) BOOL searchInProgress; // @synthesize searchInProgress=_searchInProgress;
@property(retain, nonatomic) NSArray *currentViewControllerConstraints; // @synthesize currentViewControllerConstraints=_currentViewControllerConstraints;
@property(retain, nonatomic) NSMutableDictionary *tabsViewControllers; // @synthesize tabsViewControllers=_tabsViewControllers;
@property(retain, nonatomic) Room *currentRoom; // @synthesize currentRoom=_currentRoom;
@property(retain, nonatomic) User *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) __weak AHCUnreadBadgeView *unreadView; // @synthesize unreadView=_unreadView;
@property(retain, nonatomic) ChatTabsViewController *chatTabsViewController; // @synthesize chatTabsViewController=_chatTabsViewController;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak NSLayoutConstraint *webViewContainerHeightConstraint; // @synthesize webViewContainerHeightConstraint=_webViewContainerHeightConstraint;
@property(nonatomic) __weak UIView *webViewContainerView; // @synthesize webViewContainerView=_webViewContainerView;
@property(retain, nonatomic) AHCTabBarScrollManager *tabBarScrollManager; // @synthesize tabBarScrollManager=_tabBarScrollManager;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak NSLayoutConstraint *tabsContainerViewVerticalConstraint; // @synthesize tabsContainerViewVerticalConstraint=_tabsContainerViewVerticalConstraint;
@property(nonatomic) __weak UIView *tabsContainerView; // @synthesize tabsContainerView=_tabsContainerView;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak UIView *childContainerView; // @synthesize childContainerView=_childContainerView;
@property(nonatomic) __weak UIViewController *currentlySelectedViewController; // @synthesize currentlySelectedViewController=_currentlySelectedViewController;
@property(retain, nonatomic) XMPPJID *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)animateTabContainerViewToTargetState:(unsigned int)arg1 duration:(double)arg2;
- (void)slideTabContainerViewAnimated:(BOOL)arg1;
- (unsigned int)tabsContainerViewScrolledState;
- (void)translateTabContainerViewVerticallyBy:(float)arg1;
- (void)completeTabContainerViewScrolling;
- (void)updateCountOfUnreadCountView;
- (void)installTitleViewWithTitle:(id)arg1;
- (struct CGRect)titleViewFrameForTitle:(id)arg1;
- (id)titleOfChat;
- (id)getTitleView;
- (void)setupNavigationBar;
- (void)setupSearchBar;
- (void)updateHeightOfWebViewForOrientation:(int)arg1;
- (void)updateNavigationBar;
- (void)searchButtonTapped;
- (void)updateRightBarButtonItemsWithBarButtonItem:(id)arg1;
- (void)createCancelButtonItem;
- (void)createSearchButtonItem;
- (void)updateAppSelectedChatName;
- (void)updateTitleView;
- (void)setupTitleViewInNavigationBar;
- (void)updateUnreadCount;
- (void)hideTabsContainer;
- (void)showTabsContainer;
- (id)viewControllerForVideoSelectionTab;
- (id)viewControllerForLinksSelectionTab;
- (id)viewControllerForFileSelectionTab;
- (id)viewControllerForInformationSelectionTab;
- (id)createViewControllerForOption:(unsigned int)arg1;
- (id)getViewControllerForOption:(unsigned int)arg1;
- (void)animateToViewController:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)userSelectedOption:(unsigned int)arg1;
- (void)setupConstraintsForViewController:(id)arg1;
- (void)setupChildTabViewController:(id)arg1;
- (void)setupChatViewController;
- (void)setupTabsViewController;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)performSearchWithUserInfo:(id)arg1;
- (void)searchCancelled;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)setSearchbarCloseIcon;
- (void)setSearchBarSearchIcon;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)styleSearchBarTextFieldAndPlaceholderText;
- (void)customizeSearchBar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupActivityContainerView;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setupObservers;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)initWithChat:(id)arg1 accountContext:(id)arg2;
- (id)initWithChatController:(id)arg1 app:(id)arg2 accountContext:(id)arg3;
- (void)focusChat;
- (void)showSearch;
- (void)selectVideo;
- (void)selectLinks;
- (void)selectFiles;
- (void)selectInfo;
- (void)selectChat;
- (id)keyCommands;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

