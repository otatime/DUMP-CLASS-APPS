//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBContactImportPermissionListener.h"
#import "FBLocalContactsSyncStatusListener.h"
#import "FBSyncPersonsFetchDelegate.h"

@class FBLocalContactsSyncStatus, NSMutableArray, NSString;

@interface FBImportedContactsDownloadCoordinator : NSObject <FBLocalContactsSyncStatusListener, FBSyncPersonsFetchDelegate, FBContactImportPermissionListener>
{
    unsigned int _contactImportSyncState;
    id <FBImportedContactsDownloadCancellationListener> _cancellationListener;
    id <FBImportedContactsSyncListener> _listener;
    NSMutableArray *_localContactsSyncStatusesAwaitingFetch;
    FBLocalContactsSyncStatus *_inflightLocalContactsSyncStatus;
    id <FBSyncPersonsFetcher> _syncPersonsFetcher;
}

- (void)contactImportingDisallowed;
- (void)contactImportingAllowed;
- (void)syncPersonsFetchFailed;
- (void)didFetchSyncPersons:(id)arg1;
- (void)syncingFailed;
- (void)localContactsSyncFailedDueToContactImportingBeingLocked;
- (void)localContactsSyncFailed;
- (void)localContactsSyncCompleted;
- (void)handleLocalContactsSyncProgressWithStatus:(id)arg1;
- (void)localContactsSyncProgressedWithStatus:(id)arg1;
- (void)foundNoLocalContactChanges;
- (void)foundLocalContactChangesWithNumberOfChanges:(unsigned int)arg1;
- (void)localContactsSyncStarted;
- (void)dealloc;
- (id)initWithSyncPersonsFetcher:(id)arg1 listener:(id)arg2 cancellationListener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
