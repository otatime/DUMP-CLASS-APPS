//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBMVideoPlaybackEventListener.h"

@class NSString;

@interface FBMVideoPlaybackEventListenerAnnouncer : FBAnnouncerBase <FBMVideoPlaybackEventListener>
{
}

- (void)player:(id)arg1 failedPlayingVideoForMessage:(id)arg2 error:(id)arg3;
- (void)player:(id)arg1 finishedPlayingVideoForMessage:(id)arg2 duration:(id)arg3;
- (void)player:(id)arg1 dismissedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4;
- (void)player:(id)arg1 interruptedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4;
- (void)player:(id)arg1 pausedVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4;
- (void)player:(id)arg1 startedPlayingVideoForMessage:(id)arg2 playbackPosition:(id)arg3 duration:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

