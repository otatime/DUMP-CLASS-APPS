//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCaribouComponentsMimeAttachment_TypeEnum, ComGoogleCaribouComponentsMimeRemotePartReference, ComGoogleProtobufByteString, NSString;

@protocol ComGoogleCaribouComponentsMimeAttachmentOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (BOOL)getIsAttachmentUseful;
- (BOOL)hasIsAttachmentUseful;
- (NSString *)getRemotePartRefString;
- (BOOL)hasRemotePartRefString;
- (ComGoogleProtobufByteString *)getPayload;
- (BOOL)hasPayload;
- (ComGoogleCaribouComponentsMimeRemotePartReference *)getRemotePartRef;
- (BOOL)hasRemotePartRef;
- (ComGoogleCaribouComponentsMimeAttachment_TypeEnum *)getType;
- (BOOL)hasType;
- (NSString *)getDownloadUri;
- (BOOL)hasDownloadUri;
- (NSString *)getIdFromHeader;
- (BOOL)hasIdFromHeader;
- (NSString *)getPartLocation;
- (BOOL)hasPartLocation;
- (long long)getSizeBytes;
- (BOOL)hasSizeBytes;
- (NSString *)getFilename;
- (BOOL)hasFilename;
- (NSString *)getMimeType;
- (BOOL)hasMimeType;
@end
