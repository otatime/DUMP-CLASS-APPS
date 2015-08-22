//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNServiceControllable.h"

@class FBMessagingStore, NSString;

@interface MNMessagingStorePruningService : NSObject <FBClassProvidable, MNServiceControllable>
{
    FBMessagingStore *_messagingStore;
    BOOL _isRunning;
}

- (void).cxx_destruct;
- (void)_kickOffPruningJob;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithMessagingStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
