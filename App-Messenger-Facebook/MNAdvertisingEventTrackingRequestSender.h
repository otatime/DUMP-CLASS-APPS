//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"

@class FBSimpleNetworkerRequest, NSString;

@interface MNAdvertisingEventTrackingRequestSender : NSObject <FBNetworkerRequestDelegate>
{
    id <FBNetworkDispatch> _networkDispatcher;
    FBSimpleNetworkerRequest *_request;
    BOOL _requestStarted;
    unsigned int _event;
    id <MNAdvertisingEventTrackingRequestSenderDelegate> _delegate;
}

@property(nonatomic) __weak id <MNAdvertisingEventTrackingRequestSenderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_configureRequestWithEvent:(unsigned int)arg1;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 complete:(BOOL)arg3;
- (void)send;
- (id)initWithEvent:(unsigned int)arg1 networkDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
