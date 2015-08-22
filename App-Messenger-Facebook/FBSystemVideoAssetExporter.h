//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoAssetExporter.h"

@class AVAsset, AVAssetExportSession, NSArray, NSString, NSTimer, NSURL;

@interface FBSystemVideoAssetExporter : NSObject <FBVideoAssetExporter>
{
    NSURL *_assetURL;
    NSURL *_outputURL;
    NSArray *_presetNames;
    NSArray *_outputFileTypes;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    AVAssetExportSession *_exportSession;
    AVAsset *_asset;
    unsigned int _presetAndFileTypeIterator;
    NSTimer *_progressTimer;
    id <FBErrorSimulationProtocol> _errorSimulation;
    CDStruct_e83c9415 _timeRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_determineBestPresetAndOutputFileType;
- (void)_exportProgressReport:(id)arg1;
- (void)_exportWithSession:(id)arg1 presetName:(id)arg2 outputFileType:(id)arg3 retryCount:(unsigned int)arg4;
- (void)cancelExportWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 outputDuration;
@property(readonly, nonatomic) long long estimatedOutputFileLength;
- (void)exportAsynchronouslyWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAssetURL:(id)arg1 outputURL:(id)arg2 presetNames:(id)arg3 outputFileTypes:(id)arg4 errorSimulation:(id)arg5 timeRange:(CDStruct_e83c9415)arg6;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
