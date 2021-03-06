//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTMedia.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTMessageAttachment_FileTypeEnum, JBTMessageAttachment_TypeEnum, NSString;

@protocol JBTMessageAttachment <JBTMedia, NSObject, JavaObject>
- (void)recordClick;
- (NSString *)getCacheKey;
- (NSString *)getAttachmentHash;
- (BOOL)isAttachmentQuotedInDraft;
- (BOOL)isDraftAttachment;
- (BOOL)isNonImagePreviewable;
- (BOOL)isPreviewable;
- (id <JBTImage>)getFifePreviewImage;
- (id <JBTImage>)getPreviewImage;
- (NSString *)getThumbnailUrl;
- (NSString *)getViewUrl;
- (NSString *)getEmbeddedUrl;
- (NSString *)getDownloadUrl;
- (void)setIdFromHeaderWithNSString:(NSString *)arg1;
- (NSString *)getIdFromHeader;
- (NSString *)getFileExtension;
- (NSString *)getFileNameOnly;
- (NSString *)getFileName;
- (long long)getSizeInBytes;
- (JBTMessageAttachment_FileTypeEnum *)getAttachmentFileType;
- (NSString *)getMimeType;
- (void)setAttachmentTypeWithJBTMessageAttachment_TypeEnum:(JBTMessageAttachment_TypeEnum *)arg1;
- (BOOL)isCloudAttachment;
- (JBTMessageAttachment_TypeEnum *)getAttachmentType;
@end

