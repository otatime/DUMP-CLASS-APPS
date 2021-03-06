//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBMQTTClientManager, NSString;

@interface MNSyncProtocolPublisher : NSObject <FBSessionClassProvidable>
{
    FBMQTTClientManager *_clientManager;
}

- (void).cxx_destruct;
- (void)publishWithJsonConfig:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)configureWithMQTTClientManager:(id)arg1;
- (BOOL)isConfigured;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

