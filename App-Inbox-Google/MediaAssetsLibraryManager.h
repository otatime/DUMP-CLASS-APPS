//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsGroup, ALAssetsLibrary;

@interface MediaAssetsLibraryManager : NSObject
{
    ALAssetsGroup *assetsGroup_;
    ALAssetsLibrary *assetsLibrary_;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)assetsInGroup:(id)arg1;
- (void)checkLibraryAccessPermission:(CDUnknownBlockType)arg1;
- (BOOL)shouldReloadAssetsForAssetsLibraryChangedNotification:(id)arg1;
- (void)fetchFileForAssetAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchThumbnailForAssetAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAssetAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
