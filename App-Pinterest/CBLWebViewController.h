//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLOpenAppLinkViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class BFAppLink, CBLIndeterminateActivityIndicatorView, CBLOpenAppLinkView, CBLProgressWebView, NSString, NSURL;

@interface CBLWebViewController : CBLBaseViewController <UIWebViewDelegate, CBLOpenAppLinkViewDelegate, UIScrollViewDelegate>
{
    BOOL _allowPinterestLogin;
    BOOL _showActivityIndicator;
    BOOL _appLinkViewhasShown;
    CBLProgressWebView *_webView;
    NSURL *_addressURL;
    NSURL *_refererURL;
    id <CBLPresentedViewControllerDelegate> _delegate;
    BFAppLink *_eligibleAppLink;
    CBLOpenAppLinkView *_openAppLinkView;
    id <UIWebViewDelegate> _webViewDelegate;
    CBLIndeterminateActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) CBLIndeterminateActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak id <UIWebViewDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(nonatomic) BOOL appLinkViewhasShown; // @synthesize appLinkViewhasShown=_appLinkViewhasShown;
@property(retain, nonatomic) CBLOpenAppLinkView *openAppLinkView; // @synthesize openAppLinkView=_openAppLinkView;
@property(retain, nonatomic) BFAppLink *eligibleAppLink; // @synthesize eligibleAppLink=_eligibleAppLink;
@property(nonatomic) __weak id <CBLPresentedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) BOOL allowPinterestLogin; // @synthesize allowPinterestLogin=_allowPinterestLogin;
@property(retain, nonatomic) NSURL *refererURL; // @synthesize refererURL=_refererURL;
@property(retain, nonatomic) NSURL *addressURL; // @synthesize addressURL=_addressURL;
@property(retain, nonatomic) CBLProgressWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)injectHeadlessPinningJS;
- (void)closeButtonPressed:(id)arg1;
- (void)beginInitialRequest;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapInsideOpenAppButton:(id)arg1 link:(id)arg2;
- (void)didTapInsideCloseButton:(id)arg1;
- (void)setErrorString:(id)arg1 actionString:(id)arg2 actionURL:(id)arg3;
- (void)logOffsiteSource:(id)arg1 withIdentifier:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)setAddressURL:(id)arg1 andRefererURL:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

