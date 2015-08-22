//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GOOWebViewToolbarControllerDelegate.h"
#import "UIWebViewDelegate.h"

@class GOOWebViewToolbarController, NSString, NSTimer, NSURL, NSURLRequest, QTMColorGroup, QTMProgressBar, UIBarButtonItem, UIWebView;

@interface GOOWebViewController : UIViewController <GOOWebViewToolbarControllerDelegate, UIWebViewDelegate>
{
    NSString *_previousTitle;
    UIBarButtonItem *_activityBarButtonItem;
    UIWebView *_webView;
    NSURLRequest *_request;
    NSString *_HTMLString;
    NSURL *_baseURL;
    unsigned int _frameLoadsInProgress;
    QTMProgressBar *_progressBar;
    GOOWebViewToolbarController *_toolbarController;
    NSTimer *_progressTimer;
    unsigned int _timerFireCount;
    BOOL _disableDefaultDialerRequestHandling;
    int _toolbarStyle;
    id <GOOWebViewControllerDelegate> _delegate;
    int _minimumAgeForURLs;
}

@property(nonatomic) BOOL disableDefaultDialerRequestHandling; // @synthesize disableDefaultDialerRequestHandling=_disableDefaultDialerRequestHandling;
@property(nonatomic) int minimumAgeForURLs; // @synthesize minimumAgeForURLs=_minimumAgeForURLs;
@property(nonatomic) __weak id <GOOWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int toolbarStyle; // @synthesize toolbarStyle=_toolbarStyle;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)didTapClose;
- (void)showPageTitle;
- (void)showLoadingTitle;
- (void)hideProgressBar;
- (void)showProgressBar;
- (void)updateToolbarActionButtonVisibility;
- (void)updateProgress:(id)arg1;
- (id)headerViewForProgressBar;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewToolbarController:(id)arg1 didTapActionButton:(id)arg2;
- (id)navigationCustomHeaderBackgroundView;
- (id)navigationPrimaryScrollView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)loadURL:(id)arg1;
@property(retain, nonatomic) QTMColorGroup *progressBarColorGroup;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)commonInit;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
