//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FetchThreadMethod : NSObject
{
}

+ (id)getRequestForThreadKey:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3;
+ (id)_getSignalOccurenceString:(id)arg1 fromUsernameFqlResult:(id)arg2;
+ (id)getDisplayNameFromUsernameFqlResult:(id)arg1;
+ (id)getUidFromUsernameFqlResult:(id)arg1;
+ (id)handleFqlResult:(id)arg1 threadJSONUpdater:(id)arg2 announcer:(id)arg3 viewerFBID:(id)arg4 mailboxType:(unsigned int)arg5;
+ (id)handleFqlResult:(id)arg1 threadJSONUpdater:(id)arg2 announcer:(id)arg3 viewerFBID:(id)arg4;
+ (unsigned int)numberOfMessagesInFQLResult:(id)arg1;
+ (id)_threadMetadataFqlWithThreadWhere:(id)arg1;
+ (id)getThreadMetadataFqlByThreadId_DEPRECATED:(id)arg1;
+ (id)getThreadMetadataFqlByThreadFbId:(id)arg1;
+ (id)getThreadMetadataFqlByUserId:(id)arg1;
+ (id)getThreadMetadataFqlByThreadKey:(id)arg1;
+ (id)getThreadMetadataFqlByThreadDescriptor:(id)arg1;
+ (id)getCanonicalThreadByUsernameFql:(id)arg1;
+ (id)getCanonicalThreadFql:(id)arg1 since:(long long)arg2;
+ (id)_getFqlQueriesByThreadWhere:(id)arg1 messagesWhere:(id)arg2 actionsWhere:(id)arg3 since:(long long)arg4 shouldQueryUserInfo:(BOOL)arg5;
+ (id)getFqlQueriesByThreadId_DEPRECATED:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3;
+ (id)getFqlByThreadFbId:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3;
+ (id)getCanonicalFqlByUserId:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3;
+ (id)getFqlByThreadKey:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3;
+ (id)getFqlByThreadId_DEPRECATED:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3;
+ (id)getFqlByThreadDescriptor:(id)arg1 since:(long long)arg2 shouldQueryUserInfo:(BOOL)arg3;

@end

