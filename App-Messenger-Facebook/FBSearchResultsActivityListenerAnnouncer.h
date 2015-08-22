//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBSearchResultsActivityListener.h"

@class NSString;

@interface FBSearchResultsActivityListenerAnnouncer : FBAnnouncerBase <FBSearchResultsActivityListener>
{
}

- (void)resultsDidReceiveTapOnSeeMoreMedia;
- (void)didReceiveNewsContextModuleWithinResults;
- (void)resultsWithContext:(id)arg1 didReceiveTapOnFilterPivotQuery:(id)arg2 atIndex:(int)arg3;
- (void)resultsDidReceiveVerticalToLog:(id)arg1;
- (void)resultsForTTIDidRender;
- (void)resultsForTTIDidDownloadInitialResultsWithSessionID:(id)arg1 requestTracker:(id)arg2;
- (void)resultsForTTIDidStartDownload;
- (void)resultsWithContext:(id)arg1 didMountPhoto:(id)arg2 toPhotoComponentController:(id)arg3;
- (void)resultsWithContext:(id)arg1 didUpdateCursorInfo:(id)arg2;
- (void)resultsWithQueryString:(id)arg1 didFailWithError:(id)arg2;
- (void)resultsWithQueryString:(id)arg1 didYieldDelayedImpressionWithLogInfo:(id)arg2;
- (void)resultsWithContext:(id)arg1 didPreviewResultWithComponentModel:(id)arg2;
- (void)resultsWithContext:(id)arg1 didSelectResultWithComponentModel:(id)arg2 selectionType:(id)arg3 customURL:(id)arg4;
- (void)viewDidDisappearForResultsWithContext:(id)arg1;
- (void)viewWillDisappearForResultsWithContext:(id)arg1;
- (void)viewDidAppearForResultsWithContext:(id)arg1;
- (void)viewWillAppearForResultsWithContext:(id)arg1;
- (void)resultsWithSessionID:(id)arg1 liveConversationModule:(id)arg2 didFinishViewingStories:(int)arg3 totalTimeDisplayed:(unsigned long long)arg4 numInitialStories:(int)arg5 cellIndex:(unsigned int)arg6;
- (void)resultsDidTapLatestPostsTabInsideModule;
- (void)resultsDidTapTopPostsTabInsideModule;
- (void)resultsDidTapSeeMoreFriendPostsWithSessionID:(id)arg1;
- (void)resultsWithSessionID:(id)arg1 resultType:(unsigned int)arg2 didGenerateResultsVPVWithExtra:(id)arg3;
- (void)resultsWithSessionID:(id)arg1 resultType:(unsigned int)arg2 didTapModule:(id)arg3 moduleIndex:(int)arg4;
- (void)resultsWithSessionID:(id)arg1 resultType:(unsigned int)arg2 didTapExpandOnModule:(id)arg3 moduleIndex:(int)arg4;
- (void)resultsWithSessionID:(id)arg1 resultType:(unsigned int)arg2 didTapSeeMoreOnModule:(id)arg3 inHeader:(BOOL)arg4 moduleIndex:(int)arg5;
- (void)resultsWithSessionID:(id)arg1 resultType:(unsigned int)arg2 didTapOnResult:(id)arg3 resultIndex:(int)arg4 containerModule:(id)arg5 moduleIndex:(int)arg6;
- (void)resultsWithSessionID:(id)arg1 didLoadCount:(unsigned int)arg2 isHeadRequest:(BOOL)arg3 resultType:(unsigned int)arg4 fromCache:(BOOL)arg5 totalTime:(unsigned long long)arg6;
- (void)resultsWithSessionID:(id)arg1 didYieldModuleImpressionWithModuleEdge:(id)arg2 moduleEdgeIndex:(unsigned int)arg3;
- (void)resultsWithSessionID:(id)arg1 didYieldImpressionWithResultType:(unsigned int)arg2 source:(id)arg3 resultsState:(unsigned int)arg4;
- (void)resultsWithResultType:(unsigned int)arg1 didFailWithError:(id)arg2;
- (void)resultsWithSessionID:(id)arg1 didReceiveInlineAction:(unsigned int)arg2 onEntity:(id)arg3 resultType:(unsigned int)arg4;
- (void)resultsWithContext:(id)arg1 didReceiveClickOnNode:(id)arg2 atIndex:(int)arg3;
- (void)searchSessionDidEnterBackground;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

