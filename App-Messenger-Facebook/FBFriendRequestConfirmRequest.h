//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;

@interface FBFriendRequestConfirmRequest : FBNetworkerRequest
{
    NSString *_reference;
    NSString *_authCode;
    int _state;
    NSString *_requestorFBID;
}

@property(copy, nonatomic) NSString *requestorFBID; // @synthesize requestorFBID=_requestorFBID;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
- (void).cxx_destruct;
- (id)networkRequest;
- (id)initWithReference:(id)arg1 callbackPerformer:(id)arg2;
- (id)init;

@end
