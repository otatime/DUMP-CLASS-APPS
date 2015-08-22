//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBMFullscreenVideoViewControllerDelegate.h"
#import "FBMPhotoViewControllerDelegate.h"
#import "MNAdminMessageCollectionViewCellDelegate.h"
#import "MNMessageCellLinkHandling.h"
#import "MNMessageCollectionViewCellDelegate.h"
#import "MNPlatformAppActionHandlerDelegate.h"
#import "MNThreadViewModelConfigurable.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class FBCurrentCountryManager, FBMAttachmentURLRequestFactory, FBMMessageAppModel, FBMMessageAttachments, FBMPhotoViewImageDownloadController, FBMSendEventLogger, FBMStickerManager, FBMVideoStorageManager, FBMessengerPaymentsPlugin, FBUserSession, LPPhoneNumber, MNForwardMessageHandler, MNIntentHandler, MNMessageDetectedDataHandlingManager, MNNavigationCoordinator, MNPhotoImageRequester, MNPhotoNodeActionHandler, MNPlatformAppActionHandler, MNStickerStorePresenter, MNThreadViewModel, MNVideoAnalyticsLogger, MNVideoAttachmentGetterCoordinator, NSArray, NSDictionary, NSString, NSURL, UIActionSheet, UIAlertController, UIAlertView, UIViewController;

@interface MNMessageCellActionHandler : NSObject <UIActionSheetDelegate, UIAlertViewDelegate, FBMPhotoViewControllerDelegate, FBMFullscreenVideoViewControllerDelegate, SKStoreProductViewControllerDelegate, MNPlatformAppActionHandlerDelegate, FBClassProvidable, MNThreadViewModelConfigurable, MNMessageCollectionViewCellDelegate, MNAdminMessageCollectionViewCellDelegate, MNMessageCellLinkHandling>
{
    MNIntentHandler *_intentHandler;
    MNNavigationCoordinator *_navigationCoordinator;
    MNForwardMessageHandler *_forwardMessageHandler;
    FBCurrentCountryManager *_countryManager;
    FBMMessageAttachments *_messageAttachments;
    FBUserSession *_session;
    FBMVideoStorageManager *_videoStorageManger;
    MNVideoAnalyticsLogger *_videoAnalyticsLogger;
    MNStickerStorePresenter *_stickerStorePresenter;
    UIActionSheet *_presentedActionSheet;
    UIAlertController *_presentedAlertController;
    MNVideoAttachmentGetterCoordinator *_videoAttachmentCoordinator;
    id <FBProvider> _photoViewControllerProvider;
    FBMessengerPaymentsPlugin *_paymentsPlugin;
    MNPhotoNodeActionHandler *_photoActionHandler;
    FBMAttachmentURLRequestFactory *_attachmentURLRequestFactory;
    FBMPhotoViewImageDownloadController *_photoViewImageDownloadController;
    MNPhotoImageRequester *_imageRequester;
    MNPlatformAppActionHandler *_platformAppActionHandler;
    id <FBProvider> _platformAppActionHandlerProvider;
    MNMessageDetectedDataHandlingManager *_detectedDataHandlingManager;
    FBMSendEventLogger *_sendEventLogger;
    id <MNMessageCellActionHandlerDelegate> _delegate;
    UIViewController *_parentViewController;
    id <MNStickerAnimationStrategy> _stickerAnimationStrategy;
    UIAlertView *_messageSaveErrorAlertView;
    LPPhoneNumber *_selectedPhoneNumber;
    NSString *_selectedAddress;
    NSDictionary *_selectedAddressComponents;
    NSString *_selectedShareHref;
    NSURL *_selectedShareDeepLinkURL;
    FBMMessageAppModel *_selectedDeleteMessage;
    FBMMessageAppModel *_selectedForwardMessage;
    UIViewController *_personViewController;
    MNThreadViewModel *_threadViewModel;
    FBMStickerManager *_stickerManager;
    NSArray *_photoActionSheetButtons;
}

