//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"
#import "FBMGrowingTextViewDelegate.h"
#import "FBMultiMediaAttachmentsViewDelegate.h"
#import "MNComposeViewDelegate.h"
#import "MNComposerActionViewDelegate.h"

@class FBComposerHighlightedText, FBMStringWithRedactedDescription, FBUserSession, MNComposeContainerView, MNComposeView, MNComposerActionView, MessageAttachmentPicker, NSArray, NSMutableArray, NSString;

@interface FBPlatformComposeViewController : UIViewController <MNComposeViewDelegate, FBMGrowingTextViewDelegate, FBMultiMediaAttachmentsViewDelegate, MNComposerActionViewDelegate, FBClassProvidable>
{
    MNComposeContainerView *_containerView;
    MNComposeView *_composeView;
    MNComposerActionView *_composerActionView;
    FBUserSession *_session;
    BOOL _disableSending;
    id <FBPlatformComposeViewControllerDelegate> _delegate;
    FBComposerHighlightedText *_robotext;
    NSMutableArray *_outgoingAttachments;
    MessageAttachmentPicker *_messageAttachmentPicker;
}

@property(retain, nonatomic) MessageAttachmentPicker *messageAttachmentPicker; // @synthesize messageAttachmentPicker=_messageAttachmentPicker;
@property(retain, nonatomic) NSMutableArray *outgoingAttachments; // @synthesize outgoingAttachments=_outgoingAttachments;
@property(retain, nonatomic) FBComposerHighlightedText *robotext; // @synthesize robotext=_robotext;
@property(nonatomic) BOOL disableSending; // @synthesize disableSending=_disableSending;
@property(nonatomic) __weak id <FBPlatformComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateShareRobotext;
- (void)_removeMediaAttachmentAtIndex:(unsigned int)arg1 fromView:(id)arg2;
- (void)_addMediaAttachment:(id)arg1 toView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateShareAttachmentViewForSharedLink:(id)arg1;
- (void)_updateMediaAttachmentsView;
- (void)_attachmentsDidChange;
- (void)setShareAttachmentFBID:(id)arg1;
- (void)setSharedLinkForPreview:(id)arg1;
- (void)removeMediaAttachment:(id)arg1;
- (void)addMediaAttachment:(id)arg1;
- (void)_flashScrollIndicatorsWithAttachmentChange;
- (void)_addMediaAttachments;
@property(copy, nonatomic) NSArray *mediaAttachments;
- (int)mediaAttachmentCount;
- (void)multiPhotoAttachment:(id)arg1 photoTapAtIndex:(unsigned int)arg2;
- (void)multiPhotoAttachment:(id)arg1 removePhotoTapAtIndex:(unsigned int)arg2;
- (id)_trimmedText;
- (void)composerActionViewDidPressHashtag:(id)arg1;
- (void)composerActionViewDidPressSend:(id)arg1;
- (id)textInputContextIdentifierForComposeView:(id)arg1;
- (void)composeViewNuxVisibilityDidChange:(id)arg1;
- (void)composeViewDidTapInputView:(id)arg1;
- (void)composeView:(id)arg1 textTappedAtRange:(struct _NSRange)arg2;
- (void)composeViewDidPressEmoji:(id)arg1;
- (void)composeViewDidPressSearch:(id)arg1;
- (void)_initComposeViewIfNeeded;
- (void)_initComposerActionViewIfNeeded;
- (void)_updateSendButton;
@property(nonatomic) BOOL showsKeyboard;
@property(copy, nonatomic) FBMStringWithRedactedDescription *text;
- (void)_setText:(id)arg1;
- (BOOL)hasContent;
- (BOOL)shouldAutorotate;
- (void)_initComposeContainerView;
- (void)loadView;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

