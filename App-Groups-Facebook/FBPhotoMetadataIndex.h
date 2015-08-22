//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FBPhotoMetadataIndex : NSObject
{
    NSObject<OS_dispatch_queue> *_indexingQueue;
    NSObject<OS_dispatch_queue> *_photoRequestQueue;
    NSMutableDictionary *_assetAbsoluteUrlToDerivedInfo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_indexAssetsUsingQuickFetch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_indexAssetsUsingFreeFetch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setDerivedInfo:(long)arg1 forAsset:(id)arg2 persistToDisk:(BOOL)arg3;
- (long)_derivedInfoForAsset:(id)arg1;
- (CDStruct_7ddbbeae)photoSourceForAssetAbsoluteUrl:(id)arg1;
- (long)derivedInfoForAssetAbsoluteUrl:(id)arg1;
- (void)indexAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
