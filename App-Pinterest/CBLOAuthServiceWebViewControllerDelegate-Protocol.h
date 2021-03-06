//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLPresentedViewControllerDelegate.h"

@class CBLOAuthServiceWebViewController, CBLOAuthUser, NSError, NSString, NSURL;

@protocol CBLOAuthServiceWebViewControllerDelegate <CBLPresentedViewControllerDelegate>
- (NSURL *)CBLOAuthServiceURLForOAuthServiceWebViewController:(CBLOAuthServiceWebViewController *)arg1;

@optional
- (void)CBLOAuthServiceWebViewControllerDidFailToGetUserInfo:(CBLOAuthServiceWebViewController *)arg1 error:(NSError *)arg2;
- (void)CBLOAuthServiceWebViewController:(CBLOAuthServiceWebViewController *)arg1 didGetUserInfo:(CBLOAuthUser *)arg2;
- (void)CBLOAuthServiceWebViewControllerDidFailToAuthorize:(CBLOAuthServiceWebViewController *)arg1 error:(NSError *)arg2;
- (void)CBLOAuthServiceWebViewController:(CBLOAuthServiceWebViewController *)arg1 didAuthorizeSuccessfullyWithToken:(NSString *)arg2;
@end

