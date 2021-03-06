//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTConversationMessageDraft.h"

@class ComGoogleAppsBigtopServicesTasksBigTopTask, ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher, JBTCCachedValue, JBTCContactRef, JBTCMessageData, JBTConversationMessageDraft_ResponseTypeEnum, JBTICommonEventListenersList, JBTICommonMultiLoginUrlRewriter, JBTICommonSapiSpan_Factory, JBTICommonUserInfo, JBTIConversationCustomFromSettings, JBTIConversationDraftTutorialsHelper, JBTIConversationSendingMonitorImpl, JBTIConversationSubjectPrefixHelper, NSString;

@interface JBTIConversationConversationMessageDraftImpl : NSObject <JBTConversationMessageDraft>
{
    id <JBTId> messageId_;
    id <JBTId> originalOwnerConversationId_;
    id <JBTICommonTransactionFactory> transactionFactory_;
    JBTICommonUserInfo *userInfo_;
    id <JavaUtilList> toList_;
    id <JavaUtilList> ccList_;
    id <JavaUtilList> bccList_;
    JBTICommonEventListenersList *eventListeners_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id <ComGoogleCaribouComponentsClientassignedidsClientAssignedMailIdGenerator> idGenerator_;
    NSString *originalSubject_;
    id <JavaUtilList> bodyHtmlRegions_;
    JBTICommonMultiLoginUrlRewriter *multiLoginUrlRewriter_;
    id <JavaUtilList> attachmentList_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    id <JavaUtilList> aliasedEmailAddresses_;
    id <JavaUtilList> verifiedFromAddresses_;
    JBTCCachedValue *verifiedFromContactReferences_;
    JBTIConversationSubjectPrefixHelper *subjectPrefixHelper_;
    id <JBTTranslationHelper> translationHelper_;
    BOOL enableUndoSend_;
    JBTIConversationSendingMonitorImpl *sendingMonitorImpl_;
    JBTIConversationCustomFromSettings *customFromSettings_;
    id <JBTId> ownerConversationId_;
    NSString *subject_;
    BOOL sentOrDiscarded_;
    BOOL isReopenedDraft_;
    BOOL isExistingDraft_;
    BOOL isExistingConversation_;
    BOOL hasBeenEdited_;
    JBTCContactRef *from_;
    id <JavaUtilList> additionalLabelIds_;
    ComGoogleAppsBigtopServicesTasksBigTopTask *task_;
    int generatedAttachmentCount_;
    JBTConversationMessageDraft_ResponseTypeEnum *responseType_;
    JBTCMessageData *responseToMessage_;
    JBTIConversationDraftTutorialsHelper *draftTutorialHelper_;
    id <JBTICommonObjectMonitor> attachmentMonitor_;
    id <JBTICommonObjectMonitorFactory> objectMonitorFactory_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher *settingsFetcher_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_attachmentMonitor_;
+ (id)__annotations_responseType_;
+ (id)__annotations_getAttachmentFromMessageWithNSString_withComGoogleAppsBigtopServicesGmailBigTopGmailMessage_;
+ (id)__annotations_getInlineAttachmentForEmbeddedUrlWithNSString_;
+ (id)__annotations_addRemoveDraftCommandWithJBTICommonTransaction_withJBTId_withJBTId__params;
+ (id)__annotations_undoableDiscardWithJBTCallback_withJBTSpan_withJBTId_withJBTId__params;
+ (id)__annotations_discardWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_sendWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_saveWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_setBodyWithNSString_;
+ (id)__annotations_changeResponseTypeWithJBTConversationMessageDraft_ResponseTypeEnum_;
+ (id)__annotations_createAttachmentProtoWithNSString_withNSString_withNSString_withJBTMessageAttachment_TypeEnum_withNSString_withLong__params;
+ (id)__annotations_createAttachmentGivenIdWithNSString_withNSString_withNSString_withJBTMessageAttachment_TypeEnum_withNSString_;
+ (id)__annotations_createAttachmentWithIdWithNSString_withNSString_withNSString_withJBTMessageAttachment_TypeEnum_;
+ (id)__annotations_createAttachmentWithNSString_withNSString_withNSString_;
+ (id)__annotations_getAttachments;
+ (id)__annotations_setBodyPlainTextWithNSString_;
+ (id)__annotations_getBodyPlainText;
+ (void)initialize;
- (void)dealloc;
- (id)getAttachmentFromMessageWithNSString:(id)arg1 withComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg2;
- (BOOL)isAttachmentUnsyncedWithJBTICommonMessageAttachmentImpl:(id)arg1;
- (void)updateAttachmentsWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
- (BOOL)hasUnsyncedAttachment;
- (void)stopMonitoringAttachments;
- (void)startMonitoringAttachments;
- (void)setRecipientListFromParticipantSetWithJBTParticipantSet:(id)arg1 withJBTParticipant_TypeEnum:(id)arg2 withJavaUtilList:(id)arg3;
- (id)getInlineAttachmentForEmbeddedUrlWithNSString:(id)arg1;
- (id)getParticipantsSummaryWithInt:(int)arg1;
- (void)setParticipantSetWithJBTParticipantSet:(id)arg1;
- (id)getParticipantSet;
- (id)getMessageRegionTypeFromOrdinalWithInt:(int)arg1;
- (id)createMessageRegionWithNSString:(id)arg1 withJBTMessageRegion_TypeEnum:(id)arg2;
- (BOOL)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (void)maybeTriggerCreateReminderPromo;
- (id)getNewMessageId;
- (id)getNewConversationId;
- (void)addRemoveDraftCommandWithJBTICommonTransaction:(id)arg1 withJBTId:(id)arg2 withJBTId:(id)arg3;
- (id)undoableDiscardWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2 withJBTId:(id)arg3 withJBTId:(id)arg4;
- (id)discardWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canDiscard;
- (BOOL)isValidRecipientWithJBTContactReference:(id)arg1;
- (BOOL)isValidRecipientsWithJavaUtilList:(id)arg1;
- (BOOL)hasValidRecipients;
- (id)getMediaSharingTagWithJavaUtilArrayList:(id)arg1;
- (id)getNonQuotedAttachments;
- (id)getPersonalTag;
- (id)getResponseTypeTag;
- (void)registerMessageWithSendingMonitorWithJBTSpan:(id)arg1;
- (id)sendWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canSend;
- (id)saveWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canSave;
- (void)createNewDraftWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3 withComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg4;
- (void)addUpdateDraftMutateWithJBTICommonTransaction:(id)arg1 withComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg2;
- (void)updateExistingDraftWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3 withComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg4;
- (void)addCreateThreadWithJBTICommonTransaction:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg3;
- (void)createNewThreadWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3 withComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg4 withBoolean:(BOOL)arg5;
- (BOOL)subjectHasChanged;
- (void)maybeForkConversationWithJBTICommonTransaction:(id)arg1;
- (void)saveOrSendWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3 withBoolean:(BOOL)arg4;
- (void)setTaskWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1;
- (void)setAdditionalLabelIdsWithJavaUtilList:(id)arg1;
- (void)setBodyRegionsWithJavaUtilList:(id)arg1;
- (void)setBodyWithNSString:(id)arg1;
- (void)setSubjectWithNSString:(id)arg1;
- (BOOL)isSentToMe;
- (BOOL)containsAttachmentWithNSString:(id)arg1;
- (id)getRecipientListWithJavaUtilList:(id)arg1;
- (id)getDirValueFromIsRtlWithBoolean:(BOOL)arg1;
- (id)createForwardDraftAttributionHtmlWithJBTCMessageData:(id)arg1;
- (id)createReplyDraftAttributionHtmlWithJBTCMessageData:(id)arg1;
- (id)createSignatureRegionWithNSString:(id)arg1 withJBTSpan:(id)arg2;
- (void)appendSignatureIfNecessaryWithJBTICommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)isSendingWithCustomFromAddress;
- (void)updateDraftHtmlRegionsForReplyWithJBTCMessageData:(id)arg1 withJavaUtilList:(id)arg2 withJBTConversationMessageDraft_ResponseTypeEnum:(id)arg3;
- (void)updateDraftHtmlRegionsForReplyWithJBTIConversationConversationMessageImpl:(id)arg1 withJBTConversationMessageDraft_ResponseTypeEnum:(id)arg2;
- (void)updateDraftHtmlRegionsForReplyWithJBTCMessageData:(id)arg1 withJBTConversationMessageDraft_ResponseTypeEnum:(id)arg2;
- (void)addInResponseToInlineAttachments;
- (void)addForwardedAttachments;
- (void)addAllToRecipientsIntoToList;
- (void)addSenderIntoToList;
- (void)changeResponseTypeKeepAttachmentsWithJBTConversationMessageDraft_ResponseTypeEnum:(id)arg1;
- (void)changeResponseTypeWithJBTConversationMessageDraft_ResponseTypeEnum:(id)arg1;
- (void)setHasBeenEdited;
- (BOOL)canBeReplyAll;
- (BOOL)canChangeResponseType;
- (BOOL)isResponse;
- (id)toProtoAttachmentTypeWithJBTMessageAttachment_TypeEnum:(id)arg1;
- (id)createAttachmentProtoWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_TypeEnum:(id)arg4 withNSString:(id)arg5 withLong:(long long)arg6;
- (id)generateAttachmentIdWithNSString:(id)arg1;
- (id)createAttachmentGivenSizeWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_TypeEnum:(id)arg4 withNSString:(id)arg5 withLong:(long long)arg6;
- (id)createAttachmentGivenIdWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_TypeEnum:(id)arg4 withNSString:(id)arg5;
- (id)createAttachmentWithIdWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTMessageAttachment_TypeEnum:(id)arg4;
- (id)createAttachmentWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)setAttachmentListWithJavaUtilList:(id)arg1;
- (id)getAttachmentList;
- (id)getAttachments;
- (id)getRecipientsSummaryWithInt:(int)arg1;
- (id)getBcc;
- (id)getCc;
- (id)getTo;
- (id)getFrom;
- (id)getVerifiedFromAddresses;
- (void)setFromWithNSString:(id)arg1;
- (void)setFromWithJBTContactReference:(id)arg1;
- (id)regionsToStringWithJavaUtilList:(id)arg1;
- (id)getBodyRegions;
- (id)getBody;
- (void)setBodyPlainTextWithNSString:(id)arg1;
- (id)getBodyPlainText;
- (id)getSubject;
- (void)setResponseToMessageWithJBTCMessageData:(id)arg1;
- (id)getContactRefProtoWithJBTContactReference:(id)arg1;
- (id)regionsToProtosWithJavaUtilList:(id)arg1;
- (void)addDefaultSentLabelsWithJavaUtilSet:(id)arg1;
- (BOOL)isPinned;
- (id)getMessageLabelsToAddWithBoolean:(BOOL)arg1;
- (id)buildMessageWithBoolean:(BOOL)arg1;
- (id)getMessageBuilderWithBoolean:(BOOL)arg1;
- (id)getOwnerConversationId;
- (id)getSerializedId;
- (id)initWithJBTId:(id)arg1 withJBTId:(id)arg2 withJBTICommonTransactionFactory:(id)arg3 withJBTICommonUserInfo:(id)arg4 withBoolean:(BOOL)arg5 withBoolean:(BOOL)arg6 withComGoogleCumulusCommonUtilClock:(id)arg7 withJBTICommonMultiLoginUrlRewriter:(id)arg8 withJBTICommonSapiSpan_Factory:(id)arg9 withComGoogleCaribouComponentsClientassignedidsClientAssignedMailIdGenerator:(id)arg10 withNSString:(id)arg11 withJBTCContactRef:(id)arg12 withJavaUtilList:(id)arg13 withJavaUtilList:(id)arg14 withJBTIConversationSubjectPrefixHelper:(id)arg15 withJBTTranslationHelper:(id)arg16 withBoolean:(BOOL)arg17 withJBTIConversationSendingMonitorImpl:(id)arg18 withJBTIConversationCustomFromSettings:(id)arg19 withJBTIConversationDraftTutorialsHelper:(id)arg20 withJBTICommonObjectMonitorFactory:(id)arg21 withComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher:(id)arg22;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

