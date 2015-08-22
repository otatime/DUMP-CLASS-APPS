//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface YTPlayerView : UIView <UIWebViewDelegate>
{
    UIWebView *_webView;
    id <YTPlayerViewDelegate> _delegate;
}

+ (id)stringForPlayerState:(int)arg1;
+ (int)playerStateForString:(id)arg1;
+ (id)stringForPlaybackQuality:(int)arg1;
+ (int)playbackQualityForString:(id)arg1;
@property(nonatomic) __weak id <YTPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)createNewWebView;
- (void)setWebView:(id)arg1;
- (id)stringForJSBoolean:(BOOL)arg1;
- (id)stringFromEvaluatingJavaScript:(id)arg1;
- (id)stringFromVideoIdArray:(id)arg1;
- (void)loadPlaylist:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)cuePlaylist:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (BOOL)loadWithPlayerParams:(id)arg1;
- (BOOL)handleHttpNavigationToUrl:(id)arg1;
- (void)notifyDelegateOfYouTubeCallbackUrl:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (id)availableQualityLevels;
- (void)playVideoAt:(int)arg1;
- (void)previousVideo;
- (void)nextVideo;
- (int)playlistIndex;
- (id)playlist;
- (id)videoEmbedCode;
- (id)videoUrl;
- (int)duration;
- (void)setPlaybackQuality:(int)arg1;
- (int)playbackQuality;
- (float)currentTime;
- (int)playerState;
- (float)videoLoadedFraction;
- (void)setShuffle:(BOOL)arg1;
- (void)setLoop:(BOOL)arg1;
- (id)availablePlaybackRates;
- (void)setPlaybackRate:(float)arg1;
- (float)playbackRate;
- (void)loadPlaylistByVideos:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)loadPlaylistByPlaylistId:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)cuePlaylistByVideos:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)cuePlaylistByPlaylistId:(id)arg1 index:(int)arg2 startSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)loadVideoByURL:(id)arg1 startSeconds:(float)arg2 endSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)loadVideoByURL:(id)arg1 startSeconds:(float)arg2 suggestedQuality:(int)arg3;
- (void)cueVideoByURL:(id)arg1 startSeconds:(float)arg2 endSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)cueVideoByURL:(id)arg1 startSeconds:(float)arg2 suggestedQuality:(int)arg3;
- (void)loadVideoById:(id)arg1 startSeconds:(float)arg2 endSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)loadVideoById:(id)arg1 startSeconds:(float)arg2 suggestedQuality:(int)arg3;
- (void)cueVideoById:(id)arg1 startSeconds:(float)arg2 endSeconds:(float)arg3 suggestedQuality:(int)arg4;
- (void)cueVideoById:(id)arg1 startSeconds:(float)arg2 suggestedQuality:(int)arg3;
- (void)clearVideo;
- (void)seekToSeconds:(float)arg1 allowSeekAhead:(BOOL)arg2;
- (void)stopVideo;
- (void)pauseVideo;
- (void)playVideo;
- (BOOL)loadWithPlaylistId:(id)arg1 playerVars:(id)arg2;
- (BOOL)loadWithVideoId:(id)arg1 playerVars:(id)arg2;
- (BOOL)loadWithPlaylistId:(id)arg1;
- (BOOL)loadWithVideoId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

