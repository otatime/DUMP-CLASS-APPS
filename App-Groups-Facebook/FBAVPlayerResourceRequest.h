//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAVPlayerRequest.h"

@class AVAssetResourceLoadingRequest, NSString;

@interface FBAVPlayerResourceRequest : NSObject <FBAVPlayerRequest>
{
    AVAssetResourceLoadingRequest *_loadingRequest;
    NSString *_requestID;
    unsigned int _dataLength;
}

- (void).cxx_destruct;
- (id)_createRequestID;
- (unsigned int)dataLength;
- (id)proxyType;
- (id)requestID;
- (id)getRequestURL;
- (struct _NSRange)getByteRequestAbsoluteRange;
- (unsigned int)currentOffset;
- (struct _NSRange)getByteRequestRange;
- (void)sendRedirectForURL:(id)arg1;
- (void)sendHeaderDataForURL:(id)arg1 range:(struct _NSRange)arg2 length:(unsigned int)arg3;
- (void)sendFinishedLoadingResponse;
- (void)sendResponseDataForPlaylist:(id)arg1;
- (void)sendResponseData:(id)arg1;
- (id)initWithResourceLoadingRequest:(id)arg1;
- (id)init;

@end
