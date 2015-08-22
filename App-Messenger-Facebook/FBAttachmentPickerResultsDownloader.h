//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSearchResultsDownloaderDelegate.h"

@class FBGraphSearchResultsDownloader, FBScenePath, FBUserSession, NSMutableArray, NSString;

@interface FBAttachmentPickerResultsDownloader : NSObject <FBSearchResultsDownloaderDelegate>
{
    FBUserSession *_session;
    unsigned int _resultType;
    FBScenePath *_scenePath;
    FBGraphSearchResultsDownloader *_resultsDownloader;
    NSMutableArray *_currentEdges;
    id <FBAttachmentPickerResultsDownloaderDelegate> _delegate;
    NSString *_queryString;
}

@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) __weak id <FBAttachmentPickerResultsDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addEndIndicatorIfNeeded;
- (BOOL)_searchResultsHasMoreData;
- (BOOL)_searchResultsIsEmpty;
- (id)_semanticForQueryString:(id)arg1 resultType:(unsigned int)arg2;
- (unsigned int)_verticalForResultType:(unsigned int)arg1;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;
- (void)downloader:(id)arg1 didLoadConnection:(id)arg2 latency:(unsigned long long)arg3 isCachedResponse:(BOOL)arg4 isHeadRequest:(BOOL)arg5;
- (BOOL)canLoadMoreForCurrentQuery;
- (void)loadMore;
- (void)_refresh;
- (id)initWithSession:(id)arg1 resultType:(unsigned int)arg2 scenePath:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
