//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPrefetchVideoDownloader, FBVideoPrefetchedData, NSData;

@protocol FBPrefetchVideoDownloaderDelegate <NSObject>
- (void)prefetchDownloaderDidCancelOrFail:(FBPrefetchVideoDownloader *)arg1;
- (void)prefetchDownloader:(FBPrefetchVideoDownloader *)arg1 didFinishWithData:(FBVideoPrefetchedData *)arg2;
- (void)prefetchDownloader:(FBPrefetchVideoDownloader *)arg1 didReceiveData:(NSData *)arg2;
@end

