//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAppService.h"

@class FBUserSession, NSSet, NSString;

@interface FBPhotoTagSuggestionManager : NSObject <FBAppService>
{
    FBUserSession *_session;
    double _lastTimeoutTime;
    BOOL _autoCreateTags;
    NSString *_reasonForDisableAutoTagging;
    id <FBPhotoTagSuggestionModelOperation> _modelOperation;
}

@property(retain, nonatomic) id <FBPhotoTagSuggestionModelOperation> modelOperation; // @synthesize modelOperation=_modelOperation;
@property(copy, nonatomic) NSString *reasonForDisableAutoTagging; // @synthesize reasonForDisableAutoTagging=_reasonForDisableAutoTagging;
@property(nonatomic) BOOL autoCreateTags; // @synthesize autoCreateTags=_autoCreateTags;
- (void).cxx_destruct;
- (void)_logNetworkRequest:(id)arg1 success:(BOOL)arg2 status:(id)arg3 event:(id)arg4 extra:(id)arg5;
- (id)analyticsModule;
- (void)cleanupFacerecEdgesByPhotoAssetIDs:(id)arg1;
- (void)saveNamedFaces:(id)arg1 withAssetID:(id)arg2 suggestionLoaded:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_tagSuggestionFromDictionary:(id)arg1;
- (id)_suggestionsEdgeSetFromSuggestionsArray:(id)arg1;
- (void)createAutoTagsForAssetIDIfNeeded:(id)arg1 completionWithTagCreationBlock:(CDUnknownBlockType)arg2;
- (void)_fetchAndInsertSuggestionsWithRequest:(id)arg1 assetID:(id)arg2 numberOfFaceboxes:(unsigned int)arg3 completionWithTagCreationBlock:(CDUnknownBlockType)arg4;
- (void)_saveFaceboxTagSuggestions:(id)arg1 forAsset:(id)arg2 uuidToFaceboxes:(id)arg3 completionWithTagCreationBlock:(CDUnknownBlockType)arg4;
- (void)fetchAndInsertSuggestionForFaceCropJPEGs:(id)arg1 assetID:(id)arg2 withScenePath:(id)arg3 completionWithTagCreationBlock:(CDUnknownBlockType)arg4;
- (id)fetchFaceFeatureForAssetIDs:(id)arg1;
- (void)loadStoredFaceFeatures:(BOOL)arg1 andTags:(BOOL)arg2 withAssetID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)faceboxesMissingRecognitionResults:(id)arg1;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (void)disableAutoCreateTagsForTimeout:(double)arg1;
- (void)disableAutoCreateTagsForReason:(id)arg1;
- (void)enableAutoCreateTags;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

