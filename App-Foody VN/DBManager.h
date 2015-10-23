//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface DBManager : NSObject
{
    NSString *dbPath;
    struct sqlite3 *database;
    NSObject<OS_dispatch_queue> *serialQueue;
}

+ (id)getInstance;
@property(copy, nonatomic) NSString *dbPath; // @synthesize dbPath;
- (void).cxx_destruct;
- (id)serial_deleteAllDraftReviewPhotos;
- (id)deleteAllDraftReviewPhotos;
- (int)getDraftReviewPhotoCountForRestaurantId:(id)arg1;
- (id)serial_deleteDraftReviewPhotosWithThumbnailForRestaurantId:(id)arg1;
- (void)asyncDeleteDraftReviewPhotosForRestaurantId:(id)arg1;
- (id)deleteDraftReviewPhotosForRestaurantId:(id)arg1;
- (id)serial_saveDraftReviewPhotosWithThumbnailForResId:(id)arg1 photos:(id)arg2;
- (id)saveDraftReviewPhotosForResId:(id)arg1 photos:(id)arg2;
- (id)getDraftPhotosWithThumbnailWithoutSaveUploadingForResId:(id)arg1 error:(id *)arg2;
- (id)getDraftPhotosWithThumbnailForResId:(id)arg1 error:(id *)arg2;
- (id)getDraftPhotosForResId:(id)arg1 error:(id *)arg2;
- (id)readString:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2 withDefaultValue:(id)arg3;
- (void)bindString:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2 withText:(id)arg3;
- (id)getDBPath;
- (BOOL)overwriteNewBundleDBFile;
- (BOOL)copyDatabaseIfNeeded;
- (int)closeDatabase;
- (int)openDatabase;
- (id)serial_saveOfflineRestaurantWithXML:(id)arg1 restaurantId:(id)arg2;
- (void)saveOfflineRestaurantWithXML:(id)arg1 restaurantId:(id)arg2;
- (id)deletePhotoUploadItemWithId:(id)arg1;
- (id)deletePhotoUploadItem:(id)arg1;
- (id)addPhotoUploadItem:(id)arg1;
- (id)getPhotoUploadItemWithStatus:(unsigned int)arg1 error:(id *)arg2;
- (id)getNewPhotoUploadItem:(id *)arg1;
- (id)loadNewResMoreInfoInputFieldsFromTableName:(id)arg1 parentId:(id)arg2 error:(id *)arg3;
- (id)loadResMoreInfoInputFieldsFromTableName:(id)arg1 error:(id *)arg2;
- (id)loadPropertiesFromTableName:(id)arg1 parentId:(id)arg2 error:(id *)arg3;
- (id)loadPropertiesFromTableName:(id)arg1 error:(id *)arg2;
- (id)loadCodePropertiesFromTableName:(id)arg1 parentId:(id)arg2 error:(id *)arg3;
- (id)loadPopularPropertiesFromTableName:(id)arg1 parentId:(id)arg2 supperParentId:(id)arg3 error:(id *)arg4;
- (id)loadPopularPropertiesFromTableName:(id)arg1 parentId:(id)arg2 error:(id *)arg3;
- (id)loadPopularPropertiesFromTableName:(id)arg1 error:(id *)arg2;
- (id)loadAreasForCityId:(id)arg1 tableName:(id)arg2 error:(id *)arg3;
- (id)loadPropertiesForCityId:(id)arg1 tableName:(id)arg2 error:(id *)arg3;
- (id)loadCategories:(id *)arg1;
- (id)loadCities:(id *)arg1;
- (id)loadFoodyMetadata:(id *)arg1;
- (id)cleanupTable:(id)arg1;
- (id)saveResFacilityList:(id)arg1 withParent:(id)arg2;
- (id)saveResFacilityList:(id)arg1;
- (void)loadSystemParamForMetaData:(id)arg1 error:(id *)arg2;
- (id)saveFoodySystemParam:(id)arg1;
- (id)saveSystemPushSettingOption:(id)arg1;
- (id)saveSocialPushSettingOption:(id)arg1;
- (id)saveMaritalStatusOption:(id)arg1;
- (id)savePremiumCouponBuyOption:(id)arg1 withParent:(id)arg2;
- (id)savePremiumCouponBuyOption:(id)arg1;
- (id)saveECardUpgradeOption:(id)arg1;
- (id)saveCouponConditionList:(id)arg1 withParent:(id)arg2;
- (id)saveCouponConditionList:(id)arg1;
- (id)saveResMoreInfoList:(id)arg1 withParent:(id)arg2;
- (id)saveResMoreInfoList:(id)arg1;
- (id)saveCodePropertyList:(id)arg1 forTable:(id)arg2 withParentId:(id)arg3;
- (id)savePropertyList:(id)arg1 forTable:(id)arg2 withParentId:(id)arg3;
- (id)savePropertyList:(id)arg1 forTable:(id)arg2;
- (id)savePopularPropertyList:(id)arg1 forTable:(id)arg2 withParentId:(id)arg3;
- (id)savePopularPropertyList:(id)arg1 forTable:(id)arg2;
- (id)savePropertyListAndChildren:(id)arg1 forTable:(id)arg2 withParent:(id)arg3;
- (id)savePropertyListAndChildren:(id)arg1 forTable:(id)arg2;
- (id)savePropertyListAndChildren:(id)arg1 forTable:(id)arg2 childTableName:(id)arg3 withParent:(id)arg4;
- (id)saveCities:(id)arg1;
- (id)saveCategories:(id)arg1;
- (void)cleanupOfflineTables;
- (void)cleanupMetadataTables;
- (id)serial_updateFoodyMetadata:(id)arg1;
- (id)updateFoodyMetadata:(id)arg1;
- (id)serial_deleteDraftReviewForRestaurantId:(id)arg1;
- (void)asyncDeleteDraftReviewForRestaurantId:(id)arg1;
- (id)deleteDraftReviewForRestaurantId:(id)arg1;
- (id)serial_saveDraftReviewForResId:(id)arg1 resName:(id)arg2 resAddress:(id)arg3 rating:(id)arg4 title:(id)arg5 text:(id)arg6 photos:(id)arg7;
- (id)saveDraftReviewForResId:(id)arg1 resName:(id)arg2 resAddress:(id)arg3 rating:(id)arg4 title:(id)arg5 text:(id)arg6 photos:(id)arg7;
- (id)getDraftReviewForResId:(id)arg1 error:(id *)arg2;
- (id)loadOfflineGroup:(id *)arg1;
- (id)loadImagesFromSql:(id)arg1;
- (id)loadRestaurantForGroupId:(id)arg1 error:(id *)arg2;
- (id)loadOfflineGroups:(id *)arg1;
- (id)serial_saveOfflinePhotoWithId:(id)arg1 imageData:(id)arg2;
- (id)saveOfflineHomeRestaurant:(id)arg1 groupId:(id)arg2;
- (id)saveOfflineGroup:(id)arg1;
- (id)serial_saveOfflineHomeGroup:(id)arg1;
- (void)downloadAndSaveOfflinePhoto:(id)arg1;
- (id)saveOfflinePhoto:(id)arg1 image:(id)arg2;
- (id)saveOfflineHomeGroup:(id)arg1;
- (id)createAdditionalTables;
- (void)initialize;
- (id)init;

@end
