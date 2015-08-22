//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNMessageCollectionViewCell.h"

#import "FBMMessageSenderListener.h"
#import "FBMVideoAttachmentExportListener.h"
#import "FBModalFullscreenControllerDataSource.h"
#import "FBModalFullscreenControllerDelegate.h"
#import "FBPickUpAttachmentNodeDelegate.h"
#import "MNAttributionViewDelegate.h"
#import "MNFailedMessageOverlayViewDelegate.h"
#import "MNMessageAttachmentsViewDelegate.h"
#import "MNMessageVideoAttachmentGetterListener.h"
#import "MNMessageVideoOverlayViewDelegate.h"
#import "MNMessageVideoViewNodeDelegate.h"
#import "MNPhotosViewDelegate.h"
#import "MNSaveAttachmentListener.h"
#import "MNVideoControllerDelegate.h"
#import "MNVideoViewDelegate.h"

@class FBLazyCreator, FBMMessageSenderListenerAnnouncer, FBMPhotoViewImageDownloadController, FBMVideoPlaybackEventListenerAnnouncer, FBMVideoStorageManager, FBModalFullscreenController, FBUserSession, MNAttachmentStyleRendererManager, MNAttachmentViewCachedFactory, MNAttributionController, MNMessageVideoControllerMap, MNMessageVideoOverlayView, MNPhotoImageRequester, MNPhotoViewNodeReusePool, MNSaveAttachmentController, MNVideoAnalyticsLogger, MNVideoPlaybackCoordinator, MNVideoTouchEventListenerAnnouncer, NSString, UIImage, UIView, UIView<MNAttachmentView>;

@interface MNTextHybridMessageCollectionViewCell : MNMessageCollectionViewCell <MNPhotosViewDelegate, MNMessageAttachmentsViewDelegate, MNVideoControllerDelegate, MNVideoViewDelegate, FBMMessageSenderListener, FBMVideoAttachmentExportListener, FBPickUpAttachmentNodeDelegate, FBModalFullscreenControllerDelegate, FBModalFullscreenControllerDataSource, MNMessageVideoViewNodeDelegate, MNSaveAttachmentListener, MNMessageVideoAttachmentGetterListener, MNMessageVideoOverlayViewDelegate, MNAttributionViewDelegate, MNFailedMessageOverlayViewDelegate>
{
    FBLazyCreator *_photosViewCreator;
    FBLazyCreator *_bubbleViewCreator;
    FBLazyCreator *_bubbleOverlayCreator;
    FBLazyCreator *_textViewCreator;
    FBLazyCreator *_fileAttachmentsViewCreator;
    FBLazyCreator *_videoPlayerViewCreator;
    FBLazyCreator *_cornerMaskViewCreator;
    FBLazyCreator *_attributionViewCreator;
    FBLazyCreator *_failedMessageOverlayViewCreator;
    FBUserSession *_session;
    MNVideoAnalyticsLogger *_videoAnalyticsLogger;
    MNVideoTouchEventListenerAnnouncer *_videoTouchEventAnnouncer;
    FBMVideoPlaybackEventListenerAnnouncer *_videoPlaybackEventAnnouncer;
    FBMVideoStorageManager *_videoStorageManager;
    BOOL _copyLinkMenuDisplayed;
    FBMPhotoViewImageDownloadController *_photoViewImageDownloadController;
    id <FBMVideoAttachmentExportListener> _exportListenerDispatcher;
    UIImage *_bubbleBackgroundImage;
    MNMessageVideoControllerMap *_videoControllerManager;
    MNSaveAttachmentController *_saveAttachmentController;
    FBModalFullscreenController *_modalFullscreenController;
    UIView *_touchBlockingUnderlayView;
    MNMessageVideoOverlayView *_videoControlsOverlayView;
    MNVideoPlaybackCoordinator *_videoPlaybackCoordinator;
    MNPhotoImageRequester *_imageRequester;
    MNAttachmentStyleRendererManager *_attachmentStyleRendererManager;
    MNAttachmentViewCachedFactory *_attachmentViewCachedFactory;
    UIView<MNAttachmentView> *_attachmentView;
    id <MNMessageCellElementController> _attachmentViewController;
    MNAttributionController *_attributionController;
    FBMMessageSenderListenerAnnouncer *_messageSenderAnnouncer;
    MNPhotoViewNodeReusePool *_photoViewNodeReusePool;
    UIView *_referenceView;
}

