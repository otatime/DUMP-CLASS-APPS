//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession;

@interface FBMStickerTrayConfigFetcher : NSObject
{
    id <FBServiceTransactionMutating> _token;
    FBUserSession *_session;
    id <FBMStickerTrayConfigFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMStickerTrayConfigFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleDownloadError:(id)arg1;
- (void)_handleDownloadResponse:(id)arg1;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

