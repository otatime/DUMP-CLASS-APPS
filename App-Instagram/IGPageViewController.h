//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCustomViewController.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSMapTable, NSString, UICollectionView, UICollectionViewFlowLayout, UIViewController;

@interface IGPageViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegate, IGCustomViewController>
{
    BOOL _bouncesOnFirstPage;
    BOOL _disablingChildScrollViews;
    id <IGPageViewControllerDataSource> _dataSource;
    id <IGPageViewControllerDelegate> _delegate;
    int _numberOfCachedAdjacentViewControllers;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    int _currentIndex;
    NSArray *_disabledScrollViews;
    NSMapTable *_indexesToCachedViewControllers;
    int _indexToScrollToOnViewDidLoad;
}

@property(nonatomic) int indexToScrollToOnViewDidLoad; // @synthesize indexToScrollToOnViewDidLoad=_indexToScrollToOnViewDidLoad;
@property(retain, nonatomic) NSMapTable *indexesToCachedViewControllers; // @synthesize indexesToCachedViewControllers=_indexesToCachedViewControllers;
@property(nonatomic) BOOL disablingChildScrollViews; // @synthesize disablingChildScrollViews=_disablingChildScrollViews;
@property(retain, nonatomic) NSArray *disabledScrollViews; // @synthesize disabledScrollViews=_disabledScrollViews;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) BOOL bouncesOnFirstPage; // @synthesize bouncesOnFirstPage=_bouncesOnFirstPage;
@property(nonatomic) int numberOfCachedAdjacentViewControllers; // @synthesize numberOfCachedAdjacentViewControllers=_numberOfCachedAdjacentViewControllers;
@property(nonatomic) __weak id <IGPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *currentController;
@property(readonly, nonatomic) int currentPage;
- (void)insertPagesAtIndexes:(id)arg1;
- (void)reloadData;
- (void)setVisibleIndex:(int)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)ig_keyViewControllers;
- (void)didReceiveMemoryWarning;
- (void)enableDisabledScrollViews;
- (void)disableScrollingInChildViewControllers;
- (id)disableScrollViewsForViewController:(id)arg1;
- (void)loadAdjacentControllersIfNecessary;
- (BOOL)disableNonEdgeNavigationGesture;
- (void)notifyForFinishedScrolling;
- (void)updateCurrentIndexWithOffset:(float)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

