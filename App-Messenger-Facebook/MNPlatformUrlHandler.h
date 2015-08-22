//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPlatformActionDelegate.h"
#import "FBSessionClassProvidable.h"
#import "UIAlertViewDelegate.h"

@class FBExceptionHandler, FBPlatformAction, FBPlatformNewThreadViewControllerFactory, NSMutableArray, NSString;

@interface MNPlatformUrlHandler : NSObject <FBPlatformActionDelegate, UIAlertViewDelegate, FBSessionClassProvidable>
{
    id <FBProvider> _navigationCoordinatorProvider;
    id <FBProvider> _sessionProvider;
    FBPlatformNewThreadViewControllerFactory *_platformNewThreadViewControllerFactory;
    NSMutableArray *_recentViewControllers;
    FBPlatformAction *_action;
    FBExceptionHandler *_exceptionHandler;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)platformAction:(id)arg1 openURL:(id)arg2;
- (void)platformActionDidComplete:(id)arg1;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (id)_supportedVersionFromURL:(id)arg1;
- (void)_processAction;
- (BOOL)openURL:(id)arg1 sourceApplication:(id)arg2;
- (BOOL)canOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

