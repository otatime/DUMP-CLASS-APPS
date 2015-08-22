//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "PINRemoteImageCategory.h"

@class NSString;

@interface UIButton (PINRemoteImage) <PINRemoteImageCategory>
- (BOOL)pin_ignoreGIFs;
- (void)pin_clearImages;
- (void)pin_updateUIWithImage:(id)arg1 animatedImage:(id)arg2;
- (void)pin_setPlaceholderWithImage:(id)arg1;
@property(nonatomic) BOOL pin_updateWithProgress;
- (void)pin_setDownloadImageOperationUUID:(id)arg1;
- (id)pin_downloadImageOperationUUID;
- (void)pin_cancelImageDownload;
- (void)pin_setImageFromURLs:(id)arg1 placeholderImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pin_setImageFromURLs:(id)arg1 placeholderImage:(id)arg2;
- (void)pin_setImageFromURLs:(id)arg1;
- (void)pin_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)pin_setImageFromURL:(id)arg1 processorKey:(id)arg2 processor:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pin_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4;
- (void)pin_setImageFromURL:(id)arg1 processorKey:(id)arg2 processor:(CDUnknownBlockType)arg3;
- (void)pin_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pin_setImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pin_setImageFromURL:(id)arg1 placeholderImage:(id)arg2;
- (void)pin_setImageFromURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

