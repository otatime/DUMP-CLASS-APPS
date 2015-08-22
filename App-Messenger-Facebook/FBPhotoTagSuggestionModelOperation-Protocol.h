//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol FBPhotoTagSuggestionModelOperation <NSObject>
- (void)clearPhotoAssetsForAssetIDs:(NSArray *)arg1;
- (void)setSuggesionsLoadedValue:(unsigned int)arg1 forAsset:(NSString *)arg2;
- (void)setLoadedFaceboxesTagSuggestions:(NSDictionary *)arg1 forAsset:(NSString *)arg2;
- (void)loadStoredFaceFeatures:(BOOL)arg1 andTags:(BOOL)arg2 withAssetID:(NSString *)arg3 completionBlock:(void (^)(NSArray *, NSArray *))arg4;
- (void)saveNamedFaces:(NSDictionary *)arg1 withAssetID:(NSString *)arg2 suggestionLoaded:(unsigned int)arg3 completionBlock:(void (^)(NSArray *))arg4;
@end

