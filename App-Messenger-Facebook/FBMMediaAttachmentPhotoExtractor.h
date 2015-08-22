//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNMessageAttachmentPreparerPhotoExtractionDelegate.h"

@class NSString;

@interface FBMMediaAttachmentPhotoExtractor : NSObject <MNMessageAttachmentPreparerPhotoExtractionDelegate, FBSessionClassProvidable>
{
}

- (unsigned int)getSendQualityForImageAttachment:(id)arg1;
- (id)getAnimatedExternalURLForImageAttachment:(id)arg1;
- (int)getPhotoAttachmentTypeForImageAttachment:(id)arg1;
- (id)getPhotoViewModelForImageAttachment:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

