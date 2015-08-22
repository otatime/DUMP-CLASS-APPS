//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBImportedContactRemover.h"
#import "FBSessionClassProvidable.h"

@class FBGraphQLImportedContactRemover, FBImportedContactRemovalListenerAnnouncer, FBSyncStoreWriter, NSString;

@interface MNImportedContactRemovalCoordinator : NSObject <FBImportedContactRemover, FBSessionClassProvidable>
{
    FBImportedContactRemovalListenerAnnouncer *_announcer;
    FBGraphQLImportedContactRemover *_importedContactRemover;
    FBSyncStoreWriter *_syncStoreWriter;
}

- (void).cxx_destruct;
- (void)removeImportedSyncPerson:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSyncStoreWriter:(id)arg1 networker:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

