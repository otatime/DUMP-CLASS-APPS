//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaAssetStorageManager.h"

@class FBDiskStore, NSString;

@interface FBComposerQuickCameraVideoStorageManager : NSObject <FBMediaAssetStorageManager>
{
    FBDiskStore *_sessionDiskStore;
}

- (void).cxx_destruct;
- (id)directoryPathForVideoStorage;
- (id)initWithSession:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

