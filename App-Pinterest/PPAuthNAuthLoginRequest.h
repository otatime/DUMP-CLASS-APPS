//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPServiceRequest.h"

@class NSArray, NSString, PPAuthNAuthCredentials;

@interface PPAuthNAuthLoginRequest : PPServiceRequest
{
    BOOL _isRememberMe;
    BOOL _isPhone;
    NSArray *_scopeStrings;
    NSString *_dysonData;
    NSString *_clientID;
    NSString *_login;
    NSString *_secret;
    int _type;
    PPAuthNAuthCredentials *_authorizationCredentials;
    NSString *_authorizationCode;
}

+ (id)baseURLforEnvironment:(id)arg1;
+ (Class)responseClass;
@property(retain, nonatomic) NSString *authorizationCode; // @synthesize authorizationCode=_authorizationCode;
@property(retain, nonatomic) PPAuthNAuthCredentials *authorizationCredentials; // @synthesize authorizationCredentials=_authorizationCredentials;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL isPhone; // @synthesize isPhone=_isPhone;
@property(retain, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(retain, nonatomic) NSString *login; // @synthesize login=_login;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSString *dysonData; // @synthesize dysonData=_dysonData;
@property(retain, nonatomic) NSArray *scopeStrings; // @synthesize scopeStrings=_scopeStrings;
@property(nonatomic) BOOL isRememberMe; // @synthesize isRememberMe=_isRememberMe;
- (void).cxx_destruct;
- (BOOL)isTwoFactorLogin;
- (id)body;
- (id)headers;
- (id)initWithEnvironment:(id)arg1 clientID:(id)arg2 authorizationCredentials:(id)arg3 authorizationCode:(id)arg4 type:(int)arg5;
- (id)initWithEnvironment:(id)arg1 clientID:(id)arg2 login:(id)arg3 secret:(id)arg4 isPhone:(BOOL)arg5 type:(int)arg6;
- (id)path;

@end

