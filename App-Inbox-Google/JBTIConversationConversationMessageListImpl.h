//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTConversationMessageList.h"
#import "JBTICommonFeedbackLogger.h"
#import "JBTIConversationExpansionManager_ElementCreator.h"

@class ComGoogleAppsBigtopSyncClientImplProducersQueryMetadata, ComGoogleCommonBaseOptional, ComGoogleCumulusCommonCollectImmutableSet, JBTCCachedValue, JBTCThreadData, JBTFetchModeEnum, JBTICommonEventListenersList, JBTICommonSapiSpan_Factory, JBTICommonScheduler, JBTIConversationBigTopGmailMessageDiffer, JBTIConversationConversationFactory, JBTIConversationConversationImpl, JBTIConversationConversationMessageListImpl_ThreadDataSourceEnum, JBTIConversationConversationTutorialsHelper, JBTIConversationCustomFromSettings, JBTIConversationExpansionManager, JBTISearchSearchClickLogger_Factory, JBTISearchSearchMetadata, JBTSection_TypeEnum, JavaLangInteger, NSString;

@interface JBTIConversationConversationMessageListImpl : NSObject <JBTConversationMessageList, JBTIConversationExpansionManager_ElementCreator, JBTICommonFeedbackLogger>
{
    id <JBTId> conversationId_;
    ComGoogleCommonBaseOptional *initialThreadValue_;
    id <ComGoogleAppsBigtopSyncClientImplContactsResolverContactResolver> contactResolver_;
    JBTICommonScheduler *scheduler_;
    JBTICommonEventListenersList *eventListeners_;
    JBTIConversationExpansionManager *expansionManager_;
    int hypercollapseThreshold_;
    int hypercollapseOffset_;
    JBTIConversationConversationFactory *conversationFactory_;
    ComGoogleCumulusCommonCollectImmutableSet *messageIdsToExpand_;
    id <JavaUtilMap> senderContactsByMessageId_;
    id <JavaUtilSet> messagesWithUpdatedContact_;
    BOOL senderContactFetchingEnabled_;
    id <JBTICommonObjectMonitor> monitor_;
    JBTCThreadData *threadData_;
    JBTIConversationConversationImpl *conversation_;
    id <JBTClusterConfig> producedForClusterConfig_;
    ComGoogleAppsBigtopSyncClientImplProducersQueryMetadata *queryMetadata_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    JBTSection_TypeEnum *sectionType_;
    int indexInSection_;
    JBTISearchSearchMetadata *searchMetadata_;
    JBTISearchSearchClickLogger_Factory *searchClickLoggerFactory_;
    id <JavaUtilList> prepopulatedSmartMailList_;
    JavaLangInteger *schedulerToken_;
    JBTFetchModeEnum *fetchMode_;
    id <JBTISmartMailSmartMailCommandApplier_SmartMailTransactionFactory> smartMailTransactionFactory_;
    BOOL hasSetObjectSourceAnnotation_;
    BOOL hasUnreadMessagesAtFirstLoadTime_;
    BOOL hasPinnedMessagesAtFirstLoadTime_;
    id <JBTSpan> clientStartSpan_;
    JBTIConversationBigTopGmailMessageDiffer *messageDiffer_;
    JBTIConversationConversationTutorialsHelper *conversationTutorialsHelper_;
    JBTIConversationCustomFromSettings *customFromSettings_;
    id <JBTICommonObjectMonitorFactory> objectMonitorFactory_;
    JBTCCachedValue *accordion_;
    JBTCCachedValue *spamPhishyData_;
    BOOL isExpectingMoreChanges_;
    JBTIConversationConversationMessageListImpl_ThreadDataSourceEnum *threadDataSourceForMostRecentUserVisibleUpdate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_clientStartSpan_;
+ (id)__annotations_schedulerToken_;
+ (id)__annotations_prepopulatedSmartMailList_;
+ (id)__annotations_searchMetadata_;
+ (id)__annotations_sectionType_;
+ (id)__annotations_producedForClusterConfig_;
+ (id)__annotations_conversation_;
+ (id)__annotations_threadData_;
+ (id)__annotations_monitor_;
+ (id)__annotations_maybeAddContactToMessageWithJBTExpandableElement__params;
+ (id)__annotations_maybeTriggerTutorialOnCloseWithJBTCallback__params;
+ (id)__annotations_setPriorityWithJBTPriorityEnum_withJBTSpan__params;
+ (id)__annotations_setMaxElementsWithInt_withJBTSpan__params;
+ (id)__annotations_increaseMaxElementsWithInt_withJBTSpan__params;
+ (id)__annotations_checkServerNowWithJBTSpan__params;
+ (id)__annotations_getElementByIdWithJBTId_;
+ (id)__annotations_enableAutoFetchSenderContactWithJBTContacts_ContactPhotoResolutionEnum__params;
+ (id)__annotations_stopWithJBTSpan__params;
+ (id)__annotations_startWithJBTSpan__params;
+ (id)__annotations_initWithJBTId_withComGoogleCommonBaseOptional_withComGoogleCumulusApiBigSet_withComGoogleAppsBigtopSyncClientImplContactsResolverContactResolver_withJBTICommonScheduler_withInt_withInt_withJBTIConversationConversationFactory_withComGoogleCumulusCommonCollectImmutableSet_withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata_withJBTFetchModeEnum_withJBTICommonSapiSpan_Factory_withJBTSection_TypeEnum_withJBTISearchSearchMetadata_withJBTISearchSearchClickLogger_Factory_withJavaUtilList_withJBTISmartMailSmartMailCommandApplier_SmartMailTransactionFactory_withJBTIConversationBigTopGmailMessageDiffer_withJBTIConversationConversationTutorialsHelper_withJBTIConversationCustomFromSettings_withJBTICommonObjectMonitorFactory__params;
+ (void)initialize;
+ (id)updatedWithJBTId:(id)arg1 withJBTExpandableElement:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (id)removedWithJBTId:(id)arg1 withInt:(int)arg2;
+ (id)addedWithJBTId:(id)arg1 withJBTExpandableElement:(id)arg2 withInt:(int)arg3;
+ (id)subtractMessageIdsWithJBTCThreadData:(id)arg1 withJBTCThreadData:(id)arg2;
+ (id)classifyProtoChangesWithJBTCThreadData:(id)arg1 withJBTCThreadData:(id)arg2 withJBTIConversationBigTopGmailMessageDiffer:(id)arg3;
- (void)dealloc;
- (void)populateSpamPhishyData;
- (id)getSpamPhishyDataForConversation;
- (BOOL)hasSpamPhishyData;
- (BOOL)hasMessageWithIdWithNSString:(id)arg1;
- (id)getQueryMetadata;
- (void)logFeedbackWithXPLTLoggingApi:(id)arg1;
- (id)getDebugString;
- (id)getProtoStringForDebugging;
- (void)checkMessageCountsWithJBTCThreadData:(id)arg1;
- (void)checkMessageBodiesWithJBTCThreadData:(id)arg1;
- (id)getConversationMessageByIdWithJBTId:(id)arg1;
- (id)getMessageForQuickReply;
- (id)getSectionManager;
- (void)unlockElementWithJBTId:(id)arg1;
- (void)lockElementToRankWithJBTId:(id)arg1;
- (BOOL)isElementLockedWithJBTId:(id)arg1;
- (id)convertStringIdsToIdObjectsWithJavaUtilList:(id)arg1;
- (BOOL)isMessageUnreadWithJBTId:(id)arg1;
- (BOOL)tryToRemoveElementsWithJavaUtilList:(id)arg1;
- (BOOL)tryToUpdateElementsWithJavaUtilList:(id)arg1;
- (void)rebuildExpansionManagerWithBoolean:(BOOL)arg1;
- (id)classifyListChangesWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2;
- (void)checkIfAnyNewMessageAndSendEventWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withJBTSpan:(id)arg3;
- (void)filterChangesAndCheckForNewMessageWithJavaUtilList:(id)arg1;
- (BOOL)updateThreadDataIfNecessaryWithJBTCThreadData:(id)arg1 withJBTIConversationConversationMessageListImpl_ThreadDataSourceEnum:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 withJBTSpan:(id)arg5;
- (void)setObjectSourceAnnotationIfNecessaryWithJBTIConversationConversationMessageListImpl_ThreadDataSourceEnum:(id)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3;
- (void)setConversationWithJBTConversation:(id)arg1;
- (void)onThreadDataChangedWithJBTCThreadData:(id)arg1 withBoolean:(BOOL)arg2 withJBTSpan:(id)arg3 withJBTSpan:(id)arg4 withJBTIConversationConversationMessageListImpl_ThreadDataSourceEnum:(id)arg5;
- (void)flushMessagesWithUpdatedContactsWithJBTSpan:(id)arg1;
- (void)maybeScheduleSenderContactFetchedEventWithJBTSpan:(id)arg1;
- (void)updateMessageContactWithJBTIConversationConversationMessageImpl:(id)arg1 withJBTContact:(id)arg2 withJBTSpan:(id)arg3 withBoolean:(BOOL)arg4;
- (void)resolveContactsWithJBTSpan:(id)arg1;
- (void)maybeAddContactToMessageWithJBTExpandableElement:(id)arg1;
- (void)maybeTriggerTutorialOnCloseWithJBTCallback:(id)arg1;
- (id)getConversationId;
- (void)generateExpansionEventWithJBTId:(id)arg1 withJavaUtilList:(id)arg2 withJBTSpan:(id)arg3;
- (id)createElementWithJBTId:(id)arg1 withJBTExpandableElement_ExpansionStateEnum:(id)arg2;
- (id)createHyperCollapsedElementWithJavaUtilList:(id)arg1;
- (int)getVersion;
- (id)getPriority;
- (void)setPriorityWithJBTPriorityEnum:(id)arg1 withJBTSpan:(id)arg2;
- (void)setMaxElementsWithInt:(int)arg1 withJBTSpan:(id)arg2;
- (void)increaseMaxElementsWithInt:(int)arg1 withJBTSpan:(id)arg2;
- (int)getMaxElements;
- (BOOL)hasMoreElements;
- (void)checkServerNowWithJBTSpan:(id)arg1;
- (id)getAllElements;
- (id)getElementByIndexWithInt:(int)arg1;
- (int)getSize;
- (id)getElementByIdWithJBTId:(id)arg1;
- (BOOL)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (id)getConversation;
- (void)enableAutoFetchSenderContactWithJBTContacts_ContactPhotoResolutionEnum:(id)arg1;
- (BOOL)isExpectingMoreChanges;
- (BOOL)isStarted;
- (BOOL)isPaused;
- (void)resume;
- (void)pause;
- (void)stopWithJBTSpan:(id)arg1;
- (id)getGenericSmartMail;
- (void)updateStateForInitialProtoWithJBTICommonSapiSpan:(id)arg1 withJBTSpan:(id)arg2;
- (void)onMonitorEventWithJBTICommonObjectMonitorChange:(id)arg1 withJBTSpan:(id)arg2;
- (void)maybeLogInteraction;
- (void)startWithJBTSpan:(id)arg1;
- (BOOL)hasUnreadMessagesAtFirstLoadTime;
- (void)setIndexInSectionWithInt:(int)arg1;
- (id)initWithJBTId:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2 withComGoogleCumulusApiBigSet:(id)arg3 withComGoogleAppsBigtopSyncClientImplContactsResolverContactResolver:(id)arg4 withJBTICommonScheduler:(id)arg5 withInt:(int)arg6 withInt:(int)arg7 withJBTIConversationConversationFactory:(id)arg8 withComGoogleCumulusCommonCollectImmutableSet:(id)arg9 withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata:(id)arg10 withJBTFetchModeEnum:(id)arg11 withJBTICommonSapiSpan_Factory:(id)arg12 withJBTSection_TypeEnum:(id)arg13 withJBTISearchSearchMetadata:(id)arg14 withJBTISearchSearchClickLogger_Factory:(id)arg15 withJavaUtilList:(id)arg16 withJBTISmartMailSmartMailCommandApplier_SmartMailTransactionFactory:(id)arg17 withJBTIConversationBigTopGmailMessageDiffer:(id)arg18 withJBTIConversationConversationTutorialsHelper:(id)arg19 withJBTIConversationCustomFromSettings:(id)arg20 withJBTICommonObjectMonitorFactory:(id)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

