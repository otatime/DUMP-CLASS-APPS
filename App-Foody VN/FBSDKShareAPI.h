//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKSharing.h"

@class NSString;

@interface FBSDKShareAPI : NSObject <FBSDKSharing>
{
    BOOL _shouldFailOnDataError;
    BOOL _createObjectsWithClientToken;
    id <FBSDKSharingDelegate> _delegate;
    id <FBSDKSharingContent> _shareContent;
}

+ (id)shareWithContent:(id)arg1 delegate:(id)arg2;
@property(nonatomic) BOOL createObjectsWithClientToken; // @synthesize createObjectsWithClientToken=_createObjectsWithClientToken;
@property(nonatomic) BOOL shouldFailOnDataError; // @synthesize shouldFailOnDataError=_shouldFailOnDataError;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_connection:(id)arg1 addRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_stageValue:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;
- (BOOL)_stagePhoto:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;
- (BOOL)_stageOpenGraphValueContainer:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;
- (BOOL)_stageOpenGraphObject:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_stageArray:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;
- (BOOL)_addEncodedParametersToDictionary:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (BOOL)_shareVideoContent:(id)arg1;
- (BOOL)_sharePhotoContent:(id)arg1;
- (BOOL)_shareOpenGraphContent:(id)arg1;
- (BOOL)_shareLinkContent:(id)arg1;
- (BOOL)validateWithError:(id *)arg1;
- (BOOL)share;
- (BOOL)createOpenGraphObject:(id)arg1;
- (BOOL)canShare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
