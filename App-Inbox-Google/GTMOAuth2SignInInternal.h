//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTMOAuth2SignIn.h"

@class NSString;

@interface GTMOAuth2SignInInternal : GTMOAuth2SignIn
{
    NSString *authorizationEmail_;
    NSString *authorizationTemplate_;
    BOOL shouldUseLoginScope_;
}

+ (id)defaultSourceString;
+ (id)tokenAuthURLWithAuthToken:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4;
+ (id)dictionaryWithClientLoginResponseString:(id)arg1;
+ (void)fetchTokenAuthURLWithValues:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)fetchTokenAuthURLWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)fetchAuthTokenWithValues:(id)arg1 service:(id)arg2 isSessionOnly:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchUberAuthTokenWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchClientLoginValuesWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchClientLoginValuesWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 doUberAuthFetch:(BOOL)arg4 parseBlock:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)nativeClientRedirectURI;
+ (id)googleUserInfoURL;
+ (id)googleRevocationURL;
+ (id)googleTokenURL;
+ (id)googleAuthorizationURL;
+ (id)userInfoHost;
+ (void)setUserInfoHost:(id)arg1;
+ (id)authorizationHost;
+ (void)setAuthorizationHost:(id)arg1;
+ (id)accountsHost;
+ (void)setAccountsHost:(id)arg1;
@property(nonatomic) BOOL shouldUseLoginScope; // @synthesize shouldUseLoginScope=shouldUseLoginScope_;
@property(retain, nonatomic) NSString *authorizationTemplate; // @synthesize authorizationTemplate=authorizationTemplate_;
@property(retain, nonatomic) NSString *authorizationEmail; // @synthesize authorizationEmail=authorizationEmail_;
- (BOOL)cookiesChanged:(id)arg1;
- (BOOL)titleChanged:(id)arg1;
- (id)parametersForWebRequest;
- (BOOL)startSigningIn;
- (void)dealloc;

@end

