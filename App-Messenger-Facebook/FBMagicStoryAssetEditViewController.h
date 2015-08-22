//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBDisplayableMediaTransitionManagerDelegate.h"
#import "FBMagicStoryBurstEditDetailViewDelegate.h"
#import "FBMagicStoryEditCellDelegate.h"
#import "FBMagicStoryEditViewControllerProtocol.h"
#import "FBMagicStoryEditViewDelegate.h"
#import "FBPresentableViewController.h"
#import "FBSimpleMediaViewProviderDelegate.h"

@class FBDisplayableMediaTransitionManager, FBMagicStoryCollection, FBMagicStoryEditAssetDataSource, FBMagicStoryEditView, FBMagicStoryTransitioningDelegate, FBUserSession, NSIndexPath, NSString, UITapGestureRecognizer;

@interface FBMagicStoryAssetEditViewController : UIViewController <FBDisplayableMediaTransitionManagerDelegate, FBMagicStoryBurstEditDetailViewDelegate, FBMagicStoryEditCellDelegate, FBMagicStoryEditViewDelegate, FBSimpleMediaViewProviderDelegate, FBPresentableViewController, FBMagicStoryEditViewControllerProtocol>
{
    FBUserSession *_session;
    FBMagicStoryCollection *_collection;
    unsigned int _currentAssetIndex;
    FBMagicStoryEditAssetDataSource *_dataSource;
    FBMagicStoryEditView *_editView;
    UITapGestureRecognizer *_tapRecognizer;
    CDStruct_1b6d18a9 _startingVideoTime;
    BOOL _stayingOnSameBurst;
    BOOL _burstIsLooping;
    FBDisplayableMediaTransitionManager *_transitionManager;
    FBMagicStoryTransitioningDelegate *_transitioningDelegate;
    id <FBMagicStoryEditViewControllerDelegate> _delegate;
    NSIndexPath *_collectionIndexPath;
    int _editMode;
    id <FBDisplayableMediaViewProvider> _mediaViewProvider;
    unsigned int _currentBurstIndex;
}

@property(nonatomic) unsigned int currentBurstIndex; // @synthesize currentBurstIndex=_currentBurstIndex;
@property(retain, nonatomic) id <FBDisplayableMediaViewProvider> mediaViewProvider; // @synthesize mediaViewProvider=_mediaViewProvider;
@property(retain, nonatomic) FBMagicStoryCollection *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) NSIndexPath *collectionIndexPath; // @synthesize collectionIndexPath=_collectionIndexPath;
@property(nonatomic) __weak id <FBMagicStoryEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateBurstEditDetailMode;
- (void)_updateTitle;
- (unsigned int)magicStoryEditViewCurrentAssetIndex:(id)arg1;
- (void)magicStoryEditView:(id)arg1 willSetBurstToIndex:(unsigned int)arg2;
- (void)magicStoryEditViewCollectionUpdated;
- (void)magicStoryEditViewDidCancel;
- (void)magicStoryEditView:(id)arg1 didScrollToItemAtIndex:(unsigned int)arg2;
- (void)magicStoryEditBurstCellDidTapPlayButton;
- (void)magicStoryEditCellDidTapRemoveForIndex:(unsigned int)arg1;
- (CDStruct_1b6d18a9)magicStoryEditCell:(id)arg1 startTimeForVideoForIndex:(unsigned int)arg2;
- (void)magicStoryBurstEditDetailViewWillBeginDragging:(id)arg1;
- (void)magicStoryBurstEditDetailView:(id)arg1 didTapFrameAtIndex:(unsigned int)arg2;
- (void)magicStoryBurstEditDetailView:(id)arg1 didTogglePlayInLoop:(BOOL)arg2;
- (void)_handleTap;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)setStartingFrameForShownBurst:(unsigned int)arg1;
- (CDStruct_1b6d18a9)currentTimeForShownVideo;
- (void)setStartingTimeForShownVideo:(CDStruct_1b6d18a9)arg1;
- (id)simpleMediaViewProvider:(id)arg1 viewOrLayerForMedia:(id)arg2;
- (unsigned int)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2;
- (id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1;
- (void)transitionManagerNeedsDismissal:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (int)preferredStatusBarStyle;
@property(readonly, nonatomic) int editMode; // @synthesize editMode=_editMode;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 collectionIndexPath:(id)arg2 collection:(id)arg3 assetIndex:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly) Class superclass;

@end

