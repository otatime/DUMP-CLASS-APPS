//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBContactImportPermissionListener.h"
#import "FBImportedContactsDownloadCancellationListener.h"
#import "FBLocalContactsSyncCancellationListener.h"

@class NSString;

@interface FBContactImportCancellationProcessor : NSObject <FBContactImportPermissionListener, FBLocalContactsSyncCancellationListener, FBImportedContactsDownloadCancellationListener>
{
    unsigned int _currentState;
    id <FBContactImportPermissionListener> _importedContactsDownloadPermissionHandler;
    id <FBImportedContactsSyncListener> _listener;
    id <FBContactImportPermissionListener> _localContactsSyncPermissionHandler;
    id <FBContactImportPermissionListener> _permissionListener;
}

- (void)importedContactsDownloadDisallowedWhileDownloadingContacts;
- (void)importedContactsDownloadDisallowedWhileInactive;
- (void)localContactsSyncingDisallowedWhenUploadingContacts;
- (void)localContactsSyncingDisallowedWhileInactive;
- (void)contactImportingDisallowed;
- (void)contactImportingAllowed;
- (void)dealloc;
- (id)initWithLocalContactsSyncPermissionHandler:(id)arg1 importedContactsDownloadPermissionHandler:(id)arg2 listener:(id)arg3 permissionListener:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

