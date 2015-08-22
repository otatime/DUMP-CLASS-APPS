//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface Credential : NSObject <TBase, NSCoding>
{
    NSString *__longTermToken;
    NSString *__longTermTokenType;
    long long __lttCreatedAt;
    long long __lttExpirationAt;
    NSString *__shortTermToken;
    NSString *__shortTermTokenType;
    long long __sttCreatedAt;
    long long __sttExpirationAt;
    NSString *__username;
    NSString *__password;
    BOOL __longTermToken_isset;
    BOOL __longTermTokenType_isset;
    BOOL __lttCreatedAt_isset;
    BOOL __lttExpirationAt_isset;
    BOOL __shortTermToken_isset;
    BOOL __shortTermTokenType_isset;
    BOOL __sttCreatedAt_isset;
    BOOL __sttExpirationAt_isset;
    BOOL __username_isset;
    BOOL __password_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPassword;
- (BOOL)passwordIsSet;
@property(retain, nonatomic, getter=password, setter=setPassword:) NSString *password;
- (void)unsetUsername;
- (BOOL)usernameIsSet;
@property(retain, nonatomic, getter=username, setter=setUsername:) NSString *username;
- (void)unsetSttExpirationAt;
- (BOOL)sttExpirationAtIsSet;
@property(nonatomic, getter=sttExpirationAt, setter=setSttExpirationAt:) long long sttExpirationAt;
- (void)unsetSttCreatedAt;
- (BOOL)sttCreatedAtIsSet;
@property(nonatomic, getter=sttCreatedAt, setter=setSttCreatedAt:) long long sttCreatedAt;
- (void)unsetShortTermTokenType;
- (BOOL)shortTermTokenTypeIsSet;
@property(retain, nonatomic, getter=shortTermTokenType, setter=setShortTermTokenType:) NSString *shortTermTokenType;
- (void)unsetShortTermToken;
- (BOOL)shortTermTokenIsSet;
@property(retain, nonatomic, getter=shortTermToken, setter=setShortTermToken:) NSString *shortTermToken;
- (void)unsetLttExpirationAt;
- (BOOL)lttExpirationAtIsSet;
@property(nonatomic, getter=lttExpirationAt, setter=setLttExpirationAt:) long long lttExpirationAt;
- (void)unsetLttCreatedAt;
- (BOOL)lttCreatedAtIsSet;
@property(nonatomic, getter=lttCreatedAt, setter=setLttCreatedAt:) long long lttCreatedAt;
- (void)unsetLongTermTokenType;
- (BOOL)longTermTokenTypeIsSet;
@property(retain, nonatomic, getter=longTermTokenType, setter=setLongTermTokenType:) NSString *longTermTokenType;
- (void)unsetLongTermToken;
- (BOOL)longTermTokenIsSet;
@property(retain, nonatomic, getter=longTermToken, setter=setLongTermToken:) NSString *longTermToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLongTermToken:(id)arg1 longTermTokenType:(id)arg2 lttCreatedAt:(long long)arg3 lttExpirationAt:(long long)arg4 shortTermToken:(id)arg5 shortTermTokenType:(id)arg6 sttCreatedAt:(long long)arg7 sttExpirationAt:(long long)arg8 username:(id)arg9 password:(id)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
