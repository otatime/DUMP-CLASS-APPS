//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "PINRemoteImageCategory_Deprecated.h"

@class NSString;

@interface UIButton (PINRemoteImage_Deprecated) <PINRemoteImageCategory_Deprecated>
- (BOOL)ignoreGIFs;
- (void)clearImages;
- (void)updateUIWithImage:(id)arg1 animatedImage:(id)arg2;
- (void)setPlaceholderWithImage:(id)arg1;
@property(nonatomic) BOOL updateWithProgress;
- (void)setDownloadImageOperationUUID:(id)arg1;
- (id)downloadImageOperationUUID;
- (void)cancelImageDownload;
- (void)setImageFromURLs:(id)arg1 placeholderImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setImageFromURLs:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageFromURLs:(id)arg1;
- (void)setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setImageFromURL:(id)arg1 processorKey:(id)arg2 processor:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4;
- (void)setImageFromURL:(id)arg1 processorKey:(id)arg2 processor:(CDUnknownBlockType)arg3;
- (void)setImageFromURL:(id)arg1 placeholderImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setImageFromURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageFromURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

