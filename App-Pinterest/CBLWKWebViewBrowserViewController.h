//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLBrowserPinModalViewControllerDelegate.h"
#import "CBLSaveWebBrowserNavigationViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"
#import "YTPlayerViewDelegate.h"

@class CBLBrowserBottomToolBar, CBLPin, CBLSaveWebBrowserNavigationView, CBLUserGuidePulserView, NSArray, NSString, NSURL, NSUserActivity, UIActionSheet, UIView, WKWebView, YTPlayerView;

@interface CBLWKWebViewBrowserViewController : CBLBaseViewController <WKNavigationDelegate, WKUIDelegate, CBLSaveWebBrowserNavigationViewDelegate, UIActionSheetDelegate, CBLBrowserPinModalViewControllerDelegate, YTPlayerViewDelegate>
{
    BOOL _shouldFocusAddressBar;
    BOOL _shouldAutoPinImages;
    BOOL _pinmarkletCompleted;
    BOOL _pinmarkletExecuting;
    BOOL _playingVideo;
    BOOL _showFirstClickthroughExperience;
    id <CBLPresentedViewControllerDelegate> _delegate;
    WKWebView *_webView;
    CBLUserGuidePulserView *_pulserView;
    CBLSaveWebBrowserNavigationView *_navigationView;
    CBLBrowserBottomToolBar *_bottomBar;
    CBLPin *_pin;
    NSURL *_referrerURL;
    NSURL *_resourceURL;
    UIView *_browserDimView;
    id _weakSelfProxyJavaScript;
    NSArray *_pinnableImages;
    int _pinmarkletRetryCount;
    NSUserActivity *_browserActivity;
    UIActionSheet *_linkFeedbackActionSheet;
    YTPlayerView *_youtubePlayer;
}

@property(nonatomic) BOOL showFirstClickthroughExperience; // @synthesize showFirstClickthroughExperience=_showFirstClickthroughExperience;
@property(nonatomic) BOOL playingVideo; // @synthesize playingVideo=_playingVideo;
@property(retain, nonatomic) YTPlayerView *youtubePlayer; // @synthesize youtubePlayer=_youtubePlayer;
@property(retain, nonatomic) UIActionSheet *linkFeedbackActionSheet; // @synthesize linkFeedbackActionSheet=_linkFeedbackActionSheet;
@property(retain, nonatomic) NSUserActivity *browserActivity; // @synthesize browserActivity=_browserActivity;
@property(nonatomic) int pinmarkletRetryCount; // @synthesize pinmarkletRetryCount=_pinmarkletRetryCount;
@property(nonatomic) BOOL pinmarkletExecuting; // @synthesize pinmarkletExecuting=_pinmarkletExecuting;
@property(nonatomic) BOOL pinmarkletCompleted; // @synthesize pinmarkletCompleted=_pinmarkletCompleted;
@property(retain, nonatomic) NSArray *pinnableImages; // @synthesize pinnableImages=_pinnableImages;
@property(retain, nonatomic) id weakSelfProxyJavaScript; // @synthesize weakSelfProxyJavaScript=_weakSelfProxyJavaScript;
@property(retain, nonatomic) UIView *browserDimView; // @synthesize browserDimView=_browserDimView;
@property(retain, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(retain, nonatomic) NSURL *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) CBLBrowserBottomToolBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) CBLSaveWebBrowserNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) CBLUserGuidePulserView *pulserView; // @synthesize pulserView=_pulserView;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) BOOL shouldAutoPinImages; // @synthesize shouldAutoPinImages=_shouldAutoPinImages;
@property(nonatomic) BOOL shouldFocusAddressBar; // @synthesize shouldFocusAddressBar=_shouldFocusAddressBar;
@property(nonatomic) __weak id <CBLPresentedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playerViewDidBecomeReady:(id)arg1;
- (void)videoPlayDone:(id)arg1;
- (void)videoPlayStarted:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)browserPinModalViewController:(id)arg1 didSelectItemAtIndex:(unsigned int)arg2;
- (void)browserPinModalViewControllerDidClose:(id)arg1;
- (void)updateViewWithBookmarkletResponse:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)runJavaScriptInWebView;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)CBLSaveWebBrowserNavigationViewDidTapForward:(id)arg1;
- (void)CBLSaveWebBrowserNavigationViewDidTapBack:(id)arg1;
- (void)CBLSaveWebBrowserNavigationViewDidTapActionButton:(id)arg1;
- (void)CBLSaveWebBrowserNavigationViewDidTapPinIt:(id)arg1;
- (void)CBLSaveWebBrowserNavigationView:(id)arg1 didEnterQuery:(id)arg2;
- (void)close;
- (void)CBLSaveWebBrowserNavigationViewDidTapClose:(id)arg1;
- (void)CBLSaveWebBrowserNavigationViewDidResignSearchBar:(id)arg1;
- (void)CBLSaveWebBrowserNavigationViewDidFocusSearchBar:(id)arg1;
- (void)handleNonUserGuideExperience:(id)arg1;
- (int)experiencePlacement;
- (BOOL)experienceEnabled;
- (void)badLinkButtonPressed;
- (void)showExternalActionButtonSheet;
- (void)externalButtonPressed:(id)arg1;
- (void)forwardButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)didTapOnBrowserDimView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)prefersStatusBarHidden;
- (id)initWithPin:(id)arg1;
- (id)initWithURL:(id)arg1 referrerURL:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
