//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EGODatabase, FBAnalytics, FBUserSession, FBVersionedEGODatabaseFileConfigurer, FBVersionedFileHandler, FBVersionedFileInfo, NSDictionary, NSObject<OS_dispatch_queue>;

@interface MNNonDiscardingBlobStore : NSObject
{
    FBVersionedEGODatabaseFileConfigurer *_databaseConfigurer;
    FBAnalytics *_analytics;
    FBUserSession *_session;
    FBVersionedFileInfo *_fileInfo;
    EGODatabase *_db;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    FBVersionedFileHandler *_fileHandler;
    NSDictionary *_dbStatements;
    id <MNKeysConfigurationProviding> _keyConfigurationProvider;
}

- (void).cxx_destruct;
- (void)_createDBStatements;
- (void)_openWithCompletion:(CDUnknownBlockType)arg1;
- (void)_openIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)discardStore;
- (void)loadBlobDataForBlobType:(int)arg1 completionBlock:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)saveBlobData:(id)arg1 forBlobType:(int)arg2 completionBlock:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)initWithFileHandler:(id)arg1 analytics:(id)arg2 session:(id)arg3 keyConfigurationProvider:(id)arg4 shouldUseMessengerSharedDiskStore:(BOOL)arg5;

@end