@property(copy, nonatomic) NSArray *photoActionSheetButtons; // @synthesize photoActionSheetButtons=_photoActionSheetButtons;
@property(retain, nonatomic) FBMStickerManager *stickerManager; // @synthesize stickerManager=_stickerManager;
@property(retain, nonatomic) MNThreadViewModel *threadViewModel; // @synthesize threadViewModel=_threadViewModel;
@property(retain, nonatomic) UIViewController *personViewController; // @synthesize personViewController=_personViewController;
@property(retain, nonatomic) FBMMessageAppModel *selectedForwardMessage; // @synthesize selectedForwardMessage=_selectedForwardMessage;
@property(retain, nonatomic) FBMMessageAppModel *selectedDeleteMessage; // @synthesize selectedDeleteMessage=_selectedDeleteMessage;
@property(copy, nonatomic) NSURL *selectedShareDeepLinkURL; // @synthesize selectedShareDeepLinkURL=_selectedShareDeepLinkURL;
@property(copy, nonatomic) NSString *selectedShareHref; // @synthesize selectedShareHref=_selectedShareHref;
@property(copy, nonatomic) NSDictionary *selectedAddressComponents; // @synthesize selectedAddressComponents=_selectedAddressComponents;
@property(copy, nonatomic) NSString *selectedAddress; // @synthesize selectedAddress=_selectedAddress;
@property(retain, nonatomic) LPPhoneNumber *selectedPhoneNumber; // @synthesize selectedPhoneNumber=_selectedPhoneNumber;
@property(retain, nonatomic) UIAlertView *messageSaveErrorAlertView; // @synthesize messageSaveErrorAlertView=_messageSaveErrorAlertView;
@property(retain, nonatomic) id <MNStickerAnimationStrategy> stickerAnimationStrategy; // @synthesize stickerAnimationStrategy=_stickerAnimationStrategy;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak id <MNMessageCellActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)platformAppActionHandler:(id)arg1 didSelectReplyWithExtensionIdentifier:(id)arg2;
- (void)messageCellDidTapAttribution:(id)arg1;
- (void)fullscreenVideoDidExit:(id)arg1;
- (void)_showDeleteActionSheetForMessage:(id)arg1 messageCell:(id)arg2;
- (void)_forwardMessage:(id)arg1 withButtonType:(unsigned int)arg2;
- (id)_eventForForwardButton:(unsigned int)arg1;
- (void)_dismissContactCreationDialog;
- (void)_cancelContactCreationPressed;
- (void)_presentContactCreationDialogWith:(void *)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_forwardPhotoViewModel:(id)arg1;
- (void)_deleteMessage;
- (void)_forwardMessageActionSheet:(id)arg1 clickedWithButtonIndex:(int)arg2;
- (void)_deleteMessageActionSheet:(id)arg1 clickedWithButtonIndex:(int)arg2;
- (void)_didSelectInstall:(id)arg1 withHandler:(id)arg2;
- (void)_didSelectAppAction:(id)arg1 withDeepLinkURL:(id)arg2;
- (void)_shareActionSheet:(id)arg1 clickedWithButtonIndex:(int)arg2;
- (void)_didSelectCopyAddressAction;
- (void)_didSelectAddAddressToContactsAction;
- (void)_didSelectOpenInGoogleMapsAction;
- (void)_didSelectOpenInMapsAction;
- (void)_addressActionSheet:(id)arg1 clickedWithButtonIndex:(int)arg2;
- (void)_didSelectCopyPhoneAction;
- (void)_didSelectAddPhoneToContactsAction;
- (void)_didSelectCallAction;
- (void)_phoneNumberActionSheet:(id)arg1 clickedWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)photoViewController:(id)arg1 didSelectForwardPhotoViewModel:(id)arg2;
- (void)dismissPhotoViewController:(id)arg1;
- (void)adminMessageCell:(id)arg1 didSelectPhotoWithViewModel:(id)arg2;
- (id)modalPresentationStackManagerForMessageCell:(id)arg1;
- (BOOL)messageCellShouldAutoplayVideo:(id)arg1;
- (void)messageCell:(id)arg1 didSelectVideo:(id)arg2 message:(id)arg3;
- (void)messageCell:(id)arg1 didSelectAttachment:(id)arg2;
- (void)_presentVideoPlayerWithContentURL:(id)arg1 message:(id)arg2;
- (void)_playFullscreenVideo:(id)arg1 attachment:(id)arg2;
- (void)messageCell:(id)arg1 didSelectViewPackContextMenuForSticker:(id)arg2;
- (BOOL)messageCell:(id)arg1 shouldShowViewPackContextMenuForSticker:(id)arg2;
- (BOOL)messageCell:(id)arg1 shouldAnimateSticker:(id)arg2;
- (BOOL)messageCell:(id)arg1 shouldAutoPlayAudio:(id)arg2;
- (void)messageCell:(id)arg1 didSelectForwardButtonType:(unsigned int)arg2 message:(id)arg3;
- (BOOL)messageCell:(id)arg1 shouldShowForwardButtonOfType:(unsigned int)arg2 message:(id)arg3;
- (void)messageCell:(id)arg1 didSelectReportMessage:(id)arg2;
- (void)messageCell:(id)arg1 didSelectCancelMessage:(id)arg2;
- (void)messageCell:(id)arg1 didSelectRetryMessage:(id)arg2;
- (void)messageCell:(id)arg1 didSelectDeleteMessage:(id)arg2;
- (id)_messageTypeAnalyticsExtrasFromMessage:(id)arg1;
- (void)messageCell:(id)arg1 didShowContextMenuForMessage:(id)arg2;
- (void)messageCell:(id)arg1 didFailToSaveAttachmentType:(unsigned int)arg2;
- (void)_showSaveAttachmentErrorAlertDialogWithTitle:(id)arg1;
- (void)_showWaitingOnNetworkAlertView;
- (void)messageCell:(id)arg1 didSelectWaitingForNetwork:(id)arg2;
- (void)messageCell:(id)arg1 didDisplayError:(id)arg2;
- (void)messageCell:(id)arg1 didSelectMessage:(id)arg2;
- (void)_handleDetectedDataSendMessageWithText:(id)arg1 attachments:(id)arg2;
- (void)_handleDetectedDataNoActionResultWithError:(id)arg1 isCanceled:(BOOL)arg2;
- (void)messageCellView:(id)arg1 didSelectDetectedData:(id)arg2;
- (BOOL)messageCellView:(id)arg1 canSelectDetectedData:(id)arg2;
- (void)messageCellView:(id)arg1 didSelectAddress:(id)arg2 withComponents:(id)arg3;
- (void)messageCellView:(id)arg1 didSelectPhoneNumber:(id)arg2;
- (void)messageCell:(id)arg1 didSelectShareText:(id)arg2 withDeepLinkURL:(id)arg3 withAttribution:(id)arg4;
- (void)messageCell:(id)arg1 didSelectMenuForWebURL:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)messageCellView:(id)arg1 didSelectURL:(id)arg2;
- (void)messageCellDidFinishVideoRetrieval:(id)arg1;
- (void)messageCellDidRequestVideo:(id)arg1;
- (void)_downloadLargeImageForPhotoView:(id)arg1;
- (struct CGRect)messageCell:(id)arg1 closeFrameForMaskOfPhotosViewWithNode:(id)arg2;
- (id)messageCell:(id)arg1 maskForPhotoViewNode:(id)arg2;
- (struct CGRect)messageCell:(id)arg1 closeFrameForPhotoViewNode:(id)arg2;
- (id)messageCell:(id)arg1 previousPhotoViewModelFor:(id)arg2;
- (id)messageCell:(id)arg1 nextPhotoViewModelFor:(id)arg2;
- (void)messageCell:(id)arg1 didCloseVideoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 willCloseVideoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 mayCloseVideoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 didOpenVideoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 willOpenVideoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 mayOpenVideoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 didClosePhotoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 willClosePhotoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 mayClosePhotoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 didOpenPhotoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 willOpenPhotoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 mayOpenPhotoViewNode:(id)arg2;
- (void)messageCell:(id)arg1 didPressPhotoContextualActionButton:(id)arg2 withPhotoViewNode:(id)arg3 overlayView:(id)arg4;
- (void)messageCell:(id)arg1 didSelectPhotoIndex:(unsigned int)arg2 fromPhotoViewModels:(id)arg3;
- (void)_showOpenActionSheetForShareHref:(id)arg1 withDeepLinkURL:(id)arg2 withAttribution:(id)arg3 fromMessageCell:(id)arg4;
- (void)_didSelectURL:(id)arg1;
- (void)_didSelectPhotoIndex:(unsigned int)arg1 fromPhotoViewModels:(id)arg2 showForward:(BOOL)arg3;
- (void)tearDownThreadViewModelDependencies;
- (void)configureThreadViewModelDependenciesWith:(id)arg1;
- (void)dismissPresentedAlertController;
- (void)_showAlertController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3;
- (void)_showAlertController:(id)arg1 fromMessageCellView:(id)arg2;
- (void)dismissPresentedActionSheet;
- (void)_showActionSheet:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3;
- (void)_showActionSheet:(id)arg1 fromMessageCellView:(id)arg2;
- (void)cancelAllActions;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
