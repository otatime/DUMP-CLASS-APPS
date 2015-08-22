//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UINavigationControllerDelegate.h"
#import "UIWebViewDelegate.h"

@class GSDK_GTMOAuth2Authentication, GSDK_GTMOAuth2SignIn, NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL, NSURLRequest, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIView, UIWebView;

@interface GSDK_GTMOAuth2ViewControllerTouch : UIViewController <UINavigationControllerDelegate, UIWebViewDelegate>
{
    UIButton *backButton_;
    UIButton *forwardButton_;
    UIActivityIndicatorView *initialActivityIndicator_;
    UIView *navButtonsView_;
    UIBarButtonItem *rightBarButtonItem_;
    UIWebView *webView_;
    GSDK_GTMOAuth2SignIn *signIn_;
    NSURLRequest *request_;
    id delegate_;
    SEL finishedSelector_;
    CDUnknownBlockType completionBlock_;
    CDUnknownBlockType popViewBlock_;
    NSString *keychainItemName_;
    void *keychainItemAccessibility_;
    NSString *initialHTMLString_;
    int mustShowActivityIndicator_;
    NSURL *browserCookiesURL_;
    id userData_;
    NSMutableDictionary *properties_;
    BOOL isViewShown_;
    BOOL didViewAppear_;
    BOOL hasNotifiedWebViewStartedLoading_;
    BOOL hasCalledFinished_;
    BOOL hasDoneFinalRedirect_;
    BOOL didDismissSelf_;
    unsigned int savedCookiePolicy_;
    NSArray *systemCookies_;
    NSArray *signInCookies_;
}

+ (void)revokeTokenForGoogleAuthentication:(id)arg1;
+ (void)setSignInClass:(Class)arg1;
+ (Class)signInClass;
+ (BOOL)saveParamsToKeychainForName:(id)arg1 accessibility:(void *)arg2 authentication:(id)arg3 error:(id *)arg4;
+ (BOOL)saveParamsToKeychainForName:(id)arg1 authentication:(id)arg2;
+ (BOOL)removeAuthFromKeychainForName:(id)arg1;
+ (BOOL)authorizeFromKeychainForName:(id)arg1 authentication:(id)arg2 error:(id *)arg3;
+ (id)authForGoogleFromKeychainForName:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 error:(id *)arg4;
+ (id)authForGoogleFromKeychainForName:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
+ (id)authNibBundle;
+ (id)authNibName;
+ (id)controllerWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)controllerWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 delegate:(id)arg4 finishedSelector:(SEL)arg5;
+ (id)controllerWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)controllerWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 delegate:(id)arg5 finishedSelector:(SEL)arg6;
@property(copy, nonatomic) CDUnknownBlockType popViewBlock; // @synthesize popViewBlock=popViewBlock_;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=properties_;
@property(retain, nonatomic) id userData; // @synthesize userData=userData_;
@property(readonly, retain, nonatomic) GSDK_GTMOAuth2SignIn *signIn; // @synthesize signIn=signIn_;
@property(retain, nonatomic) NSURL *browserCookiesURL; // @synthesize browserCookiesURL=browserCookiesURL_;
@property(copy, nonatomic) NSString *initialHTMLString; // @synthesize initialHTMLString=initialHTMLString_;
@property(nonatomic) void *keychainItemAccessibility; // @synthesize keychainItemAccessibility=keychainItemAccessibility_;
@property(copy, nonatomic) NSString *keychainItemName; // @synthesize keychainItemName=keychainItemName_;
@property(retain, nonatomic) UIActivityIndicatorView *initialActivityIndicator; // @synthesize initialActivityIndicator=initialActivityIndicator_;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=webView_;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=rightBarButtonItem_;
@property(retain, nonatomic) UIView *navButtonsView; // @synthesize navButtonsView=navButtonsView_;
@property(retain, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=forwardButton_;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=backButton_;
@property(copy, nonatomic) NSArray *signInCookies; // @synthesize signInCookies=signInCookies_;
@property(copy, nonatomic) NSArray *systemCookies; // @synthesize systemCookies=systemCookies_;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=request_;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)updateUI;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)viewDidLayoutSubviews;
- (BOOL)isBeingObscured:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isNavigationBarTranslucent;
- (void)moveWebViewFromUnderNavigationBar;
- (void)signIn:(id)arg1 finishedWithAuth:(id)arg2 error:(id)arg3;
- (void)signIn:(id)arg1 displayRequest:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
@property(nonatomic) BOOL showsInitialActivityIndicator;
- (BOOL)shouldUseKeychain;
@property(nonatomic) double networkLossTimeoutInterval;
- (id)swapBrowserCookies:(id)arg1;
- (void)swapInCookies;
- (void)swapOutCookies;
@property(readonly, retain, nonatomic) GSDK_GTMOAuth2Authentication *authentication;
- (void)cancelSigningIn;
- (void)notifyWithName:(id)arg1 webView:(id)arg2 kind:(id)arg3;
- (void)popView;
- (void)setUpNavigation;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 keychainItemName:(id)arg3 delegate:(id)arg4 finishedSelector:(SEL)arg5;
- (id)initWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 delegate:(id)arg5 finishedSelector:(SEL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

