//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTView.h"

#import "RCTAutoInsetsProtocol.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, RCTEventDispatcher, UIWebView;

@interface RCTWebView : RCTView <UIWebViewDelegate, RCTAutoInsetsProtocol>
{
    RCTEventDispatcher *_eventDispatcher;
    UIWebView *_webView;
    NSString *_injectedJavaScript;
    BOOL _automaticallyAdjustContentInsets;
    struct UIEdgeInsets _contentInset;
}

@property(copy, nonatomic) NSString *injectedJavaScript; // @synthesize injectedJavaScript=_injectedJavaScript;
@property(nonatomic) BOOL automaticallyAdjustContentInsets; // @synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (id)baseEvent;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setHTML:(id)arg1;
@property(retain, nonatomic) NSURL *URL;
- (void)reload;
- (void)goBack;
- (void)goForward;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
