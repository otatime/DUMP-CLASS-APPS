//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAvatarTaggingTagSearchDataSource, FBUserSession, NSArray, NSMutableSet, NSString;

@interface FBPhotoTaggingSearchController : NSObject
{
    FBUserSession *_session;
    NSMutableSet *_syncEnabledSources;
    NSString *_contentOwnerFBID;
    NSString *_authorFBID;
    id <FBQueriedNodeFieldsProtocol> _target;
    BOOL _canSyncTaggables;
    FBAvatarTaggingTagSearchDataSource *_taggingSearchDataSource;
    id <FBPhotoTaggingSearchControllerDelegate> _delegate;
    NSArray *_taggableCollections;
}

+ (id)taggingIdentifyKeyForTarget:(id)arg1 andActorFBID:(id)arg2 session:(id)arg3;
+ (void)authorForPhotoTaggingWithActorFBID:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSArray *taggableCollections; // @synthesize taggableCollections=_taggableCollections;
@property(readonly, nonatomic) BOOL canSyncTaggables; // @synthesize canSyncTaggables=_canSyncTaggables;
@property(nonatomic) __weak id <FBPhotoTaggingSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBAvatarTaggingTagSearchDataSource *taggingSearchDataSource; // @synthesize taggingSearchDataSource=_taggingSearchDataSource;
- (void).cxx_destruct;
- (void)_loadTaggingDataSourceWithAuthor:(id)arg1;
- (void)_loadAuthor;
- (id)taggingIdentifyKey;
- (void)setCanSyncTaggables:(BOOL)arg1 forSource:(id)arg2;
- (void)disableSyncTaggables;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 contentOwnerFBID:(id)arg2 authorFBID:(id)arg3 session:(id)arg4;
- (id)init;

@end
