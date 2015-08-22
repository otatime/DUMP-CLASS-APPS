//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBOfflinePhotoTaggingAssetDatabase : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_selectStmt;
    struct sqlite3_stmt *_insertStmt;
    NSString *_dbPath;
}

@property(copy, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
- (void).cxx_destruct;
- (id)_photoAssetFromData:(id)arg1;
- (id)_paramValueForArray:(id)arg1;
- (void)_insertPhotoAsset:(id)arg1;
- (void)_openDatabase;
- (void)cleanAllNeedResetAssets;
- (void)insertNeedResetAsset:(id)arg1;
- (void)cleanAssetsOlderThan:(unsigned int)arg1;
- (void)deleteAssets:(id)arg1;
- (void)insertPhotoAssets:(id)arg1;
- (void)fetchAssetsByAssetIDs:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAssetByAssetID:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)_freeResouce;
- (id)initWithDBPath:(id)arg1;
- (id)init;

@end
