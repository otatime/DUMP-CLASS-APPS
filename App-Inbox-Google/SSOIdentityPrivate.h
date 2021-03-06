//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSOIdentity.h"

@class GTMOAuth2Authentication, NSString, SSOConfiguration;

@interface SSOIdentityPrivate : SSOIdentity
{
    NSString *_cachedUserID;
    unsigned int _hash;
    NSString *_hashedUserID;
    BOOL _canSelect;
    BOOL _signedIn;
    SSOConfiguration *_configuration;
    GTMOAuth2Authentication *_auth;
    NSString *_userFullName;
    CDUnknownBlockType _signInCallback;
    int _displayIndex;
    NSString *_filterAnnotation;
}

+ (id)profileDictionaryFromIDToken:(id)arg1;
@property(copy, nonatomic) NSString *filterAnnotation; // @synthesize filterAnnotation=_filterAnnotation;
@property(nonatomic) int displayIndex; // @synthesize displayIndex=_displayIndex;
@property(copy, nonatomic) CDUnknownBlockType signInCallback; // @synthesize signInCallback=_signInCallback;
@property(getter=isSignedIn) BOOL signedIn; // @synthesize signedIn=_signedIn;
@property(nonatomic) BOOL canSelect; // @synthesize canSelect=_canSelect;
@property(copy, nonatomic) NSString *userFullName; // @synthesize userFullName=_userFullName;
@property(retain) GTMOAuth2Authentication *auth; // @synthesize auth=_auth;
@property(readonly, nonatomic) SSOConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)setAuthAdviceCleared:(BOOL)arg1;
- (BOOL)hasValidAuth;
- (BOOL)isAuthAdviceCleared;
- (void)saveServiceBits:(id)arg1;
- (id)serviceBits;
- (id)identityPropertyForKey:(id)arg1;
- (id)hashedUserID;
- (id)userID;
- (id)userEmail;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)accessTokenRefreshed:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)keychainItem;
- (id)initWithConfiguration:(id)arg1 keychainItem:(id)arg2;
- (id)revokeToken:(CDUnknownBlockType)arg1;
- (void)requestAuthAdviceReauthenticating:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationCodeForScopesString:(id)arg1 auth:(id)arg2 clientID:(id)arg3 applicationID:(id)arg4 extraParameters:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)requestLibraryAccessTokenForScopes:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestAccessTokenForScopes:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestTokenForScopes:(id)arg1 clientID:(id)arg2 extraParameters:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)summaryForScopes:(id)arg1;
- (void)requestTokenAuthURL:(id)arg1 service:(id)arg2 source:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)requestTokenForService:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)signInWithCode:(id)arg1 finishedWithAuth:(id)arg2 error:(id)arg3;
- (id)appendJSONDataToError:(id)arg1 data:(id)arg2 fetcher:(id)arg3;
- (id)parseJSONResponse:(id)arg1 error:(id *)arg2;

@end

