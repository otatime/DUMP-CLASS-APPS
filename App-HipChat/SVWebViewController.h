//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIBarButtonItem, UIWebView;

@interface SVWebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    UIBarButtonItem *_refreshBarButtonItem;
    UIBarButtonItem *_stopBarButtonItem;
    UIBarButtonItem *_actionBarButtonItem;
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIBarButtonItem *actionBarButtonItem; // @synthesize actionBarButtonItem=_actionBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *stopBarButtonItem; // @synthesize stopBarButtonItem=_stopBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *refreshBarButtonItem; // @synthesize refreshBarButtonItem=_refreshBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)doneButtonClicked:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (void)stopClicked:(id)arg1;
- (void)reloadClicked:(id)arg1;
- (void)goForwardClicked:(id)arg1;
- (void)goBackClicked:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)openRequest:(id)arg1;
- (void)updateToolbarItems;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)loadURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithAddress:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
