//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBImageDownloaderCancelationHandle.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBImageCacheFetch : NSObject <FBImageDownloaderCancelationHandle>
{
    BOOL _canceled;
    NSObject<OS_dispatch_queue> *_serializedCallbackQueue;
    unsigned int _options;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)callCompletionBlockWithURL:(id)arg1 image:(id)arg2 type:(unsigned int)arg3 downloader:(id)arg4;
- (id)initWithOptions:(unsigned int)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

