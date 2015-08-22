//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLHidingNavigationBarProtocol.h"
#import "CBLPinCloseupNavigationDelegate.h"
#import "CBLPinCloseupTransitionProtocol.h"
#import "CBLRemoteModelAutoPagingDelegate.h"
#import "CBLZoomTransitionProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CBLPinCloseupNonGridTransition, CBLPinCloseupTransition, CBLRemoteModelAutoPagingManager, CBLRemoteModelCollection, NSIndexPath, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface CBLPinCloseupGalleryViewController : CBLBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, CBLPinCloseupNavigationDelegate, CBLRemoteModelAutoPagingDelegate, CBLZoomTransitionProtocol, CBLPinCloseupTransitionProtocol, CBLHidingNavigationBarProtocol>
{
    UICollectionView *_collectionView;
    NSIndexPath *_selectedIndexPath;
    int _sourceViewType;
    int _sourceViewParameter;
    UIView *_dimView;
    id <CBLPinCloseupGalleryNavigationDelegate> _navigationDelegate;
    CBLPinCloseupTransition *_closeupTransition;
    CBLPinCloseupNonGridTransition *_nonGridCloseupTransition;
    UICollectionViewFlowLayout *_flowLayout;
    CBLRemoteModelCollection *_pins;
    CBLRemoteModelAutoPagingManager *_pagingManager;
    UIView *_rotationOverlay;
    NSMutableDictionary *_preRotationPinOffsets;
}

@property(retain, nonatomic) NSMutableDictionary *preRotationPinOffsets; // @synthesize preRotationPinOffsets=_preRotationPinOffsets;
@property(retain, nonatomic) UIView *rotationOverlay; // @synthesize rotationOverlay=_rotationOverlay;
@property(retain, nonatomic) CBLRemoteModelAutoPagingManager *pagingManager; // @synthesize pagingManager=_pagingManager;
@property(retain, nonatomic) CBLRemoteModelCollection *pins; // @synthesize pins=_pins;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) CBLPinCloseupNonGridTransition *nonGridCloseupTransition; // @synthesize nonGridCloseupTransition=_nonGridCloseupTransition;
@property(retain, nonatomic) CBLPinCloseupTransition *closeupTransition; // @synthesize closeupTransition=_closeupTransition;
@property(nonatomic) __weak id <CBLPinCloseupGalleryNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(nonatomic) int sourceViewParameter; // @synthesize sourceViewParameter=_sourceViewParameter;
@property(nonatomic) int sourceViewType; // @synthesize sourceViewType=_sourceViewType;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)animatedViewForZoomTransition;
- (void)navigationControllerWillPopMultipleControllers:(id)arg1;
- (void)determineNavigationBarHiddenState:(id)arg1;
- (void)scrollToIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)handleDidRotate;
- (void)handleWillRotate;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldLoadMoreBeforeApproachedEnd;
- (void)loadContentNextPage;
- (void)loadContent;
- (BOOL)shouldAttemptPopWithTransition:(id)arg1 toViewController:(id)arg2;
- (BOOL)shouldAttemptPushWithTransition:(id)arg1 fromViewController:(id)arg2;
- (unsigned int)sectionForCollectionViewGrid;
- (id)closeupPin;
- (id)gridPin;
- (id)indexPathForGrid;
- (id)indexPathForPagingCloseup;
- (id)collectionViewForPagingCloseup;
- (id)collectionViewForGrid;
- (BOOL)showsNavigationBar;
- (void)pinCloseupViewController:(id)arg1 makeSideSwipeEnabled:(BOOL)arg2;
- (id)tabBarControllerForCBLPinCloseup:(id)arg1;
- (void)popCloseupViewControllerAnimated:(BOOL)arg1;
- (BOOL)cancelExperienceOnViewDismiss;
- (BOOL)usesDefaultBackButton;
- (BOOL)navigationBarHasBottomSeparator;
- (id)barTintColor;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)currentCell;
- (id)currentPin;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPins:(id)arg1 selectedIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithPin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

