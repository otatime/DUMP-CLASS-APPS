//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangIterable.h"

@class ComGoogleCumulusCommonCollectImmutableList, JBTCFastLabels, JavaLangInteger, NSString;

@interface JBTCMessageList : NSObject <JavaLangIterable>
{
    ComGoogleCumulusCommonCollectImmutableList *messages_;
    int count_;
    JBTCFastLabels *labelsUnion_;
    JBTCFastLabels *labelsIntersection_;
    id <JavaUtilMap> messageIndexByMessageId_;
    JavaLangInteger *firstUnreadMessageIndex_;
    ComGoogleCumulusCommonCollectImmutableList *allMessageIds_;
    id <JavaUtilList> legacyMessageProtoList_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_legacyMessageProtoList_;
+ (id)__annotations_allMessageIds_;
+ (id)__annotations_firstUnreadMessageIndex_;
+ (id)__annotations_messageIndexByMessageId_;
+ (id)__annotations_labelsIntersection_;
+ (id)__annotations_labelsUnion_;
+ (id)__annotations_getSmartSnooze;
+ (id)__annotations_getSuggestedTask;
+ (id)__annotations_getLegacyMessageProtoList;
+ (id)__annotations_getTask;
+ (id)__annotations_getFirstUnreadMessageIndex;
+ (id)__annotations_getByIdWithNSString_;
+ (void)initialize;
+ (id)concatWithJBTCMessageList:(id)arg1 withJBTCMessageList:(id)arg2;
+ (id)createWithJavaUtilList:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)getNonDraftMessageIds;
- (int)getNonDraftMessageCount;
- (BOOL)hasMessageWithLabelUnoptimizedWithNSString:(id)arg1;
- (BOOL)hasEmailOrStandaloneTaskMessage;
- (BOOL)hasStandaloneTaskMessage;
- (BOOL)hasTripMessage;
- (BOOL)hasTopicMessage;
- (BOOL)hasTrashedOrSpamMessage;
- (BOOL)hasSentViewMessage;
- (BOOL)hasCancelingSendNotSyncedMessage;
- (BOOL)hasSendingNotSyncedMessage;
- (BOOL)hasDraftMessage;
- (BOOL)areAllMessagesOpened;
- (BOOL)hasOpenedMessage;
- (BOOL)areAllMessagesMuted;
- (BOOL)hasPhishyMessage;
- (BOOL)hasSpamMessage;
- (BOOL)hasNonSpamMessage;
- (BOOL)hasUntrashedMessage;
- (BOOL)hasTrashedMessage;
- (BOOL)areAllMessagesArchived;
- (BOOL)hasArchivedMessage;
- (BOOL)hasRemindedTask;
- (BOOL)hasInboxMessage;
- (BOOL)hasSnoozedMessage;
- (BOOL)hasPinnedMessage;
- (BOOL)hasUnreadMessage;
- (BOOL)hasUnseenMessage;
- (BOOL)hasTaskWithTitle;
- (BOOL)hasTaskReminderDismissed;
- (BOOL)hasLocation;
- (BOOL)hasRecurringTask;
- (BOOL)hasRecurrenceMaster;
- (BOOL)hasRecurrenceException;
- (id)getMessageSortTimesampRange;
- (id)getSmartSnooze;
- (id)getSuggestedTask;
- (id)getLegacyMessageProtoList;
- (id)getTask;
- (BOOL)hasTask;
- (id)getWithInt:(int)arg1;
- (BOOL)isEmpty;
- (int)size;
- (void)findFirstUnreadMessageIndex;
- (id)getFirstUnreadMessageIndex;
- (id)getAllMessageIds;
- (void)buildLabelsIntersection;
- (BOOL)labelsIntersectionMatchesWithJBTCLabelMatcher:(id)arg1;
- (void)buildLabelsUnion;
- (BOOL)labelsUnionMatchesWithJBTCLabelMatcher:(id)arg1;
- (id)getByIdWithNSString:(id)arg1;
- (void)buildMessageIndex;
- (id)iterator;
- (id)initWithComGoogleCumulusCommonCollectImmutableList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
