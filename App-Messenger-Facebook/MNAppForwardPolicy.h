//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBMNetworkProtocolController, FBUserSession, NSString;

@interface MNAppForwardPolicy : NSObject <FBClassProvidable>
{
    unsigned int _usingBroadcastAPIGKValue;
    FBUserSession *_session;
    FBMNetworkProtocolController *_networkProtocolController;
}

- (void).cxx_destruct;
- (BOOL)shouldUseBroadcastAPI;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

