//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTMSessionFetcher, NSObject<OS_dispatch_queue>, NSOperationQueue, NSURLRequest, NSURLSession;

@protocol GTMSessionFetcherServiceProtocol <NSObject>
@property(readonly) NSOperationQueue *delegateQueue;
@property BOOL reuseSession;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue;
- (id <NSURLSessionDelegate>)sessionDelegate;
- (NSURLSession *)sessionForFetcherCreation;
- (NSURLSession *)session;
- (BOOL)isDelayingFetcher:(GTMSessionFetcher *)arg1;
- (GTMSessionFetcher *)fetcherWithRequest:(NSURLRequest *)arg1;
- (void)fetcherDidStop:(GTMSessionFetcher *)arg1;
- (void)fetcherDidBeginFetching:(GTMSessionFetcher *)arg1;
- (void)fetcherDidCreateSession:(GTMSessionFetcher *)arg1;
- (BOOL)fetcherShouldBeginFetching:(GTMSessionFetcher *)arg1;
@end

