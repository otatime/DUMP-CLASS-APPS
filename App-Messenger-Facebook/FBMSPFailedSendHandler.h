//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMSPPayloadHandling.h"
#import "FBSessionClassProvidable.h"

@class NSString;

@interface FBMSPFailedSendHandler : NSObject <FBSessionClassProvidable, FBMSPPayloadHandling>
{
}

- (void)handleClientPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
