//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;

@interface FBDBLLoginRequest : FBNetworkerRequest
{
    NSString *_accountID;
    NSString *_nonceValue;
    NSString *_providedPin;
    NSString *_machineID;
    NSString *_loggedOutAccessToken;
}

@property(copy, nonatomic) NSString *loggedOutAccessToken; // @synthesize loggedOutAccessToken=_loggedOutAccessToken;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(copy, nonatomic) NSString *providedPin; // @synthesize providedPin=_providedPin;
@property(copy, nonatomic) NSString *nonceValue; // @synthesize nonceValue=_nonceValue;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (BOOL)allowRetry;
- (id)networkRequest;
- (id)init;
- (id)initWithAccountID:(id)arg1 nonceValue:(id)arg2 providedPin:(id)arg3 machineID:(id)arg4 callbackPerformer:(id)arg5;

@end
