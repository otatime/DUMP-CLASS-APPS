//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsBigtopServicesGmailBigTopGmailMessageBody, ComGoogleAppsBigtopServicesGmailBigTopSmimeInfo, ComGoogleAppsBigtopServicesGmailDraftNotification, ComGoogleAppsBigtopServicesGmailSmartreplySuggestions, ComGoogleAppsBigtopServicesGmailSpamPhishyInfo, ComGoogleAppsBigtopServicesTasksBigTopSmartSnooze, ComGoogleAppsBigtopServicesTasksBigTopSuggestedTask, ComGoogleAppsBigtopServicesTasksBigTopTask, ComGoogleCaribouComponentsMimeAttachment, JBTCContactRef, JCSSmartMailInfo, NSString;

@protocol ComGoogleAppsBigtopServicesGmailBigTopGmailMessageOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopServicesGmailSmartreplySuggestions *)getSmartreplySuggestions;
- (BOOL)hasSmartreplySuggestions;
- (ComGoogleAppsBigtopServicesTasksBigTopSmartSnooze *)getSmartSnooze;
- (BOOL)hasSmartSnooze;
- (ComGoogleAppsBigtopServicesGmailDraftNotification *)getDraftNotification;
- (BOOL)hasDraftNotification;
- (ComGoogleAppsBigtopServicesGmailBigTopSmimeInfo *)getSmimeInfo;
- (BOOL)hasSmimeInfo;
- (ComGoogleAppsBigtopServicesTasksBigTopSuggestedTask *)getSuggestedTask;
- (BOOL)hasSuggestedTask;
- (JBTCContactRef *)getReplyFromAddress;
- (BOOL)hasReplyFromAddress;
- (NSString *)getListId;
- (BOOL)hasListId;
- (ComGoogleAppsBigtopServicesGmailSpamPhishyInfo *)getSpamPhishyInfo;
- (BOOL)hasSpamPhishyInfo;
- (long long)getSortTimestamp;
- (BOOL)hasSortTimestamp;
- (ComGoogleAppsBigtopServicesTasksBigTopTask *)getTask;
- (BOOL)hasTask;
- (NSString *)getRfc822InReplyTo;
- (BOOL)hasRfc822InReplyTo;
- (NSString *)getRfc822ReferencesWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getRfc822ReferencesList;
- (int)getRfc822ReferencesCount;
- (NSString *)getRfc822Id;
- (BOOL)hasRfc822Id;
- (JCSSmartMailInfo *)getSmartmailInfo;
- (BOOL)hasSmartmailInfo;
- (ComGoogleCaribouComponentsMimeAttachment *)getAttachmentWithInt:(int)arg1;
- (id <JavaUtilList>)getAttachmentList;
- (int)getAttachmentCount;
- (NSString *)getLabelIdWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getLabelIdList;
- (int)getLabelIdCount;
- (NSString *)getSnippet;
- (BOOL)hasSnippet;
- (ComGoogleAppsBigtopServicesGmailBigTopGmailMessageBody *)getBody;
- (BOOL)hasBody;
- (NSString *)getSubject;
- (BOOL)hasSubject;
- (long long)getDate;
- (BOOL)hasDate;
- (JBTCContactRef *)getReplyToWithInt:(int)arg1;
- (id <JavaUtilList>)getReplyToList;
- (int)getReplyToCount;
- (JBTCContactRef *)getBccWithInt:(int)arg1;
- (id <JavaUtilList>)getBccList;
- (int)getBccCount;
- (JBTCContactRef *)getCcWithInt:(int)arg1;
- (id <JavaUtilList>)getCcList;
- (int)getCcCount;
- (JBTCContactRef *)getToWithInt:(int)arg1;
- (id <JavaUtilList>)getToList;
- (int)getToCount;
- (JBTCContactRef *)getFrom;
- (BOOL)hasFrom;
- (NSString *)getId;
- (BOOL)hasId;
@end
