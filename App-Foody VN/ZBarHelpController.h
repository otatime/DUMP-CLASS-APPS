//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIBarButtonItem, UIToolbar, UIWebView;

@interface ZBarHelpController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    NSString *reason;
    id delegate;
    UIWebView *webView;
    UIToolbar *toolbar;
    UIBarButtonItem *doneBtn;
    UIBarButtonItem *backBtn;
    UIBarButtonItem *space;
    NSURL *linkURL;
    unsigned int orientations;
}

@property(nonatomic) id <ZBarHelpDelegate> delegate; // @synthesize delegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)dismiss;
- (void)setInterfaceOrientation:(int)arg1 supported:(BOOL)arg2;
- (BOOL)isInterfaceOrientationSupported:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (void)cleanup;
- (id)init;
- (id)initWithReason:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
