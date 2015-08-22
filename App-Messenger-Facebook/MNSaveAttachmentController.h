//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNSavePhotoListener.h"
#import "MNVideoExporterDelegate.h"

@class FBMMessageAttachments, FBMVideoStorageManager, FBMobileConfigFactory, FBUserSession, MNSaveAttachmentListenerAnnouncer, MNSaveAttachmentLogger, MNSavePhotoController, MNVideoExporter, NSString;

@interface MNSaveAttachmentController : NSObject <MNVideoExporterDelegate, MNSavePhotoListener, FBClassProvidable>
{
    MNSavePhotoController *_savePhotoController;
    FBMMessageAttachments *_messageAttachments;
    FBMVideoStorageManager *_videoStorageManager;
    MNVideoExporter *_videoExporter;
    FBUserSession *_session;
    FBMobileConfigFactory *_mobileConfigFactory;
    MNSaveAttachmentListenerAnnouncer *_announcer;
    MNSaveAttachmentLogger *_logger;
}

@property(retain, nonatomic) MNSaveAttachmentLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) MNSaveAttachmentListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) FBMobileConfigFactory *mobileConfigFactory; // @synthesize mobileConfigFactory=_mobileConfigFactory;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MNVideoExporter *videoExporter; // @synthesize videoExporter=_videoExporter;
@property(retain, nonatomic) FBMVideoStorageManager *videoStorageManager; // @synthesize videoStorageManager=_videoStorageManager;
@property(retain, nonatomic) FBMMessageAttachments *messageAttachments; // @synthesize messageAttachments=_messageAttachments;
@property(retain, nonatomic) MNSavePhotoController *savePhotoController; // @synthesize savePhotoController=_savePhotoController;
- (void).cxx_destruct;
- (void)videoExporter:(id)arg1 didDownloadWithProgress:(float)arg2;
- (void)videoExporter:(id)arg1 didFinishExportingToFile:(id)arg2 fromContentUrl:(id)arg3;
- (void)videoExporter:(id)arg1 didFailWithError:(id)arg2;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)photoDidFailToSaveWithError:(id)arg1;
- (void)photoDidSave;
- (void)_reportError:(id)arg1;
- (void)_savePhoto:(id)arg1;
- (void)_downloadAndSaveVideoAttachmentForMessage:(id)arg1;
- (void)_saveVideoAtFilePath:(id)arg1;
- (void)_saveVideo:(id)arg1;
- (BOOL)_canSaveVideo:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)saveMessageAttachment:(id)arg1;
- (BOOL)canSaveMessageAttachment:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithMessageAttachments:(id)arg1 videoStorageManager:(id)arg2 videoExporter:(id)arg3 session:(id)arg4 mobileConfigFactory:(id)arg5 savePhotoController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

