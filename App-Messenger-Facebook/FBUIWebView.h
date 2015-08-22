//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBPullToRefreshViewDelegate.h"
#import "FBWebView.h"
#import "NJKWebViewProgressDelegate.h"

@class FBDelegateForwarder, FBPullToRefreshView, FBUIWebViewDelegateAdaptor, NJKWebViewProgress, NSString, NSURL, NSURLRequest, UIScrollView, UIWebView;

@interface FBUIWebView : UIView <FBPullToRefreshViewDelegate, NJKWebViewProgressDelegate, FBWebView>
{
    struct CGPoint _lastTouchLocation;
    UIWebView *_webView;
    FBPullToRefreshView *_pullToRefreshView;
    FBUIWebViewDelegateAdaptor *_delegateAdaptor;
    FBDelegateForwarder *_scrollViewDelegateForwarder;
    NJKWebViewProgress *_webViewProgressManager;
    id <UIScrollViewDelegate> _oldScrollViewDelegate;
    BOOL _isBannerAtTop;
    BOOL _loading;
    UIView *_bannerView;
    int _displayState;
    UIView *_errorView;
    NSString *_title;
    NSURL *_currentLocationURL;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) BOOL isBannerAtTop; // @synthesize isBannerAtTop=_isBannerAtTop;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) int displayState; // @synthesize displayState=_displayState;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)_titleAndURLMayHaveChanged;
- (void)webViewProgress:(id)arg1 didUpdateProgress:(float)arg2;
- (void)_loadingStateChanged:(BOOL)arg1;
- (void)_logDidStopNavigationFailed:(id)arg1;
- (void)_logDidStopNavigation;
- (void)_cancelPendingLogEvent;
- (void)_layoutBannerView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setGestureRecognizersEnabled:(BOOL)arg1;
- (id)_webBrowserView;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)_removePullToRefresh;
- (void)_addPullToRefresh;
- (BOOL)hasOnlySecureContent;
- (void)updateOrientationWithOrientation:(int)arg1;
- (void)safeExecuteJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopLoading;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (void)loadRequest:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)exposePullToRefresh;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1;
@property(nonatomic) BOOL hasPullToRefresh;
@property(nonatomic) __weak id <FBWebViewDelegate> delegate;
@property(readonly, nonatomic) int webViewImplementation;
@property(nonatomic) unsigned int dataDetectorTypes;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, copy, nonatomic) NSURL *currentLocationURL; // @synthesize currentLocationURL=_currentLocationURL;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

