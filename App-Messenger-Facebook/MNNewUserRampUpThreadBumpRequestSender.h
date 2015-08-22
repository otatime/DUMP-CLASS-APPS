//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMReachabilityAwareNetworkerDelegate.h"

@class FBMReachabilityAwareNetworker, FBSimpleNetworkerRequest, NSSet, NSString;

@interface MNNewUserRampUpThreadBumpRequestSender : NSObject <FBMReachabilityAwareNetworkerDelegate>
{
    FBSimpleNetworkerRequest *_request;
    id <FBNetworkDispatch> _networkDispatcher;
    FBMReachabilityAwareNetworker *_reachabilityAwareNetworker;
    NSSet *_recipients;
    BOOL _isSending;
    id <MNNewUserRampUpThreadBumpRequestSenderDelegate> _delegate;
}

@property(nonatomic) __weak id <MNNewUserRampUpThreadBumpRequestSenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2;
- (void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3;
- (void)send;
- (id)initWithNetworkDispatcher:(id)arg1 recipients:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

