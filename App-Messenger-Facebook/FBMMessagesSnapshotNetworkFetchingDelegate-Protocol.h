//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol FBMMessagesSnapshotNetworkFetchingDelegate <NSObject>
- (void)messagesSnapshotNetworkFetcherDidCancel:(id <FBMMessagesSnapshotNetworkFetching>)arg1;
- (void)messagesSnapshotNetworkFetcher:(id <FBMMessagesSnapshotNetworkFetching>)arg1 didFailWithError:(NSError *)arg2;
- (void)messagesSnapshotNetworkFetcherDidSuccessfullyCompleteFetch:(id <FBMMessagesSnapshotNetworkFetching>)arg1;
@end

