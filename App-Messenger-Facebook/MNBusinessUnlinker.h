//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"
#import "UIAlertViewDelegate.h"

@class FBUserSession, NSNumber, NSString;

@interface MNBusinessUnlinker : NSObject <UIAlertViewDelegate, FBNetworkerRequestDelegate>
{
    FBUserSession *_session;
    NSString *_businessId;
    NSString *_businessName;
    NSNumber *_unlinkAlertToken;
}

- (void).cxx_destruct;
- (void)_logNetworkCallbackForBusinessID:(id)arg1 status:(id)arg2 error:(id)arg3;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)_unlink;
- (void)_unlinkAlertView:(id)arg1 buttonTappedWithIndex:(int)arg2;
- (void)start;
- (id)initWithSession:(id)arg1 businessId:(id)arg2 businessName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

