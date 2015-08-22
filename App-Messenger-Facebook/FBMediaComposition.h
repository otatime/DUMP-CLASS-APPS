//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface FBMediaComposition : NSObject
{
    NSMutableOrderedSet *_selectedMediaShareItemsInOrderSet;
    unsigned int _selectedMediaShareItemsType;
    NSMutableDictionary *_editedThumbnailsForAssetIDs;
    NSMutableDictionary *_assetEditsByID;
}

@property(retain, nonatomic) NSMutableDictionary *assetEditsByID; // @synthesize assetEditsByID=_assetEditsByID;
@property(retain, nonatomic) NSMutableDictionary *editedThumbnailsForAssetIDs; // @synthesize editedThumbnailsForAssetIDs=_editedThumbnailsForAssetIDs;
@property(readonly, nonatomic) unsigned int selectedMediaShareItemsType; // @synthesize selectedMediaShareItemsType=_selectedMediaShareItemsType;
- (void).cxx_destruct;
- (void)_setMediaShareItemsHelper:(id)arg1 shareItemType:(unsigned int)arg2;
- (void)_removeMediaShareItemHelper:(id)arg1 shareItemType:(unsigned int)arg2;
- (void)_addMediaShareItemHelper:(id)arg1 shareItemType:(unsigned int)arg2;
- (id)debugDescription;
- (unsigned int)indexOfMediaShareItem:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (BOOL)isAssetSelected:(id)arg1;
- (id)mediaShareItemForAssetID:(id)arg1;
- (BOOL)allowOperationForSelectedMediaShareItemsType:(unsigned int)arg1;
- (void)removeAllSelectedMediaShareItems;
- (void)replacePlayableMediaShareItem:(id)arg1;
- (void)setPhotoShareItems:(id)arg1;
- (void)removeGenericMediaShareItem:(id)arg1;
- (void)addGenericMediaShareItem:(id)arg1;
- (void)removeMediaShareItem:(id)arg1;
- (void)addMediaShareItem:(id)arg1;
- (unsigned int)_selectedMediaShareItemsTypeForMediaShareItemType:(unsigned int)arg1;
- (id)editedPhotoThumbnailForAssetID:(id)arg1;
- (void)setEditedPhotoThumbnail:(id)arg1 forAssetID:(id)arg2;
@property(readonly, nonatomic) NSArray *selectedMediaShareItems;
@property(readonly, nonatomic) unsigned int numSelectedMediaShareItems;
@property(readonly, nonatomic) BOOL containsVideoShareItems;
- (id)photoAssetEditsForAssetID:(id)arg1;
- (void)resetPhotoAssetEditsForInMemoryPhotoAsset:(id)arg1 applyAutoEnhanceByDefault:(BOOL)arg2 session:(id)arg3;
- (void)setPhotoAssetEdits:(id)arg1 forAssetID:(id)arg2;
- (void)clearPhotoAssetEdits;
- (void)copyComposition:(id)arg1;
- (id)init;

@end
