//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAuthenticationHandlerResponse, FBAuthenticationManager, FBAuthenticationStoredUser, NSDictionary, NSError;

@protocol FBAuthenticationManagerDelegate <NSObject>
- (void)authenticationManager:(FBAuthenticationManager *)arg1 didAuthenticateWithResponse:(FBAuthenticationHandlerResponse *)arg2;
- (void)authenticationManager:(FBAuthenticationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)authenticationManager:(FBAuthenticationManager *)arg1 ready:(BOOL)arg2;

@optional
- (unsigned int)getDeviceBasedLoginAttempts;
- (void)authenticationManager:(FBAuthenticationManager *)arg1 withUser:(FBAuthenticationStoredUser *)arg2 didFailWithError:(NSError *)arg3;
- (void)authenticationManager:(FBAuthenticationManager *)arg1 isDeviceBasedCredentialsReady:(NSDictionary *)arg2;
@end

