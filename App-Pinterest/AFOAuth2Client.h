//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestOperationManager.h"

@class NSString;

@interface AFOAuth2Client : AFHTTPRequestOperationManager
{
    NSString *_serviceProviderIdentifier;
    NSString *_clientID;
    NSString *_secret;
}

+ (id)clientWithBaseURL:(id)arg1 clientID:(id)arg2 secret:(id)arg3;
@property(retain, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
- (void).cxx_destruct;
- (void)authenticateUsingOAuthWithPath:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)authenticateUsingOAuthWithPath:(id)arg1 code:(id)arg2 redirectURI:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)authenticateUsingOAuthWithPath:(id)arg1 refreshToken:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)authenticateUsingOAuthWithPath:(id)arg1 scope:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)authenticateUsingOAuthWithPath:(id)arg1 username:(id)arg2 password:(id)arg3 scope:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)setAuthorizationHeaderWithToken:(id)arg1 ofType:(id)arg2;
- (void)setAuthorizationHeaderWithCredential:(id)arg1;
- (void)setAuthorizationHeaderWithToken:(id)arg1;
- (id)initWithBaseURL:(id)arg1 clientID:(id)arg2 secret:(id)arg3;

@end

