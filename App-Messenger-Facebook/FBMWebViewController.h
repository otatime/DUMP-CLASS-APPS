//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIWebViewDelegate.h"
#import "ZRTariffedUxSentryDelegate.h"

@class FBFullscreenErrorView, FBMWebViewRequestKey, MNLoadingView, NSString, NSTimer, UIActionSheet, UIBarButtonItem, UIWebView, ZRTariffedUxSentry;

@interface FBMWebViewController : UIViewController <ZRTariffedUxSentryDelegate, UIActionSheetDelegate, UIWebViewDelegate>
{
    UIWebView *_webView;
    MNLoadingView *_loadingView;
    FBFullscreenErrorView *_errorView;
    NSTimer *_showErrorViewTimer;
    double _loadingStartedTime;
    FBMWebViewRequestKey *_requestKey;
    BOOL _hideActionBarButton;
    id <WebViewControllerDelegate> _delegate;
    ZRTariffedUxSentry *_nonZeroRatedUxSentry;
    int _userDidCancelFenceCount;
    UIActionSheet *_actionSheet;
    UIBarButtonItem *_actionBarButton;
    id <FBUserAgentFormatting> _userAgentFormatter;
}

@property(retain, nonatomic) id <FBUserAgentFormatting> userAgentFormatter; // @synthesize userAgentFormatter=_userAgentFormatter;
@property(retain, nonatomic) UIBarButtonItem *actionBarButton; // @synthesize actionBarButton=_actionBarButton;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) int userDidCancelFenceCount; // @synthesize userDidCancelFenceCount=_userDidCancelFenceCount;
@property(copy, nonatomic) ZRTariffedUxSentry *nonZeroRatedUxSentry; // @synthesize nonZeroRatedUxSentry=_nonZeroRatedUxSentry;
@property(nonatomic) id <WebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)_showErrorView;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)nonZeroRatedSessionUxMustDeactivate:(id)arg1;
- (void)nonZeroRatedSessionDidFailToStart:(id)arg1;
- (void)nonZeroRatedSessionUxMayActivate:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (unsigned int)supportedInterfaceOrientations;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_actionPressed:(id)arg1;
- (void)reloadPressed;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_showActionBarButton;
- (void)_reloadWebPageWithRequest:(id)arg1;
- (void)_reloadWebPageWithURL:(id)arg1;
- (void)_loadWebPage;
- (void)_buildAndSetUserAgent;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)_initWithURL:(id)arg1 request:(id)arg2 nonZeroRatedUxSentry:(id)arg3 hideActionBarButton:(BOOL)arg4;
- (id)initWithRequest:(id)arg1;
- (id)initWithURL:(id)arg1 nonZeroRatedUxSentry:(id)arg2;
- (id)initWithZeroRatedURL:(id)arg1 filter:(id)arg2 hideActionBarButton:(BOOL)arg3;
- (id)initWithZeroRatedURL:(id)arg1 filter:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

