//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMNetworkProtocolChangeListener.h"
#import "FBSessionClassProvidable.h"

@class FBMNetworkProtocolController, FBMobileConfigFactory, FBUserSession, NSString;

@interface FBMActionIdPolicy : NSObject <FBMNetworkProtocolChangeListener, FBSessionClassProvidable>
{
    BOOL _shouldUseActionId;
    BOOL _shouldQueryActionId;
    FBMNetworkProtocolController *_networkProtocolController;
    FBUserSession *_session;
    FBMobileConfigFactory *_mobileConfigFactory;
}

- (void).cxx_destruct;
- (BOOL)_isLegacyProtocol;
- (void)_computeAndSetPolicies;
- (void)networkProtocolDidChange:(unsigned int)arg1;
- (BOOL)shouldQueryActionId;
- (BOOL)shouldUseActionId;
- (id)initWithNetworkProtocolController:(id)arg1 session:(id)arg2 mobileConfigFactory:(id)arg3;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

