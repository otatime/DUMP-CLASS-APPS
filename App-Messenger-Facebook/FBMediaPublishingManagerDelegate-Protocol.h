//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPublicationError, FBPublicationResponse, NSError, UIImage;

@protocol FBMediaPublishingManagerDelegate <NSObject>
- (void)reportsCurrentProgress:(float)arg1;
- (void)publishUploadedMediaAttachments;
- (void)mediaPublishingManagerWantsToDisablePublicationCancellation:(id <FBMediaPublishingManagerProtocol>)arg1;
- (void)mediaPublishingManagerWantsToEnablePublicationCancellation:(id <FBMediaPublishingManagerProtocol>)arg1;
- (void)mediaPublishingManager:(id <FBMediaPublishingManagerProtocol>)arg1 startedUploadingItemOfType:(int)arg2 thumbnail:(UIImage *)arg3;
- (void)mediaPublishingManager:(id <FBMediaPublishingManagerProtocol>)arg1 wantsToRetryPublishingWithSource:(unsigned int)arg2 error:(FBPublicationError *)arg3;
- (void)notifyFlowSucceedWithResult:(FBPublicationResponse *)arg1;
- (void)notifyAttemptFailureWithError:(NSError *)arg1;
@end
