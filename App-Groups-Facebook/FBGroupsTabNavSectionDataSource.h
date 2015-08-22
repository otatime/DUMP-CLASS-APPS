//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"

@class FBUserSession, NSMutableArray, NSString, UICollectionView, UIImage;

@interface FBGroupsTabNavSectionDataSource : NSObject <UICollectionViewDataSource>
{
    FBUserSession *_session;
    id <FBServiceTransactionMutating> _downloadHandle;
    UICollectionView *_collectionViewMutator;
    NSMutableArray *_navigationalItems;
    UIImage *_placeholderImage;
}

@property(copy, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(readonly, nonatomic) NSMutableArray *navigationalItems; // @synthesize navigationalItems=_navigationalItems;
@property(nonatomic) __weak UICollectionView *collectionViewMutator; // @synthesize collectionViewMutator=_collectionViewMutator;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)_downloadData:(BOOL)arg1;
- (void)_reloadDataFromPerson:(id)arg1;
- (void)_cancelDownload;
- (BOOL)isDownloadingData;
- (void)reloadData;
- (void)downloadData;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
