//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBMessageOutgoingAttribution, FBUserSession, MNPhotoImageRequester, MNPhotoImageUploadResultCacher, NSString;

@interface MNExternalDataToForwardContentMapper : NSObject <FBClassProvidable>
{
    FBUserSession *_session;
    MNPhotoImageRequester *_imageRequester;
    MNPhotoImageUploadResultCacher *_uploadResultCacher;
    NSString *_text;
    FBMessageOutgoingAttribution *_outgoingAttribution;
    double _minimumBitrateForTranscoding;
}

@property(nonatomic) double minimumBitrateForTranscoding; // @synthesize minimumBitrateForTranscoding=_minimumBitrateForTranscoding;
- (void).cxx_destruct;
- (id)_attachmentsFromMediaAsset:(id)arg1 forwardFlowContentType:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_attachmentsFromImageCollection:(id)arg1 externalURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_attachmentsFromExternalURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_attachmentsFromFacebookURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)contentForExternalData:(id)arg1 forwardFlowContentType:(int)arg2 outgoingAttribution:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSession:(id)arg1 imageRequester:(id)arg2 uploadResultCacher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

