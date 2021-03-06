//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNMessageCoreViewModelFactory.h"

@class FBCache, MNMessageCoreViewModelDefaultFactory, NSString;

@interface MNMessageCoreViewModelCachedFactory : NSObject <FBClassProvidable, MNMessageCoreViewModelFactory>
{
    MNMessageCoreViewModelDefaultFactory *_defaultFactory;
    FBCache *_cache;
}

- (void).cxx_destruct;
- (id)messageCoreViewModelFromMessage:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

