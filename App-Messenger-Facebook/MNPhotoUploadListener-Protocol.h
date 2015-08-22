//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNPhotoViewModel, NSData, NSError, NSString;

@protocol MNPhotoUploadListener <NSObject>
- (void)didCancelPhotoAttachmentUploadWithPhotoViewModel:(MNPhotoViewModel *)arg1 photoData:(NSData *)arg2 messageOfflineId:(NSString *)arg3;
- (void)didFailToUploadPhotoAttachmentWithPhotoViewModel:(MNPhotoViewModel *)arg1 photoData:(NSData *)arg2 messageOfflineId:(NSString *)arg3 error:(NSError *)arg4;
- (void)didUploadPhotoAttachmentWithPhotoViewModel:(MNPhotoViewModel *)arg1 fbId:(NSString *)arg2 photoData:(NSData *)arg3 messageOfflineId:(NSString *)arg4;
- (void)didUploadPhotoAttachmentWithProgress:(double)arg1 messageOfflineId:(NSString *)arg2;
- (void)willUploadPhotoAttachmentWithPhotoViewModel:(MNPhotoViewModel *)arg1 photoData:(NSData *)arg2 messageOfflineId:(NSString *)arg3;
@end

