//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSOAccountSelectorDelegate.h"

@class GOOAlertView, GTMHTTPFetcher, NSString, SSONavigationController, SSOService, UIButton;

@interface SSOInterfaceController : NSObject <SSOAccountSelectorDelegate>
{
    BOOL _isCanceling;
    id <SSOInterfaceControllerDelegate> _delegate;
    id _userObject;
    SSOService *_service;
    SSONavigationController *_navigationController;
    CDUnknownBlockType _signInFinishBlock;
    CDUnknownBlockType _signInMultipleFinishBlock;
    CDUnknownBlockType _selectAccountsBlock;
    CDUnknownBlockType _switchAccountBlock;
    SSOInterfaceController *_selfRetainer;
    GTMHTTPFetcher *_fetcherForTokenRevocation;
    UIButton *_closeButton;
    GOOAlertView *_visibleAlertView;
}

@property(retain, nonatomic) GOOAlertView *visibleAlertView; // @synthesize visibleAlertView=_visibleAlertView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak GTMHTTPFetcher *fetcherForTokenRevocation; // @synthesize fetcherForTokenRevocation=_fetcherForTokenRevocation;
@property(readonly, nonatomic) BOOL isCanceling; // @synthesize isCanceling=_isCanceling;
@property(retain, nonatomic) SSOInterfaceController *selfRetainer; // @synthesize selfRetainer=_selfRetainer;
@property(copy, nonatomic) CDUnknownBlockType switchAccountBlock; // @synthesize switchAccountBlock=_switchAccountBlock;
@property(copy, nonatomic) CDUnknownBlockType selectAccountsBlock; // @synthesize selectAccountsBlock=_selectAccountsBlock;
@property(copy, nonatomic) CDUnknownBlockType signInMultipleFinishBlock; // @synthesize signInMultipleFinishBlock=_signInMultipleFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType signInFinishBlock; // @synthesize signInFinishBlock=_signInFinishBlock;
@property(retain, nonatomic) SSONavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) SSOService *service; // @synthesize service=_service;
@property(retain, nonatomic) id userObject; // @synthesize userObject=_userObject;
@property(nonatomic) __weak id <SSOInterfaceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissAlertView;
- (void)showAlertView:(id)arg1;
- (void)invokeSelectAccountsBlockWithOldIdentities:(id)arg1 newIdentities:(id)arg2 error:(id)arg3;
- (void)invokeSwitchAccountBlockWithOldIdentity:(id)arg1 newIdentity:(id)arg2 error:(id)arg3;
- (void)invokeSignInBlockWithIdentity:(id)arg1 error:(id)arg2;
- (void)invokeSignInMultipleBlockWithIdentities:(id)arg1 error:(id)arg2;
- (void)invokeCallbackBlocksWithCancelError:(id)arg1;
- (void)accountSelector:(id)arg1 showAlertView:(id)arg2;
- (void)accountSelectorDidCancelIdentityRemoval:(id)arg1;
- (void)accountSelector:(id)arg1 didSwitchFromIdentities:(id)arg2 toIdentities:(id)arg3;
- (void)accountSelector:(id)arg1 willDismissWithSelectedIdentity:(id)arg2;
- (void)accountSelector:(id)arg1 didSwitchFromIdentity:(id)arg2 toIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accountSelector:(id)arg1 removeIdentity:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)accountSelector:(id)arg1 didCancelWithIdentity:(id)arg2;
- (void)finishAddAccountWithAccountSelector:(id)arg1 newIdentity:(id)arg2 error:(id)arg3;
- (void)accountSelectorAddAccountButtonDidTap:(id)arg1 indexPath:(id)arg2;
- (void)signInDidCancel:(id)arg1;
- (void)showAlertViewForError:(id)arg1 stringID:(int)arg2;
- (void)cancelAndDismissAnimated:(BOOL)arg1;
- (void)cancelAndDismissViewControllersAnimated:(BOOL)arg1;
- (void)startSwitchAccount:(id)arg1 showManageOption:(BOOL)arg2 completed:(CDUnknownBlockType)arg3;
- (void)startSwitchAccount:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)presentSignInViewController:(id)arg1 showsCancelButton:(BOOL)arg2;
- (void)reauthenticateUser:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)reauthenticateIdentity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startSignIn:(CDUnknownBlockType)arg1;
- (void)startMultipleSignIn:(CDUnknownBlockType)arg1;
- (void)startSelectAccounts:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)startAddAccountShowingCancelButton:(BOOL)arg1 callback:(CDUnknownBlockType)arg2;
- (id)titleForAccountSelector;
- (void)accountSelector:(id)arg1 filterIdentity:(id)arg2 profile:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (BOOL)shouldRequireSignIn;
- (unsigned int)supportedOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldShowCancelButton;
- (void)dismissPushedViewControllersAnimated:(BOOL)arg1 selectedIdentities:(id)arg2;
- (void)pushViewController:(id)arg1;
- (id)presentingViewController;
- (id)navigationStyle;
- (BOOL)extendsToTopEdge;
- (void)dealloc;
- (id)initWithSSOService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
