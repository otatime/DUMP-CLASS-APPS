//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMOmnistoreCollectionManagerDelegate.h"
#import "FBQuickPromotionOmnistoreKeyProvider.h"

@class FBMOmnistoreCollectionManager, FBMRealtimeBannerTriggerObservingAnnouncer, NSString;

@interface FBMRealtimeBannerStore : NSObject <FBMOmnistoreCollectionManagerDelegate, FBQuickPromotionOmnistoreKeyProvider>
{
    FBMRealtimeBannerTriggerObservingAnnouncer *_announcer;
    FBMOmnistoreCollectionManager *_collectionManager;
}

- (void).cxx_destruct;
- (void)handleDelta:(id)arg1;
- (BOOL)shouldHandleDelta:(id)arg1;
- (id)getCreationTimeForKey:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSession:(id)arg1 omnistore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

