//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopServicesGmailBigTopGmailThread, JBTCBigTopObjectOriginationInfo, JBTCMessageList, NSString;

@interface JBTCThreadData : NSObject
{
    ComGoogleAppsBigtopServicesGmailBigTopGmailThread *originalThreadProto_;
    JBTCMessageList *visibleMessages_;
    JBTCMessageList *allMessages_;
    JBTCMessageList *taskReminders_;
    JBTCMessageList *visibleMessagesAndReminders_;
    NSString *threadVersion_;
    NSString *cumulusSourceAnnotation_;
    JBTCBigTopObjectOriginationInfo *originationInfo_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_visibleMessagesAndReminders_;
+ (id)__annotations_getSuggestedTask;
+ (id)__annotations_ensureListAndAddWithJavaUtilList_withJBTCMessageData__params;
+ (void)initialize;
+ (id)ensureListAndAddWithJavaUtilList:(id)arg1 withJBTCMessageData:(id)arg2;
+ (id)createForTestsWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1 withJBTCBigTopObjectOriginationInfo:(id)arg2;
+ (id)createForTestsWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
+ (id)createEmpty;
+ (id)createWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1 withJBTCMessageVisibilityHelper:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withJBTCBigTopObjectOriginationInfo:(id)arg5;
- (void)dealloc;
- (BOOL)hasTrip;
- (id)getOriginationInfo;
- (id)getCumulusSourceAnnotation;
- (id)getVersion;
- (id)getSuggestedTask;
- (id)getVisibleAndInvisibleMessages;
- (id)getVisibleMessages;
- (id)getBumpMessageId;
- (BOOL)hasBumpMessageId;
- (long long)getArchivedTimeMs;
- (BOOL)hasArchivedTimeMs;
- (id)getVisibleMessagesAndReminders;
- (id)getTaskReminders;
- (BOOL)hasTaskReminders;
- (id)getMessageIds;
- (id)getFullThreadProto;
- (long long)getReceivedTimeMs;
- (id)getSubject;
- (BOOL)hasSubject;
- (id)initWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTCMessageList:(id)arg4 withJBTCMessageList:(id)arg5 withJBTCMessageList:(id)arg6 withJBTCBigTopObjectOriginationInfo:(id)arg7;

@end
