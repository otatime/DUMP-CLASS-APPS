//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoAssetExporter.h"
#import "FBVideoAssetTranscodingDelegate.h"

@class FBVideoAssetTranscoding, FBVideoExportConfig, NSString, NSURL;

@interface FBCustomVideoAssetExporter : NSObject <FBVideoAssetTranscodingDelegate, FBVideoAssetExporter>
{
    NSURL *_assetURL;
    NSURL *_outputURL;
    FBVideoExportConfig *_videoExportConfig;
    FBVideoAssetTranscoding *_videoAssetTranscoding;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

+ (id)workQueue;
- (void).cxx_destruct;
- (void)videoAssetTranscoding:(id)arg1 didUpdateProgress:(float)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 outputDuration;
@property(readonly, nonatomic) long long estimatedOutputFileLength;
- (void)cancelExportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_exportWithVideoAssetTranscoding:(id)arg1 retryCount:(unsigned int)arg2;
- (void)exportAsynchronouslyWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAssetURL:(id)arg1 outputURL:(id)arg2 videoExportConfig:(id)arg3 timeRange:(CDStruct_e83c9415)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
