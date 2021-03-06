//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Message, MessageCache, NSArray, NSError;

@protocol MessageCacheDelegate <NSObject>
- (void)messageCache:(MessageCache *)arg1 didFailRecentHistoryWithError:(NSError *)arg2;
- (void)messageCache:(MessageCache *)arg1 didPurgeMessages:(NSArray *)arg2;
- (void)messageCache:(MessageCache *)arg1 didLoadCachedMessages:(NSArray *)arg2;
- (void)messageCache:(MessageCache *)arg1 didReceiveRecentHistoryMessages:(NSArray *)arg2;
- (void)messageCacheWillFetchRecentHistory:(MessageCache *)arg1;
- (void)messageCache:(MessageCache *)arg1 didReceiveAncientHistoryMessages:(NSArray *)arg2 more:(BOOL)arg3;
- (void)messageCache:(MessageCache *)arg1 didReceiveMessage:(Message *)arg2;
@end

