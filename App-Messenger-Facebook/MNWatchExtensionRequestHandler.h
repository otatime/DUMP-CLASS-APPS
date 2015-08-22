//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNServiceControllable.h"

@class FBUserSession, MNWatchDataWaiter, NSMutableArray, NSString;

@interface MNWatchExtensionRequestHandler : NSObject <MNServiceControllable, FBSessionClassProvidable>
{
    FBUserSession *_session;
    MNWatchDataWaiter *_watchDataWaiter;
    id <FBProvider> _messageSenderProvider;
    id <FBProvider> _analyticsUploaderProvider;
    BOOL _isReady;
    NSMutableArray *_pendingRequests;
}

- (void).cxx_destruct;
- (void)handleIdle;
- (void)stop;
- (void)_processPendingRequestsUnlocked;
- (void)start:(id)arg1;
- (void)_handleWatchExtensionRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleWatchExtensionRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

