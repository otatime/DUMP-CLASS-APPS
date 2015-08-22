//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMSPDeltaHandling.h"
#import "FBSessionClassProvidable.h"

@class NSString;

@interface FBMSPNewGroupThreadDeltaHandler : NSObject <FBSessionClassProvidable, FBMSPDeltaHandling>
{
}

- (id)_threadKeysForDelta:(id)arg1;
- (id)affectedThreadKeysForDelta:(id)arg1;
- (void)handleDelta:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)threadKeysForPrepareFromDelta:(id)arg1;
- (id)incrementalPersistenceJobDescriptionsForDelta:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

