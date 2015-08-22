//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBStreamLoad, NSArray, NSDictionary, NSError, NSString;

@protocol FBStreamLoadDelegate <NSObject>
- (void)streamLoadDidFinishLoading:(FBStreamLoad *)arg1;
- (void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned int)arg1 analyticsUUID:(NSString *)arg2 changesetUUID:(NSString *)arg3 responseChunkResults:(NSArray *)arg4 expectedResponseChunks:(unsigned int)arg5 userInfo:(NSDictionary *)arg6;
- (void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned int)arg1 analyticsUUID:(NSString *)arg2 changesetUUID:(NSString *)arg3 currentResponseChunkIndex:(unsigned int)arg4 expectedResponseChunks:(unsigned int)arg5 userInfo:(NSDictionary *)arg6;

@optional
- (void)streamLoadWillRetry:(FBStreamLoad *)arg1;
- (void)streamLoadDidReceiveFailingResponseForDownloadRequestWithAnalyticsUUID:(NSString *)arg1 error:(NSError *)arg2 status:(id <FBNetworkerRequestStatus>)arg3;
- (void)streamLoadDidReceiveSuccessfulResponseForDownloadRequestWithAnalyticsUUID:(NSString *)arg1;
- (void)streamLoadDidCancelDownloadRequestWithAnalyticsUUID:(NSString *)arg1;
- (void)streamLoadDidStartDownloadRequestWithBeforeCursor:(NSString *)arg1 afterCursor:(NSString *)arg2 retryCount:(unsigned int)arg3 analyticsUUID:(NSString *)arg4;
- (void)streamLoadDidEnqueueDownloadRequestWithBeforeCursor:(NSString *)arg1 afterCursor:(NSString *)arg2 analyticsUUID:(NSString *)arg3;
@end
