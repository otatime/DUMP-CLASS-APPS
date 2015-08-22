//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAppSessionController.h"

@class NSString, UIWindow;

@interface OrcaAppSessionControllerStub : NSObject <FBAppSessionController>
{
    id <FBAppSessionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAppSessionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator;
@property(readonly, nonatomic) __weak id <FBNavigation> navigation;
@property(readonly, nonatomic) int state;
- (unsigned int)openNativeThirdPartyURL:(id)arg1;
- (void)showLogoutAlertAndPresentLogoutUI;
- (void)presentLogoutUIWithReason:(id)arg1;
- (void)presentSessionUIFromLaunch:(BOOL)arg1 forceSessionStoreClear:(BOOL)arg2 showSpinner:(BOOL)arg3;
- (void)configureWithSession:(id)arg1 exceptionHandler:(id)arg2 rootWindow:(id)arg3 application:(id)arg4 requesterConfiguration:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) id <FBPushHandler> pushHandler;
@property(retain, nonatomic) UIWindow *rootWindow;
@property(readonly) Class superclass;

@end

