//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "WKNavigationDelegate.h"

@class CRNetStatDispatch, CRRequestState, NSSet, NSString, NSTimer;

@interface CRWKNavigationDelegateProxy : NSProxy <WKNavigationDelegate>
{
    id _navigationDelegate;
    NSSet *_selectorsWeRespondTo;
    CRRequestState *_reqState;
    NSTimer *_timer;
    CRNetStatDispatch *_dispatch;
}

+ (id)performSwizzledWKWebViewInitWithFrameSelectorFromWebview:(id)arg1 withFrame:(struct CGRect)arg2 withConfig:(id)arg3;
+ (void)performSwizzledWKWebViewSetNavigationDelegateSelectorFromWebview:(id)arg1 withProxy:(id)arg2;
+ (id)performSwizzledWKWebViewNavigationDelegateSelectorFromWebview:(id)arg1;
+ (void)setNavigationDelegateForWKWebView:(id)arg1 navigationDelegate:(id)arg2 dispatch:(id)arg3;
+ (id)navigationDelegateForWKWebView:(id)arg1 dispatch:(id)arg2;
+ (id)initWithFrameForWKWebView:(id)arg1 frame:(struct CGRect)arg2 configuration:(id)arg3 dispatch:(id)arg4;
+ (id)proxyFromWebView:(id)arg1 dispatch:(id)arg2;
+ (BOOL)isInstrumented;
+ (void)uninstrumentWKWebView;
+ (void)traverseView:(id)arg1;
+ (void)traverseUI;
+ (void)instrumentWKWebViewWithDispatch:(id)arg1;
+ (void)swizzleWKWebViewSetNavigationDelegateWithDispatch:(id)arg1;
+ (void)swizzleWKWebViewNavigationDelegateWithDispatch:(id)arg1;
+ (void)swizzleWKWebViewInitWithFrameAndDispatch:(id)arg1;
+ (void)replaceWKWebViewmethod:(SEL)arg1 withSwizzledSelector:(SEL)arg2 implementedBlock:(id)arg3;
+ (BOOL)respondsToSelector:(SEL)arg1;
@property(retain, nonatomic) CRNetStatDispatch *dispatch; // @synthesize dispatch=_dispatch;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CRRequestState *reqState; // @synthesize reqState=_reqState;
@property(retain, nonatomic) NSSet *selectorsWeRespondTo; // @synthesize selectorsWeRespondTo=_selectorsWeRespondTo;
@property(nonatomic) __weak id navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void).cxx_destruct;
- (void)addAssociationToWebView:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)initWithNavigationDelegate:(id)arg1 dispatch:(id)arg2;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

