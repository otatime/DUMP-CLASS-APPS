//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBMPushKitHandlerProvider.h"

@class FBProviderMapData, NSString;

@interface FBMPushKitHandlerListProvider : NSObject <FBMPushKitHandlerProvider, FBClassProvidable>
{
    FBProviderMapData *_providerMap;
}

- (void).cxx_destruct;
- (id)handlers;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

