//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLDownloadRequest, FBUserSession, NSString;

@interface FBPPersonFetcher : NSObject
{
    FBUserSession *_session;
    NSString *_targetId;
    id <FBPPersonFetcherDelegate> _delegate;
    FBGraphQLDownloadRequest *_recipientDownloadRequest;
}

- (void).cxx_destruct;
- (void)_handleFetchResponse:(id)arg1;
- (void)fetch;
- (id)initWithSession:(id)arg1 targetId:(id)arg2 delegate:(id)arg3;

@end

