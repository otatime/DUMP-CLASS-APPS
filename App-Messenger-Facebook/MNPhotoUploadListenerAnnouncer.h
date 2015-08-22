//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "MNPhotoUploadListener.h"

@class NSString;

@interface MNPhotoUploadListenerAnnouncer : FBAnnouncerBase <MNPhotoUploadListener>
{
}

- (void)didCancelPhotoAttachmentUploadWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3;
- (void)didFailToUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3 error:(id)arg4;
- (void)didUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 fbId:(id)arg2 photoData:(id)arg3 messageOfflineId:(id)arg4;
- (void)didUploadPhotoAttachmentWithProgress:(double)arg1 messageOfflineId:(id)arg2;
- (void)willUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

