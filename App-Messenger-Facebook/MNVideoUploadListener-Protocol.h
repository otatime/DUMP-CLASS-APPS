//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSString;

@protocol MNVideoUploadListener <NSObject>
- (void)didCancelVideoAttachmentUploadWithData:(NSData *)arg1 messageOfflineId:(NSString *)arg2 metrics:(NSDictionary *)arg3;
- (void)didFailToUploadVideoAttachmentWithData:(NSData *)arg1 messageOfflineId:(NSString *)arg2 error:(NSError *)arg3 metrics:(NSDictionary *)arg4;
- (void)didUploadVideoAttachmentWithData:(NSData *)arg1 fbId:(NSString *)arg2 messageOfflineId:(NSString *)arg3 metrics:(NSDictionary *)arg4;
- (void)didUploadVideoAttachmentWithProgress:(double)arg1 messageOfflineId:(NSString *)arg2;
- (void)willUploadVideoAttachmentWithData:(NSData *)arg1 messageOfflineId:(NSString *)arg2;
@end

