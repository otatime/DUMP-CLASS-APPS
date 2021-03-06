//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBAccessibilityInvalidationEventsListener.h"
#import "FBFIGConfigurable.h"
#import "FBFIGThreadSafeSizable.h"
#import "FBSegmentedViewCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView;

@interface FBSegmentedView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, FBSegmentedViewCellDelegate, FBAccessibilityInvalidationEventsListener, FBFIGConfigurable, FBFIGThreadSafeSizable>
{
    UIView *_topLineView;
    UIView *_bottomLineView;
    UICollectionView *_collectionView;
    float _remainder;
    BOOL _scrollable;
    NSMutableArray *_attributedTitles;
    NSMutableArray *_highlightedAttributedTitles;
    struct {
        unsigned int delegateDidSelectItemAtIndex:1;
    } _delegateFlags;
    id <FBSegmentedViewDelegate> _delegate;
}

+ (id)defaultFIGConfig;
+ (id)newWithConfig:(id)arg1;
+ (id)newWithItems:(id)arg1 size:(unsigned int)arg2 selectedIndex:(int)arg3;
+ (id)newWithItems:(id)arg1 size:(unsigned int)arg2;
+ (struct CGSize)threadSafeSizeThatFits:(id)arg1 size:(struct CGSize)arg2;
+ (void)initialize;
@property(nonatomic) __weak id <FBSegmentedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)_estimatedItemSizeAtIndex:(int)arg1;
- (struct CGSize)_itemSizeAtIndex:(int)arg1;
- (void)segmentedViewCellDidSelectItem:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)canCancelContentTouches;
- (void)layoutSubviews;
- (struct CGSize)threadSafeSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (void)didReceiveAccessibilityInvalidation;
- (void)oldConfig:(id)arg1 configDidChange:(id)arg2;
- (void)_setUpCollectionView;
- (id)_init;
- (void)applyConfig:(id)arg1;
- (id)config;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

