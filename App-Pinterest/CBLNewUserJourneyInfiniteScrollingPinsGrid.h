//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

#import "CBLCollectionViewDelegateMasonryLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CADisplayLink, NSArray, NSDictionary, NSMutableArray, NSString, UICollectionView;

@interface CBLNewUserJourneyInfiniteScrollingPinsGrid : CBLTraitCollectionView <UICollectionViewDataSource, UICollectionViewDelegate, CBLCollectionViewDelegateMasonryLayout>
{
    BOOL _startScrollingAutomatically;
    BOOL _scrolling;
    id <CBLNewUserJourneyInfiniteScrollingPinsGridDelegate> _delegate;
    UICollectionView *_collectionView;
    Class _cellClass;
    int _columnCountType;
    CADisplayLink *_displayLink;
    NSArray *_additionalCellData;
    NSDictionary *_overrideImageNames;
    CDUnknownBlockType _hideLogicBlock;
    CDUnknownBlockType _showLogicBlock;
    NSString *_imagePrefix;
    unsigned int _numberOfImages;
    unsigned int _numberOfCycles;
    NSMutableArray *_indexPathsToHide;
}

@property(retain, nonatomic) NSMutableArray *indexPathsToHide; // @synthesize indexPathsToHide=_indexPathsToHide;
@property(nonatomic) unsigned int numberOfCycles; // @synthesize numberOfCycles=_numberOfCycles;
@property(nonatomic) unsigned int numberOfImages; // @synthesize numberOfImages=_numberOfImages;
@property(nonatomic) NSString *imagePrefix; // @synthesize imagePrefix=_imagePrefix;
@property(copy, nonatomic) CDUnknownBlockType showLogicBlock; // @synthesize showLogicBlock=_showLogicBlock;
@property(copy, nonatomic) CDUnknownBlockType hideLogicBlock; // @synthesize hideLogicBlock=_hideLogicBlock;
@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property(retain, nonatomic) NSDictionary *overrideImageNames; // @synthesize overrideImageNames=_overrideImageNames;
@property(retain, nonatomic) NSArray *additionalCellData; // @synthesize additionalCellData=_additionalCellData;
@property(nonatomic) BOOL startScrollingAutomatically; // @synthesize startScrollingAutomatically=_startScrollingAutomatically;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) int columnCountType; // @synthesize columnCountType=_columnCountType;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <CBLNewUserJourneyInfiniteScrollingPinsGridDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSpacingForCollectionViewLayout:(id)arg1 forSection:(int)arg2;
- (struct _NSRange)columnWidthRangeForCollectionViewLayout:(id)arg1 forSection:(int)arg2;
- (float)collectionViewLayout:(id)arg1 heightForItemAtIndexPath:(id)arg2 forWidth:(int)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)showAllPins;
- (void)hidePinsAtIndexes:(id)arg1;
- (void)stopScrolling;
- (void)startScrolling;
- (void)addMorePinsToGridIfNeeded;
- (void)scrollCollectionView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithPinImagePrefix:(id)arg1 initialNumberOfImages:(unsigned int)arg2 cellClass:(Class)arg3;
- (id)initWithPinImagePrefix:(id)arg1 initialNumberOfImages:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

