//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@protocol FBPhotoTaggingAssetObserver <NSObject>
- (void)removeListener:(id <FBPhotoTaggingAssetListener>)arg1;
- (void)addListener:(id <FBPhotoTaggingAssetListener>)arg1;
- (id <FBPhotoTaggingAssetProtocol>)assetObjectForAssetID:(NSString *)arg1;
- (void)observePhotoAssetIDs:(NSSet *)arg1;
@end
