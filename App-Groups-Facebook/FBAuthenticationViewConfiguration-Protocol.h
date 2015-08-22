//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBActionSheetButtonMetrics, FBGatekeeper, FBImageDownloader, NSString, UIView<FBAuthenticatingEnterPasscodeView>, UIView<FBAuthenticatingView>, UIView<FBLogoutView>;

@protocol FBAuthenticationViewConfiguration <NSObject>
@property(nonatomic) BOOL shouldSkipSSOLogin;
- (FBActionSheetButtonMetrics *)actionSheetButtonMetrics;
- (int)preferredStatusBarStyle;
- (UIView<FBAuthenticatingEnterPasscodeView> *)newEnterPasscodeViewToShowNumbers:(BOOL)arg1 secondaryActionText:(NSString *)arg2;
- (UIView<FBLogoutView> *)newLogoutView;
- (UIView<FBAuthenticatingView> *)newAuthenticationView;
- (id)initWithImageDownloader:(FBImageDownloader *)arg1 gatekeeper:(FBGatekeeper *)arg2;
@end