@property(nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
- (void).cxx_destruct;
- (void)playVideo;
- (void)openPhotoViewerForFirstPhoto;
- (void)attributionViewDidTapOpenButton:(id)arg1;
- (double)currentPlaybackTimeForVideoOverlayView:(id)arg1;
- (void)videoOverlayViewDidTapPlayPauseButton:(id)arg1;
- (void)messageVideoAttachmentRetrievedForMessageId:(id)arg1 withProgress:(float)arg2;
- (void)messageVideoAttachmentFailedRetrieveForMessageId:(id)arg1;
- (void)messageVideoAttachmentRetrievedForMessageId:(id)arg1 withURL:(id)arg2;
- (id)modalFullscreenController:(id)arg1 nodeBeforeNode:(id)arg2;
- (id)modalFullscreenController:(id)arg1 nodeAfterNode:(id)arg2;
- (struct CGRect)videoNodeCloseFrame:(id)arg1;
- (id)videoNodeCloseView:(id)arg1;
- (id)modalPresentationView:(id)arg1;
- (id)existingModalLayerForAttachmentNode:(id)arg1;
- (void)attachmentNodeDidClose:(id)arg1;
- (void)attachmentNodeWillClose:(id)arg1 animated:(BOOL)arg2;
- (void)attachmentNodeMayClose:(id)arg1;
- (void)attachmentNodeDidOpen:(id)arg1;
- (void)attachmentNodeWillOpen:(id)arg1 animated:(BOOL)arg2;
- (void)attachmentNodeMayOpen:(id)arg1;
- (id)analyticsModule;
- (id)analyticsExtras;
- (void)handleIntent:(id)arg1;
- (id)modalPresentationStackManager;
- (void)attachmentDidSave:(unsigned int)arg1;
- (void)attachmentSaveDidFailWithError:(id)arg1 attachmentType:(unsigned int)arg2;
- (void)_contextMenuSaveTapped:(id)arg1;
- (void)videoAttachmentDidFinishExport:(id)arg1;
- (void)videoAttachment:(id)arg1 didExportWithProgress:(id)arg2;
- (void)videoAttachment:(id)arg1 didFailExportWithError:(id)arg2;
- (void)videoAttachmentDidStartExport:(id)arg1;
- (void)thread:(id)arg1 willRetrySendingMessage:(id)arg2 error:(id)arg3;
- (void)thread:(id)arg1 couldNotSendMessage:(id)arg2 error:(id)arg3;
- (void)thread:(id)arg1 didPublishMessage:(id)arg2;
- (void)thread:(id)arg1 didSendBytesForMessage:(id)arg2 attachment:(id)arg3 percentCompleted:(double)arg4;
- (void)videoPlayViewDidTapCancel:(id)arg1;
- (void)videoPlayViewDidTapRetry:(id)arg1;
- (void)videoPlayerViewTappedPlayPauseControl:(id)arg1;
- (void)videoPlayerViewTappedOutsidePlayButton:(id)arg1;
- (void)_handlePlayPauseTap;
- (void)_handleVideoTapWhenIdle;
- (void)_logVideoController:(id)arg1 changeToState:(int)arg2;
- (void)videoController:(id)arg1 disassociatePlayer:(id)arg2;
- (void)videoController:(id)arg1 player:(id)arg2 withItem:(id)arg3 didChangeRateFrom:(float)arg4 to:(float)arg5 isAtEndOfVideo:(BOOL)arg6;
- (void)videoController:(id)arg1 didCreateNewPlayerItemWithPlayer:(id)arg2;
- (void)videoController:(id)arg1 didChangeState:(int)arg2;
- (void)messageAttachmentsView:(id)arg1 didSelectAttachment:(id)arg2;
- (void)didSelectLink:(id)arg1;
- (struct CGRect)_frameOfOverlayView;
- (struct CGRect)closeFrameForMaskOfPhotosView:(id)arg1 forPhotoViewNode:(id)arg2;
- (struct CGRect)closedFrameForMaskOfView:(id)arg1;
- (void)_updateMaskView;
- (id)photosView:(id)arg1 maskForPhotoViewNode:(id)arg2;
- (struct CGRect)photosView:(id)arg1 closeFrameForPhotoViewNode:(id)arg2;
- (id)photosView:(id)arg1 previousPhotoViewModelFor:(id)arg2;
- (id)photosView:(id)arg1 nextPhotoViewModelFor:(id)arg2;
- (id)maskForView:(id)arg1;
- (id)maskForPhotosView:(id)arg1;
- (void)photosView:(id)arg1 didClosePhotoView:(id)arg2;
- (void)photosView:(id)arg1 willClosePhotoViewNode:(id)arg2;
- (void)photosView:(id)arg1 mayClosePhotoView:(id)arg2;
- (void)photosView:(id)arg1 didOpenPhotoViewNode:(id)arg2;
- (void)photosView:(id)arg1 willOpenPhotoViewNode:(id)arg2;
- (void)photosView:(id)arg1 mayOpenPhotoViewNode:(id)arg2;
- (id)modalPresentationStackManagerForPhotosView:(id)arg1;
- (void)photosView:(id)arg1 didPressContextualActionButton:(id)arg2 photoViewNode:(id)arg3 overlayView:(id)arg4;
- (void)photosView:(id)arg1 didSelectPhotoWithViewModel:(id)arg2 photoIndex:(unsigned int)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addContextMenuItemsTo:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)_canSaveAttachment;
- (void)_copyLink:(id)arg1;
- (void)_contextMenuDidHide:(id)arg1;
- (void)_showCopyLinkMenuAnimated:(BOOL)arg1;
- (id)_titleForCopyLinkMenu;
- (void)showContextMenuAnimated:(BOOL)arg1;
- (void)updateAsHighlighted:(BOOL)arg1;
- (void)_updateVideoThumbnail;
- (void)_updateVideoAttachments;
- (unsigned int)_supportedVideoGesturesForClosedNode;
- (unsigned int)_supportedVideoGesturesForOpenNode;
- (void)_createAndAssociateVideoControllerIfNecessary;
- (void)_exitFullScreenMode;
- (int)_videoViewStateForVideoControllerState:(int)arg1;
- (BOOL)_messageStateIsPendingSend:(unsigned int)arg1;
- (BOOL)_messageStateIsSendingStopped:(unsigned int)arg1;
- (int)_videoViewStateForMessageState:(unsigned int)arg1;
- (void)_updatePhotosHighlightState;
- (void)_updatePhotos;
- (void)_updateAttachmentFromPreviousMessageRow:(id)arg1;
- (void)_updateFileAttachments;
- (void)_updateMessageBody;
- (void)didTapFailedMessageOverlayView:(id)arg1;
- (BOOL)_isMessageFailed;
- (void)_updateFailedOverlayView;
- (void)_updateBubbleOverlay;
- (void)_updateBubbleViewAttributesAnimated:(BOOL)arg1;
- (void)_updateBubbleViewAnimated:(BOOL)arg1;
- (void)_updateAttribution;
- (void)_updateSubviewsWithPreviousMessageRow:(id)arg1 animated:(BOOL)arg2;
- (void)setMessageRow:(id)arg1 animated:(BOOL)arg2;
- (void)_updateVideoViewNodeLayoutWhenOpen:(id)arg1;
- (struct CGRect)closeFrameForMaskOfPhotosViewWithNode:(id)arg1;
- (id)maskForPhotoViewNode:(id)arg1;
- (struct CGRect)closeFrameForPhotoViewNode:(id)arg1;
- (void)applyLayoutSpec:(id)arg1;
- (void)didDisappear;
- (void)prepareForReuse;
- (id)videoMessageView;
- (id)associatedVideoController;
- (void)dealloc;
- (void)doMessageContentInit;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2 dataDetector:(id)arg3 stickerResourceManager:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2 messageTextDataDetector:(id)arg3 stickerResourceManager:(id)arg4 session:(id)arg5 videoStorageManager:(id)arg6 messageSenderAnnouncer:(id)arg7 videoAnalyticsLogger:(id)arg8 videoControllerManager:(id)arg9 saveAttachmentController:(id)arg10 videoPlaybackCoordinator:(id)arg11 imageRequester:(id)arg12 photoViewImageDownloadController:(id)arg13 attachmentStyleRendererManager:(id)arg14 attachmentViewCachedFactory:(id)arg15 attributionController:(id)arg16 pluginManager:(id)arg17 photoViewNodeReusePool:(id)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
