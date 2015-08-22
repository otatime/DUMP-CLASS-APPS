//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOutgoingAttachment.h"

@class FBApiRequest, FBRequestParams, NSData, NSDictionary, NSMutableDictionary, NSString;

@protocol OutgoingAttachment <FBOutgoingAttachment>
@property(readonly, nonatomic) NSData *attachmentData;
@property(readonly, nonatomic) unsigned int attachmentType;
- (void)cancelPrepareAttachmentData;
- (BOOL)canCancelPrepareAttachmentData;
- (void)prepareAttachmentHashWithCompleteBlock:(void (^)(NSString *))arg1;
- (void)prepareAttachmentDataWithCompletedBlock:(void (^)(NSData *, NSError *))arg1;
- (void)addAsAttachFile:(FBApiRequest *)arg1;
- (void)addAsParamsToRequest:(FBRequestParams *)arg1;
- (void)addAsParamsToDictionary:(NSMutableDictionary *)arg1;
- (void)getThumbnailOfSize:(struct CGSize)arg1 completion:(void (^)(UIImage *, NSError *, BOOL))arg2;
- (NSString *)originalSha256Hash;
- (NSString *)attachmentHandle;

@optional
@property(readonly, copy, nonatomic) NSDictionary *extraLoggingData;
@end
