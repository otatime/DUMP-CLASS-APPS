//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSyncStore;

@protocol FBSyncStoreOpenedStateListener <NSObject>
- (void)willDiscardDatabaseContents;
- (void)didDiscardDatabaseFile;
- (void)didCreateDatabaseTables;
- (void)syncStoreDidClose:(FBSyncStore *)arg1;
- (void)syncStoreDidOpen:(FBSyncStore *)arg1 wasSuccessful:(BOOL)arg2;
@end

