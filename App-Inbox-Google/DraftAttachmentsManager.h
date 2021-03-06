//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CardCarouselView, EditorView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIView;

@interface DraftAttachmentsManager : NSObject
{
    NSArray *attachmentIdsInQuotedRegions_;
    CardCarouselView *carousel_;
    id <JBTConversationMessageDraft> draft_;
    EditorView *editor_;
    NSMutableDictionary *inlineAttachmentsMap_;
    NSMutableDictionary *separateAttachmentsMap_;
    NSMutableArray *separateAttachmentIdsOrderedList_;
    NSMutableArray *relatedAttachments_;
    id <DraftAttachmentsManagerDelegate> _delegate;
}

+ (float)widthForImageInContentView:(id)arg1;
+ (id)resizeImageIfNeeded:(id)arg1;
@property(nonatomic) __weak id <DraftAttachmentsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *attachmentsView; // @synthesize attachmentsView=carousel_;
- (void).cxx_destruct;
- (void)setDraft:(id)arg1;
- (id)editorView;
- (void)setInlineAttachmentsMap:(id)arg1;
- (void)showStillUploadingAlert;
- (void)updateAttachmentsCarousel;
- (void)addAttachmentToCarousel:(id)arg1;
- (void)removeSeparateAttachmentFromMap:(id)arg1;
- (void)addSeparateAttachmentToMap:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (void)moveInlineAttachmentToSeparate:(id)arg1;
- (void)uploadWillStartForDraftAttachment:(id)arg1;
- (void)insertAttachmentIntoEditor:(id)arg1;
- (void)moveCarouselContentInline:(id)arg1;
- (id)uploadProgressDelegateForAttachment:(id)arg1;
- (void)updateSeparateAttachmentsFromDraft;
- (void)updateAttachmentsOnDraft;
@property(readonly, nonatomic) unsigned int totalAttachmentsSize; // @dynamic totalAttachmentsSize;
@property(copy, nonatomic) NSString *htmlContent; // @dynamic htmlContent;
@property(readonly, nonatomic) BOOL hasSeparateAttachments;
- (id)attachmentTypeWithInlineAllowed:(BOOL)arg1;
- (id)initWithDraft:(id)arg1 editor:(id)arg2 smartMailDelegate:(id)arg3;

@end

