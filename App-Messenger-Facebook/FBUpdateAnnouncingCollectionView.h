//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class FBCollectionViewUpdateListenerAnnouncer;

@interface FBUpdateAnnouncingCollectionView : UICollectionView
{
    FBCollectionViewUpdateListenerAnnouncer *_listenerAnnouncer;
}

@property(readonly, nonatomic) FBCollectionViewUpdateListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
- (void).cxx_destruct;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

