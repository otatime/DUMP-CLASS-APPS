//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessagingRegionFetcherServiceListening.h"

@class FBExperimentManager, MNMessagingRegionInfo, MNMessagingRegionStore, NSString;

@interface MNMessagingRegionProvider : NSObject <MNMessagingRegionFetcherServiceListening>
{
    MNMessagingRegionStore *_messagingRegionStore;
    FBExperimentManager *_experimentManager;
    MNMessagingRegionInfo *_cachedMessagingRegionInfo;
}

@property(retain) MNMessagingRegionInfo *cachedMessagingRegionInfo; // @synthesize cachedMessagingRegionInfo=_cachedMessagingRegionInfo;
- (void).cxx_destruct;
- (void)_populateCachedMessagingRegionInfoFromDiskIfNeeded;
- (void)messagingRegionFetcherService:(id)arg1 didFailToFetchMessagingRegionInfoWithError:(id)arg2;
- (void)messagingRegionFetcherService:(id)arg1 didFetchMessagingRegionInfo:(id)arg2;
@property(readonly, copy) NSString *messengerMQTTRegion;
@property(readonly, copy) NSString *messengerRegion;
- (id)initWithMessagingRegionStore:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

