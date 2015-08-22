//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"

@class FBAnalytics, MNAuthenticationOptionsView, NSString;

@interface MNAuthenticationOptionsViewController : UIViewController <FBClassProvidable>
{
    MNAuthenticationOptionsView *_authenticationOptionsView;
    FBAnalytics *_analytics;
    BOOL _loginWithFacebookShouldAvoidSSO;
    id <MNAuthenticationOptionsViewControllerDelegate> _delegate;
}

@property(nonatomic) BOOL loginWithFacebookShouldAvoidSSO; // @synthesize loginWithFacebookShouldAvoidSSO=_loginWithFacebookShouldAvoidSSO;
@property(nonatomic) __weak id <MNAuthenticationOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didPressNotOnFacebookButton;
- (void)_didPressLoginWithFacebookButton;
- (id)analyticsModule;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAnalytics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

