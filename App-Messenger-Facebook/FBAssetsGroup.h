//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsGroup, PHAssetCollection;

@interface FBAssetsGroup : NSObject
{
    ALAssetsGroup *_alGroup;
    PHAssetCollection *_collection;
    unsigned int _type;
    int _order;
}

+ (void)enumerateGroupsUsingPhotoKitWithBlock:(CDUnknownBlockType)arg1 wantsPartialIndex:(BOOL)arg2;
+ (void)enumerateGroupsUsingALAssetsLibrary:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1 mediaFilter:(unsigned int)arg2 imageManager:(id)arg3 wantsPartialIndex:(BOOL)arg4;
- (id)groupURL;
- (unsigned int)groupType;
- (id)posterImage;
- (id)displayName;
- (id)initWithPHAssetCollection:(id)arg1 order:(int)arg2;
- (id)initWithALAssetsGroup:(id)arg1;
- (id)init;

@end
