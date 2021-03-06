//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBComposerPhotoOverlayAttachmentsViewController.h"
#import "FBComposerStickersPickerTopBarDelegate.h"
#import "FBComposerStickersViewDelegate.h"
#import "FBMStickerInputViewDelegate.h"
#import "FBMStickerStoreViewControllerDelegate.h"
#import "FBMediaGalleryToolProtocol.h"
#import "FBMediaTopNavigationBarDelegation.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class FBComposerStickersPickerTopBar, FBComposerStickersView, FBMStickerInputView, FBMediaGalleryTopBarConfiguration, FBStickersInPhotosLogger, FBUserSession, NSArray, NSString, UICollectionViewCell, UIImage, UIImageView, UIView;

@interface FBComposerStickersViewController : UIViewController <FBMediaTopNavigationBarDelegation, FBComposerStickersViewDelegate, FBMStickerInputViewDelegate, FBMStickerStoreViewControllerDelegate, FBComposerStickersPickerTopBarDelegate, UIViewControllerAnimatedTransitioning, FBComposerPhotoOverlayAttachmentsViewController, FBMediaGalleryToolProtocol>
{
    BOOL _addedInitialStickers;
    struct CGRect _animationFrame;
    id <FBMediaGalleryBannerProviderProtocol> _bannerProvider;
    UIViewController *_bannerViewController;
    BOOL _didChangePhotoOverlay;
    float _imageRotation;
    UIImage *_imageToAddStickersTo;
    BOOL _isStickersPickerPresented;
    FBStickersInPhotosLogger *_logger;
    unsigned int _numberOfStickersAdded;
    BOOL _presentationTransitionComplete;
    UIView *_privacyMessageView;
    BOOL _removedOutOfBoundsStickers;
    FBUserSession *_session;
    FBMStickerInputView *_stickerInputView;
    NSArray *_stickersInformation;
    UIImage *_stickersLayer;
    FBComposerStickersPickerTopBar *_stickersPickerTopBar;
    FBComposerStickersView *_stickersView;
    unsigned int _style;
    FBMediaGalleryTopBarConfiguration *_topBarConfiguration;
    UICollectionViewCell *_transitioningBackToCell;
    struct CGRect _transitioningBackToFrame;
    UIImageView *_transitionImageView;
    BOOL _shouldStartWithStickerPack;
    NSString *_assetID;
    id <FBComposerPhotoOverlayViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerPhotoOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (void).cxx_destruct;
- (void)composerStickersPickerTopBarDidHitCloseButton:(id)arg1;
- (void)mediaGalleryWillPresentTool:(unsigned int)arg1;
- (void)mediaGalleryDidPressCurrentTool;
- (unsigned int)getMediaGalleryToolType;
- (unsigned int)supportedInterfaceOrientations;
- (void)didTapRightButton:(id)arg1;
- (void)didTapLeftButton:(id)arg1;
- (void)_performDismissalTransition:(id)arg1;
- (void)prepareForDismissalAnimationWithCellEndFrame:(struct CGRect)arg1 cell:(id)arg2 animationFrame:(struct CGRect)arg3;
- (void)_performPresentationTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)_dismissStickerPickerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showStickerPicker;
- (void)didSelectDismissStickerStoreViewController:(id)arg1;
- (void)stickerStoreViewController:(id)arg1 didSelectViewStickerPack:(id)arg2;
- (void)stickerInputView:(id)arg1 didEndSearching:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stickerInputView:(id)arg1 didBeginSearching:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stickerInputView:(id)arg1 didTapTabWithTitle:(id)arg2;
- (void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(id)arg2;
- (void)stickerInputView:(id)arg1 didSelectSticker:(id)arg2;
- (void)composerStickersViewDidTapDone:(id)arg1;
- (void)composerStickersViewDidTapCancel:(id)arg1;
- (void)composerStickersViewDidRemoveSticker:(id)arg1;
- (void)composerPhotoOverlayViewDidTapAddButton:(id)arg1;
- (void)composerPhotoOverlayViewDidChangeOverlay:(id)arg1;
- (void)_doneButtonWasHit;
- (void)_informDelegateDoneWithNavBarHit:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)photoOverlayAttachmentsInformation;
- (id)overlayAttachmentsImageLayer;
- (id)initWithImage:(id)arg1 stickersLayer:(id)arg2 stickersInformation:(id)arg3 imageRotation:(float)arg4 imageView:(id)arg5 photoAssetID:(id)arg6 logger:(id)arg7 style:(unsigned int)arg8 topBarConfiguration:(id)arg9 shouldStartWithStickerPack:(BOOL)arg10 session:(id)arg11 bannerProvider:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

