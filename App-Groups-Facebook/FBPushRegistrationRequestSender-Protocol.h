//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPushRegisterRequestParams, FBPushUnregisterRequestParams, FBUserSession;

@protocol FBPushRegistrationRequestSender <NSObject>
@property(nonatomic) id <FBPushRegistrationDelegate> delegate;
- (void)sendUnregisterRequestWithParams:(FBPushUnregisterRequestParams *)arg1 session:(FBUserSession *)arg2;
- (void)cancelCurrentRegisterRequest;
- (void)sendRegisterRequestWithParams:(FBPushRegisterRequestParams *)arg1 session:(FBUserSession *)arg2;
@end

