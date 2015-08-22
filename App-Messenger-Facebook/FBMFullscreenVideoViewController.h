//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBAudioSessionManagerClient.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBFullScreenVideoActionOverlayView, FBMMessageAppModel, FBMVideoPlaybackEventListenerAnnouncer, MPMoviePlayerController, NSDateFormatter, NSString, NSTimer, NSURL, UITapGestureRecognizer;

@interface FBMFullscreenVideoViewController : UIViewController <UIGestureRecognizerDelegate, UIAlertViewDelegate, FBAudioSessionManagerClient>
{
    MPMoviePlayerController *_moviePlayerController;
    FBMMessageAppModel *_message;
    FBMVideoPlaybackEventListenerAnnouncer *_videoPlaybackEventAnnouncer;
    double _lastDisplayedTimeInSeconds;
    FBFullScreenVideoActionOverlayView *_fullscreenVideoActionOverlayView;
    double lastDisplayedTimeInSeconds;
    BOOL _isBeingScrubbed;
    BOOL _playingBeforeScrubbed;
    NSTimer *_playbackTimer;
    NSDateFormatter *_dateFormatter;
    NSTimer *_hideControlsTimer;
    UITapGestureRecognizer *_fullScreenTapGesture;
    NSURL *_contentUrl;
    double _suspendedPlaybackTime;
    BOOL _showsDoneButton;
    id <FBMFullscreenVideoViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) BOOL showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(nonatomic) __weak id <FBMFullscreenVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int outputOptions;
@property(readonly, nonatomic) unsigned int outputCoordinationMode;
@property(readonly, nonatomic) unsigned int audioDirection;
- (void)finishInterruptionAndResume:(BOOL)arg1;
- (void)beginInterruption;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)removeVideoPlaybackEventListener:(id)arg1;
- (void)addVideoPlaybackEventListener:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_loadStateChanged:(id)arg1;
- (void)_dismissVideoPlayer;
- (void)_doneButtonPressed;
- (BOOL)_isVideoDonePlaying;
- (void)_movieDurationAvailable:(id)arg1;
- (void)_handleMPMoviePlayerPlaybackStateDidChange:(id)arg1;
- (void)_handleMPMoviePlayerPlaybackDidFinish:(id)arg1;
- (void)_didTapScreen:(id)arg1;
- (void)_videoScrubberTouchComplete:(id)arg1;
- (void)_videoScrubberTouchDown:(id)arg1;
- (void)_videoScrubberChanged:(id)arg1;
- (void)_videoScrubberStartScrub;
- (void)_updateUIForPause;
- (void)_playWithTimer;
- (void)_play;
- (void)_prepareToPlay;
- (void)_updateUIForPlaying;
- (void)_scheduleTimeElapsedTimer;
- (void)_handleTapOnPlayPauseButton:(id)arg1;
- (void)_cleanupActionOverlayView;
- (void)_updateTime:(id)arg1;
- (void)_setupActionOverlayView;
- (void)_updateTimeLabelsForPosition:(double)arg1;
- (void)_updateDateFormatForDuration;
- (void)_removeNotifications;
- (void)_addNotifications;
- (void)_animateOverlayOut;
- (void)_animateOverlayIn;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initializeMoviePlayerIfNecessary;
- (void)_addViewsToHierarchyIfNecessary;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContentURL:(id)arg1 message:(id)arg2 showsDoneButton:(BOOL)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned int clientPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int inputOptions;
@property(readonly) Class superclass;

@end
