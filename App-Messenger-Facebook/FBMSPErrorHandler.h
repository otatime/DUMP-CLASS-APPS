//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMSPPayloadHandling.h"
#import "FBSessionClassProvidable.h"

@class FBAnalytics, FBMNetworkProtocolController, FBMSPErrorRetryManager, NSString;

@interface FBMSPErrorHandler : NSObject <FBSessionClassProvidable, FBMSPPayloadHandling>
{
    FBMSPErrorRetryManager *_retryManager;
    FBMNetworkProtocolController *_networkProtocolController;
    FBAnalytics *_analyticsLogger;
}

- (void).cxx_destruct;
- (void)_logErrorReceivedForErrorCode:(id)arg1;
- (void)_disableSyncProtocol;
- (void)_retryExponentialBackoffWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fqlFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleClientPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithRetryManager:(id)arg1 networkProtocolController:(id)arg2 analyticsLogger:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

